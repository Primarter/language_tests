#!/usr/bin/env ruby

def my_sort()
    unsorted_list = []
    sorted_list = []
    if ARGV.length == 1
        puts("Give your list as parameter of the program please")
    end
    for i in 1 ... ARGV.length
        tmp = Integer(ARGV[i]) rescue nil
        if (tmp == nil)
            puts("Please enter only valid numbers please")
            return (1)
        end
        unsorted_list.push(tmp)
    end
    print("Unsorted list:\n", unsorted_list, "\n")
    print("Sorting...\n")
    while unsorted_list.length > 0
        tmp = unsorted_list[0]
        for i in unsorted_list
            if (tmp > i)
                tmp = i
            end
        end
        sorted_list.push(tmp)
        unsorted_list.delete(tmp)
    end
    print(sorted_list, "\n")
end

my_sort()