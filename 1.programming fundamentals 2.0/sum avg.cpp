#include <iostream>
using namespace std;

// int main(){
// 	int a=0,sum=0,n,avg;
// 	cin>>n;
// 	while(a<=n){
// 		sum=sum+a;
// 		a++;
// 	}
// 	avg=sum/n;
// 	cout<<sum<<endl;
// 	cout<<avg;
// 	return 0;
// }

int main(){
	int n;
	cin>>n;

	int i=1,no,sum=0;
	while(i<=n){
		cin>>no;
		sum=sum+no;
		i++;
	}
	float avg=float(sum)/n;
	cout<<sum<<endl;
	cout<<avg;
	return 0;
}