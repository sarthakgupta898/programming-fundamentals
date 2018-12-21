#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		int space=1;
		while(space<=n-i){
			cout<<" ";
			space++;
		}
		int no=1;
		while(no<=2*i-1){
			cout<<no;
			no=no+1;
		}
		cout<<endl;
	}
	return 0;
}