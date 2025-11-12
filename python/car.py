# car = input("Enter 'on' to start the car: ")
# if car.lower() == 'on':
#     print("Car is started")
#     while True:
#         display= input("Enter command (right, left, reverse): ").lower()
#         if display == 'right':
#             print("Right indicator is on")
#         elif  display == 'left':
#             print("Left  indicator is on")
#         elif display == 'reverse':
#             print("Reverse indicator is on")
#         elif  display == 'poweroff':
#             print("Car is stopped")
#             break
#         else:
#             print("headlight is on")


    while (True):
    display= str("Enter command (right, left, reverse): ")
       if (display == 'poweron'):
            print("power is on")
            isOn= True

            elif(isOn):
            if (isOn):
                if (command == 'right'):
                    print("Right indicator is on")
                elif  (command == 'left'):
                    print("Left  indicator is on")
                elif (command == 'reverse'):
                    print("Reverse indicator is on")
                elif (display == 'poweroff'):
                   print("Car is stopped")
                   break
                else:
                   print(" headlight is on")
        else:
            print(isOn)
            isOn= False
         