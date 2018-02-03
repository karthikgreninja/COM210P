#include<iostream>
using namespace std;
class dictionaryADT
{	
	public:
		int n,a[100];
		void insert(int data)
		{
			int i,pos;
			if(data > a[n-1])
				pos=n;
			else
			{			
				for(i=0;i<n;i++)
				{
					if(a[i]>=a[i])
						pos=i-1;
				}
				for(i=n;i>=pos;i--)
				{
					a[i]=a[i-1];
				}
			}
			a[pos]=data;
			n++;
		}
		
		int search(int data)
		{
			int beg=0,mid,end=n-1,flag=0;
			while(beg<=end)
			{
				mid=(beg+end)/2;
				if(a[mid] == data)
				{
					flag=1;
					return mid+1;
				}
				else if(data < a[mid])
					end = mid-1;
				else
					beg = mid+1;
			}
			if(flag == 0)
				return -1;
		}
	
		void del(int data)
		{
			int pos = search(data),i;
			if(pos == -1)
			{
				cout<<"The element to be deleted is not present in the array ";
				return;
			}
			else 
			{
				for(i=pos-1;i<n;i++)
				{
					a[i]=a[i+1];
				}
				n--;
			}
		}
};

dictionaryADT d;
int main()
{
	char rep='y';
	int ch,i,data,pos;
	cout<<"Enter the number of elements you want to insert : ";
	cin>>d.n;
	cout<<"Enter the "<<d.n<<"values in sorted order : ";
	for(i=0;i<d.n;i++)
	{
		cin>>d.a[i];
	}
	while(rep == 'y')
	{
		cout<<"Enter your choice \n1.Insert \n2.Search \n3.Delete \n4.Display : ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter the element that you want to insert : ";
				cin>>data;
				d.insert(data);
				break;
	
			case 2: cout<<"Enter the element that you want to search : ";
				cin>>data;
				pos=d.search(data);
				if(pos==-1)
					cout<<"Not found";
				else
					cout<<"Found at "<<pos;
				break;

			case 3: cout<<"Enter the element that you want to delete : ";
				cin>>data;
				d.del(data);
				break;
		
			case 4: for(i=0;i<d.n;i++)
					cout<<d.a[i]<<" ";
				cout<<"\n";
				break;

			default: cout<<"\nInvalid choice";
		}
		cout<<"Do you want to continue (y or n) ? : ";
		cin>>rep;
	}
return(0);
}
