class Node:
    def __init__(self, val=0, next=None, child=None):
        self.data = val
        self.next = next
        self.child = child


# Don't change the code above.

def merge_2_LL(a:Node, b:Node) -> Node:

    if b == None:
        return a

    temp = Node()
    result = temp    

    while(a and b):

        if a.data < b.data:
           temp.child = a
           a = a.child
           temp = temp.child
        else:
            temp.child = b
            b = b.child
            temp = temp.child

    if a: temp.child = a
    if b: temp.child = b

    return result.child
           
             



def flattenLinkedList(head: Node) -> Node:
    # Write your code here

    if head == None or head.next == None:
        return head

    head.next = flattenLinkedList(head.next)

    head = merge_2_LL(head,head.next)    

    return head

    
