#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

/*
 * l --> 2
 * o --> 1
 * i --> 1
 * */

void mapShit()
{
  map<char, int> freq; // binary tree O(logn)
  // unordered_map<char, int> fre; // hash table O(1)
  
  string s = "lolis are gay, REEEEEE";
  
  // find the frequency of each charecter using m
  for(char c: s)
  {
    freq[c]++;
  }
  
  for(auto it: freq)
  {
    cout << it.first<< " " << it.second << "\n";
  }
}

void setShit()
{
  set<string, greater<string>> s {"bb", "aaa", "lolis", "shit"};
  // s = {'r', '7', 'y'};
  // s = {"shit", "lolis", "poop"}
  // bin tree
  // search O(logn)
  
  for(auto it: s)
  {
    cout << it << "\n";
  }
  
  // auto it = s.find("lolis");
  // cout << *it << " ";
  
  // vector<string> v;
  // ["shit", "lolis", "poop"]
  // v[1] = "lolis"
  // search "poop" O(n)
}

void pairShit()
{
  pair<float, float> pos;
  pos = {3.5, 7.9};
  pos.first = 0.06;
  pos.second++;
}

bool myGreater(int val1, int val2)
{
  return val1 > val2;
}


// vector<int> v{5,9,8,7,12}
// 5,9,8,7,12
// 9,5,8,7,12
// 9,8,5,7,12
// ....
// bool (*func)(int a, int b)
// a function pointer to a function which takes 2 int args and returns a bool

// void bubbleSort(vector<int> arr, int n, bool (*func)(int a, int b))  
// {  
//     int i, j;
//     for (i = 0; i < n-1; i++)     
//     	for (j = 0; j < n-i-1; j++)  
//         	if (func(arr[j], arr[j+1]))  
//             	swap(&arr[j], &arr[j+1]);
// }  

int main()
{
  // mapShit();
  setShit();
  
//   int arr[] = {5, 7, 8, 9, 100, 45, 56, 23, 11, 0 ,-6};
//   //decreasing
//   int s = sizeof(arr) / sizeof(arr[0]);
//   sort(&arr[0], &arr[s], greater<int>());
//   for(int i = 0;i < s;++i)
//     cout << arr[i] << " ";
  return 0;
}