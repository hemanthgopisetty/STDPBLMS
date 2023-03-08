#include "bits/stdc++.h"
using namespace std;
#define ll long long int
vector<int> a{1,2,3,4,5};
//Monotonic Decreasing Stack ->To find the NextGreaterandPreviousSmaller
//Monotonic Increasing Stack ->To find the NextSmallerandPreviousGreater
void solve()
{
	cout<<"Program to print the NextGreaterElement\n";
	//Using Stack
	 stack<int> s;
	 //Push the first element in the array to the stack
	 s.push(a[0]);
	for(auto i=0;i<(int)a.size();i++)
	{
		int currentelement=a[i];
		//The main aim of Having this loop is
		//to get the GreaterValue For many elments

		while(!s.empty() and s.top()>currentelement)
		{
			//If top of the stack is lesser than the current element
			//and stack is not empty
			//that mean CurrentElement is Greater for some no of elements
			//There will be an element 
			//Where CurrentElement is not greater than the top of the element
			//Or the Stack may become empty too
			cout<<s.top()<<" ==> "<<currentelement<<endl;
			s.pop();
		}
		cout<<"CurrentIndex = "<<i<<" Currentelement = "<<currentelement<<endl;
		s.push(a[i]);
	}
}
int main(){


// 	int t;cin>>t;
// 	while(t--)
	solve();
	return 0;


}
/*
To find the NextSmallerElment
We need to maintain the top as Greatest  always
CurrentElment will always be lesser than the top

In such a way the currentElment will be the smallest element's For
many elements in the stack
*/