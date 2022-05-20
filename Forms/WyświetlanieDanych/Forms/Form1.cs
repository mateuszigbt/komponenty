using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WyświetlanieDanych
{
    public partial class Form1 : Form
    {
        
        private List<int> forRandomChartY = new List<int>();
        private string name1, name2, name3;

        public Form1()
        {
            InitializeComponent();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Form2 form2 = new Form2();
            form2.Name1 = name1;
            form2.Name2 = name2;
            form2.Name3 = name3;
            form2.Show();
            this.Hide();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            name1 = textBox1.Text;
            label1.Text = name1;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            name2 = textBox2.Text;
            label2.Text = name2;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            name3 = textBox3.Text;
            label3.Text = name3;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            randomSettingForOnlyChart();
            randomSettingsForView();
        }

        private void randomSettingsForView()
        {
            trackBar1.Value = 30;
            circularProgressBar1.Value = 50;
            circularProgressBar1.Text = "50 %";
            chart1.Series["°C"].Points.DataBindY(forRandomChartY);
        }

        private void randomSettingForOnlyChart()
        {
            forRandomChartY.Add(0);
            forRandomChartY.Add(16);

            forRandomChartY.Add(16);
            forRandomChartY.Add(24);

            forRandomChartY.Add(24);
            forRandomChartY.Add(30);
        }
    }
}
