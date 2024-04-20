#include<iostream>
using namespace std;
// SinglyLinkedlist
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};
class singlyLinkedList{

    private:
    node* head;
    node* tail;
    public:
    singlyLinkedList(){
        head=tail=NULL;
    }
    void insertAtHead(int data){
        node* newNode=new node(data);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
            cout<<newNode->data<<" added at head"<<endl;
        }
    }
    void insertAtTail(int data){
        node* newNode=new node(data);
        if(tail==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
            cout<<newNode->data<<" added at tial"<<endl;
        }
    }
    void insert(int data,int position){
        node* newNode=new node(data);
        if(position<1){
            cout<<"invalid position please enter valid position"<<endl;
        }
        if(position==1){
            insertAtHead(data);
        }
        else{
            node* curr=head;
            int count=1;
            while(count<position-1 && curr!=NULL){
                curr=curr->next;
                count++;
            }
            // tail position
            if(curr==NULL){
                insertAtTail(data);
            }
            node* newNode=new node(data);
            newNode->next=curr->next;
            curr->next=newNode;


        }    
    }
    void deleteNode(int pos){
        if(pos==1){
            node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }else{
            node* curr=head;
            node* prev=NULL;
            int cnt=1;
            while(cnt<=pos){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
    void display(){
        node* temp=head;
            while(temp!=NULL){
                if(temp->next==NULL){
                    cout<<temp->data<<;
                }else{
                    cout<<temp->data<<"->";
                }
                
                temp=temp->next;
            }
    }
    node* reverserLinkedList(node* &head){
        if(head==NULL|| head->next==NULL){
            return head;
        }
        node* prev=NULL;
        node* curr=head;
        node* forward;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;

    }
    find the middle node 
    node* findMiddleNode(node* &head){
        node* slow=head;
        node* fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;
    }
    

};


int main()
{
    singlyLinkedList l;
    l.insertAtTail(2);
    l.insertAtTail(2);
    l.insertAtTail(5);
    l.display();
    return 0;
}