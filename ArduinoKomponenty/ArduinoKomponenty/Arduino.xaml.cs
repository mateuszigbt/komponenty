using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Threading;

namespace ArduinoKomponenty
{
    /// <summary>
    /// Logika interakcji dla klasy Arduino.xaml
    /// </summary>
    public partial class Arduino : Window
    {
        private SerialPort serialPort;
        private int DataFromArduino;
        private string Data;
        public int dataFromArduino
        {
            get { return DataFromArduino; }
            set { DataFromArduino = value; }
        }
        public Arduino()
        {
            InitializeComponent();
            
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
                textBox.Text = "";
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Nie udało sie połączyć");
            }
        }

        private void serialPort_DataRecived(object sender, SerialDataReceivedEventArgs e)
        {
            Data = serialPort.ReadLine();
            this.textBox.Dispatcher.Invoke(ShowDataEvent);
            
        }

        private void ShowDataEvent()
        {
            textBox.AppendText(Data + "\n");
        }

        private void textBox_TextChanged(object sender, TextChangedEventArgs e)
        {
            
        }

        private void button_Click(object sender, RoutedEventArgs e)
        {
            Personalization_Arduino();
        }
    }
}
