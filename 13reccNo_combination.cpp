#include<iostream>
#include<vector>
using namespace std;
void solve(string digit,string output,vector<string>& ans,int index,string *mapping){
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }
    int num=digit[index]-'0';//subracting ascii values to get the actual number
    string value=mapping[num];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,output,ans,index+1,mapping);
        output.pop_back();
    }


}
vector<string> numberCombination(string digit){
    vector<string> ans;
    if(digit.length()==0){
        return ans;
    }
    string output="";
    int index=0;
    string mappting[10]{"","","abc","def","ghi","jkl","mno","pqrs","stuv","wxyz"};
    solve(digit,output,ans,index,mappting);
    
    return ans;
}

int main()
{
    vector<string> p;
    p=numberCombination("23");
    
    for(auto i:p){
       cout<<i<<" ";
    }
    
    return 0;
}