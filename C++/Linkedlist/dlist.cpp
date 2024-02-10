#include<iostream>

using namespace std;

template <class T>
class node
{   public:
    T data;
    node <T> *prev,*next;
};

template <class T>

class dlist
{ 
    public:
    node <T> *first;
    
    dlist()
    {
        first=0;
        
    }
   

    dlist<T> insertH(int k)
    {
        node<T> *newnode=new node<T>;
        newnode->data=k;
       // newnode->prev=0;
        //newnode->next=0;
        if (first==0)
        { node<T> *p=new node<T>;
            p= newnode;
            (*p).prev=0;
            (*p).next=0;
            first=p;
        }
        first->prev=newnode;
        newnode->next=first;
        first =newnode;        
    }


    dlist<T> insertT(int k)
    {

    }

    void display()
    {
        node<T> *temp =first;
        while(temp)
        {
            cout<<temp->data;
            temp=temp->next;
        }
    }



};





int main()
{
    dlist<int> a;
   // a.insertH(6);
    a.insertH(9);
    a.insertH(12);
    a.insertH(15);
    a.display();

    
    return 0;
}
    