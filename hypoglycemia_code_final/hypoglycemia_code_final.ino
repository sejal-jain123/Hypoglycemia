#include <Wire.h>

// Define pins
const int ledPin = 8;               
const int photoDiodePin = A0;       
const int threshold = 500;          

void setup() {
  pinMode(ledPin, OUTPUT);    
  Serial.begin(9600);         
}

void loop() {
  // Read the photodiode value
  int sensorValue = analogRead(photoDiodePin);  

  // Calculate the voltage
  float voltage = sensorValue * (5.0 / 1023.0);  
  float vol = voltage * 2;

  // Print sensor data to Serial Monitor
  Serial.print("Raw Sensor Value: ");
  Serial.println(sensorValue);
  Serial.print("Calculated Voltage: ");
  Serial.println(vol, 2);

  // Turn LED on/off based on threshold
  if (sensorValue < threshold) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);   
  }

  // Delay for 3 seconds
  delay(3000);  
}