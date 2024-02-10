#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

    int first=20,second=60;
          if(first == 0)
        {    
           return second;
        }
        if(second == 0)
        {    
           return first;
        }
        // both numbers are equal
        if(first == second)
        {
           return first;
        }
        // first is greater
        else if(first > second)
        {
           return findGCD(first - second, second);
        }
        return findGCD(first, second - first);
}