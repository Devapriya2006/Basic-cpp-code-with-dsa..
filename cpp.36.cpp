// function to reverse Array

#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout<< arr[i]<<" ";
    }
}
int main(){
    int arr[5]={10,20,30,40,50};
    reverseArray(arr,5);
    return 0;
}
