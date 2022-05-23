using System;
using System.Collections.Generic;
using System.IO.Ports;

namespace WyświetlanieDanych
{
    /// <summary>
    /// Klasa odpowiedzialna za odbieranych danych z arduino. 
    /// </summary>
    public class OdbieranieDanych
    {
        private static List<string> wartosci { get; set; }
        ///<returns>Przypisane dane z prywatnej listy</returns>

        public static List<string> Wartosci
        {
            get { return wartosci; }
            set { wartosci = value; }
        }

        private SerialPort serialPort;
        ///<returns>Pobiera obiekt ustawiony na bieżącą DateTime datę i godzinę na tym komputerze, wyrażony jako czas lokalny</returns>
        public static DateTime dateTime { get; set; }
        ///<returns>PortName = portname</returns>
        public String PortName { get; set; }
        /// <summary>
        /// 
        /// </summary>
        /// <param name="portname">Konstruktor zawiera portName odpowiedzialny za przypisanie konkretnego COM.</param>
        public OdbieranieDanych(String portname)
        {
            PortName = portname;
            Personalization_Arduino();
        }
        /// <returns>Pobiera obiekt ustawiony na bieżącą DateTime datę i godzinę na tym komputerze, wyrażony jako czas lokalny.</returns>

        private void Personalization_Arduino()
        {
            serialPort = new SerialPort();
            wartosci = new List<string>();
            serialPort.BaudRate = 9600;
            serialPort.PortName = PortName;
            serialPort.Parity = Parity.None;
            serialPort.DataBits = 8;
            serialPort.StopBits = StopBits.One;
            serialPort.DataReceived += serialPort_DataRecived;
            try
            {
                serialPort.Open();
            }
            catch (Exception ex)
            {

            }
        }
        string s;
        /// <returns>Metoda przypisana do delegata EventHandler jest wywoływana w metodzie serialPort_DataRecived</returns>

        public event EventHandler DataReceived;
        /// <summary>
        /// 
        /// </summary>
        /// <param name="sender">Źródło zdarzenia</param>
        /// <param name="e">Obiekt, który nie zawiera żadnych danych zdarzenia</param>
        ///<example>
        ///Ten przykład pokazuje jak są przypisywane dane z arduino do listy oraz wykonania delegata w wątku
        ///<code>
        ///for (int i =0; a.Length; i++)
        ///    {
        ///        wartosci.Add(a[i]);
        ///        Console.WriteLine(a[i]);
        ///    }
        ///handler?.Invoke(this, e)
        ///</code>
        ///</example>
    public void serialPort_DataRecived(object sender, SerialDataReceivedEventArgs e)
        {
            
            EventHandler handler = DataReceived;
            wartosci = new List<string>();
            s = serialPort.ReadLine();
            s = s.Trim();
            dateTime = DateTime.Now;
            string[] a = s.Split(' ');
            
            wartosci.Clear();
            for (int i = 0; i < a.Length; i++)
            {
                wartosci.Add(a[i]);
                Console.WriteLine(a[i]);
            }
            handler?.Invoke(this, e);
        }
        
    }
}