
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
        if(sz < 0) throw gfy();
        siz = sz;
        element = new T[sz];
    }
    ~array1d()
    {
        delete [] element;
    }
    array1d<T>operator+(const array1d<T>&temp)
    {
        //if(siz!=temp.siz)throw sizemismatch();
        array1d<T>sum(siz);
        for(int i = 0;i < siz;i++)
        sum.element[i] = element[i]+temp.element[i];
        return sum;
    }
    T operator[](int index)
    {
        if(index<1||index>siz) throw OutOfBounds();
        return element[index-1];
    }
    array1d<T>operator=(const array1d<T>&temp)
    {
        //if(siz!=temp.siz)throw sizemismatch();
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
        //if(siz!=temp.siz)throw sizemismatch();
        array1d<T>diff(siz);
        for(int i = 0;i < siz;i++)
            diff.element[i]=element[i]-temp.element[i];
        return diff;
    }
    void adddata()
    {
       // cout <<"enter array1d"<<endl;
        for(int i = 0;i < siz;i++)
            cin >> element[i];
    }
    void display()
    {
        cout<<endl;
        for(int i = 0;i < siz;i++)
        {
            cout<<element[i]<<" ";
        }
    }
    void ReSize(int sz = 0)
    {
        delete[]element;
        siz = sz;
        element = new T [siz];
    }
};

/*int main()
{
    int sia,sib,sic;
    cout<<"Enter the size of the array A that you fucking want"<<endl;
    cin >> sia;
    cout << endl;
    if(sia < 0 && sia > 65536) throw OutOfBounds();
    array1d<int> a(sia);
    a.adddata();
    cout << endl;
    a.display();
    cout << endl;
    cout<<"Enter the size of the array B that you fucking want"<<endl;
    cin >> sib;
    cout << endl;
    if(sib < 0 && sib > 65536) throw OutOfBounds();
    array1d<int> b(sib);
    b.adddata();
    cout << endl;
    b.display();
    cout << endl;
    sic = sib + sia;
    array1d<int> c(sic);
    c = a + b;
    cout<<"the sum of those two fucking arrays A and B are"<<endl;
    c.display();
    cout << endl;
    return 0;
}
*/
