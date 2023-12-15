import serial

# Mở cổng COM
ser = serial.Serial('COM3', 9600, timeout=1)

# Gửi dữ liệu đến Arduino
ser.write('Hello, Arduino!')

# Nhận dữ liệu từ Arduino
data = ser.readline().decode()

# In dữ liệu đã nhận
print(data)

# Đóng cổng COM
ser.close()
