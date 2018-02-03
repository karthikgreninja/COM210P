#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i;
	for(i=2; ;i++)
	{
		if((8*i*i) < (64*i*log2(i)))
			cout<<i<<"\n";
		else
			break;
	}
return(0);
}



