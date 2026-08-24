// Local Class
#include <iostream>
using namespace std;
void fun(){
    class A {
          int a,b;
          public:
            void show(){
                cout<<"Enter two value:";
                cin>>a>>b;
                cout<<a<<" "<<b;
            }
    };
    A obj;
    obj.show();
}
int main(){
    fun();
    return 0;
}
