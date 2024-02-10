#include<iostream>

using namespace std;

template<class abc>
class database
{
    abc data[50];
    abc *d;
public:
    void store()
    {
        cout<<"ënter the elemnts";
        for(int i=0;i<5;i++)
            cin>>data[i];
    }
    void retrive()
    {
        cout<<"data elements";
        for(int i=0;i<50;i++)
            cout<<data[i];

    }
};
int main()
{
    database<int> db;
    db.store();
    db.retrive();
    return 0;
}
