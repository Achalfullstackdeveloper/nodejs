# Assign array 2d Array

array =[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
# Read Array
print(array[0][0])

array[1][1] = 1

array[2][1] = 0

#print Array

for i in range(3):
    row = ""
    for j in range(3):
        row += str(array[i][j])+""
    print(row)

# Create and Insert  values

rows = int(input("Enter a number of rows: "))
columns = int(input("Enter a number of columns : "))

newArr = []

for i in range(rows):
    a = []
    for j in range(columns):
        value = int(input("Enter a value : "))
        a.append(value)
    newArr.append(a)

for i in range(rows):
    row = ""
    for j in range(columns):
        row += str(newArr[i][j]) + " "
    print(row)