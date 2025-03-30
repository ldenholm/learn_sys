// learn_sys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>


int main()
{


    // container stuff

    //int a[10]; // stack
    //a[17] = 6;

    std::array<int, 10> b;
    /*for (int i = 0; i < b.size(); i++)
    {
        b[i] = somevalue();
    }*/

    for (std::array<int, 10>::iterator i = b.begin(); i != b.end(); i++)
    {
        modIteratorByRef(*i);
    }

    // more succinct expression
    for (auto i = b.begin(); i != b.end(); i++)
    {
        modIteratorByRef(*i);
    }

    // even more concise
    for (auto& i : b)
    {
        modIteratorByRef(i);
    }

    // traversal like: a + x * sizeof(int)

    //int* b = new int[10]; // heap

    //delete[] b; // free


    // V E C T O R S




    /*std::cout << "Hello World!\n";
      point_2d pt = {
        5,
        10
};
      pt.shiftUpByN(5);*/

}


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

int& modIteratorByRef(int &i)
{
    return i += 5;
}
