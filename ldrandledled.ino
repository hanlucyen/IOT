int LDR = A0;            // LDR input at A0 pin.
int LED = 3;             // LED is connected to PWM Pin 3.
int LDRReading = 0;      // to store input value of LDR
int lEDBrightness = 0;   // to store the value of LED Brightness
int threshold_val = 800; // Check your threshold and modify it.

void setup(){
  Serial.begin(9600);     // initializing serail communication.
  pinMode(LED, OUTPUT);   // Defining LED pin as output.
}

void loop(){
  LDRReading = analogRead(LDR);    // Reading LDR Input.
  Serial.println(LDRReading);      // Printing LDR input value.
  
  if (LDRReading >threshold_val){                   // Condition to make LED ON.
  lEDBrightness = map(LDRReading, 0, 1023, 0, 255); // Converting LDR to LED Brightness.
  analogWrite(LED, lEDBrightness); // Writing Brightness to LED.
  }
  else{
  analogWrite(LED, 0);             // If LDR is below threshold make LED OFF.
  }
    
  delay(300);                      // delay to make output readable on serial monitor. 
}
