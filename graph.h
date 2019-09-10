#pragma once
#ifndef graph_h
#define graph_h
#include <set>


namespace graphData
{
	template <classs Type>
	class myGraph
	{
	

	private:
		static const int max = 20;
		bool adjacencyMatrix[max][max]; //adjacency matrix
		Type labels[max];
		int manyVerticies; //amount of verticies
	public:
		myGraph();
		~myGraph();


		void addVertex(const Type& value);
		void addEdge(int source, int target);
		void removeEdge(int source, int target);
		Type& operator [] (int vertex); //overload []
		Type operator [] (int vertex) const; //copies []
		int size();
		bool isEdge(int source, int target); //check for edges
		std::set<int> neighbors(int vertex) vertex const;

	};

	myGraph::myGraph()
	{
	}

	myGraph::~myGraph()
	{
	}
}


#endif