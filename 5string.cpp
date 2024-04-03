#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

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
       }   }
char toLower(char name){//convert the upper case to lower case;
    if(name>='a' && name<='z'){
        return name;

    }
    else{
        char temp=name-'A'+'a';
        return temp;
    }
}


bool palindrome(string n,int len){//check palindrome case sensitive does,nt matter
    int s=0;
    int e=len-1;
    while(s<=e){
        if(toLower(n[s++])!=toLower(n[e--])){
            return false;
            break;
        }
    }
    return true;
} 
void charCount(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
    int ch=s[i]-'a';
    arr[ch]++;
    }
    for(int i=0;i<26;i++){
        cout<<arr[i];
    }
}
int romanToInt(string s) {
    unordered_map<int ,string>m;
    m[1]="I";
    m[5]="V";
    m[10]="X";
    m[50]="L";
    m[100]="C";
    m[500]="D";
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;

    }
    

        
 }
 
int main(){
  vector<int >s;
  s.push_back(23);
  cout<<s.size();

  
  
}
