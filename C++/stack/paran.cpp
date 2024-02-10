#include <iostream>
#include<string.h>
#include<stdio.h>

#include"exception.h"
#include"linkstack.h"

using namespace std;

int m=100;

void matched_paran(string x)
{
    linkstack<int> s;
    int j,l=sizeof(x);

    for(int i=0;i<l;i++)
       {    if (x[i]=='(') s.push(x[i]);
             else if (x[i]==')')
                  {
                      if (s.isempty()) throw Outofbounds();
                       else  s.pop();
                 }
       }
    while(!s.isempty())
    {s.pop();
        cout<<"no match";
        }

}





int main()
{
    string x;
    cin>>x;
    cout<<"the paran mathch is"<<endl;
    matched_paran(x);

   
    return 0;

}

