#include <iostream>
using namespace std;

int gcd (int n, int m)
{
	if ((n>=m)&&(n%m)==0)
	return m;
	
	else
	gcd (m, (n%m));
}

int main (void)
{
	int n,m,result;
	
	cout<<"enter first positive integer"<<endl;
	
	cin>>n;
	
	cout<<"enter second positive integer"<<endl;
	
	cin>>m;
	
	result=gcd(n,m);
	
	cout<<"gcd is"<<n<<endl;
	cout<<"gcd is"<<m<<endl;
	
	return 0;
	
}