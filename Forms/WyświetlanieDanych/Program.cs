using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WyświetlanieDanych
{
    public static class Program
    {
        public static OdbieranieDanych odbior;
        public static Form1 form1 = new Form1();
        public static Form2 form2 = new Form2();
        /// <summary>
        /// Główny punkt wejścia dla aplikacji.
        /// </summary>
        [STAThread]
        public static void Main()
        {
            odbior = new OdbieranieDanych();
            form1 = new Form1();
            form1.TransactionApproveEvent += TransactionApproveEvent;
            form2 = new Form2();
            form2.TransactionApproveEvent += TransactionApproveEvent;
            Application.EnableVisualStyles();
            //Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(form1);

        }

        private static void TransactionApproveEvent(object sender, string e)
        {
            if (e.Equals("Odswiez"))
            {
                form2.Pierwsza = Int32.Parse(odbior.wartosci[0]);
                form2.Druga = Int32.Parse(odbior.wartosci[1]);
                form2.Trzecia = Int32.Parse(odbior.wartosci[2]);
            }
            else if (e.Equals("Uruchom"))
            {  
                form2.Show();
                form1.Hide();
            }
        }
    }
}
