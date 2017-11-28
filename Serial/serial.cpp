void setup()
{
    Serial.begin(9600);

}

void loop() 
{
    
   
    if (Serial.available())
    {
        char caracter = Serial.read();
        if (caracter == '?')
        {
            Serial.print("millis()=");
            Serial.println(millis());
            delay(100);
        }
    }
}