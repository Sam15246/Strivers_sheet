# Following is the linked list node structure:
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
      
def sortTwoLists(first, second):
    if first is None:
        return second
    if second is None:
        return first

    if first.data > second.data:
        temp = first
        first = second
        second = temp

    res = first

    while first and second:
        tmp = None

        while first and first.data <= second.data:
            tmp = first
            first = first.next

        tmp.next = second
        first, second = second, first

    return res   
