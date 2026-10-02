#include <iostream>
#include "List.h"
using namespace std;

void task3()
{
	//Extension of class is in List.h
	// SearchNode(int searchData) in List.h 
	//PrintSecondNode() to display only the second node is in List.h
	List l;
	//Test n=0
	cout << l.CountNodes() << endl;
	//Test n=1
	l.AddNode(10);
	cout << l.CountNodes() << endl;
	l.ClearList();

	//Test n=5
	l.AddNode(10);
	l.AddNode(20);
	l.AddNode(30);
	l.AddNode(40);
	l.AddNode(50);

	l.PrintSecondNode();

	cout << l.SearchNode(20);

	l.ClearList();
}