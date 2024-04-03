#include<iostream>

using namespace std;
class stack{
   public:
    int* arr;
    int size;
    int top;
    public:
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>-1){
            top--;
        }else{
            cout<<"stack is empty"<<endl;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empyt"<<endl;
        }
        return -1;

    }
    bool empty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }

    }
    void print(){
        
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    
    stack s(3);
    s.push(2);
    s.push(3);
    s.push(30);
    
   s.print();
 
    return 0;
    
}