#include "excep.h"

//#include <stdio>
#include <iostream>
template <class T>
class array1d
{
    T *element;
    int siz;
public:
    array1d(int sz = 1)
    {
        siz = sz;
        element = new T[sz];
    }
    ~array1d();

    void ReSize(int sz)
    {
    delete [] element;
    siz=sz;
    element = new T[sz];

    }

    array1d <T> operator+(const array1d<T>&temp)
    {
        if(siz!=temp.siz)throw sizemismatch();
        array1d<T>sum(siz);
        for(int i = 0;i < siz;i++)
        sum.element[i] = element[i]+temp.element[i];
        return sum;
    }
    array1d<T>operator=(array1d<T>&temp)
    {
        if(siz!=temp.siz)throw sizemismatch();
        for(int i = 0;i < siz;i++)
            element[i] = temp.element[i];
        return *this;
    }
    array1d<T>operator-()
    {
        array1d<T>temp(siz);
        for(int i = 0;i< siz;i++)
            temp.element[i]=-element[i];
        return temp;
    }
    array1d<T>operator-(const array1d<T>&temp)
    {
        if(siz!=temp.siz)throw sizemismatch();
        array1d<T>diff(siz);
        for(int i = 0;i < siz;i++)
            diff.element[i]=element[i]-temp.element[i];
        return diff;
    }
    void display();
};
template<class X>
void array1d<X>::display() {
    for(int i = 0;i < siz;i++)
        cout << element[i];
}

/*int main()
{
    array1d<int> int a[10],b[5],c;
    c = b + a;
    return 0;


}*/
/*#include<iostream>
#include"exception.h"

using namespace std;

template<class T>
class Arrar1D
{
    T *ele;
    int size;
public:
    Arrar1D(int sz=1)
    {
        size=sz;
        ele= new T[sz];
    }
    ~Arrar1D(){delete []ele;}

    void store(int len=1)
    {
        if(len>size) throw Outofbounds();
        cout<<"Enter the elements:";
        for(int i=0;i<len;i++)
            cin>>ele[i];
    }
    void display(int len)
    {
        cout<<"The elemnts are:";
        for(int i=0;i<len;i++)
            cout<<ele[i];
        cout<<endl;
    }


};

int main()
{
Arrar1D<int> a(10),b(5);
a.store(5);
a.display(5);
b.store(2);
b.display(2);

return 0;
}
*/
