#pragma once
#pragma once
#include <iostream>
using namespace std;

class List {
	struct node {
		int data;
		node* next;
	};

	node* head;

public:
	List()
	{
		head = nullptr;
	}
	//TASK 5 FUNCTION
	void DeleteNode(int delData)
	{
		node* curr = head;

		if (curr == nullptr)
		{
			cout << "List is Empty" << endl;
		}
		else
		{
			if (head->data == delData)
			{
				node* temp = head;
				head = head->next;
				delete temp;
			}
			while (curr->next != nullptr && curr->next->data != delData)
			{
				curr = curr->next;
			}
			
			if (curr->next == nullptr)
			{
				cout << "Value not found" << endl;
			}
			node* temp = curr->next;
			curr->next = curr->next->next;
			delete temp;

		}
	}
	//TASK 4 FUNCTION
	void InsertAtBeginning(int addData) {
		node* n = new node;
		n->data = addData;
		n->next = head;
		head = n;
	}
	//TASK 3 FUNCTION
	int SearchNode(int searchData) {
		int pos = 1;
		node* curr = head;
		while (curr != nullptr && curr->data != searchData)
		{
			curr = curr->next;
			pos++;
		}
		cout << "Node at position: " << endl;
		return pos;
	}
	//TASK 3 FUNCTION
	void PrintSecondNode() {
		int pos = 1;
		node* curr = head;
		while (curr != nullptr)
		{
			curr = curr->next;
			pos++;
			if (pos == 2)
			{
				cout << "Second node is: " << curr->data << endl;
			}
			else if (pos > 2)
			{
				break;
			}
		}

	}
	//TASK 2 FUNCTIONS
	int CountNodes()
	{
		int count = 0;
		node* curr = head;

		while (curr != nullptr)
		{
			count++;
			curr = curr->next;
		}
		cout << "Count:" << endl;
		return count;
	}
	//TASK 2 FUNCTION
	void AddNode(int data)
	{
		node* n = new node;
		n->data = data;
		n->next = nullptr;
		if (head == nullptr)
		{
			head = n;
		}
		else {
			node* curr;
			curr = head;
			while (curr->next != nullptr)
			{
				curr = curr->next;
			}
			curr->next = n;
		}
	}
	void PrintList()
	{
		node* curr;
		curr = head;
		if (curr == nullptr)
		{
			cout << "List is empty" << endl;
		}
		else {
			cout << "\nList:" << endl;
			while (curr != nullptr)
			{
				cout << curr->data << " ";
				curr = curr->next;

			}
		}
	}
	void ClearList()
	{
		node* curr = head;
		if (curr == nullptr)
		{
			cout << "List is already empty" << endl;
		}
		else {
			while (curr != nullptr)
			{
				node* temp = curr;
				curr = curr->next;
				delete temp;
			}
			head = nullptr;
		}
	}
};

