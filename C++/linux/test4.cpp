#include<iostream>
#include"exception"

using namespace std;

template <class x>
class four
{   public:
    x *y;
    int nl=15;

    four(int s=1)
    {
     y=new x[s];
     *y=10;
    cout<<"\n"<<*y;
    }
    ~four(){
    delete y;
    }

    void len(x &a)
    {x* temp=new x[nl];
    int n=len(a);
     copy(a,a+n,temp);
     delete []a;
     a=temp;
    }


};

int main()
{
    four<int> s;
    int a[10]={8,9,7,8,95,4,6,2,2};

    s.len(a);



}
