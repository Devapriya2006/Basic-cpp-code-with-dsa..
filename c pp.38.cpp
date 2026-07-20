// Factorial no 5!=> 5*4*3*2*1 =>120 
#include<iostream>
using namespace std;

int fact(int num){ // num=0
    if(num==0){ //0==0 condition true
        return 1; // return 1
    }else{
        return num*fact(num-1); //5*4*3*2*1*1 = 120
    }
}

int main(){
    int num;
    cout<<"Enter a number:"; 
    cin>>num; // num=5
    int r=fact(num); // r=120
    cout<<"Factorial of "<<num<<" is: "<<r;
    return 0;
}
