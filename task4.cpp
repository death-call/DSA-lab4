#include <iostream>
#include "List.h"
using namespace std;

void task4()
{
	//Extension of class is in List.h
	// InsertAtBeginning function in List.h
	List l;
	l.DeleteNode(10);

	l.InsertAtBeginning(20);
	l.PrintList();
	cout << endl;

	l.InsertAtBeginning(10);
	l.PrintList();
	cout << endl;

	l.AddNode(30);
	l.PrintList();
	cout << endl;

	l.ClearList();
}