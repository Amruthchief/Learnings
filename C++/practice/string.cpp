#include<iostream>
#include<string.h>


using namespace std;
/*struct Node {

  public:
      int data;
  struct Node *next;
};
//struct Node first;
struct Node *temp=NULL;
//first.next=NULL;
*/

void subString(string s, int n)  
{ 
    // Pick starting point 
  for (int i = 0; i < n; i++)  
        for (int len = 1; len <= n - i; len++) 
            cout << s.substr(i, len) << endl; 
} 
int main()
{ //  temp->data=2;
    //cout<<temp->data;
    string s="AMruth";
    int l=s.length();
    subString(s,l);
    
    return 0;
}
