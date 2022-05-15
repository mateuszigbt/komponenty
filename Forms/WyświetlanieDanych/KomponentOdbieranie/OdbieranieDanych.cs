using System;
using System.Collections.Generic;
using System.IO.Ports;

namespace WyświetlanieDanych
{
    public class OdbieranieDanych
    {

        public List<String> wartosci { get; set; }
        private SerialPort serialPort;
        private DateTime dateTime { get; set; }
        public OdbieranieDanych()
        {
            Personalization_Arduino();
        }
        private void Personalization_Arduino()
        {
            serialPort = new SerialPort();
            wartosci = new List<String>();
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
        private void serialPort_DataRecived(object sender, SerialDataReceivedEventArgs e)
        {
            String s = serialPort.ReadLine();
            s = s.Trim();
            String[] a = s.Split(' ');
            
            wartosci.Clear();
            for (int i = 0; i < a.Length; i++)
            {
                wartosci.Add(a[i]);

            }

        }
    }
}