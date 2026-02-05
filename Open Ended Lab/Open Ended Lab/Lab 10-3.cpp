#include <iostream>
#include <queue>
using namespace std;
//Program 3: BFS Traversal Using Queue
int adjMatrix[10][10],visited[10];
int vertices;

void BFS(int start){
    queue<int> q;
    visited[start]=1;
    q.push(start);

    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";

        for(int i=0; i<vertices; i++){
            if(adjMatrix[v][i]==1 && visited[i] == 0) {
                visited[i]=1;
                q.push(i);
            }
        }
    }
}

int main(){
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    cout<<"Enter adjacency matrix:\n";
    for(int i= 0; i<vertices; i++) {
        for(int j=0; j<vertices; j++) {
            cin>>adjMatrix[i][j];
        }
        visited[i]=0;
    }

    int start;
    cout<<"Enter starting vertex: ";
    cin>>start;

    cout<<"BFS Traversal: ";
    BFS(start);
    return 0;
}

