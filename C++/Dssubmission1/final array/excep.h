#ifndef excep
#define excep
//#pragma once
#include<iostream>
using namespace std;

int emptyList(){
cout << "list is empty"<<endl;
return 0;
}
int OutOfBounds(){
cout << "there is no kth element.The value is out of bounds." << endl;
//cout << " YOU BLOODY IDIOT FUCK OFF"<<endl;
return 0;
}

int nomem(){
cout << "Memory insufficient."<<endl;
return 0;

}
int sizemismatch(){
cout <<"sizemismatch:"<<endl;
return 0;
}
int gfy(){
cout <<"GO FUCK YOURSELF"<<endl;
return 0;
}

#endif
