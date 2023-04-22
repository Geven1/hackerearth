#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()

{
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	{
		string tmp;
		cin>>tmp;
		a[i]=tmp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	for(int i=0;i<n;i++)
	{
    	string tmp = a[i];
		int count=0;
		int j=i-1;
		while(j>=0 and tmp > a[j])
 		{
			count++;
			string var=a[j];
			a[j]=a[j+1];
			a[j+1]=var;
			j--;
		}
		cout<<count<<endl;
	}
}
