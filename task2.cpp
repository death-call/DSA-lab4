#include <iostream>
#include "List.h"
using namespace std;

void task2()
{
	//Extension of class is in List.h
	//AddNode(int addData) which inserts a new node at the end in List.h 
	//	CountNodes(), which returns the number of nodes is in List.h
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
	cout << l.CountNodes() << endl;

	l.ClearList();


}