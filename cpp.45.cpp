// Nested Class
#include <iostream>
using namespace std;
class A {
   public:
    class B{ // Member Variable
        int a,b; 
        public:
         void input(){ // Member function of class B
            cout<<"Enter two Numbers:";
            cin>>a>>b;
         }
         void show(){
             cout<<a<<" "<<b;
         }
    };
};

int main(){
    A::B obj;
    obj.input();
    obj.show();
    return 0;
}
