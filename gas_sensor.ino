#define MQ2pin (0)

float sensorValue;  

void setup()
{
  Serial.begin(9600); 
  Serial.println("Gas sensor warming up!");
  delay(20000); 
}

void loop()
{
  sensorValue = analogRead(MQ2pin); // read analog input pin 0
  
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  
  if(sensorValue > 200)
  {
    Serial.print(" | Smoke detected!");
  }
  
  Serial.println("");
  delay(2000); // wait 2s for next reading
}
