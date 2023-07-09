from collections import *

def uniqueSubstrings(input) :

    mpp = defaultdict(lambda:-1)
    left = 0
    ans = 0 
    for right in range(len(input)):
        if mpp[input[right]] != -1:
            left = max(mpp[input[right]] + 1, left)

        mpp[input[right]] = right
        ans = max(ans, right - left + 1)

    return ans 
