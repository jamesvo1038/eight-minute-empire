/* Using Adjacency List Graph Implementation
*/

#include <iostream>
#include "Map.h"
using namespace std;


//This function connects 2 nodes (n1, n2) together by making them adjacent
//Adjacent node is pushed to the array of the node
//adj[n1] has an array which stores all its adjacent nodes. Same for every other nodes.
void Graph::addEdge(vector <int> adj[], int n1, int n2)
{
	//adjacent node n2 is pushed to the array of n1 
	adj[n1].push_back(n2); //Edge from node n1 to node n2
	adj[n2].push_back(n1); //Since its an undirected graph, we need to do it both ways (n1->n2, and n2->n1)

}

void Graph::printGraph(vector <int> adj[], const int totalNodes)
{
	//Print the adjacent nodes of each
	for (int n = 0; n < totalNodes; ++n)
	{
		cout << "\n Adjacency list of vertex "	<< n << "\n head ";
		for (int x : adj[n])
		{
			cout << "-> " << x;
		}
		
		cout << endl;

	}
	
}
/*We check if a graph is connected by doing the depth first method (with recursion) 
After completing the 1st traversal, if there is any node, which is not visited, then the graph is not connected*/
void Graph::DFS(int node, vector<int> adj[], bool visited[])
{
	//Mark 'node' as visited.
	visited[node] = true;
	cout << node << " ";

	// Recursion for all the nodes adjacent to this node 
	for (int adjacent : adj[node]) //Iterate over vector adj, the variable adjacent taking on the value of each element of the vector (so the value of the adjacent of the node 'node'), in series, until the end of the vector is reached.
	{
		//Output test: 
		//cout << endl<<"Value of adjacent: " << adjacent << "       Value of node: " << node <<"       Adjacent visited? (0=false, 1=true): " << visited[adjacent] <<endl;

		//We go inside the if statement if the adjacent node has not been visited yet. Else go back to outer loop (recursion), and check for another adjacent node.
		if (!visited[adjacent])
		{
			DFS(adjacent, adj, visited);
		}
	}
}

//Check if graph is connected
void Graph::checkConnectivity(vector<int> adj[], int totalNodes)
{
	cout <<"\nConnected components: ";

	//Initialize all vertices as not visited (= false)
	bool* visited = new bool[totalNodes];
	for (int node = 0; node < totalNodes; node++)
	{
		visited[node] = false;
	}

	for (int node = 0; node < totalNodes; node++)
	{
		//If 'node' is not visited before, call DFSUtil(v)
		if (visited[node] == false)
		{
			DFS(node, adj, visited);
			//If graph is connected, then we come back here after having visited all the nodes (recursion ends)
		}

		//Initially set the connection as true (means graph is connected)
		bool connection = true;

		//It comes here it if it has visited all the nodes or that there are nodes that cannot be reached
		//Check if all nodes are visited
		for (int node = 0; node < totalNodes; node++)
		{
			//A node has not been visited, then break. It means that graph is not connected.
			if (visited[node] == false)
			{
				cout << "\n\nThe graph is not connected.\n";
				connection = false;
				break;
			}
			//Else node has been visited, so check for the other nodes
			else
			{
				continue;
			}
		}

		//Not connected, so break out of outer loop
		if(connection == false)
			break;

		//Else its connected
		else
		{
			cout << "\n\nThe graph is connected\n";
			break;
		}
	}
}

