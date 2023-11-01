#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
private:
    int V; // 頂點的數量
    vector<vector<int> > adjList; // 鄰接列表

public:
    Graph(int vertices) {
        V = vertices;
        adjList.resize(V);
    }

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src); // 無向圖需要雙向連接
    }

    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true;
        cout << v << " ";

        for (int i : adjList[v]) {
            if (!visited[i]) {
                DFSUtil(i, visited);
            }
        }
    }

    void DFS(int startVertex) {
        vector<bool> visited(V, false);
        cout << "DFS 遍歷結果：";
        DFSUtil(startVertex, visited);
        cout << endl;
    }

    void BFS(int startVertex) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        cout << "BFS 遍歷結果：";

        while (!q.empty()) {
            int v = q.front();
            cout << v << " ";
            q.pop();

            for (int i : adjList[v]) {
                if (!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }

        cout << endl;
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    g.DFS(0);
    g.BFS(0);

    return 0;
}
