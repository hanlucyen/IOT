int sensorPin = A0;// chân analog kết nối tới cảm biến LM35
 
void setup() {
  Serial.begin(9600);  //Khởi động Serial ở mức baudrate 9600
  
}
 
void loop() {
 //đọc giá trị từ cảm biến LM35
 int reading = analogRead(sensorPin);  
 
 //tính ra giá trị hiệu điện thế (đơn vị Volt) từ giá trị cảm biến
 float voltage = reading * 5.0 / 1024.0; 
 float temp = voltage * 100.0;
 
 Serial.println(temp);
 delay(1000);//đợi 1 giây cho lần đọc tiếp theo
}