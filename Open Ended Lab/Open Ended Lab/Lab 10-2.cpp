#include <iostream>
#include <vector>
using namespace std;
//Program 2: Graph Representation Using Adjacency List
int main(){
    int vertices;
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    vector<int> adjList[10];

    int edges;
    cout<<"Enter number of edges: ";
    cin>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cout<<"Enter edge (u v): ";
        cin>>u>>v;

        adjList[u].push_back(v);
        adjList[v].push_back(u); // Undirected graph
    }
    cout << "\nAdjacency List:\n";
    for(int i=0; i<vertices; i++){
        cout<<i<<" ->";
        for(int j : adjList[i]) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

