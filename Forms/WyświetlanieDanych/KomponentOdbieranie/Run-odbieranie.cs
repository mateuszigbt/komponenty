using System;
using System.Threading.Tasks;

namespace WyświetlanieDanych.KomponentOdbieranie
{
    public static class Run_odbieranie
    {
        [STAThread]
        public static void Main()
        {
            OdbieranieDanych dane = new OdbieranieDanych("COM3");
            while (true)
            {
                foreach(var item in OdbieranieDanych.Wartosci)
                {
                    Console.WriteLine(item);
                }
                Task.Delay(1000).Wait();
            }
        }
    }
}
