/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/a-needle-in-the-haystack-1/
*/

#include <bits/stdc++.h>

using namespace std;

string reverse(string pattern){   

  int n = pattern.size();

    for (int i = 0; i < n/2; ++i)    

                      {   swap(pattern[i],pattern[n-1-i]);

    }    return pattern;

}

string ispresent(string pattern,string rstr,string text){  

   if(text.find(pattern)<text.size()) return "YES";   

  else if (text.find(rstr) < text.size()) return "YES";  

   else return "NO";

}

int main(){   

  int t; cin>>t;     

while(t--){     

 string pattern,text;

cin>>pattern>>text;    

     string rstr = reverse(pattern);      

   cout<< ispresent(pattern,rstr,text)<<endl;

}

}
