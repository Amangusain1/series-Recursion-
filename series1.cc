#include<bits/stdc++.h>
using namespace std;

void natural(int i,int n)
{
	if(n==0)
		cout <<n;
	if(i<=n)
	{
		cout <<i;
		return natural(i+1,n);
	}
}

int main()
{
	int n,i=1;
	cin >>n;
	natural(i,n);
	return 0;
}
