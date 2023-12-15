 /*---------------------------------------------------------------------------------------------------------
                            MODULE  CẢM BIẾN HỒNG NGOẠI
------------------------------------------------------------------------------------------------------------
*Channel M&E Automation:https://bit.ly/3uz3Bt8
*Vui lòng đăng ký kênh https://bit.ly/34a2of1 cảm ơn các bạn rất nhiều!
*Danh sách phát Arduino : https://bit.ly/34BUDlU
----------------------------------- Code 1----------------------------------------------------------------*/
int Sensor = A0; 
int Value;

void setup() 
{
  Serial.begin(9600);
  pinMode(Sensor, INPUT);
}

void loop() 
{
  Value = analogRead(Sensor);
  Serial.print("Giá trị cảm biến là: ");
  Serial.println(Value);
  delay(1000);
}

//----------------------------------- Code 2 ----------------------------------------------------------------

int Sensor = 2;
int Value;

void setup() {
  Serial.begin(9600);
  pinMode(Sensor, INPUT);
}

void loop() {
  Value = digitalRead(Sensor);
  Serial.print("Giá trị cảm biến là: ");
  Serial.println(Value);
  delay(1000);
}

//---------------------------------- Code 3 ------------------------------------------------------------------------
int Sensor = 2; 
int Value;
int LedPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(Sensor, INPUT);
  pinMode(LedPin, OUTPUT);
  digitalWrite(LedPin, LOW);
}

void loop() {
  Value = digitalRead(Sensor); 
  if (Value == 1)
  {
    digitalWrite(LedPin, LOW);
    Serial.println("Đèn Off - Không có vật cản");
  }
  else 
  {
    digitalWrite(LedPin, HIGH);
    Serial.println("Đèn ON - Có vật cản");
  }
  
  Serial.print("Giá trị cảm biến là: ");
  Serial.println(Value);
  delay(1000);
}
  
