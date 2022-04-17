def buble(arr):
    
    for i in range(len(arr)-1):
        for j in range(len(arr)-1):
            if arr[j] > arr[j+1]:
                temp = arr[j+1]
                arr[j+1] = arr[j]
                arr[j] = temp

    return arr

arr = open('numerosFlotantes.txt', 'r').read().split(',')
arr = [*map(float, arr)]
print(buble(arr))