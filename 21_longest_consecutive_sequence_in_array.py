from math import *
from collections import *
from sys import *
from os import *

def lengthOfLongestConsecutiveSequence(arr, n):
    # Write your code here.
    pass
    st = set()

    for el in arr:
        st.add(el)

    longest = 1

    for elem in st:
        if (elem-1) not in st:
            cnt = 1
            x = elem
            while((x + 1 )in st):
                x +=1
                cnt+=1
            longest = max(longest,cnt)
    return longest                 
