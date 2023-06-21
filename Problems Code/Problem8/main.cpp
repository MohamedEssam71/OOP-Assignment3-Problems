#include <bits/stdc++.h>
#include "Stack.cpp"
using namespace std;

void manageStack(){
    cout << "----------Welcome to Stack Simulator---------" << endl;
    cout << "Choose Stack size: " << endl;
    size_t sz; cin >> sz;
    Stack<int>stack1(sz);
    bool cont = true, error = false;

    do {
        if(error){
            cout << "Try make another Option!" << endl;
        }
        cout << "-------MENU-------" << endl;
        cout << "1.Top\n" << "2.Push\n" << "3.Pop\n" << "4.Check Empty\n" << "5.exit"<< endl;
        cout << "Choose an Option: " << endl;
        int option;
        cin >> option;

        switch (option) {
            case 1:
                try {
                    int value = stack1.top();
                    cout << "Top Element: " << value << endl;
                    error = false;
                }
                catch (StackEmptyException& err){
                    error = true;
                    cerr << err.what() << endl;
                }
                break;
            case 2:
                cout << "Enter an element to be pushed: ";
                int x;
                cin >> x;
                try {
                    stack1.push_back(x);
                    cout << "Element has been pushed Successfully" << endl;
                    error = false;
                }
                catch(StackOverflowException& err){
                    error = true;
                    cerr << err.what() << endl;
                }
                break;
            case 3:
                try{
                    stack1.pop_back();
                    cout << "Element has been popped Successfully" << endl;
                    error = false;
                }
                catch(StackEmptyException& err){
                    error = true;
                    cerr << err.what() << endl;
                }

                break;
            case 4:
                if(stack1.empty()) cout << "Stack is Empty" << endl;
                else cout << "Stack is not Empty" << endl;
                error = false;
                break;
            default:
                cont = false;
                break;
        }
    }while(cont);
}





int main() {
    manageStack();
}
