#include<iostream>
using namespace std;

int main()
{
	int n,m,gcd,i;
	gcd=1;
	i=1;
	cout<<"Enter 1st number \n";
	cin>>n;
	cout<<"Enter 2nd number \n";
	cin>>m;
	while(i<=n && i<=m)
	{
		if(n%i==0 && m%i==0)
		{
			gcd=i;
			
		}
		++i;
	}
	cout<<"The GCD of "<<n<<" and "<<m<<" is "<<gcd;

		
	
}
