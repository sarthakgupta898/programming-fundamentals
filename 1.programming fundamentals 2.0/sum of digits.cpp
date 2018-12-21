#include <iostream>
using namespace std;

int main(){
	int n,remainder,sum=0;
	cin>>n;

	while(n>0){
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	cout<<sum;
	return 0;
}