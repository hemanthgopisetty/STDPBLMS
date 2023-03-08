//Backtracking qns - Generate all subsets - This a one type of descion tree
//In this approach we will generate subsets
//with each element combinations
//nums[2,3,5] => 2,{2,3},{2,3,5},{2,5},3,{3,5},5
#include "bits/stdc++.h"
using namespace std;
#define ll long long 
#define all(a) begin(a),end(a)
#define endl "\n"
const int N=1e9+7;
vector<int> a{1,2,3,4,5};
vector<vector<int>>ans;
//Fn to generate subsets
void printallsubsets(vector<int>& curset,int start)
{
	//On each fn call 
	//push the combination with the each element
	ans.push_back(curset);
	//when we reach the end of the array
	if(start == a.size())
	{
		
		//just simply return from the function call
		 return ;
	}
	//Itertation for combinations with each element
	for(auto i=start;i<a.size();i++)
	{
		//push the current element
		curset.push_back(a[i]);//{2,3}
		//try new combination with with curelement
		printallsubsets(curset,start+1);//{2,3} ,{2,3,5}
		curset.pop_back();//{2,5}
	}
}
int main()
{
	vector<int> curset;
	int start=0;
    printallsubsets(curset,start);
    for(auto it: ans)
    {
    	for(auto jt : it)
    	{
    		cout<<jt<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}
/*

*/