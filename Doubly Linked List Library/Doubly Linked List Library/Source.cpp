#include <iostream>
#include "clsDoublyLinkedList.h"
using namespace std;

int main()
{
	clsDoublyLinkedList <int> Doubly1;
	Doubly1.InsertAtBeginning(5);
	Doubly1.InsertAtBeginning(4);
	Doubly1.InsertAtBeginning(3);
	Doubly1.InsertAtBeginning(2);
	Doubly1.InsertAtBeginning(1);
	Doubly1.InsertAtEnd(600);
	//PrintElementWithoutDetails(Head);
	Doubly1.PrintList();
	Doubly1.PrintListDetails();

	Doubly1.InsertAfter(2, 500);
	Doubly1.PrintList();
	Doubly1.PrintListDetails();

	Doubly1.DeleteNode(3);
	Doubly1.PrintList();
	Doubly1.PrintListDetails();

	Doubly1.DeleteFirstNode();
	Doubly1.PrintList();
	Doubly1.PrintListDetails();

	Doubly1.DeleteLastNode();
	Doubly1.PrintList();
	Doubly1.PrintListDetails();
}