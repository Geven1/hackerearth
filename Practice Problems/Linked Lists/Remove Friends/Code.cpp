#include<iostream>
#include<stack>
#include<list>
using namespace std;

void display(stack<int> st)
{
	if(st.empty())	return ;
	int x = st.top();   st.pop();
	display(st);
	cout<<x<<" ";
}
void display(list<int> l)
{
    if(l.empty())   return;
    for(auto i : l)
    cout<<i<<" ";
}
void function()
{
	int n,k;	
    cin>>n;
    cin>>k;
	stack<int> st;
	while(n)
	{   
        n--;
		int tmp;
		cin>>tmp;
        
		if(!st.empty() and (k>0  and  st.top()<tmp ))
		{
            while(!st.empty() and k>0 and st.top()<tmp)
            {
                k--;
                st.pop();
            }
            st.push(tmp);
		}
		else
		{
			st.push(tmp);
		}
	}
	display(st);
}
void lis()
{
    int n,k;
    cin>>n>>k;
    list<int> l;
    while(n)
    {
         int tmp;   
         cin>>tmp;
         n--;
         if(!l.empty() and (k>0 and l.back()<tmp))
         {
            while(!l.empty() and k>0 and l.back()<tmp)
            {
                k--;
                l.pop_back();
            }
            l.push_back(tmp);
         }
         else
         {
            l.push_back(tmp);
         }
    }
    display(l);
}


int main() {
    int t;
    cin>>t;
	while(t)
	{
		lis();
		t--;
		cout<<endl;
	}   
}
