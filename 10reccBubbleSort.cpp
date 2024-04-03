#include<iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
    // Base case
    if (size == 0 or size == 1)
        return;

    // Perform one pass of bubble sort
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    // Recursion call after one pass
    bubbleSort(arr, size - 1);
}
void insertionSort(int *arr,int size){
    if(size<=1)return;
    insertionSort(arr,size-1);

    int key=arr[size-1];
    int j=size-2;
    while (j>=0&& arr[j]>key)  
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
void selectionSort(int *arr,int size){
    if(size<=1)return;

int min=0;
for(int i=0;i<=size-1;i++){
    if(arr[i]<arr[min])min=i;
}
swap(arr[0],arr[min]);
selectionSort(arr+1,size-1);

    
}


int main() {
    int arr[6] = {9, 1, 6, 3, 6, 0};
    int size =6;

    selectionSort(arr,size);

    // Displlay the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
