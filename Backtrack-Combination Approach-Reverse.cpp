//Backtracking qns - Generate all subsets - This a one type of descion tree
//In this approach we will generate subsets
//based on picking the element or not picking the element
//nums[2,3,5] => I ->Include ,DI ->Don't include
//I 2 ,DI 2
//Like that we will add subsets at the leaf node of the descion tree
//Reverse manner 
#include "bits/stdc++.h"
using namespace std;
#define ll long long 
#define all(a) begin(a),end(a)
#define endl "\n"
const int N=1e9+7;
vector<int> a{1,2,3,4};
vector<vector<int>>ans;
void printallsubsets(vector<int>& curset,int index)
{
	if(a.size() == index)
	{
		//Add the current subset 
		ans.push_back(curset);
		return ;
	}
	//Add current digit and take a descion call ->include
	curset.push_back(a[index]);
	//make a call to the another to add next element to this descion subset
	printallsubsets(curset,index+1);
	//revert that include descion
	curset.pop_back();
	//make a call to the another descion call (include or don't include) for next element
	printallsubsets(curset,index+1);
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