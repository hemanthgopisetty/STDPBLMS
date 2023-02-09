#include "bits/stdc++.h"
using namespace std;

int main()
{
	//Adjaceny martix ->O(n) Time Complexity
	//Adjacency matrix ->O(n^2) Space Complexity
	cout<<"Adjacency Matrix\n\n";
	int v,e;
	cin>>v>>e;
	int adj[v+1][e+1];
	for(auto i=1;i<=v;i++){
		for(auto j=1;j<=e;j++){
			adj[i][j]=0;
		}
	}
	for(auto i=0;i<e;i++){
		int vertex,edge;
		cin>>vertex>>edge;
		adj[vertex][edge]=1;
		swap(vertex,edge);
		adj[vertex][edge]=1;
	}

	for(auto i=1;i<=v;i++)
	{
		for(auto j=1;j<=e;j++){
			if(adj[i][j]){
				cout<<"Vertex "<<i<<" has an edge with -> Vertex "<<j<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}