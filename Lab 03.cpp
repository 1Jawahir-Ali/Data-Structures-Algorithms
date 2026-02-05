#include<iostream>
using namespace std;
// Array as an Abstract Data Type
class ArrayADT{
private:
    int arr[10];    
    int size;      
public:
    ArrayADT(){ size = 0; }  //Constructor

// Add element to array
    void insert(int value){
        if (size < 10) {
            arr[size] = value;
            size++;
        } else {
            cout<<"Array is full!"<<endl;
        }
    }

// Display all elements of Array
    void display() {
        cout<<"Array elements: ";
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

// Search element by value
    void search(int value){
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                cout<<"Element "<<value<<" found at index:"<<i<<endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout<<"Element not found!"<<endl;
    }

// Delete element by index
    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index!" << endl;
        } else {
            for (int i = index; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
            cout<<"Element deleted successfully."<<endl;
        }
    }
};

int main() {
    ArrayADT myArray;

    myArray.insert(3);
    myArray.insert(7);
    myArray.insert(9);
   
    myArray.display();

    myArray.search(7);
    myArray.remove(2);

    myArray.display();

    return 0;
}

