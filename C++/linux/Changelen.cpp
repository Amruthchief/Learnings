
#include<iostream>
#include"exception"

using namespace std;

template <class x>
class four
{   public:


    x *temp;
    int len;
        four(int sz=1)
        {
            len=0;
            temp= new x[sz];
        }
         void display(x*& a)
        {
            int i=0;
            for(i;i<20;i++)
            cout<<a[i];

            }





};

int main()
{

    int a[10]={8,9,7,8,95,4,6,2,2};

    four<int> s;
    s.display(a);
    return 0;




}
