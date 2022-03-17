using System;

namespace ArduinoOdbieranieDanych
{
    internal class Program
    {
        static void Main(string[] args)
        {
            OdbieranieDanych dane = new OdbieranieDanych();
            while (true)
            {
                Console.WriteLine(dane.temperatura);
                Task.Delay(1000).Wait();
            }  
        }
    }
}