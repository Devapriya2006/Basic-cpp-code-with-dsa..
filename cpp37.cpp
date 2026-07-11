// pointer to pointer 
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int*p=&a;
    int **q=&p;// pointer to pointer **q--->*q
    cout << a << endl;// value of a= 10
    cout << &a << endl;// address of a where 10 is stored
    cout << p << endl;//p-->a address;
    cout << *p << endl;// value of a access through p pointer 
    cout << &p << endl;// this print the address of p pointer

    cout << q << endl;//p--> a adress
    cout << *q << endl;//*q-->value at address stored in q--->p address of a = 1000
    cout << **q << endl;//**q--> value of p-->a
    cout << &q;//address of q
    return 0;
}
