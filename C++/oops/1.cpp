
#include <iostream>
using namespace std;



int main()
{
    int x,y,z;
    for(int i=1;i<10000;i++)
    {
        for(int j=1;j<100000;j++)
        {
           for(int k=1;k<100000;k++)
           {
               if((i+j+k)==(i*j*k))
               {
                   cout<<i<<j<<k<<endl;
                   break;
               }

           }


        }
        cout<<endl;
    }
return 0;
}
