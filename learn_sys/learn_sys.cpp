// learn_sys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct point_2d
{
    int x, y;

    // all struct members are public by default
    void shiftUpByN(int n)
    {
        this->x += n;
        this->y += n;
    }
};

// generic linked list template example

template <typename T>
class linked_list
{
    struct node
    {
        T data;
        node* next;
    };

public:
    // some public members

private:

    node m_head;
};

int main()
{
    std::cout << "Hello World!\n";
    point_2d pt = {
        5,
        10
    };
    pt.shiftUpByN(5);

}
