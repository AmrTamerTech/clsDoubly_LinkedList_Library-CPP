# 📌 Doubly Linked List Library (`clsDoublyLinkedList`) ⚡

A C++ template-based **doubly linked list** that supports essential operations like insertion, deletion, and traversal in both forward and backward directions. 🚀

---

## 🌟 Project Overview

This library implements a generic doubly linked list using C++ templates. Each node contains:

- `Data`: the value of any type `T`
- `Next`: pointer to the next node
- `Prev`: pointer to the previous node

Supported operations include:

✅ Inserting nodes at the beginning, end, or after a specific value  
✅ Deleting the first, last, or a specific node  
✅ Searching for nodes by value  
✅ Printing the list in different formats  
✅ Auto memory cleanup on destruction

---

## ✨ Features

### 🔹 Insertion Operations
- `InsertAtBeginning(T Value)` — Add node at the front
- `InsertAtEnd(T Value)` — Add node at the end
- `InsertAfter(T ValuePrev, T Value)` — Insert after a node with a specific value

### 🔹 Deletion Operations
- `DeleteNode(T Value)` — Delete node with a specific value
- `DeleteFirstNode()` — Delete the first node
- `DeleteLastNode()` — Delete the last node

### 🔹 Display & Traversal
- `PrintList()` — Show all elements: `NULL <--> val1 <--> val2 <--> ... <--> NULL`
- `PrintListDetails()` — Show each node with its previous and next values
- `PrintElementWithoutDetails()` — Print only data values

### 🔹 Search
- `Find(Node* Start, T Value)` — Private method to locate a node with the given value

---

## 🚀 How It Works

- Nodes are dynamically allocated and linked in both directions (Prev and Next).
- Insertions/deletions update adjacent node pointers automatically.
- `PrintNodeDetails(Node* Current)` is a helper function to show surrounding node values.

---

