/*

https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/little-jhool-and-the-magical-jewels/

Little Jhool is still out of his mind - exploring all his happy childhood memories. And one of his favorite memory is when he found a magical ghost, who promised to fulfill one of Little Jhool's wish.
Now, Little Jhool was a kid back then, and so he failed to understand what all could he have asked for from the ghost. So, he ends up asking him something very simple. (He had the intuition that he'd grow up to be a great Mathematician, and a Ruby programmer, alas!) He asked the ghost the power to join a set of *the letters r, u, b and y * into a real ruby. And the ghost, though surprised, granted Little Jhool his wish...
Though he regrets asking for such a lame wish now, but he can still generate a lot of real jewels when he's given a string. You just need to tell him, given a string, how many rubies can he generate from it?

Input Format:
The first line contains a number t - denoting the number of test cases.
The next line contains a string.

Output Format:
Print the maximum number of ruby(ies) he can generate from the given string.

Sample Input
2
rrrruubbbyy
rubrubrubrubrubrubrubrubrubrubrubrubrubrb

Sample Output
2
0
*/

#include <iostream>
using namespace std;
void fun()
{
  /*cbgeven*/
	string s;
	cin>>s;
	int a[4]={};
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='b'){	a[0]++;	}
		else if(s[i]=='r'){	a[1]++;	}
		else if(s[i]=='u'){	a[2]++;	}
		else if(s[i]=='y'){	a[3]++;	}
	}
	int m=a[0];
	for(int i=1;i<4;i++)
	{
		m=min(m,a[i]);
	}
	cout<<m<<endl;
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
