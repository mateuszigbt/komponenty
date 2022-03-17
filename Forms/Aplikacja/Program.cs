// See https://aka.ms/new-console-template for more information
ArduinoOdbieranieDanych.OdbieranieDanych odbior = new ArduinoOdbieranieDanych.OdbieranieDanych();
while (true) { 
    Console.WriteLine(odbior.temperatura);
    Task.Delay(1000).Wait();
}

