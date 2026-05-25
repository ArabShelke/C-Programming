# Program to swap two elements in a list

my_list = [10, 20, 30, 40, 50]

print("Original List:")
print(my_list)

# Swapping elements
temp = my_list[1]
my_list[1] = my_list[3]
my_list[3] = temp

print("List after swapping:")
print(my_list)