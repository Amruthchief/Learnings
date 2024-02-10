#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void cheak(string hex,int Ndec)
{
    //string hex="1A";
int dec=0;
int l=hex.length();
int base=1;
        for (int i=l;i>=0;i--)
        {
            if(hex[i]>='0' && hex[i]<='9')
            {
                dec+=(hex[i]-48)*base;
                base=base*16;
            }

            else if(hex[i]>='A' && hex[i]<='F')
            {
                dec+=(hex[i]-55)*base;
                base=base*16;
            }


            else if(hex[i]>='a' && hex[i]<='f')
            {
                dec+=(hex[i]-87)*base;
                base=base*16;
            }

        }


        if (dec==Ndec)
            cout<<"Equal";
        else 
            cout<<"invalid";
}



int main()
{

string hex="1a";
int dec=26;
cheak(hex,dec);

return 0;

}