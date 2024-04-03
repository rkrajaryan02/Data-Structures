#include<iostream>
using namespace std;
bool binarySearch(int a[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            return true;

        }
        if(key>a[mid]){
            start=mid+1;
        }
        if(key<a[mid]){
            end=mid-1;
        }
        mid=start+((end-start)/2);
        return false;
    }
}

// find first and last element of arrey 
int firstOcc(int *arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
//last occurance
int lastOcc(int *arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int occurance(int *arr,int size,int key){
    return (lastOcc(arr,size,key)-firstOcc(arr,size,key))+1;
}
int squareRoot(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
       long long int sq=mid*mid;
        if(sq==n){
            return mid;
        }else if(sq<n){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    return 0;
}