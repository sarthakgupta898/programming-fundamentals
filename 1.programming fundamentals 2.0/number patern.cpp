#include <iostream>
using namespace std;

int main(){
	int n,val=1;
	cin>>n;

	for (int i=1;i<=n;i++){
		int j=1;
		while(j<=i){
			cout<<val<<' ';
			val++;
			j++;
		}
		cout<<endl;
	}
	return 0;
}