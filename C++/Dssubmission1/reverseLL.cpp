// Linkedlist implementation using Classes in C++
#include <iostream>
#include "exception.h"
using namespace std;

template<class X>
class Node {
public:
    X data;
    Node<X>* link;
};

template<class X>
class LinkedList{
    private:
    Node<X>* first;
    int len;
    int maxs;
    public:
    LinkedList() { // constructor
        first = NULL;
        len=0;
        maxs = 10;
    }

    ~LinkedList() {}; // destructor

   // LinkedList<X>& addNode(X value);
   LinkedList<X>& insert(int k, const X&value)
   {
       if(k<1 || k>maxs)
        throw Outofbounds();
       Node<X> *p;
       p = new Node<X>;
       if(!p)
        throw nomem();
       p->data = value;
       p->link = 0;
       if(!first)
        {
        first=p;
        len++;
       return *this;
        }

       if(k==1){
        p->link=first;
        first=p;
        len++;
        return *this;
       }
       else
        {
            Node<X> *temp=first;
            for(int i=1; i<k-1;i++){
                temp =  temp->link;
                len++;}
            p->link = temp->link;
            temp->link = p;
            //len++;
        }
   }



    LinkedList& reverseList()
    {
        Node<X>*p = NULL;
        Node<X>*n = NULL;
        Node<X>*current = NULL;
        current=first;
        while(current != NULL)
            {
                n = current->link;
                current->link = p;
                p = current;
                current = n;
                }
        first=p;
        return *this;
    }
    void display();
};

// function to add node to a list

//template<class X>
//LinkedList<X>& LinkedList<X>::addNode(X value) {
  //  Node<X>* newnode = new Node<X>;
    //newnode->data = value;
    //newnode->link = NULL;
    //if (first == NULL) {
     /*   first = newnode;
    }
    else {
        Node<X>* current = first; // first is not NULL
        while (current->link != NULL) {
            current = current->link; // go to end of list
        }
        current->link=newnode;
    }
    return *this;
}
*/

// reverse Linked List
//template<class X>
//void LinkedList<X>::reverseList() {
  //  Node<X>* temp = first;
    //Node<X>* nextnode = NULL;
    //Node<X>* revnode = NULL;
    //while (temp != NULL) {
      //  first = temp;
        //nextnode = temp->link;
        //temp->link = revnode;
        //revnode = temp;
        //temp = nextnode;
    //}
//}

template<class X>
void LinkedList<X>::display() {
    if (first == NULL) {
       // cout << "List is empty!" << endl;
       throw emptyList();
    }
    else {
        Node<X>* current = first;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->link;
        }
        cout << endl;
    }
}

int main() {
    LinkedList<int>* list = new LinkedList<int>();
    //list->insert(0,1);
    //list->insert(0,0);
    //list->insert(1,1);
    //list->insert(2,2);
    /*list->addNode(100);
    list->addNode(200);
    list->addNode(300);
    list->addNode(400);
    list->addNode(500); */
    cout << "Linked List data" << endl;
    list->display();
    list->reverseList();
    cout << "Reversed Linked List data" << endl;
    list->display();
    delete list;
    //cout << age;
    return 0;
}
