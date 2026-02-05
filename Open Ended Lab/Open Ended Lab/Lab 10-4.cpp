#include <iostream>
using namespace std;
// Program 4:  DFS Traversal Using Recursion

int adjMatrix[10][10], visited[10];
int vertices;

void DFS(int v){
    visited[v]=1;
    cout<<v<<" ";

    for(int i=0; i<vertices; i++) {
        if(adjMatrix[v][i]==1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main(){
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    cout<<"Enter adjacency matrix:\n";
    for(int i=0; i<vertices; i++){
        for(int j=0; j<vertices; j++) {
            cin>>adjMatrix[i][j];
        }
        visited[i]=0;
    }

    int start;
    cout<<"Enter starting vertex: ";
    cin>>start;

    cout<<"DFS Traversal: ";
    DFS(start);
    return 0;
}

