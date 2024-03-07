
import serial 

## 'w' = forwards
## 's' = backwards
## 'a' = left
## 'd' = right

## ' ' = stop

## 'z' = anti-clockwise
## 'x' = clockwise

## 'y' = forward-left
## 'i' = forward right
## 'h' = backward left
## 'k' = backward right


if __name__ == '__main__':
    ser = serial.Serial('/dev/ttyACM3',9600, timeout=1)
    ser.flush()
    userInput = "emptyString"

    while True:
        userInput = input('Please enter a direction: ')

        if (userInput == 'a'):
            print("LEFT")
            ser.write(b"left\n")

        elif (userInput == 'w'):
            print("FORWARD")
            ser.write(b"forward\n")

        elif (userInput == 'd'):
            print("RIGHT")
            ser.write(b"right\n")
        
        elif (userInput == 's'):
            print("BACKWARDS")
            ser.write(b"backward\n")

        elif(userInput == ' '):
            print("STOP")
            ser.write(b"stop")

        elif(userInput == 'z'):
            print("ANTI-CLOCKWISE")
            ser.write(b"anticlockwise")

        elif(userInput == 'x'):
            print("CLOCKWISE")
            ser.write(b"clockwise")

        elif(userInput == 'y'):
            print("FORWARD LEFT")
            ser.write(b"forwardLeft")

        elif(userInput == 'i'):
            print("FORWARD RIGHT")
            ser.write(b"forwardRight")

        elif(userInput == 'h'):
            print("BACKWARDS LEFT")
            ser.write(b"backwardLeft")

        elif(userInput == 'k'):
            print("BACKWARDS RIGHT")
            ser.write(b"backwardRight")
