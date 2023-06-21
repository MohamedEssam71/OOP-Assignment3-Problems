#include<bits/stdc++.h>
using namespace std;
string nameFile;
map<string,int>freqMap;
void cleanFile(fstream& file);


int main() {
    cout << "Enter nameFile of file : " << endl;
    cin >> nameFile;
    nameFile += ".txt";

    fstream inFile(nameFile, ios::in | ios::out);
    cleanFile(inFile);
    inFile.seekg(0);
    while(!inFile.eof()){
        string word;
        inFile >> word;
        freqMap[word]++;
    }
    cout << setw(15) << left << "Words" << setw(5) << "Frequency" << endl;
    for(const auto& pair : freqMap){
        cout << setw(15) << left << pair.first << setw(5) << pair.second << endl;
    }


}

void cleanFile(fstream& file){
    fstream outFile("newData.txt", ios::in | ios::out | ios::trunc);

    while(!file.eof()){
        string sentence, newSentence;
        getline(file,sentence);
        for(char i : sentence){
            if(isalnum(i) || isspace(i) || i == '-'){
                newSentence.push_back(i);
            }
        }
        outFile << newSentence << '\n';
    }
    file.close();
    outFile.seekg(0);
    file.open(nameFile, std::ofstream::out | std::ofstream::trunc);
    string line;
    while(getline(outFile,line)){
        file << line << '\n';
    }
    file.close();
    file.open(nameFile, ios::in | ios::out);

}
