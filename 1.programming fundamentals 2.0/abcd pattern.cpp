#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	char a;
	for(int i=0;i<n;i++){
		a=65;
		for(int j=1;j<=n-i;j++){
			cout<<a;
			a++;
		}
		a=a-1;

		for(int j=1;j<=n-i;j++){
			cout<<a;
			a--;
		}
	cout<<endl;
}
	return 0;
}