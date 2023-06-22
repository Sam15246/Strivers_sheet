def pairSum(arr, s):
    ans = []
    if len(arr) in [0,1]:
        return ans
    arr.sort()
    left = 0
    right = len(arr) - 1
    while(left<right):
        if arr[left] + arr[right] == s:
            ans.append([arr[left],arr[right]])
        elif arr[left] + arr[right] > s:
            right-=1
        elif arr[left] + arr[right] < s:
            left+=1    
    return ans           
