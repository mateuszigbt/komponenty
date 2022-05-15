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
    public partial class View : UserControl
    {
        public EventHandler<string> TransactionApproveEvent;
        public List<int> chartValue { get; set; }
        public View()
        {
            InitializeComponent();
            chartValue = new List<int>();
            chart1.DataSource = chartValue;
        }
        public void AktualizacjaDanych(int jeden, int dwa, int trzy)
        {
            chartValue.Add(jeden);
            this.circularProgressBar1.Value = dwa;
            this.trackBar1.Value = trzy;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            TransactionApproveEvent?.Invoke(this, "OdswierzDane");
        }
    }
}
