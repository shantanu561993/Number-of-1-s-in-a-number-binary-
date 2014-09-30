#include<iostream>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	while(n=n&n-1)
		k++;
	cout<<k+1;
	
}
