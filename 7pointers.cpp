#include <iostream>
#include<bits\stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include <bits/stdc++.h> 
using namespace std;
void print(int* &p){
  
  *p=*p+1;

}

int main(){
   
  //double pointer
  //  int arr[5]={1,2,3,6,7};
  //  int *p=&arr[0];
  //  cout<<p<<endl;
  //  cout<<*p<<endl;
  //  *p=*p+1;
  //   cout<<*p<<endl;
  //    cout<<*(p+1)<<endl;
  //   cout<<sizeof(arr)<<endl;
  //   cout<<sizeof(p)<<endl;
  //   cout<<sizeof(&arr[0]);
  //   cout<<&p<<endl;
  //   int a=9;
  //   int *q=&a;


  //chararacter array

  // char ch[6]={"abcde"};
  // int *c=&ch[0];

  // cout<<ch<<endl;
  // cout<<c;
 /*char *ch="abcd"; ---its very risky ---*/
//  int a[5]={1,2,5,3,6};
//  int *b=&a[0];
//  cout<<"befor"<<endl;
//  cout<<*b<<endl;

//  print(b);
//  cout<<"after"<<endl;
//  cout<<*b<<endl;
char c='1b';
char* d=&c;
cout<<d;





 return 0;

}
	
	

	
	
	

	

