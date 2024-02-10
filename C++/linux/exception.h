#ifndef exception

#define exception

#include<iostream>

using namespace std;



int Outofbounds()
{
cout<<"The value is out of bounds:";
return 0;
}

int nomem(){
cout << "Memory insufficient."<<endl;
return 0;
}
int emptyList(){
cout << "list is empty"<<endl;
return 0;
}
#endif
