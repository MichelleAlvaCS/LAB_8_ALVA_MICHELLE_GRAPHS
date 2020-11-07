#include <iostream>
using namespace std;
#include "QueType.h"
#include "MaxItem.h"
#include "StackType.h"
#include "GraphType.h"
#include "GraphType.cpp"

int main() {

	GraphType<int> myGraph;
	myGraph.AddVertex(4);
	myGraph.AddVertex(10);
	//myGraph.AddEdge(1, 2,4);
	//myGraph.DeleteEdge(1,2);

	//working on adding edge and printing diagram.
	//Delete Edge needs definition
	//EdgeExists needs to be created
	//GraphType.cpp is included in main file head :(

	system("pause");
	return 0;
}