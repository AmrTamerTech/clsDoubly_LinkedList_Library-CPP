# 📌 clsDoublyLinkedList – C++ Template-Based Doubly Linked List

A versatile and efficient generic doubly linked list implementation in C++. This library supports essential list operations such as insertion, deletion, searching, and bidirectional traversal using C++ templates for flexibility with any data type. 🚀

---

## 🌟 Project Overview

`clsDoublyLinkedList` is a doubly linked list class in C++ that manages nodes linked in both forward and backward directions. It allows dynamic data management with these key features:

- 🔄 Insert nodes at the beginning, end, or after a specific value  
- ❌ Delete nodes by value, first node, or last node  
- 🔍 Search nodes by value  
- ↔️ Traverse the list forward and backward  
- 🖨️ Print detailed node info or list content  
- ♻️ Automatic cleanup of allocated memory in the destructor  

This template class is type-agnostic, allowing storage of any data type.

---

## ✨ Features

### 🔹 Insertion Operations
- `InsertAtBeginning(Value)`: Insert a node at the start of the list.  
- `InsertAtEnd(Value)`: Insert a node at the end of the list.  
- `InsertAfter(ValuePrev, Value)`: Insert a node after a node containing `ValuePrev`.  

### 🔹 Deletion Operations
- `DeleteNode(Value)`: Delete the node containing the specified value.  
- `DeleteFirstNode()`: Remove the first node in the list.  
- `DeleteLastNode()`: Remove the last node in the list.  

### 🔹 Searching & Traversal
- `Find(Node*, Value)`: Internal function to find a node by value.  
- `PrintNodeDetails(Node*)`: Print detailed info of a node including its neighbors.  
- `PrintListDetails()`: Print all nodes with detailed info.  
- `PrintList()`: Print the list showing forward links visually.  

### 🔹 Memory Management
- The destructor frees all allocated nodes automatically to prevent memory leaks.

---

## 🚀 How It Works

- **Insertion & Deletion**: Nodes can be dynamically added or removed at various positions while maintaining the integrity of forward and backward links.  
- **Searching & Access**: Nodes are located via value, enabling targeted insertions or deletions.  
- **Traversal & Printing**: The list can be traversed and printed in detail, showing links to previous and next nodes.  
- **Memory Safety**: Proper dynamic allocation and deletion prevent memory leaks.

---

## ⚙️ Technologies Used

- **Language**: C++  
- **Templates**: Enable generic programming for any data type  
- **Pointers**: Manage dynamic nodes linked in both directions  
- **Doubly Linked List**: Supports bidirectional traversal for efficient operations  

---

## 🎯 Learning Outcomes

This project helps you understand:

- ✅ Dynamic memory allocation and pointer manipulation in C++  
- ✅ Linked list operations including insertion, deletion, searching, and bidirectional traversal  
- ✅ Template programming for type-agnostic data structures  
- ✅ Implementing complex data structures from scratch for educational purposes

---

## 📜 License

This project is open-source! Feel free to use, modify, and enhance it in your own projects. 🚀

---

## 🤝 Contributing

Contributions and improvements are welcome! Please open an issue or submit a pull request with your ideas.

---

## 🏁 Getting Started

1. Download or clone the repository.  
2. Include `clsDoublyLinkedList.h` in your C++ project.  
3. Compile your code with a standard C++ compiler:  
   ```bash
   g++ main.cpp -o output
