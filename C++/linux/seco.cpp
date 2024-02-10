
#include<iostream>
#include"exception.h"
#include"third.h"
using namespace std;

int main()
{
int a,b,c;
cout<<"enter:";
cin>>a>>b;
abc<int> lol;
c=lol.add(a,b);
if(c==0) throw Outofbounds();
else cout<<c;
return 0;
}
