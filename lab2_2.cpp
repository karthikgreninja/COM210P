#include<iostream>
#include<cmath>
using namespace std;
int factorial(int );
int main()
{
	int time[]={1,60,3600,86400,2592000,31104000,3110400000};
	int i;
	cout<<"\t\tsecond\tminute\thour\tday\tmonth\tyear\tcentury\n";

	cout<<"log(n)"<<"\t\t";
	for(i=0;i<=6;i++)
		cout<<pow(2,time[i])<<"\t";
	cout<<"\n";

	cout<<"sqrt(n)"<<"\t\t";
	for(i=0;i<=6;i++)
		cout<<pow(time[i],2)<<"\t";
	cout<<"\n";

	cout<<"n"<<"\t\t";
	for(i=0;i<=6;i++)
		cout<<time[i]<<"\t";
	cout<<"\n";
	
	cout<<"nlogn"<<"\t\t";
	int n=1;
	for(i=0;i<=6;i++)
	{
		while(n*log2(n) <= time[i])
			n++;
		cout<<n-1<<"\t";
	}
	cout<<"\n";
	
	cout<<"n^2"<<"\t\t";	
	for(i=0;i<=6;i++)
		cout<<sqrt(time[i])<<"\t";
	cout<<"\n";
	
	cout<<"n^3"<<"\t\t";
	for(i=0;i<=6;i++)
		cout<<cbrt(time[i])<<"\t";
	cout<<"\n";
	
	cout<<"n!"<<"\t\t";
	n=1;
	for(i=0;i<=6;i++)
	{
		while(factorial(n) <= time[i])
			n++;
		cout<<n-1<<"\t\t";
	}
	cout<<"\n";
return(0);
}
	
int factorial(int num)
{
	if(num==0)
		return 1;
	else
		return num*factorial(num-1);
}		
	
		
	
	
