#include <iostream>
#include <string>
#include <math.h>

using namespace std;
void insertion(int arr,int n )
{
    arr=&a;
int i,key,j;
for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        
    }


}


int main()
{
    int a[]={5,9,8,96,2,24,6,8,3,78};

    insertion(*a,10);



    return 0;

} // namespace std