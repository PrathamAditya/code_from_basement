/**
 * author: adityapratham
 **/
#include <bits/stdc++.h>
#include <list>
#include <unordered_map>

#define ll long long
#define ull unsigned long long int
using namespace std;

#ifdef LOCAL
#else
#endif
class Graph
{
    int V;
    // Adj list of unorerd map
    // unorded map output can come in any order
    unordered_map<string, list<pair<string, int>>> l;

public:
    void addEdge(string x, string y, bool biDir, int wt)
    {
        // make_pair hehe
        l[x].push_back(make_pair(y, wt));
        if (biDir)
        {
            l[y].push_back(make_pair(x, wt));
        }
    }

    void printAdjList()
    {
        for (auto p : l)
        {
            string city = p.first;
            list<pair<string, int>> nbrs = p.second;
            cout << city << "->";
            for (auto nbr : nbrs)
            {
                string dest = nbr.first;
                int dist = nbr.second;

                cout << dest << " " << dist << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    Graph g;

    g.addEdge("A", "B", true, 20);
    g.addEdge("A", "C", true, 10);
    g.addEdge("B", "D", true, 30);
    g.addEdge("C", "D", true, 40);
    g.addEdge("A", "D", false, 50);

    g.printAdjList();

    return 0;
}