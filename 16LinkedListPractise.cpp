#include<iostream>
#include "14linkedList.h"
using namespace std;
node* reverse(node* &head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    LinkedListNode<T>* prev = NULL;
    LinkedListNode<T>* curr = head;
    while (curr != NULL) {
        LinkedListNode<T>* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main()
{
        singlyLinkedList l;
        l.insertAtTail(2);
        l.insertAtTail(3);
        l.insertAtTail(5);
        return 0;

}
    
    
    
   