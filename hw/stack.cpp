// top varying method
#include <iostream>
using namespace std;
class Stack
{
private:
    int tos;
    int size;
    int *arr;

public:
    Stack(int size)
    {
        this->size = size;
        tos = -1;
        arr = new int(size);
    }
    void push(int x)
    {
        arr[++tos] = x;
        cout << "You succesfully push the element: " << x << endl;
        return;
    }
    void pop()
    {
        cout << "You have successfully popped off the element: " << arr[tos--] << endl;
        return;
    }
    bool isempty()
    {
        return (tos == (-1)) ? true : false;
    }
    bool isfull()
    {
        return (tos == size - 1) ? true : false;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s(0);
    int choice, x, size;

    while (choice != 5)
    {
        cout << "1. Create" << endl
             << "2. Push" << endl
             << "3. Pop" << endl
             << "4. Display " << endl
             << "5. Exit" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the size of the stack you want to create" << endl;
            cin >> size;
            s = Stack(size);
            cout << "Stack successfully created" << endl;
            break;
        case 2:
            if (!s.isfull())
            {
                cout << "Enter the element: " << endl;
                cin >> x;
                s.push(x);
            }
            else
                cout << "Stack is full" << endl;

            break;
        case 3:
            if (!s.isempty())
                s.pop();
            else
                cout << "Stack is empty" << endl;
            break;
        case 4:
            s.display();
            break;
        default:
            cout << "Enter a valid number" << endl;
            break;
        }
    }
}