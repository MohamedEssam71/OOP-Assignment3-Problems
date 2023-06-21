#include<bits/stdc++.h>
using namespace std;
ifstream dictionary("dictionary.txt");


bool isInDictionary (const string& word) {
    string nextWord;
    dictionary.clear();
    dictionary.seekg(0, ios::beg);
    while (!dictionary.eof()) {
        dictionary >> nextWord;
        if (word == nextWord)
            return true;
    }
    return false;
}

vector<string>sentence;
string word;
void back(string current, int index){
    if(index == word.size()){
        return;
    }
    current += word[index];
    string lowerCurrent = current;
    transform(lowerCurrent.begin(), lowerCurrent.end(), lowerCurrent.begin(), ::tolower);

    if(isInDictionary(lowerCurrent)){
        sentence.push_back(current);
        if(index == word.size()-1){
            for(const auto& val : sentence){
                cout << val << " ";
            }
            cout << endl;
        }
        back("", index+1);
        sentence.pop_back();
    }

    back(current, index+1);

}

int main() {
    cout << "Enter a sentence : ";
    cin >> word;


    back("", 0);
}
// Iwearmyshoes