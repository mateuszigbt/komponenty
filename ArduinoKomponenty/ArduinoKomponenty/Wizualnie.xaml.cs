using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using System.Windows.Threading;

namespace ArduinoKomponenty
{
    /// <summary>
    /// Logika interakcji dla klasy Wizualnie.xaml
    /// </summary>
    public partial class Wizualnie : Window
    {
        public static Wizualnie instance;
        
        public Wizualnie()
        {  
            InitializeComponent();
            instance = this;
            TimerRefreshing();
        }

        private void DataForSlider()
        {
            label.Content = Arduino.instance.dataFromArduino;
          
            slider.Value = Arduino.instance.dataFromArduino; 
            
        }
        
        private void slider_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double> e)
        {
            
            
        }

        private void TimerRefreshing()
        {
            DispatcherTimer dispatcherTimer = new DispatcherTimer();
            dispatcherTimer.Tick += DispatcherTimer_Tick;
            dispatcherTimer.Interval = new TimeSpan(0, 0, 1);
            dispatcherTimer.Start();
            
        }

        private void DispatcherTimer_Tick(object? sender, EventArgs e)
        {
            DataForSlider();
            
        }
    }
}
