#include <iostream>
#include"exception.h"

using namespace std;


template<class T>
class node
{
public:
    T data;
    node<T> *link;
};

template<class T>
class linkstack
{
public:
node <T> *top;
linkstack()
{
 top=0;   
}

linkstack<T> & push(const T& x)
{
    node<T> *a= new node<T>;
    a->data=x;
    a->link=top;
    top=a;
    return *this;

}
linkstack & pop()
{
    if (isempty()) throw Outofbounds();
    node<T> *a=top;
    top=top->link;
    delete a;
    return *this;
}
bool isfull()
{
try
{ 
    node <T> *p= new node<T>;
    delete p;
    return false;
}
catch(bad_alloc){return true;}
}

bool isempty()  const {return  top==0;}

void display()
    {
        node <T> *temp=top;
    
        while(temp)
        {cout<<temp->data<<" ";

        temp=temp->link;
        }
        cout<<endl;
    }

};/*
int main()
{
    linkstack<int> a;
    a.push(8);
    
   a.push(9);

    a.push(15);

    a.push(20);
    a.display();
    a.pop();
    a.display();
   
   
    return 0;
}*/