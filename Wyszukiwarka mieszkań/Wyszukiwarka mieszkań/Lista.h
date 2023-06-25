#pragma once
#include <iostream>

template<typename T>
class CustomList {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int size;

public:
    CustomList() : head(nullptr), tail(nullptr), size(0) {}
    CustomList(const CustomList& other) : head(nullptr), tail(nullptr), size(0) {
        Node* current = other.head;
        while (current != nullptr) {
            pushBack(current->data);
            current = current->next;
        }
    }

    ~CustomList() {
        clear();
    }

    void pushBack(const T& value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void popBack() {
        if (size == 0) {
            std::cout << "List is empty. Cannot perform pop operation.\n";
            return;
        }

        if (head == tail) {
            delete tail;
            head = nullptr;
            tail = nullptr;
        }
        else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            delete tail;
            tail = current;
            tail->next = nullptr;
        }
        size--;
    }

    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        size = 0;
    }

    int getSize() const {
        return size;
    }

    
    T& findByPosition(int position) const {
        if (position < 0 || position >= size) {
            throw std::out_of_range("Invalid position");
        }

        Node* current = head;
        int currentPosition = 0;
        while (currentPosition != position) {
            current = current->next;
            currentPosition++;
        }

        return current->data;
    }

    void printList() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << std::endl;
            current = current->next;
        }
        std::cout << std::endl;
    }

   
    CustomList& operator=(const CustomList& other) {
        if (this == &other) {
            return *this;  // Self-assignment, no action needed
        }

        // Clear the current list
        clear();

        // Copy the elements from the other list
        Node* current = other.head;
        while (current != nullptr) {
            pushBack(current->data);
            current = current->next;
        }

        return *this;
    }

  

    Node* find_int(const int& value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->data.function == value) {
                return current;
            }
            current = current->next;
        }
        return nullptr;  // Element not found
    }

   
    Node* find(const T& value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return current;
            }
            current = current->next;
        }
        return nullptr;  // Element not found
    }

    
    bool contains(const T& value) const {
        return find(value) != nullptr;
    }

    bool remove(const T& value) {
        if (head == nullptr) {
            return false;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return true;
        }

        Node* prev = head;
        Node* current = head->next;

        while (current != nullptr) {
            if (current->data == value) {
                prev->next = current->next;
                if (current == tail) {
                    tail = prev;
                }
                delete current;
                size--;
                return true;
            }
            prev = current;
            current = current->next;
        }

        return false; 
    }

    bool containsAll(const CustomList<T>& list_2) {
        Node* current = list_2.head;
        while (current != nullptr) {
            if (find(current->data) == nullptr) {
                return false; 
            }
            current = current->next;
        }
        return true; 
    }
};



