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
  
  string s = "lolis are pices of shit, REEEEEE";
  
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
  set<string> s {"bb", "aaa", "lolis", "shit"};
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

int main()
{
  // mapShit();
  setShit();
  return 0;
}