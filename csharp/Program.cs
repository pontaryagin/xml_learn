// See https://aka.ms/new-console-template for more information
using System;
using System.Xml;
using System.Xml.Serialization;
using System.IO;
XmlSerializer serializer =
      new XmlSerializer(typeof(SampleNs.NoteType));

SampleNs.NoteType note = new SampleNs.NoteType{
    To = "Tove",
    From = "Jani",
    Heading = "Reminder",
    Body = "Don't forget me this weekend!"
};

TextReader reader = new StreamReader("sample.xml");
note = (SampleNs.NoteType)serializer.Deserialize(reader);

TextWriter writer = new StreamWriter("sample_xscgen_out.xml");
serializer.Serialize(writer, note);
Console.WriteLine(note.Body);

Console.WriteLine("Hello, World!");


