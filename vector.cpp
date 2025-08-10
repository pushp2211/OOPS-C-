#include<bits/stdc++.h>
using namespace std;

class Vector_class{
public:
    int size;
    int capacity;
    int *arr;

    Vector_class(){
        size = 0;
        capacity = 1;  // Initial capacity
        arr = new int[capacity];  // Dynamic memory allocation for array
    }
    void push_back(int value) {
        if (size == capacity) {
            // Double the capacity if size exceeds current capacity
            capacity *= 2;
            int *newArr = new int[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];  // Copy old elements to new array
            }
            delete[] arr;  // Free old array memory
            arr = newArr;  // Point to the new array
        }
        arr[size++] = value;  // Add new element and increment size
    }

    int get(int index) {
        if (index < 0 || index >= size) {
           cout << "Index out of bounds" << endl;
              return -1;  // Return -1 for invalid index
        }
        return arr[index];  // Return element at specified index
    }
  
    void remove(){
        if (size > 0) {
            size--;  // Decrease size to remove last element
        } else {
            cout << "Vector is empty, nothing to remove." << endl;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";  // Print each element
        }
        cout << endl;
    }
}; // End of Vector_class definition

int main() {
    Vector_class v;  // Create a vector object
    v.push_back(10);  // Add elements to the vector
    v.push_back(20);
    v.push_back(30);
    v.display();  // Display current elements in the vector

    cout << "Element at index 1: " << v.get(1) << endl;  // Access element at index 1
    v.remove();  // Remove last element
    v.display();  // Display after removal

    return 0;
}