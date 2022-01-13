#include<bits/stdc++.h>
using namespace std;

void natural(int i,int n)
{
	if(n==0)
		cout <<n;
	if(i<=n)
	{
		cout <<i<<" ";
		return natural(i+2,n);
	}
}

int main()
{
	int n,i=2;
	cin >>n;
	natural(i,2*n);
	return 0;
}
