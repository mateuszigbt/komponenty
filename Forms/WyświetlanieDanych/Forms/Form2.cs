using System;
using System.Collections.Generic;
using System.Drawing;
using System.Threading;
using System.Windows.Forms;

namespace WyświetlanieDanych
{
    public partial class Form2 : Form
    {
        
        OdbieranieDanych odbieranieDanych;
        public string Name1 { get; set; }
        public string Name2 { get; set; }
        public string Name3 { get; set; }

        private List<int> yList = new List<int>();

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
            try
            {
                this.dataLabel.Text = OdbieranieDanych.dateTime.ToString(); //dalem try-catch bo wywalo blad nie wiem czemu
            }                                                               // w prompt vs cl do dokumentacji docfx serve C:\Users\proo\source\komponenty\Forms\WyświetlanieDanych\_site
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
