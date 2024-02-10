#ifndef third_H
#define third_H
#include<iostream>
#include"exception.h"


using namespace std;
template <class x>
class abc
{
 x m=10,n=12;

 public:
 int add(int a,int b)
 {
     if(a<5) throw Outofbounds();
     else
 return(a+b);
 }
 abc()
 {
 }

};
#endif // third_H


