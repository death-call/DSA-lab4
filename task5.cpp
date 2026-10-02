#include <iostream>
#include "List.h"
using namespace std;

void task5()
{
	//Extension of class is in List.h
	// DeleteNode function in List.h
	List l;
	l.DeleteNode(20);

	l.InsertAtBeginning(10);
	l.AddNode(20);
	l.AddNode(20);
	l.AddNode(30);

	l.PrintList();
	cout << endl;

	l.DeleteNode(20);
	l.PrintList();
	l.ClearList();
}