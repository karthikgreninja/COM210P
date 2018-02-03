#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i;
	for(i=1; ;i++)
	{
		if((100*i*i) < (pow(2,i)))
		{
			cout<<i<<"\n";
			break;
		}
	}
return(0);
}

