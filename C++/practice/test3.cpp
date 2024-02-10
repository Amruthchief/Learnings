#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    //vector<int> v;
    int a[20]={2,56,95,12,6,48,56,23,66,456,23};
    for(auto it: a)
    {
        cout << it << " ";
    }
    cout<<endl;
    sort(&a[0],&a[15]);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    //cout << v.size() << "\n\n";

    for(auto it: a)
    {
        cout << it << " ";
    }

    return 0;
}
