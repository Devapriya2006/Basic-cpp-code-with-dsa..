// isalpha()
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   string str="Hello123";
   for(char ch:str){
       if(isalpha(ch))
         cout<< ch <<" is alphabet"<<endl;
       else
         cout<< ch <<" is not alphabet"<<endl;
   }
    return 0;
}
