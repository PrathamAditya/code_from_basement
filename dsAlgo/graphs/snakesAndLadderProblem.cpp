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
    // map<T, list<T>> l;
    map<T, list<T>> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
    }
    T bfs(T src, T dest)
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
        // Print the shortest path to destination node
        // return dist[dest];

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

    int board[50] = {0};

    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;

    // add all edge sto the graph

    Graph<int> g;

    for (int i = 0; i <= 36; i++)
    {
        for (int dice = 1; dice <= 6; dice++)
        {
            int j = 1 + dice;
            j += board[j];
            if (j <= 36)
            {
                g.addEdge(i, j);
            }
        }
    }
    g.addEdge(36, 36);
    // cout << g.bfs(0, 36);
    g.bfs(0, 36);

    return 0;
}