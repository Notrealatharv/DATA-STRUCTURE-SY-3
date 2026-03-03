#include<iostream>
using namespace std;
#define MAX 5

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if(top == MAX - 1) {
            cout << "Stack Overflow\n";
        } else {
            top++;
            arr[top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    void pop() {
        if(top == -1) {
            cout << "Stack Underflow\n";
        } else {
            cout << arr[top] << " popped from stack\n";
            top--;
        }
    }

    void display() {
        if(top == -1) {
            cout << "Stack is Empty\n";
        } else {
            cout << "Stack elements are:\n";
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << endl;
            }
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    while(true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}