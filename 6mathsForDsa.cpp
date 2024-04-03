#include<iostream>
#include<vector>
using namespace std;
// seive of erathanous
int primeCount(int n){
    int count=0; 

    vector<bool>p(n+1,true);
    p[0]=p[1]=false;
    for(int i=2;i<n;i++){
       if(p[i]){
        count++;
       }
       for(int j=2*i;j<n;j=j+i){
        p[j]=0;
       }
    }
    


    return count;
}
int hcf(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a>b)return hcf(a-b,b);
    if(a<b)return hcf(a,b-a);
}
int main(){
    int a=hcf(12,18);
    cout<<a;


    return 0;
}

