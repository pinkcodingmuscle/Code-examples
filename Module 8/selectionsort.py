from array import *  
from random import *

# def selection_sort(num):
#     for i in range(5):
#         print(i)
# #random.seed(4)
# numbers = array("i", [randrange(1, 100)])
# print(selection_sort(numbers))


#randrange(1, 100, 2)
#def main():

    #print("Hello World!")
#main()

# def my_function(food):
#   for x in food:
#     print(x)

# fruits = ["apple", "banana", "cherry"]

# my_function(fruits)

def selection_sort(array, size):
    #  set the first element as minimum
    # compare the min and second element 
    # if second element is smaller, assign the second as minimum
    #continue these steps until list is sorted
    # after each iteration, the min is placed in the first position of the unsorted list
    # 10,9,8,7,6
    
    for j in range(size):
        #  set the first element as minimum
        min_idx = j

        for i in range(j + 1, size):
            # if second element is smaller, assign the second as minimum
            if array[i] <= array[min_idx]:
                min_idx = i
                # after each iteration, the min is placed in the first position of the unsorted list
                (array[j], array[min_idx]) = (array[min_idx], array[j])

unsorted_list = [10,9,8,7,6,5,4,3,2,1]
print('Unsorted array')
print(unsorted_list)
size = len(unsorted_list)
selection_sort(unsorted_list, 10)
print('Sorted array')
print(unsorted_list)