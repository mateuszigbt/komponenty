using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

namespace WyświetlanieDanych
{
    [Serializable]
    public partial class Form1 : Form, ISerializable
    {
        
        private List<int> forRandomChartY = new List<int>();
        private string name1, name2, name3;
        public Form1()
        {
            InitializeComponent();
        }
        public Form1(SerializationInfo info, StreamingContext context)
        {
            InitializeComponent();
            this.label1.Text = (string)info.GetValue("label1", typeof(string));
            this.label2.Text = (string)info.GetValue("label2", typeof(string));
            this.label3.Text = (string)info.GetValue("label3", typeof(string));
            this.chart1.BackColor = (Color)info.GetValue("color1", typeof(Color));
            this.circularProgressBar1.ProgressColor = (Color)info.GetValue("color2", typeof(Color));
            this.trackBar1.BackColor = (Color)info.GetValue("color3", typeof(Color));
        }

        private void button4_Click(object sender, EventArgs e)
        {
            IFormatter format = new BinaryFormatter();
            Stream stream1 = new FileStream(@"example.txt", FileMode.OpenOrCreate, FileAccess.Write);
            //serialization of the object of the class check is done
            format.Serialize(stream1, this);
            stream1.Close();
            Form2 form2 = new Form2();
            form2.circularProgressBar1.ProgressColor = this.circularProgressBar1.ProgressColor;
            form2.chart1.BackColor = this.chart1.BackColor;
            form2.trackBar1.BackColor = this.trackBar1.BackColor;
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

        private void button5_Click(object sender, EventArgs e)
        {
            this.colorDialog1 = new ColorDialog();
            colorDialog1.ShowDialog();
            circularProgressBar1.ProgressColor =colorDialog1.Color;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            this.colorDialog2 = new ColorDialog();
            colorDialog2.ShowDialog();
            chart1.BackColor = colorDialog2.Color;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            this.colorDialog3 = new ColorDialog();
            colorDialog3.ShowDialog();
            trackBar1.BackColor = colorDialog3.Color;
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

        public void GetObjectData(SerializationInfo info, StreamingContext context)
        {
            info.AddValue("label1", this.label1.Text, typeof(string));
            info.AddValue("label2", this.label2.Text, typeof(string));
            info.AddValue("label3", this.label3.Text, typeof(string));
            info.AddValue("color1", this.chart1.BackColor, typeof(Color));
            info.AddValue("color2", this.circularProgressBar1.ProgressColor, typeof(Color));
            info.AddValue("color3", this.trackBar1.BackColor, typeof(Color));
        }
    }
}
