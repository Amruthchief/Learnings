#include<iostream>
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
            cout<<ele[i];/media/fuzz/OS_SSD/Users/amrut/Documents/C++
        cout<<endl;
    }

    Arrar1D<T> operator+(const Arrar1D<T> &temp)
    {
        Arrar1D<T> sum(size);
        for(int i=0;i<size;i++)
            sum.ele[i]=ele[i]+temp.ele[i];
        return sum;
    }/media/fuzz/OS_SSD/Users/amrut/Documents/C++


};

int main()
{
Arrar1D<int> a[10],b[5];
a.store(2);
a.display(2);
b.store(2);
b.display(2);

Arrar1D<int> c=a+b;
c.display(2);

return 0;
}


