#include <iostream>
using namespace std;

class Graph {

private:
    int n;
    int g[10][10];

public:
    Graph(int x) {
        n = x;

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    g[i][j] = 0;
                }
            }

    }

        void displayadjmat() {
            cout << "adj mat";
            for(int i = 0; i < n; i++) {
                cout << "\n";
                for(int j = 0; j < n; ++j) {
                    cout << " " << g[i][j];
                }


            }
        }

        void addEdge(int x, int y) {
            if((x >= n) || (y > n)) {
                cout << "Vertex not found";
            }
            if(x==y) {
                cout << "same vertex";
            }
            else {
                g[y][x] = 1;
                g[x][y] = 1;
            }
        }

        void addVertex() {
             n++;
        int i;

        for (i = 0; i < n; ++i) {
            g[i][n - 1] = 0;
            g[n - 1][i] = 0;
        }   
        }

        void removeVertex(int x)
    {
        
        if (x > n) {
            cout << "\nVertex not present!";
            return;
        }
        else {
            int i;

            
            while (x < n) {
                
                for (i = 0; i < n; ++i) {
                    g[i][x] = g[i][x + 1];
                }

                
                for (i = 0; i < n; ++i) {
                    g[x][i] = g[x + 1][i];
                }
                x++;
            }

            
            n--;
        }
    }

};





int main() {

    Graph obj(4);
    obj.addEdge(0, 1);
    obj.addEdge(0, 2);
    obj.addEdge(1, 2);
    obj.addEdge(2, 3);
    obj.displayadjmat();

    return 0;
}