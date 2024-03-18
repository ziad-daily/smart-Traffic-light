from ultralytics import YOLO
import serial.tools.list_ports

import cv2
import math
from time import sleep

model = YOLO("best.onnx")

ports = serial.tools.list_ports.comports()
serialInst = serial.Serial()

portsList = []
for port in ports:
    portsList.append(str(port))
    print(str(port))


# List available COM ports
portsList = [str(port) for port in serial.tools.list_ports.comports()]

for port in portsList:
    print(port)

# Select COM port

portsVar = "COM3"

# Create and open the serial connection
serialInst = serial.Serial()
serialInst.baudrate = 9600
serialInst.port = portsVar

try:
    serialInst.open()
    print("Serial connection opened successfully.")
except Exception as e:
    print(f"Error opening serial connection: {e}")
    exit()

   



cap = cv2.VideoCapture(2)
print("camera 1 loaded ...")
cap2 = cv2.VideoCapture(1)
print("camera 2 loaded ...")
cap3 = cv2.VideoCapture(0)
print("camera 3 loaded ...")
cap4 = cv2.VideoCapture(3)
print("camera 4 loaded ...")

def detector():
    count1 = len(model("1.jpg")[0].boxes.xyxy)
    count2 = len(model("2.jpg")[0].boxes.xyxy)
    count3 = len(model("3.jpg")[0].boxes.xyxy)
    count4 = len(model("4.jpg")[0].boxes.xyxy)

    return str(count1) + str(count2) + str(count3) + str(count4)
n = 2010
frameRate = cap.get(3) # frame rate
while(cap.isOpened() and cap2.isOpened()):
    #while(cap3.isOpened()):
    frameId = cap.get(1) # current frame number
    frameId2 = cap2.get(1)
    frameId3 = cap3.get(1)
    frameId4 = cap4.get(1)

    ret, frame = cap.read()
    ret2, frame2 = cap2.read()
    ret3, frame3 = cap3.read()
    ret4, frame4 = cap4.read()

    if (ret != True and ret2 != True ):
        #if (ret3 != True):
        break
    if (frameId % math.floor(frameRate) == 0):
        cv2.imwrite("1.jpg", frame) # cv2.imwrite("{}.png" .format(n), format)
        print("done 1")
        #sleep(2)
        cv2.imwrite("2.jpg", frame2)
        print("done 2")
        #sleep(2)
        cv2.imwrite("3.jpg", frame3)
        print("done 3")
        cv2.imwrite("4.jpg", frame4)
        print("done 4")
    print(detector())
    command = detector()
    n = n+1
    sleep(2)
    serialInst.write(command.encode("utf-8"))
cap.release()
print("Done!")