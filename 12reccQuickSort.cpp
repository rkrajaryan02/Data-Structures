#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int partitionElement=arr[s];
    // Finding the partition position
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=partitionElement)count++;
    }
    // pacing patition position at right place
    int partitionIndex=s+count;
    swap(arr[partitionIndex],arr[s]);
    // handling left and right side of partitionElement
    int i=s,j=e;
    while(i<partitionIndex && j>partitionIndex){
        while(arr[i]<partitionElement){
            i++;
        }
        while(arr[j]>partitionElement){
            j--;
        }
        if(i<partitionIndex &&j>partitionIndex){
            swap(arr[i++],arr[j--]);
        }
        
    }return partitionIndex;

}
void QuickSort(int *arr,int s,int e){
    if(s>=e)return;
    int p=partition(arr,s,e);
    // sortting left part
    QuickSort(arr,s,p-1);
    // sorting right part 
    QuickSort(arr,p+1,e);

}

int main()
{
   int arr[9]={10,16,8,12,15,6,3,9,5};
    int size=6;
    int s=0,e=8;
    // cout<<(partition(arr,0,8));
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    QuickSort(arr,s,e);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    // print(2,10);

    
    
    return 0;
}