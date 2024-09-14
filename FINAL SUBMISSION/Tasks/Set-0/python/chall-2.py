def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

def linear_search(arr, key):
    for index, value in enumerate(arr):
        if value == key:
            return index
    return -1

def main():
    user_input = input("Enter a list of integers separated by spaces: ")
    arr = list(map(int, user_input.split()))
    
    bubble_sort(arr)
    print("Sorted list:", arr)
    
    key = int(input("Enter the element to search for: "))
        
    index = linear_search(arr, key)
    
    print("Index of", key, "is", index)

if __name__ == "__main__":
    main()
