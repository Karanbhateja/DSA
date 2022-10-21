def linear_search(list1,key):

    for i in range(len(list1)) :

        if list1[i] == key:

            return ("Key found at " + str(i) )

            break

    return("Key not found")

list1 = [0,12,3,55,6,7,8,22,44,84]

print(linear_search(list1,1))
