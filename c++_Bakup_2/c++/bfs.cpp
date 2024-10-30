#include <bits/stdc++.h>
#include <unordered_map>
#include <queue>
#include <list>
#include <set>
using namespace std;

// many a times it require in sorted order hence we will use set instead of list and laso chaneg the push_back function with the insert function
void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[v].push_back(v);
        adjList[u].push_back(u);
    }
}
void printAdj(unordered_map<int, list<int>> &adjList)
{
    for (auto i : adjList)
    {
        cout << i.first << "-> ";
        for (auto j : i.second)
        {
            cout << j << ", ";
        }
        cout << endl;
    }
}

void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        // store frontNode into asn
        ans.push_back(frontNode);

        // traverse all neighbours of frontNode
        for (auto i : adjList[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, edges);
}

int main()
{
    return 0;
}
