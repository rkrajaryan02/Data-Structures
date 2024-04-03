#include<iostream>
#include<string.h>
#include<array>
using namespace std;
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *arr,int size){
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            swap(arr[min],arr[i]);
        }
    }
}
string reverse(string name){
    int i=0;
    int e=name.length()-1;
    while(i<(name.length()/2)){
        swap(name[i++],name[e--]);
        
    }
    return name;
}
int len(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void nam(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
void toLower(string name){
    string temp;

}
bool palindrome(char n[],int len){
    int s=0;
    int e=len-1;
    while(s<e){
        if(n[s++]!=n[e--]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    char name[20];
    cin>>name;
    int l=len(name);
    nam(name,l);
    int b=palindrome(name,l);


cout<<b;
    
}