// Define the MQ135 sensor pin
int mq135Pin = A0;

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the MQ135 sensor
  int sensorValue = analogRead(mq135Pin);

  // Convert the analog value to voltage (in millivolts)
  float voltage = sensorValue * (5000.0 / 1024.0);

  // Calculate the air quality in ppm (parts per million)
  float airQuality = (voltage - 200) * 0.1;

  // Print the air quality value to the Serial Monitor
  Serial.print("Air Quality: ");
  Serial.print(airQuality);
  Serial.println(" ppm");

  // Wait for a moment before taking the next reading
  delay(1000);
}
