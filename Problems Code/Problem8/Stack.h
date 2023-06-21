#pragma once
#include <bits/stdc++.h>
#include <exception>
using namespace std;

class StackEmptyException : public exception{
public:
    virtual const char* what() const throw(){
        return "Error Empty Stack !";
    }
};

class StackOverflowException : public exception{
public:
    virtual const char* what() const throw(){
        return "Can't Push. Size Limit Error !";
    }
};


template<class T>
class Stack{
private:
    T* ptr = nullptr;
    size_t sz = 0;
    size_t capacity = 0;
public:
    Stack(size_t capacity);
    ~Stack();
    Stack(const Stack& anotherStack);
    Stack<T>& operator=(const Stack& anotherStack);
    void pop_back();
    void push_back(T value);
    T top();
    size_t size();
    bool empty();

};
