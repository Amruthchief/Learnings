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
class llist
{
    node<T> *first;
public:
    llist()
        { first=0;
            /* int len=0;
            node<T> *next;
            next = new node<T>;

           while(first)
            {
                next =first->link;
                    delete first;
                    first=next;

            }*/
        }
        int length()
        {
            node <T>*current =first;
            int len=0;
            while(current) 
                {
                    len++;
                    current=current->link;
                }
                return len;
        }

    llist<T> insert(int k,const T&x)
    {
        if (k<0) throw Outofbounds();
        node<T> *p= first;
        for(int i=1;i<k;i++)
            p=p->link;
    if (k>0&&!p) throw Outofbounds();
        node<T> *y= new node <T>;

        y->data=x;
        if(k)
        {

        y->link=p->link;
        p->link=y;
        }
        else
        {
            y->link=first;
            first=y;
        }
        return *this;
    }

    llist<T> delete1(int k)
    {
        //if (k<0 || k>len) throw Outofbounds;
        node<T> *temp=first;
        if(k==1)
        {
            first=temp->link;
            delete temp;
            return *this;
        }
        else 
        for(int i=1;i<k-1;i++)
        {
            temp=temp->link;
        }

        node<T> *temp1=temp->link;
        temp->link=temp1->link;
        delete(temp1);

        return *this;
    }


    void display()
    {
        node <T> *temp=first;
    
        while(temp)
        {cout<<temp->data<<" ";

        temp=temp->link;
        }
        cout<<endl;
    }
    void reverse()
    {
        node<T> *current=first,*prev=0,*next;
        while(current!=0)
        {
            next=current->link;
            current->link=prev;
            prev=current; 
            current=next;

        }
        first=prev;
        
    
    }

};



int main()
{
    llist<int> a;
    a.insert(0,30);

    a.insert(1,25);
    a.insert(2,3);
    a.insert(3,56);
    a.display();
    a.reverse();
    a.display();


   /// cout<<a.length()<<endl;
    return 0;
}
