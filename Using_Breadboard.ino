int button = SS;
int led = SCK;
void setup() {
  pinMode(button, INPUT);  
  pinMode(led,OUTPUT); 
}

void loop() {
  int buttonStatus = digitalRead(button);    
  if (buttonStatus == HIGH) { 
    digitalWrite(led,HIGH);
    delay(5000); 
  } else {
    digitalWrite(led,LOW);
  }
}

