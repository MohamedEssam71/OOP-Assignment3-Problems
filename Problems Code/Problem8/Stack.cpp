#include "Stack.h"


template<class T>
Stack<T>::Stack(size_t capacity) {
    this->capacity = capacity;
    this->ptr = new T[capacity];
}

template<class T>
Stack<T>::~Stack() {
    sz = 0;
    capacity = 0;
    delete ptr;
}

template<class T>
Stack<T>::Stack(const Stack &anotherStack) {
    this->sz = anotherStack.sz;
    this->capacity = anotherStack.capacity;
    this->ptr = new T*[anotherStack.capacity];

    for(int i = 0; i < anotherStack.sz; ++i){
        this->ptr[i] = anotherStack.ptr[i];
    }
}

template<class T>
Stack<T>& Stack<T>::operator=(const Stack &anotherStack) {
    this->sz = anotherStack.sz;
    this->capacity = anotherStack.capacity;
    this->ptr = new T*[anotherStack.capacity];

    for(int i = 0; i < anotherStack.sz; ++i){
        this->ptr[i] = anotherStack.ptr[i];
    }
    return *this;
}

template<class T>
void Stack<T>::pop_back(){
    if(sz > 0)
        sz--;
    else {
        throw StackEmptyException();
    }
}

template<class T>
void Stack<T>::push_back(T value){
    if(sz + 1 <= capacity){
        ptr[sz++] = value;
    }
    else{
        throw StackOverflowException();
    }
}

template<class T>
T Stack<T>::top() {
    if(this->empty()) throw StackEmptyException();
    return ptr[sz-1];
}

template<class T>
size_t Stack<T>::size() {
    return sz;
}

template<class T>
bool Stack<T>::empty() {
    return sz == 0;
}