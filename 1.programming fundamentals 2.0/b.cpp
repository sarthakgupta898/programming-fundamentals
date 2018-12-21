#include<iostream>
using namespace std;

int main()
{
 int arr[1000];
int n;
long long x,y;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
x=0;
y=0;
while(arr[i]!=0)
{
x=arr[i]%10;
arr[i]=arr[i]/10;
y=y+x;
}
if(y%4==0||y%3==0)
{
cout<<"Yes"<<endl;
}else
cout<<"No"<<endl;
}
int t,z;
cin>>t;
while(t!=0)
{
x=0,z=0,y=0;
cin>>n;
while(n!=0)
{
x=n%10;
n=n/10;
if(x%2==1)
{
z=z+x;
}
else
if(x%2==0)
{
y=y+x;
}
}
if(y%4==0||z%3==0)
{
cout<<"Yes"<<endl;
}else
{
cout<<"No"<<endl;
}
t--;
}
return 0;
}