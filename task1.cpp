#include <iostream>
#include "List.h"
using namespace std;

void CreateThreeNodes(List& L)
{
	int value = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the value for the " << i + 1 << " node" << endl;
		cin >> value;
		L.AddNode(value);
	}

}

void task1()
{
	List L;
	L.PrintList();

	CreateThreeNodes(L);
	L.PrintList();

	L.ClearList();

}
