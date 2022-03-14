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

namespace ArduinoKomponenty
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private int DataFromArduino;
        
        public int dataFromArduino
        {
            get { return DataFromArduino; }
            set { DataFromArduino = value;}
        }
        
        private SerialPort serialPort;
        [DllImport("kernel32.dll", SetLastError = true)]
        [return:MarshalAs (UnmanagedType.Bool)]
        static extern bool AllocConsole();
        public MainWindow()
        {
            InitializeComponent();
            dataFromArduino = DataFromArduino;
        }

        private void Connect()
        {
            serialPort = new SerialPort();
            serialPort.BaudRate = 9600;
            serialPort.ReadTimeout = 1500;
            serialPort.PortName = "com3";
            serialPort.Open();
        }

        private void Czytanie_DanychArduino_Click(object sender, RoutedEventArgs e)
        {
            AllocConsole();
            Connect();
            int Data = 0;
            while (true)
            {
                if (Data > 100 || serialPort.ReadLine() == "")
                {
                    Console.WriteLine("");
                }
                DataFromArduino = Data;
                Console.WriteLine(serialPort.ReadLine());
                
            }
        }

        private void Komponent_TrackBar_Click(object sender, RoutedEventArgs e)
        {
            Wizualnie wizualnie = new Wizualnie();
            wizualnie.Show();
        }
    }
}
