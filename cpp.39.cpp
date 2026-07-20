// Vowels and Consonants
#include <iostream>
#include <string.h>
using namespace std;
int main()  
{
    string str="Hello"; 
    int vowels=0,consonants=0;
    // for each loop
    for(char ch:str){  // H->E->L->L->O
      if(isalpha(ch)) { //isalpha is a built in function used to check the character an alphabet or not like (A-Z or a-z) 
                        //uppercase or lowercase except number
         ch=toupper(ch); 
         
         if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
           vowels++;
        else 
         consonants++;
     }
    }
    cout <<"Vowels: "<<vowels<<endl;
    cout <<"Consonants: "<<consonants<<endl;
    return 0;
}
