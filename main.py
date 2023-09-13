import time
import serial
# from vpython import*


port = '/dev/ttyACM0'
arduinoData = serial.Serial(port,9600)
time.sleep(1)


while True:
    while(arduinoData.inWaiting()==0):
        pass
    dataPacket = arduinoData.readline()
    dataPacket = str(dataPacket, 'utf-8')
    dataPacket = dataPacket.strip('\r\n')

    
    print(dataPacket, "CM")

    if dataPacket == "23":
        break


