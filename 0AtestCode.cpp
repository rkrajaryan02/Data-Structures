#include<iostream>
#include<vector>

using namespace std;
 
bool binarySearch(int *arr,int element,int s,int e){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==element){
        return true;
    }else if(element>arr[mid]){
        return binarySearch(arr,element,mid+1,e);
    }else{
        binarySearch(arr,element,mid-1,e);
    }
}

int main()
{

int arr[5]={2,5,7,8,9};
   cout<<binarySearch(arr,9,0,4);
    
    return 0;
}