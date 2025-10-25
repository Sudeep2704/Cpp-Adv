#include <iostream>
using namespace std;
#define V 4

void addEdge(int mat[V][V], int i, int j) {
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void displayEdge(int mat[V][V]) {
for(int i = 0; i < V; i++) {
    for(int j = 0; j < V; j++) {
        cout << mat[i][j] << " ";
    }
    cout << "\n";
}
}

int main() {

int mat[V][V] = {0};

    
    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 1, 2);
    addEdge(mat, 2, 3);   
    displayEdge(mat);

    return 0;
}