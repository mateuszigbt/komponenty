using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WyświetlanieDanych
{
    public static class Program
    {
        /// <summary>
        /// Główny punkt wejścia dla aplikacji.
        /// </summary>
        [STAThread]
        public static void Main()
        {
            Form1 form1;
            try {
            Stream str1 = new FileStream(@"example.txt", FileMode.Open, FileAccess.Read);
                IFormatter format = new BinaryFormatter();
                //the object of the class check is deserialized
                form1 = (Form1)format.Deserialize(str1);
                str1.Close();
            }
            catch(Exception ex) { form1 = new Form1(); }
            
            Application.EnableVisualStyles();
            //Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(form1);

        }

        
    }
}
