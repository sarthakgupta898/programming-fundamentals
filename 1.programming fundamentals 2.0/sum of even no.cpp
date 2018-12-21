#include<iostream>
using namespace std;

int main(){
	int a=2,sum=0,n;
	cin>>n;
	while(a<=n){
		sum=sum+a;
		a=a+2;
	}
	cout<<sum;
	return 0;
}