#include<bits/stdc++.h>
using namespace std;

int natural(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		cout <<n;
	return natural(n-1);	
		
}
int main()
{
	int n;
	cin >>n;
	cout <<natural(n);
	return 0;
}
