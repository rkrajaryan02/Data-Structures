 #include<iostream>
 #include<bits/stdc++.h>
 #include<vector>
using namespace std;
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
bool search(int a[],int size,int key){
    for(int i=0;i<size;i++){
        if(a[i]==key){
            
            return 1;
            break;
        }
    
    }
    return 0;
    
}

void revese(int a[],int size){
    int s=0;
    int end=size-1;
    while(s<end){
        swap(a[s],a[end]);
        s++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void alt(int a[],int size){
   for(int i=0;i<size;i+=2){
    if(i+1<size){
        swap(a[i],a[i+1]);
    }
     
   }

}
void occurance(int a[],int size){
    int b[size];
    for(int i=0;i<size;i++){
        b[i]=0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j]){
                b[i]+=1;
            }
        }

    }
    print(b,size);
}
void unique(int a[],int size){
    int b[size];
    for(int i=0;i<size;i++){
        b[i]=0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j]){
                b[i]+=1;
            }
        }

    }
        for(int i=0;i<size;i++){
            if(b[i]==1){
                cout<<a[i]<<"is unique."<<endl;
            }
        }

}

void sort(int a[],int size){
    int i=0;
    int j=size-1;
    while(i<j){
        if(a[i]==0){
            i++;
        }
        if(a[j]==1){
            j--;
        }
        if(a[i]==1&&a[j]==0){
            swap(a[i],a[j]);
            i++;
            j--; 
        }
    }
}
bool uniqueOccurrences(vector<int>& arr) {
        vector<int >a;
       
        int i=0;
        while(i<arr.size()){
            int count=0;
            int key=arr[i];
            int j=0;
            while(j<arr.size()){
                if(a[j]==key){
                    count++;
                    a[j]=INT_MIN;
                    j++;
                }
                if(a[j]==INT_MIN){
                    j++;
                }

            }
            a.push_back(count);
            i++;
        }
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
            if(a[i]==a[i-1]){
                return false;
            }
        }
        return true;
        
        
}
void sort0And1(int *arr,int size){
    int i=0;
    int j=size-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        
        }
        if(arr[j]==1){
            j--;
        }
        if(arr[i]==1&&arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
void bubbleSort(int arr[],int s){
    for(int i=1;i<s;i++){
        for(int j=0;j<s-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}





int main()
{
    int a[5]={3,4,5,7,9};
    int b[6]={1,23,1,5,6,8};
    int c[5]={0,1,0,1,1};
    bubbleSort(b,6);
    print(b,6);
    
   




   
   
   
   

}