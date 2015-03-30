#include<iostream>
using namespace std;

int main()
{
	int room[]={120,40,85,50,100,140,70,100};
	int i,j,k,l,a,b,c,d,count=0;
	cin>>a>>b>>c>>d;
	for(i=0;i<8;i++)
	for(j=0;j<8;j++)
	for(k=0;k<8;k++)
	for(l=0;l<8;l++)
	{
		if(a<=room[i]&&b<=room[j]&&c<=room[k]&&d<=room[l]&&i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l)
		{
			cout<<i+1<<" "<<j+1<<" "<<k+1<<" "<<l+1<<endl;
			count++;
		}
	}
	if(count==0)
	{
		cout<<-1<<endl;
	}
	return 0;
} 
