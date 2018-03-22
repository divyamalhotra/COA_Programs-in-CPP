#include<iostream>
using namespace std;
void adder(int a,int b,bool&c,bool&sum)
{
	if(a==0)
	{
		if(b==0)
		sum=c;
		else
		sum=1-c;
	}
	else
	{
		if((1-b)==0)
		sum=c;
		else
		sum=1-c;
	}
	c=a*b+b*c+c*a;
}
int main()
{
	int n,a,b,i;
	cout<<"Enter no. of bits: ";
	cin>>n;
	i=n-1;
	bool sum[n],carry[n];
	carry[i]=0;
	cout<<"Enter two nos.: \n";
	cin>>a>>b;
	while(a)
	{
		adder(a%10,b%10,carry[i],sum[i]);
		carry[i-1]=carry[i];
		a=a/10;
		b=b/10;
		i--;
	}
	cout<<"Sum: ";
	for(i=0;i<n;i++)
	cout<<sum[i];
	cout<<"\nCarry: "<<carry[0];
	return 0;
}
