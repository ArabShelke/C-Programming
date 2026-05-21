# Program to find sum of array elements

# Taking input from user
arr = []

n = int(input("Enter number of elements: "))

for i in range(n):
    element = int(input("Enter element: "))
    arr.append(element)

# Finding sum
total = sum(arr)

# Displaying array and sum
print("\nArray Elements:", arr)
print("Sum of array elements =", total)