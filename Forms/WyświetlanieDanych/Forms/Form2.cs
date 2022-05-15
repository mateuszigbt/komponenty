using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace WyświetlanieDanych
{
    public partial class Form2 : Form
    {
        public EventHandler<string> TransactionApproveEvent;
        public int Pierwsza { get; set; }
        public int Druga { get; set; }
        public int Trzecia { get; set; }
        public List<int> chartData { get; set; }
        public Form2()
        {
            InitializeComponent();
            chartData = new List<int>();
            chart1.DataSource = chartData;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            TransactionApproveEvent?.Invoke(this, "Odswiez");
            chartData.Add(Pierwsza);
            circularProgressBar1.Value = Druga;
            trackBar1.Value = Trzecia/10;
        }
    }
}
