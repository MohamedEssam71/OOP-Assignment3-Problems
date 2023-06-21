#include<iostream>
using namespace std;

void back(string s, int n){
    if(n == 0){
        cout << s << endl;
        return;
    }
    back(s + "GREEN ", n-1);
    back(s + "YELLOW ", n-1);
    back(s + "RED ", n-1);
}




int main(){
    int n; cin >> n;

    back("", n);
}


