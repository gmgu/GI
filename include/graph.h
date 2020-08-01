#ifndef __GRAPH_H_
#define __GRAPH_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Graph
{
public:
	Graph(string);
	~Graph();
	void clear();
	void readGraph(string);

	long long numNode = 0;
	long long numEdge = 0;
	long long* d = NULL; //degree
	long long* l = NULL; //label
	char* one = NULL; //if coreness-1, then one == 1.
	long long** e = NULL; //edge
	long long* adjPos = NULL; //adjPos[i] = adjPos[i-1] + degree[i-1]
};

class DAG
{
public:
	DAG();
	~DAG();
	void clear();

	long long numNode = 0;
	long long numEdge = 0;
	long long* dagChildSize = NULL;
	long long* dagParentSize = NULL;
	long long* dagArr = NULL;
};

//TODO: void readGraph() -> int readGraph() that returns success/fail
//TODO: print example file of the igraph format

#endif