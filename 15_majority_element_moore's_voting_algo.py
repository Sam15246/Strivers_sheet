def findMajorityElement(arr, n):
    cnt = 0
    # elem = None

    for i in range(n):
        if cnt == 0:
            elem = arr[i]
            cnt = 1
        elif arr[i] == elem:
            cnt += 1
        else:
            cnt -= 1
    
    cnt_2 = 0
    for j in arr:
        if j == elem:
            cnt_2 += 1
    
    if cnt_2 > n // 2:
        return elem
    else:
        return -1
