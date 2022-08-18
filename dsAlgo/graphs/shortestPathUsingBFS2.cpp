/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
using namespace std;
template <typename T>

class Graph
{
    map<T, list<T>> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    // single Source Shortest path
    void bfs(T src)
    {
        queue<T> q;
        map<T, int> dist;

        for (auto a : l)
        {
            l[a] = INT_MAX;
        }
        l[src] = 0;
        q.push_back(src);

        while (!q.empty())
        {
            T node = q.front();
            q.pop();

            for (auto a : l[node])
            {
                if (l[a] == INT_MAX)
                {
                    q.push_back(a);
                    l[a] = l[node] + 1;
                }
            }
        }
        // printing the distance

        for (auto a : l)
        {
            T node = a.first;
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