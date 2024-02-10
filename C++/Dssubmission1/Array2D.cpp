#include<iostream>
#include"exception.h"
#include"Array1D.h"


using namespace std;

template<class T>
class Arrar2D
{
    int rows;
    int cols;
    Arrar1D<T> *row;
public:
    Arrar2D(int r=1,int c=1)
    {
        rows=r;cols=c;
        row= new Arrar1D[rows];

        for int i=0;i<rows;i++)
        {
            row[i].resize(cols);
        }
    }

    ~Arrar2D()
    {
        for(int i=0;i<rows;i++)
            {delete row[i];}
        delete[]row;
    }

 void store(int len=1)
    {
        //if(len>size) throw Outofbounds();
        cout<<"Enter the elements:";
        for(int i=0;i<len;i++)
            cin>>row[i].store();
    }
 void display(int len=1)
 {
     cout<<"the elements:"
     for(int i=0;i<len;i++)
     cout<<row[i].display();

 }

};


int main()
{
Arrar2D<int> a(10,10),b(10,10);
a.store(2);
a.display(2);
b.store(2);
b.display(2);

Arrar1D<int> c=a+b;
c.display(2);

return 0;
}
