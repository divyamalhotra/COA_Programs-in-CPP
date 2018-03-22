#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long int conv=0,oct=0,bin=0;
	int i=1,digit;
	char hex[10];
	cout<<"Enter the binary no.: ";
	cin>>bin;
	while(bin)
	{
		digit=bin%10;
		bin=bin/10;
		conv=conv+digit*i;
		i*=2;
	}
	i=1;
	while(conv)
	{
		digit=conv%8;
		conv=conv/8;
		oct=oct+digit*i;
		i*=10;
	}
	cout<<"The octal no. is: "<<oct;
	cout<<"\nEnter the octal no.: ";
	cin>>oct;
	conv=0,i=1;
	while(oct)
	{
		digit=oct%10;
		oct=oct/10;
		conv=conv+digit*i;
		i*=8;
	}
	i=0;
	while(conv)
	{
		digit=conv%16;
		conv=conv/16;
		if(digit<10)
		{
			hex[i++]=digit+48;
		}
		else
		{
			hex[i++]=digit+55;
		}
	}
	hex[i]='\0';
	cout<<"Hexadecimal conversion: ";
	for(int j=i-1;j>=0;j--)
	cout<<hex[j];
	cout<<"\nEnter the hexadecimal no.: ";
	cin>>hex;
	i=strlen(hex)-1;
	int k=1;
	conv=0;
	while(i>=0)
	{
		if(hex[i]>=65)
		digit=hex[i]-55;
		else
		digit=hex[i]-48;
		conv=conv+digit*k;
		k*=16;
		i--;;
	}
	k=1,bin=0;
	while(conv)
	{
		digit=conv%2;
		conv=conv/2;
		bin=bin+digit*k;
		k*=10;
	}
	cout<<"Binary conversion: "<<bin;
	return 0;
}
