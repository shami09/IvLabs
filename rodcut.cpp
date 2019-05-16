#include<iostream>
#include<climits>

using namespace std;
int rodCutting(int n,int price[])
{
	int i,j;
	int r[n+1];
	r[0]=0;
	for(i=1;i<=n;i++)
	{
		r[i]=INT_MIN;
		for(j=0;j<i;j++)
		{
			r[i]=max(r[i],price[j]+r[i-(j+1)]);
		}
	}
	return r[n];
	
}
int main()
{
	int n,i;
	cout<<"Enter the length of the rod"<<endl;
	cin>>n;
	int price[n];
	cout<<"enter the value of pieces of rod "<<endl;//if any size missing enter value as 0
	 for(i=0;i<n;i++)
	 {
	 	
		 
		 
		cin>>price[i];
	 }
	 
	 
	 cout<<"Maximum price is:"<<endl;
	 cout<<rodCutting(n,price);
	 cout<<endl;
	 return 0;
}
