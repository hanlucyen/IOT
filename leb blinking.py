import pyfirmata
import time
board=pyfirmata.Arduino('COM3')
it=pyfirmata.util.Iterator(board)
it.start()
x=board.get_pin('d:13:o')
while True:
    x.write(1)
