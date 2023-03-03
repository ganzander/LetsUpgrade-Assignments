def find_smallest(li):
    smallest = 0
    for i in range(1, len(li)):
        if (li[i] < li[smallest]):
            smallest = i
    return li[smallest]

li = [5, 7, 9, 14, 10, 20, 4]
print("The smallest number in the list is:", find_smallest(li))
