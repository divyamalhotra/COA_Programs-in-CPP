#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int x,y,r,N,n=0,digit,digit1,i=1,dec1=0,dec=0;
	cout<<"Enter r: ";
	cin>>r;
	cout<<"Enter no: ";
	cin>>N;
	x=N;
	while(x)
	{
		digit=x%10;
		x=x/10;
		if(digit>=r)
		{
			cout<<"Wrong input!!!";
			exit(0);
		}
		n++;
	}
	x=pow(r,n)-1;
	while(x)
	{
		digit=x%r;
		x=x/r;
		dec=dec+i*digit;
		i=i*10;
	}
	x=dec-N;
	dec=0,i=1;
	while(N)
	{
		digit=N%10;
		N=N/10;
		dec=dec+i*digit;
		i*=r;
	}
	y=pow(r,n)-dec;
	i=1,dec=0;
	while(y)
	{
		digit=y%r;
		y=y/r;
		dec=dec+i*digit;
		i*=10;
	}
	cout<<r-1<<"'s complement: "<<x<<endl;
	cout<<r<<"'s complement: "<<dec<<endl;
	dec=0;
	return 0;
}
