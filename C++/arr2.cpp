#include "excep.h"
#include "arr11.h"
#include<iostream>
using namespace std;

template<class T>
class array2d
{
    int rows;
    int cols;
    array1d<T> *row;
public:
    array2d(int r = 0,int c = 0)
    {
        if (r<0 || c<0) throw OutOfBounds();
        rows = r;
        cols = c;
        row = new array1d<T>(rows);
        for(int i = 0;i < rows;i++)
            row[i].ReSize(cols);
    }
    array1d<T>&operator[](int pos)
    {
        return row(pos);
    }
    void adddata1()
    {
        cout<<endl<<"In this array2d element"<<endl;
        for(int i = 0;i < rows;i++)
            row[i].adddata();
    }
    void display1()
    {
        //cout<<"array elements are"<<endl;
        for(int i = 0;i < rows;i++)
        {
            row[i].display();
        }
    }

    array2d<int>operator+(const array2d<T>&v)
    {
        if(rows!=v.rows||cols!=v.cols)throw sizemismatch();
        array2d<T>sum(rows,cols);
        for(int i = 0;i<rows;i++)
            sum.row[i]=row[i]+v.row[i];
        return sum;
    }

};

int main()
{
    int i1,j1;
    cout<<"Enter the size of the 1st array2d i of (i,j) "<<endl;
    cin >> i1;
    cout << endl;
    cout<<"Enter the size of the array2d j of (i,j) "<<endl;
    cin >> j1;
    cout << endl;
    cout<<"Enter elements in the array2d of size (%0d , %0d)"<<endl;
    array2d<int> a(i1,j1);
    a.adddata1();
    cout<<endl;
    cout<<"The array2d is"<<endl;
    a.display1();
    cout<<endl;
    cout<<"Enter elements in the array2d of size (%0d , %0d)"<<endl;
    array2d<int> b(i1,j1);
    b.adddata1();
    cout<<"The array2d is"<<endl;
    b.display1();
    cout<<endl;
    array2d<int>c(i1,j1);
    c = a + b;
    c.display1();
    /*array2d<int>a(2,2),b(2,2),c;
    a.adddata1();
    b.adddata1();
    c = a + b;
    c.display1();*/

    return 0;
}
