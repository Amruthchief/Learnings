
#include<iostream>

using namespace std;

templete<class T>
class Matrix
{
       int rows;
       int cols;
       T *element;
   public:
    Matrix(int r=0,int c=0)
    {
        rows =r;cols=c;
        element=new T[r*c];

    }
    ~Matrix(){delete []element;}

    Matrix<T> & store

};
