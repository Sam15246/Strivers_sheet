/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.

    Node *dummy= new Node();
    Node *temp = dummy;

    int carry = 0;
    int sum_;
    while((num1 != NULL || num2 != NULL) || carry == 1){
        sum_ = 0;
        if (num1!= NULL){
            sum_ += num1->data;
            num1 = num1->next;
        }
        if (num2!= NULL){
            sum_ += num2->data;
            num2 = num2->next;
        }

        sum_ += carry;
        carry = sum_ / 10;

        Node *new_node = new Node((sum_ % 10));
        temp->next = new_node;
        temp = temp->next;
    }
    return dummy->next;
}
