using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArduinoKomponenty
{
    public class TestOdczytDanych
    {
        public static void main()
        {
            OdczytDanychKomponent komponent = new OdczytDanychKomponent();
            System.Console.WriteLine(komponent.temperatura);
        }
    }
}
