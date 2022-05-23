using System;
using System.Threading.Tasks;

namespace WyświetlanieDanych.KomponentOdbieranie
{
    /// <summary>
    /// Klasa odpowiedzialna za wywołanie danych w konsoli.
    /// </summary>
    public static class Run_odbieranie
    {
        /// <summary>
        /// Metoda pobiera zmienną wartosc z klasy OdbieranieDanych
        /// </summary>

        ///<example>
        ///Ten przyklad pokazuje jak są wyświetlane dane poprzez pobieranie danych z obiektu. Pętla while ma wartość true aby wyświetlać dane w nieskończoność. Foreach pozwala na wykaz danych z listy które przybrał. Delay został użyty aby opóźnić wyświetlanie danych. 
        ///<code>
        ///OdbieranieDanych dane = new OdbieranieDanych("Przypisany COM");
        ///while (true)
        ///{
            ///foreach(var item in OdbieranieDanych.Wartosci)
            ///{
                ///Console.WriteLine(item);
            ///}
            ///Task.Delay(1000).Wait();
        ///}
        ///</code>
        ///</example>
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
