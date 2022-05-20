using System;
using System.Collections.Generic;
using System.IO.Ports;

namespace WyświetlanieDanych
{
    public class OdbieranieDanych
    {
        private static List<string> wartosci { get; set; }
        public static List<string> Wartosci
        {
            get { return wartosci; }
            set { wartosci = value; }
        }
        private SerialPort serialPort;
        private DateTime dateTime { get; set; }
        

        public OdbieranieDanych()
        {
            Personalization_Arduino();
        }
        private void Personalization_Arduino()
        {
            serialPort = new SerialPort();
            wartosci = new List<string>();
            serialPort.BaudRate = 9600;
            serialPort.PortName = "COM3";
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
        public event EventHandler DataReceived;
        public void serialPort_DataRecived(object sender, SerialDataReceivedEventArgs e)
        {
            EventHandler handler = DataReceived;
            wartosci = new List<string>();
            s = serialPort.ReadLine();
            s = s.Trim();

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