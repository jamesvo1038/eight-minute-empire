#pragma once
using namespace std;
#include <vector>

class Graph
{
	public:
		void addEdge(vector <int> adj[], int n1, int n2);
		void printGraph(vector <int> adj[], const int totalNodes);
		void checkConnectivity(vector<int> adj[], const int v); //Checks if undirected graph is connected		
		void DFS(int u, vector<int> adj[], bool visited[]); //Does the recursion (dfs)
};


