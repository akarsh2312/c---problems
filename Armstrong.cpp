#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int i,k,n;
int j=0;
int sum=0;
cout<<"Enter the number : ";
cin>>n;
i=n;
while(i!=0)
{j++;
i=i/10;}


i=n;
while(i!=0)
{
	k=i%10;
	sum=sum+pow(k,j);
	i=i/10;
}
if(sum==n)
{
cout<<"It is an Armstrong number ";
}
else
{
cout<<"It is not an Armstrong number";
}
}
