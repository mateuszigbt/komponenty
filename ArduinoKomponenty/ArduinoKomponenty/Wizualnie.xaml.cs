using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace ArduinoKomponenty
{
    /// <summary>
    /// Logika interakcji dla klasy Wizualnie.xaml
    /// </summary>
    public partial class Wizualnie : Window
    {
        MainWindow mainWindow = new MainWindow();
        public Wizualnie()
        {
            InitializeComponent();
            
        }

        private void slider_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double> e)
        {
            
            
        }
    }
}
