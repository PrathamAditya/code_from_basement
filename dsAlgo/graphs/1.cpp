/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;

#ifdef LOCAL
#else
#endif

class Graph
{
    int V;
    // array of lists
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }
    // edge bt x and y
    // and assume the edges are bidirectional
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printAdjList()
    {
        // itr over all the adj lists
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex: " << i << "->";
            for (int x : l[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(1, 2);
    g.printAdjList();

    return 0;
}