// String Compression 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string str="aaabbc";
   string result="";
   // find length
   for(int i=0;i<str.length();i++){
       int count=1; // start counting for atleast each characters appears once
       //count repeated characters
       while(i<str.length()-1 && str[i]==str[i+1]){
           count++; // increase counting
           i++; // Move to the next characters
       }
       result+=str[i]; // add characters
       result+=to_string(count); // add it's count(converted to string) 
   }
   cout <<result; // a3b2c1
    return 0; 
}
