#include <iostream>
#include "List.h"
using namespace std;

void task6()
{
	int choice;
    List list;
    int value;

    do
    {
        cout << "\n========== MENU ==========" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Search by Value" << endl;
        cout << "4. Delete by Value" << endl;
        cout << "5. Display All Nodes" << endl;
        cout << "6. Count Nodes" << endl;
        cout << "7. Display Second Node" << endl;
        cout << "8. Exit" << endl;
        cout << "==========================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.InsertAtBeginning(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.AddNode(value);
            break;

        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            list.SearchNode(value);
            break;

        case 4:
            cout << "Enter value to delete: ";
            cin >> value;
            list.DeleteNode(value);
            break;

        case 5:
            list.PrintList();
            break;

        case 6:
            cout << "Number of nodes: "
                << list.CountNodes() << endl;
            break;

        case 7:
            list.PrintSecondNode();
            break;

        case 8:
            list.ClearList();
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number from 1 to 8."
                << endl;
        }

    } while (choice != 8);

}