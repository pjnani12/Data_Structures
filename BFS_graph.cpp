#include<iostream>
#include <list>
using namespace std;
class Graph{
    int V;//no. of vertices
    list<int> *adj; //adj array for each vertex
public:
    Graph(int V){
        this->V=V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w){//add  edge to graph
        adj[v].push_back(w);
    }
    void BFS(int s){
        bool *visited=new bool[V];
        for(int i=0;i<V;i++)
            visited[i]=false; // initiall all vertices are not visited
        
        list<int> queue;
        visited[s]=true; //marked to visited
        queue.push_back(s);
        
        list<int>::iterator i;
        while(!queue.empty()){
            s=queue.front();
            cout<<s<<" ";
            queue.pop_front();
            // Get all adjacent vertices of the dequeued vertex s.
            for(i=adj[s].begin();i!=adj[s].end();++i){
                if(!visited[*i]){//avoid if already visited
                    visited[*i]=true;
                    queue.push_back(*i);
                }
            }
        }
    }
};

int main(){
  Graph g(5);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0,3);
	g.addEdge(1,0);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3,4);
	g.addEdge(4,4);
  cout<<"BFS traversal :: ";
  g.BFS(1);
	return 0;
}
