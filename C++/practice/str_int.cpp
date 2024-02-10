#include <iostream>
#include <string>
#include <math.h>
using namespace std;




int main()
{
string s="10 power of 2";
int l=s.length();
int i=0,j=0,bl=0,pl=0;
for(i=0;i<l;i++)
    { 
        if(s[i] == ' ');
            {
                bl=i;break;
            }
        
    }
    string cbase=s.substr(0,bl);
    cout<<i<< " "<<j<<cbase<<endl;
for(j=l;j>=0;j--)
    { 
        if(s[i] == ' ');

    }
   // cout<<j;
string cpow=s.substr(12);

/*
int r=0;

cout<<cbase<<cpow<<endl;
int base=stoi(cbase);

int p=stoi(cpow);
  
  r= pow(base,p);
  
  
cout<<r;*/
    return 0;

}