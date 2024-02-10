#include <iostream>
//#include"exception.h"

using namespace std;


/*template<class T>
class node
{
public:
    T data;
    node<T> *link;
};*/

template<class T>
class stack
{   
    int top,size;
    T *ele;

    public:
    stack(int sz=1)
    {
        size=sz-1;
        top=-1;
        ele= new T[sz];
    }
    
    void push(const T& x)
    {
        ele[++top]=x;
        //return *this;
    }

    void pop()
    {
        top--;
        //return *this;
    }
   T top1()
    {
        return ele[top];
    }
void display()
    {
        for(int i=0;i<top;i++)
        cout<<ele[i]<<endl;

    }


};

int main()
{
    stack<int> a;
    
    a.push(8);
    
    a.push(9);

    a.push(15);

    a.push(20);
    a.display();
    a.pop();
    a.display();
    a.top1();
    a.display();

    return 0;

}
