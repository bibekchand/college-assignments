# Binary seach algorithm 
def binarysearch(list, item):
    low = 0
    high = len(list) - 1
    while low <= high:
        mid = int((low+high)/2)
        guess = list[mid]
        if guess == item:
            return mid + 1
        if guess > item:
            high = mid -1
        else: 
            low = mid + 1
    return None

list = [1,3,4,5,8,9]
print(binarysearch(list,5))