#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T> > l;

public: 
	void addEdge(T x , T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	
	void bfs( T src )
	{
		map<T, bool > visited; 
		queue<T> q ;
		q.push(src);
		visited[src] =true;
		while(!q.empty())
		{
			T node = q.front();
			q.pop();
			cout<<node<<" " ;
			for(int nbr:l[node]){
				if(!visited[nbr])
				{
					q.push(nbr);
					visited[nbr]=true; 		
				}
				
			}
		}
	}

  void dfs(T src){
    map<T, bool > visited;

    for(auto p:l){
      T node = p.first;
      visited[node] =false;
    }

    dfs_helper(src,visited);
  }

  void dfs_helper(T src, map<T,bool> &visited){
    cout<<src<<" ";
    visited[src] =true ;
    for(T nbr:l[src]){
      if(visited[nbr]==false)
        dfs_helper(nbr,visited);
    }
  }
	
};

int main(){
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	
	g.bfs(0);
  	cout<<endl;
  	g.dfs(0);
	
	return 0;
}
