#include <bits/stdc++.h>
using namespace std;
template<class T>
class Set{
private:
    vector<T>data;
public:
    Set();
    ~Set();
    void insert(T value);
    void erase(T value);
    bool Find(T value);
    T* getPtrData();
    bool empty();
    size_t size();
};

template<class T>
Set<T>::Set() {
    sort(data.begin(), data.end());
    data.erase(std::unique(data.begin(), data.end()), data.end());
}

template<class T>
Set<T>::~Set() {
    data.clear();
}

template<class T>
bool Set<T>::empty() {
    return data.empty();
}

template<class T>
void Set<T>::insert(T value) {
    if(find(data.begin(), data.end(),value) != data.end()){
        return;
    }
    data.push_back(value);
    sort(data.begin(), data.end());
//    if(data.empty() || data.back() <= value){
//        data.push_back(value);
//    }else
//    data.insert(upper_bound(data.begin(), data.end(), value) - 1, value);
    //int index = upper_bound(data.begin(), data.end(), value) - data.begin();
}

template<class T>
void Set<T>::erase(T value) {
    data.erase(value);
}

template<class T>
bool Set<T>::Find(T value) {
    return (find(data.begin(), data.end(),value) != data.end());
}

template<class T>
T *Set<T>::getPtrData() {
    return &data[0];
}

template<class T>
size_t Set<T>::size() {
    return data.size();
}


int main() {
    Set<int>set1;
    set1.insert(5);
    cout << set1.empty() << endl;
    cout << set1.Find(5) << endl;
    set1.insert(4);
    set1.insert(2);
    set1.insert(6);
    set1.insert(6);
    int *ptr = set1.getPtrData();
    for(int i = 0; i < set1.size(); ++i){
        cout << *(ptr+i) << " ";
    }

}
