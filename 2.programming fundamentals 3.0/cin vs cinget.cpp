//cin vs cin.get
#include <iostream>
using namespace std;


int main() {
    
    char ch;
    //Init 
    ch = cin.get();
    
    //Stopping Criteria
    while(ch!='$'){
        cout<<ch;
        //Update
        ch = cin.get();
    }
    
    
    return 0;
}
