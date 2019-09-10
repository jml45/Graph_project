

#include "graph.h"

using namespace graphData;

template <class Type>
const int myGraph<Type> :: max;

template <class Type>
const int myGraph<Type> ::addVertex(const Type& value)
{
	assert(size() < max);
	int newVertexNum = manyVertices;
	manyVertices++;
	
	for (int otherVertexNumber = 0; otherVertexNumber < manyVertices; otherVertexNumber++)
	{
		adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
		adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
	}
	labels[newVertexNumber] = value;
}

template <class Type>
void myGraph<Type> ::addEdge(int source, int target)
{
	assert(source < size() && target < size());
	adjacencyMatrix[source][target] = true;
}

template <class Type>
bool myGraph<Type> ::isEdge(int source, int target) const
{
	assert(source < size() && target < size());
	bool isAnEdge = false;
	isAnEdge = adjacencyMatrix[source][target];
	return isAnEdge;
}

template <class Type>
Type& myGraph<Type> :: operator[](int vertex)
{
	assert(vertex < size());
	return labels[vertex];
}

template <class Type>
Type myGraph<Type> :: operator[](int vertex) const
{
	assert(vertex < size());
	return labels[vertex];
}

template <class Type>
std::set<int> myGraph<Type> ::neighbors(int vertex) const
{
	assert(vertex < size());
	setd::set<int> vertexNeighbors;

	for (int index = 0; index < size(); index++)
	{
		if (adjacencyMatrix[vertex][index])
		{
			vertexNeighbors.insert(index);
		}
	}
	return vertexNeighbors;
}


template <class Type>
void myGraph<Type> ::removeEdge(int source, int target)
{
	assert(source < size() && target < size());
	adjacencymatrix[source][target] = false;
}