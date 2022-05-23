using System;
using System.Collections.Generic;
using System.Drawing;
using System.Threading;
using System.Windows.Forms;

namespace WyświetlanieDanych
{
    /// <summary>
    /// Klasa Form2 zawiera całą mechanika okienka drugiego. Wygląd całej aplikacji.
    /// </summary>
    public partial class Form2 : Form
    {
        
        OdbieranieDanych odbieranieDanych;
        /// <returns>Przypisanie Name1 z form1 przez użytkownika</returns>
        public string Name1 { get; set; }
        /// <returns>Przypisanie Name2 z form1 przez użytkownika</returns>
        public string Name2 { get; set; }
        /// <returns>Przypisanie Name3 z form1 przez użytkownika</returns>
        public string Name3 { get; set; }

        private List<int> yList = new List<int>();
        /// <summary>
        /// Konstruktor Form2 wywołuje obiekt OdbieranieDanych oraz metode DataReceived aby otrzymać dane z komponentu.
        /// </summary>
        public Form2()
        {
            InitializeComponent();
            odbieranieDanych = new OdbieranieDanych("COM3");
            Thread.Sleep(1111);
            odbieranieDanych.DataReceived += OdbieranieDanych_DataReceived;
            
        }

        private void OdbieranieDanych_DataReceived(object sender, EventArgs e)
        {
            
            chart1.Invoke(new Action(delegate ()
            {
                try
                {
                    yList.Add(int.Parse(OdbieranieDanych.Wartosci[0]));
                    chart1.Series["°C"].Points.DataBindY(yList);
                }
                catch (Exception ex)
                {
                    yList.Add(0);
                }
            }));
            
            circularProgressBar1.Invoke(new Action(delegate ()
            {
                try
                {
                    circularProgressBar1.Value = int.Parse(OdbieranieDanych.Wartosci[1]);
                    circularProgressBar1.Text = OdbieranieDanych.Wartosci[1] + " %";
                }
                catch (Exception ex)
                {
                    trackBar1.Value = 0;
                }
            }));


            trackBar1.Invoke(new Action(delegate ()
            {
                try
                {
                    trackBar1.Value = int.Parse(OdbieranieDanych.Wartosci[2]);
                    label4.Text = OdbieranieDanych.Wartosci[2];
                }
                catch (Exception ex)
                {
                    trackBar1.Value = 0;
                }
            }));
            // Stworzylem try catcha bo mi wywalal blad jak cos
            try
            {
                this.dataLabel.Text = OdbieranieDanych.dateTime.ToString();
            }
            catch (Exception ex)
            {

                
            }
            
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            passNameFromFrom1(Name1, Name2, Name3);
        }

        private void passNameFromFrom1(string name1, string name2, string name3)
        {
            
            label1.Text = name1;
            label2.Text = name2;
            label3.Text = name3;
        }
    }
}
