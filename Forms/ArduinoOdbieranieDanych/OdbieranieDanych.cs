using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO.Ports;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;

namespace ArduinoOdbieranieDanych
{
    public class OdbieranieDanych
    {
        public string temperatura { get; set; }
        private SerialPort serialPort;
        public OdbieranieDanych(){
            Personalization_Arduino();
        }
        private void Personalization_Arduino()
        {
            serialPort = new SerialPort();
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
            temperatura = serialPort.ReadLine();
        }
    }
}
