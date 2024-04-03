#include<iostream>
using namespace std;
// SinglyLinkedlist
class Snode{
    public:
    int data;
    Snode* next;
    Snode(int data){
        this->data=data;
        this->next=NULL;
    }

};
class singlyLinkedList{

    private:
    Snode* head;
    Snode* tail;
    public:
    singlyLinkedList(){
        head=tail=NULL;
    }
    void insertAtHead(int data){
        Snode* newNode=new Snode(data);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
            cout<<newNode->data<<" added at head"<<endl;
        }
    }
    void insertAtTail(int data){
        Snode* newNode=new Snode(data);
        if(tail==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
            cout<<newNode->data<<" added at tial"<<endl;
        }
    }
    void insert(int data,int position){
        Snode* newNode=new Snode(data);
        if(position<1){
            cout<<"invalid position please enter valid position"<<endl;
        }
        if(position==1){
            insertAtHead(data);
        }
        else{
            Snode* curr=head;
            int count=1;
            while(count<position-1 && curr!=NULL){
                curr=curr->next;
                count++;
            }
            // tail position
            if(curr==NULL){
                insertAtTail(data);
            }
            Snode* newNode=new Snode(data);
            newNode->next=curr->next;
            curr->next=newNode;


        }    
    }
    void deleteNode(int pos){
        if(pos==1){
            Snode* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }else{
            Snode* curr=head;
            Snode* prev=NULL;
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
        Snode* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
    }

};

// DoublyLinked list
class Dnode{
    public:
    int data;
    Dnode* next;
    Dnode* prev;
    Dnode(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};
class doublyLinkedList{
    private:
    Dnode* head;
    Dnode* tail;
    public:
    doublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void print(){
        Dnode* curr=head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }
    void insertAtTail(int data){
        Dnode* Node=new Dnode(data);
        if(tail==NULL){
            tail=head=Node;

        }
        else{
            tail->next=Node;
            Node->prev=tail;
            tail=Node;
        }
    }

    void insertAtHead(int data){
        Dnode* Node=new Dnode(data);
        if(head==NULL){
            head=tail=Node;
        }else{
            Node->next=head;
            head->prev=Node;
            head=Node;
        }

    }
    void insert(int data,int pos){
        if(pos<1){
            cout<<"invilid position"<<endl;
        }
        if(pos==1){
            insertAtHead(data);
        }else{
            Dnode* newNode=new Dnode(data);

            Dnode* curr=head;
            int c=1;
            while(c<pos-1 && curr!=NULL){
                curr=curr->next;
                c++;
            }
            if(curr==NULL){
                cout<<"position out of boundry"<<endl;
                delete newNode;
                return ;
            }
            // Handle valid insertion within the list
            newNode->next = curr->next;
            if (curr->next != NULL) {  // Check if not inserting at the tail
                curr->next->prev = newNode;
            }
            curr->next = newNode;
            newNode->prev = curr;
          
            if(curr->next==NULL){
                insertAtTail(data);
                return ;
            }


            
        }

    }
    void deleteNode(int pos){
        if(pos<1){
            cout<<"invalid position"<<endl;
        }
        if(pos==1){
            Dnode* curr=head;
            head=head->next;
            if(head!=NULL){
                head->prev=NULL;
            }else{
                tail=NULL;
            }
            delete curr;
            return;

        }else{
            // middle
            Dnode* curr=head;
            int count=1;
            while(count<pos&& curr!=NULL){
                curr=curr->next;
                count++;
            }
            if(curr==NULL){
                cout<<"postion out of boudry";
            }
            curr->prev->next=curr->next;
            curr->next->prev = curr->prev;
            delete curr;
            // end Dnode
            if(curr==tail){
                tail=tail->prev;
                curr->prev=NULL;
                delete curr;
                return ;
            }
        }
        

        
    }
};

// Circular linkedlist
class cNode{
    public:
    int data;
    cNode* next;
    cNode(int data){
        this->data=data;
        next=NULL;
    }

 };
 class circularLinkedList{
    private:
    cNode* tail;
    cNode* head;
    public:
    circularLinkedList(){
        tail=NULL;
        head=NULL;
    }
    void insertAtEnd(int data){
        cNode* newNode=new cNode(data);
        if(tail==NULL){
            head=tail=newNode;
            newNode->next=head;
        }else{
           newNode->next=tail->next;
           tail->next=newNode;
           tail=newNode;
        }
    }
    void print(){
        cNode* curr=tail;
        do{
            cout<<tail->data<<"->";
            tail=tail->next;
        }while(tail!=curr);
    }
    // void deleteNode(int element){
    //     cNode* curr=tail;
    //     if(tail==NULL){
    //         cout<<"list is empyt"<<endl;
    //     }else{
    //         if(tail->next=tail)
    //     }
        
    // }


 };

 