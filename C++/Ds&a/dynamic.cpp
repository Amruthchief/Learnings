#include<iostream>

using namespace std;

int main()
{
    int *i;int *arr;


    i=new int;
    arr= new int [10];

    *i=3;
    arr[4]=5;

    cout<<*i<<arr[3];
    delete i,arr;

}