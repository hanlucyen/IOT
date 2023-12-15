
/*==========================================================================================
                 CÁCH SỬ DỤNG MÀN HÌNH LCD - CÁC HÀM THÔNG DỤNG KHI DÙNG I2C
  ==========================================================================================
  https://maxpromer.github.io/LCD-Character-Creator/ trang web tạo ký tự đặc biệt
  lcd.init()  : Khởi tạo Màn hình Màn hình
  lcd.clear() : Xóa màn hình, đưa con trỏ về vị trí 0,0
  lcd.home()  : Đưa con trỏ về vị trí 0
  lcd.setCursor(x,y)  : Đưa con trỏ về vị trí cột thứ x, hàng thứ y
  lcd.noDisplay() : Không hiển thị gì trên màn hình cả
  lcd.display() : Hiển thị lên màn hình
  lcd.noBlink() : Không nhấp nháy con trỏ
  lcd.blink() : Nhấp nháy con trỏ
  lcd.scrollDisplayLeft() : Cuộn màn hình bên trái
  lcd.scrollDisplayRight()  : Cuộn màn hình bên phải
  lcd.leftToRight() : Kí tự sẽ hiển thị từ phía bên trái sang phải
  lcd.rightToLeft() : Kí tự sẽ hiển thị từ phía phải sang trái
  lcd.noBacklight() : Tắt đèn nền
  lcd.backlight() : Có đèn nền
  lcd.write(x)  : Màn hình sẽ in ra kí tự thứ x trong ô nhớ từ 0-7 của CGRAM
  lcd.createChar(location,charmap[])  : Hiển thị một kí tự charmap[] bất kì
  ----------------------------------------------------------------------------------------
  Channel M&E Automation:https://bit.ly/3uz3Bt8
  Vui lòng đăng ký kênh https://bit.ly/34a2of1 cảm ơn các bạn rất nhiều!
  Danh sách phát Arduino : https://bit.ly/34BUDlU
  ========================================================================================== */

#include <Wire.h> //Gọi thư viện I2C để sử dụng 

#include <LiquidCrystal_I2C.h> // Vào Library Manager tải thư viện Thư viện Màn hình I2C
LiquidCrystal_I2C lcd(0x27, 16, 2); //Khai báo địa chỉ I2C (0x27 or 0x3F) và Màn hình 16x02

//Tạo ký tự đặc biệt
 byte va[] = {
  B00000,
  B01100,
  B10010,
  B10100,
  B01000,
  B10101,
  B10010,
  B01101
};
void setup()
{
  // Khai báo Các câu lệnh bắt buột để sử dụng lcd.
  lcd.init(); // Khởi tạo màn hình Màn hình
  lcd.backlight(); // Bật đèn màn hình Màn hình
  lcd.createChar(0, va); // Tạo ký tự đặc biệt &
}

void loop()
{
  lcd.setCursor(0, 0); //Chọn vị trí đặt con trỏ (cột, hàng)  
  lcd.print("Youtube Channel"); //in lên Màn hình chữ Youtube Channel
  delay(3000); 
  lcd.clear(); //Xóa Màn hình
  
// Hiện chữ M&E Automation
  lcd.setCursor(1, 1); // Chọn cột 1 và hàng 1
  lcd.print("M");
  lcd.setCursor(2, 1); 
  lcd.write(byte(0)); // in ký tự đặc biệt đã tạo &.
  lcd.setCursor(3, 1);
  lcd.print("E");
  lcd.setCursor(5, 1);
  lcd.print("Automation");
  delay(3000);
  lcd.clear();
  delay(3000);
 // in 2 dòng chữ  Youtube Channel và M&E Automation
  lcd.setCursor(0, 0);
  lcd.print("Youtube Channel");
  lcd.setCursor(1, 1); 
  lcd.print("M");
  lcd.setCursor(2, 1); 
  lcd.write(byte(0)); // Gọi ký tự đặc biệt đã tạo.
  lcd.setCursor(3, 1);
  lcd.print("E");
  lcd.setCursor(5, 1);
  lcd.print("Automation");
  delay(3000);
  lcd.clear();
  delay(3000);
  }
