'''
Following is the structure of the Node class already defined.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
'''

def removeKthNode(head, k):
    # Write your code here.
    
    fast = slow = head
    for _ in range(k):
        fast = fast.next

    if fast == None : return head.next

    while(fast.next):
        slow = slow.next
        fast = fast.next

    slow.next = slow.next.next
    return head    
