#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;


    
int main()
{
  // mapShit();
  //setShit();
  
  int arr[] = {5, 7, 8, 9, 100, 45, 56, 23, 11, 0 ,-6};
  //decreasing
  int s = sizeof(arr) / sizeof(arr[0]);
  sort(&arr[0], &arr[s], greater<int>());

  for(int i=0;i<s;i++)
   { cout<<arr[i]<<" ";
   }
  std::cin.get();
 // getch();
  return 0;
}

