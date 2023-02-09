#include "bits/stdc++.h"
using namespace std;

int main()
{
	int v,e;
	cin>>v>>e;
	//Adjacency list array of vector's
	vector<int> adj[v+1];
	for(auto i=0;i<e;i++){
		int vertex,edge;
		cin>>vertex>>edge;
		adj[vertex].push_back(edge);
		adj[edge].push_back(vertex);
	}

	for(auto vertex=1;vertex<=v;vertex++){
		cout<<"The edges connected to the Vertex "<< vertex <<" -> ";
		for(auto jt:adj[vertex]){
			cout<<jt<<" ";
		}
		cout<<endl;
	}
	return 0;
}