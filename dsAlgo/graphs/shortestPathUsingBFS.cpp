/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>
#include <map>
#define ll long long
#define ull unsigned long long int
using namespace std;
template <typename T>

class Graph
{
    // map<T, list<T>> l;
    map<T, list<T>> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(T src)
    {
        map<T, int> dist;
        queue<T> q;

        // and all other nodes will have infinity distance
        for (auto node_pair : l)
        {
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }
        q.push(src);
        dist[src] = 0;

        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            // cout << node
            //      << " ";

            for (auto nbr : l[node])
            {
                if (dist[nbr] == INT_MAX)
                {
                    q.push(nbr);
                    // marking the nbr as visited
                    dist[nbr] = dist[node] + 1;
                }
            }
        }
        // Print the dist to every node in the

        for (auto node_pair : l)
        {
            T node = node_pair.first;
            int d = dist[node];

            cout << "node " << node << " D from the src " << d << endl;
        }
    }
};

#ifdef LOCAL
#else
#endif
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Graph<int> g;

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(3, 0);

    g.bfs(0);

    return 0;
}