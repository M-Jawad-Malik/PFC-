#include<iostream>
using namespace std;
int series_sum(int n)
{
	float fact1=1,sum=0;
	float fact[n];
	for(int i=1;i<=n;i++)
	
	{
	fact1=fact1*i;
	fact[i-1]=fact1*i;
	
	 }
	 for(int i=1;i<=n;i++)
	 {
	
	 	sum=sum+1/fact[i-1];
	 }
	float  series=sum+0.25;
	 cout<<" sum of series till "<<n<<" is = "<<series;
	 return series;

}
int main()
{
	float x;
	cin>>x;
	series_sum(x);
	return 1;
	
}


