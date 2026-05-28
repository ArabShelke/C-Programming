# Program to find largest element in a list

my_list = []

n = int(input("Enter number of elements: "))

for i in range(n):
    num = int(input("Enter element: "))
    my_list.append(num)

largest = my_list[0]

for i in my_list:
    if i > largest:
        largest = i

print("\nList is:", my_list)
print("Largest element is:", largest)