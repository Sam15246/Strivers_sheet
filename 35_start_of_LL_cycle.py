'''
Following is the structure of the Node class already defined.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
'''

def firstNode(head):
    # Write your code here
    slow=fast=head

    while(fast and fast.next):
        slow = slow.next
        fast = fast.next.next
        if (slow == fast):
            start = head
            while(slow!=start):
                slow = slow.next
                start=start.next

            return slow
    return None
