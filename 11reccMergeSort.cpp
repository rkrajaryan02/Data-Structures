#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    // Creating two array dynamically
    int *first=new int[len1];
    int *second=new int[len2];
    // copying values from main array to newly created array

    // first array
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    // secon array
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    // merge 2 sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]>second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while(index1<len1){
            arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=first[index2++];
    }

    // free the memory of array created other wise it will led to memory leak
    delete []first;
    delete []second;




    
}
void mergerSort(int *arr,int s,int e){
    // base case
    if(s>=e)return;
    int mid=s+(e-s)/2;
    // left part sort
    mergerSort(arr,s,mid);
    // right part sort
    mergerSort(arr,mid+1,e);
    // mergeing both parts
    merge(arr,s,e);

    
}

int main()
{
    int arr[6]={2,3,5,0,1,10};
    int size=6;
    int s=0,e=5;
    mergerSort(arr,s,e);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}