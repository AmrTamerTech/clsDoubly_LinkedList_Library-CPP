#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDoublyLinkedList
{
private:
	struct Node
	{
		T Data;
		Node* Next;
		Node* Prev;
	};

	Node* Head;

	Node* Find(Node* Start, T Value)
	{
		while (Start != NULL)
		{
			if (Start->Data == Value)
				return Start;
			Start = Start->Next;
		}
		return NULL;
	}

	void PrintNodeDetails(Node* Current)
	{
		if (!Current)
		{
			cout << "NULL <--> NULL\n";
			return;
		}
		if (Current->Prev != NULL)
			cout << Current->Prev->Data;
		else
			cout << "NULL";

		cout << " <--> " << Current->Data << " <--> ";

		if (Current->Next != NULL)
			cout << Current->Next->Data << endl;
		else
			cout << "NULL\n";
	}

public:

	clsDoublyLinkedList()
	{
		Head = NULL;
	}

	void InsertAtBeginning(T Value)
	{
		Node* NewNode = new Node();

		NewNode->Data = Value;
		NewNode->Prev = NULL;
		NewNode->Next = Head;

		if (Head != NULL)
		{
			Head->Prev = NewNode;
		}
		Head = NewNode;
	}

	void InsertAfter(T ValuePrev, T Value)
	{
		if (Head == NULL) return;

		Node* NodeFound = Find(Head, ValuePrev);

		if (!NodeFound) return;

		Node* NewNode = new Node();

		NewNode->Data = Value;
		NewNode->Prev = NodeFound;
		NewNode->Next = NodeFound->Next;

		if (NewNode->Next != NULL) NewNode->Next->Prev = NewNode;

		NodeFound->Next = NewNode;
	}

	void InsertAtEnd(T Value)
	{
		Node* NewNode = new Node();
		NewNode->Data = Value;
		NewNode->Next = NULL;

		if (Head == NULL)
		{
			Head = NewNode;
			NewNode->Prev = NULL;
		}
		else
		{
			Node* LastNode = Head;

			while (LastNode->Next != NULL)
			{
				LastNode = LastNode->Next;
			}
			NewNode->Prev = LastNode;
			LastNode->Next = NewNode;
		}
	}

	void DeleteNode(T ValueOfNode)
	{
		Node* FoundNode = Find(Head, ValueOfNode);

		if (!Head || !FoundNode) return;

		if (Head == FoundNode) Head = FoundNode->Next;
		if (FoundNode->Next) FoundNode->Next->Prev = FoundNode->Prev;
		if (FoundNode->Prev) FoundNode->Prev->Next = FoundNode->Next;
		delete FoundNode;
	}

	void DeleteFirstNode()
	{
		if (!Head) return;

		Node* NodeFirst = Head;
		Head = Head->Next;
		if (Head) Head->Prev = NULL;

		delete NodeFirst;
	}

	void DeleteLastNode()
	{
		if (!Head) return;

		Node* LastNode = Head;

		if (!LastNode->Next)
		{
			Head = NULL;
			delete LastNode;
			return;
		}

		while (LastNode->Next != NULL)
			LastNode = LastNode->Next;
		LastNode->Prev->Next = NULL;

		delete LastNode;
	}

	void PrintListDetails()
	{
		Node* Temp = Head;
		cout << "\n";
		while (Temp != NULL)
		{
			PrintNodeDetails(Temp);
			Temp = Temp->Next;
		}
		cout << "\n";
	}

	void PrintElementWithoutDetails()
	{
		cout << "\n";
		Node* Temp = Head;
		while (Temp != NULL)
		{
			cout << Temp->Data << " ";
			Temp = Temp->Next;
		}
		cout << "\n";
	}

	void PrintList()
	{
		cout << "\nNULL <--> ";
		Node* Temp = Head;
		while (Temp != NULL)
		{
			cout << Temp->Data << " <--> ";
			Temp = Temp->Next;
		}
		cout << "NULL\n";
	}

	~clsDoublyLinkedList()
	{
		while (Head != NULL)
		{
			Node* Temp = Head;
			Head = Head->Next;
			delete Temp;
		}
	}
};

