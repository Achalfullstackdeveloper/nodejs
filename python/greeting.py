from unittest import case


hour = int(input("Enter hour (0-23): "))

match hour:
    case_if hour > 5 and hour < 11:
        print("Good Morning")
    case_if hour > 12 and hour < 17:
        print("Good Afternoon")
 case 3:
        print("Good Night")