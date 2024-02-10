#include<iostream>
using namespace std;
void swap(int &first,int &sec)
{
    int temp=first;
    first=sec;
    sec=temp;

}
int main()
{
  int a=5,b=6;
    swap(a,b);
    cout<<a<<b;

    return 0;

}
