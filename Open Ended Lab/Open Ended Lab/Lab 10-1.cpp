#include <iostream>
using namespace std;
// Program 1: Graph Representation Using Adjacency Matrix
int main(){
    int vertices;
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    int adjMatrix[10][10]={0};

    int edges;
    cout<<"Enter number of edges: ";
    cin>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cout<<"Enter edge (u v): ";
        cin>>u>>v;

        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;   // Undirected graph
    }

    cout<<"\nAdjacency Matrix:\n";
    for(int i=0; i<vertices; i++) {
        for(int j=0; j<vertices; j++) {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

