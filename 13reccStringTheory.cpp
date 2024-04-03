#include<iostream>
using namespace std;


// class Solution {
// public:
// // here dont put "&" with num s other wise it will affect the actual vector put "&" with ans 
// // because we want directly store the data in changed values in it 
// void solve(vector<int> nums,vector<int> output,vector<vector<int>>& ans,int i){
//     if(i>=nums.size()){
//         ans.push_back(output);
//         return;
//     }
//     // exclude
//     solve(nums,output,ans,i+1);

//     // include
//     int element=nums[i];
//     output.push_back(element);
//     solve(nums,output,ans,i+1);
//     return ;
// }
// vector<vector<int>> subsets(vector<int>& nums){
//     int i=0;
//     vector<int> output;
//     vector<vector<int>> ans;
//     solve(nums,output,ans,i);
//     return ans;
// }



// };




// #include <bits/stdc++.h> 
// void solve(string str,string output,vector<string>& ans,int i){
// 	if(i>=str.length()){
// 		if(output.length()>0){
//            ans.push_back(output);
// 		}
// 		return;
// 	}
// 	// exclude
// 	solve(str,output,ans,i+1);
// 	// include
// 	char element=str[i];
// 	output.push_back(element);
// 	solve(str,output,ans,i+1);

// }
// vector<string> subsequences(string str){
	
// 	// Write your code here
// 	int i=0;
// 	string output="";
// 	vector<string> ans;
// 	solve(str,output,ans,i);
// 	return ans;
	
// }


int main(){
    string str="raj";
    cout<<str[0];
    str.append(str[0]);
    return 0;
}