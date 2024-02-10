#include<iostream>
#include"exception.h"

template<class T>
class queue
{

    int front,rear,max;
    T *que;
public:
queue(int m=10)
{
    max=m;
    que=new T [max];
    front=rear=0;
}
~queue(){delete []que;}
bool isempty()
{return front==rear; }
bool isfull()
{return(((rear+1)%max==front)?1:0);}

T first()
{
    if (isempty()) throw Outofbounds();
    return que[(front+1)%max];
}
T last()
{
 
   if (isempty()) throw Outofbounds();
    return que[rear];
}
queue<T>& enqueue(const T &x)
{
    if( isfull()) throw nomem();
    rear=(rear+1);
    que[rear]=x;
    return *this;
}
queue<T>& dequeue()
{
  if (isempty()) throw Outofbounds();
    front=(front+1);
     return *this;
}
void display()
    {
        for(int i=front;i<rear+1;i++)
        cout<<que[i]<<endl;

    }


};


int main()
{
    
    
    queue<int> a;
    
    a.enqueue(6);
    a.enqueue(56);
    a.enqueue(68);
    a.enqueue(28);
    a.display();
    a.dequeue();
    a.dequeue();a.dequeue();
    a.display();
    return 0;


}
