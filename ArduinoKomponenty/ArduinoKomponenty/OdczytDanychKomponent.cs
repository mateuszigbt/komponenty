using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Text;
using System.Threading.Tasks;

namespace ArduinoKomponenty
{
    public class OdczytDanychKomponent
    {
        public int temperatura { get; set; }
        private SerialPort serialPort;
        public OdczytDanychKomponent()
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
                Console.WriteLine("Nie udało sie połączyć");
            }
        }
        private void serialPort_DataRecived(object sender, SerialDataReceivedEventArgs e)
        {
            temperatura = Int32.Parse(serialPort.ReadLine());
        }

    }
}
