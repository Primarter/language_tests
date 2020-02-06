#!/usr/bin/env python3

from sys import argv, exit

def num_test(my_str):
    if my_str.isdigit() == True:
        return (True)
    else:
        if my_str[0] == '-':
            return (True)
        return (False)

def find_smallest(ls):
    tmp = ls[0]
    for i in ls:
        if i < tmp:
            tmp = i
    return (tmp)

def main():
    my_list = []
    sorted_list = []

    if len(argv) == 1:
        print("Give your list as parameter of the program please")
    for i in range(1, len(argv)):
        if num_test(argv[i]) == False:
            print ("Please enter only valid numbers please")
            return (84)
        my_list.append(int(argv[i]))

    print("Unsorted list :", my_list, sep='\n')
    print("Sorting started...")
    while len(my_list):
        smallest = find_smallest(my_list)
        sorted_list.append(smallest)
        my_list.remove(smallest)
    
    print(sorted_list)

if __name__ == '__main__':
    main()