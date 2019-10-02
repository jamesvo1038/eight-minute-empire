// As1Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Map.h"
#include <vector>
using namespace std;

int main()
{
	//To use methods defined in the Graph class of Map.h
	Graph graph;

	const int totalNodes = 7; //totalNodes = total number of countries/regions


	//Test creation of map1-----------------------------------------------------------------------------------------------
	cout << "TEST CREATION OF MAP1-----------------------------------------------------------------------\n";

	//Vector store adjacency lists of all nodes
	//Vector of size "totalNodes' (has to be a constant value); Note: Its a vector [][][][], and in each of those brackets "[]" there is an array. Each of those [] will represent a node, and in its array will be all the adjacent nodes.
	vector <int> adj[totalNodes];

	//Each country is associated with a number (ex: Country Japan is node 0, Canada is node 1)
	graph.addEdge(adj, 0, 1);
	graph.addEdge(adj, 0, 2);
	graph.addEdge(adj, 1, 3);
	graph.addEdge(adj, 1, 2);
	graph.addEdge(adj, 2, 3);
	graph.addEdge(adj, 5, 2);
	graph.addEdge(adj, 6, 4);
	graph.addEdge(adj, 6, 0);

	//Print the graph
	graph.printGraph(adj, totalNodes);

	//Check Connectivity
	graph.checkConnectivity(adj, totalNodes);



	//Test creation of map2-----------------------------------------------------------------------------------------------
	cout << "\nTEST CREATION OF MAP2-------------------------------------------------------------------------\n";
	vector <int> adj2[7];

	//Each country is associated with a number (ex: Country Japan is node 0, Canada is node 1)
	graph.addEdge(adj2, 0, 1);
	graph.addEdge(adj2, 0, 2);
	graph.addEdge(adj2, 1, 3);
	graph.addEdge(adj2, 1, 2);
	graph.addEdge(adj2, 2, 3);
	graph.addEdge(adj2, 5, 2);
	graph.addEdge(adj2, 6, 4);

	//Print the graph
	graph.printGraph(adj2, 7);

	//Check Connectivity
	graph.checkConnectivity(adj2, 7);




	//Test creation of map3-----------------------------------------------------------------------------------------------
	cout << "\nTEST CREATION OF MAP3-------------------------------------------------------------------------\n";
	vector <int> adj3[4];

	//Each country is associated with a number (ex: Country Japan is node 0, Canada is node 1)
	graph.addEdge(adj3, 0, 1);
	graph.addEdge(adj3, 0, 2);
	graph.addEdge(adj3, 1, 3);

	//Print the graph
	graph.printGraph(adj3, 4);

	//Check Connectivity
	graph.checkConnectivity(adj3, 4);

	return 0;
}

