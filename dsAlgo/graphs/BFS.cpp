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
    map<T, list<T>> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(T src)
    {
        map<T, int> visited;
        queue<T> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            cout << node
                 << " ";

            for (auto nbr : l[node])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    // marking the nbr as visited
                    visited[nbr] = true;
                }
            }
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