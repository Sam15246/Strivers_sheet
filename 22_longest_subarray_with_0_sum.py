from sys import *
from os import *

def LongestSubsetWithZeroSum(arr):

    # Write your Code here.
    # Return an integer denoting the answer.
    sum_index_map = {}
    prefix_sum = 0
    longest = 0
    for index,elem in enumerate(arr):
        prefix_sum +=elem
        if prefix_sum == 0:
            longest = index + 1
        else:
            if prefix_sum in sum_index_map:
                longest = max(longest, index - sum_index_map[prefix_sum])
            else:
                sum_index_map[prefix_sum] = index        
    return longest
