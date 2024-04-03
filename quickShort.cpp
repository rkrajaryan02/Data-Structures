#include <iostream>
#include<bits\stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include <bits/stdc++.h> 
using namespace std;
int partition(int *arr,int s,int e){
    
}
void quickSort(int *arr,int s,int e){
    if(s<=e){
        return ;
    }
    int p=partiton(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[5]={1,3,5,3,7}
    return 0;
}