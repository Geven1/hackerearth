
/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/

Sample Input
4
abc
cba
abd
acb
talentpad
talepdapd
code
road

Sample Output
0
2
4
4
*/

#include <iostream>
#include<math.h>
using namespace std;
void fun()
{
	string s,t;
	int a[26]={0},b[26]={0};
	cin>>s>>t;
	for(int i=0;i<s.length();i++)
	a[s[i]-'a']++;
	for(int i=0;i<t.length();i++)
	b[t[i]-'a']++;
	int count=0;
	for(int i=0;i<26;i++)
	{
		count+=abs(a[i]-b[i]);
	}
	cout<<count<<endl;
}
int main() {
int t;
cin>>t;
while(t)
{
	t--;
	fun();
}
}
