// See https://aka.ms/new-console-template for more information
ArduinoOdbieranieDanych.OdbieranieDanych odbior = new ArduinoOdbieranieDanych.OdbieranieDanych();
while (true) {
    foreach (var item in odbior.wartosci)
    {
        Console.WriteLine(item);
    }
    
    Task.Delay(1000).Wait();
}

