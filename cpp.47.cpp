// Destrcutor with Dynamic Memory
#include<iostream>
using namespace std;
class student{
    private:
      int *age;
    public:
      // construcor
      student(int a){
          age = new int;
          *age = a;
          cout<<"Memory allocated"<<endl;
      }
      // Destrcutor
      ~student(){
          delete age;
          cout<<"Memory released"<<endl;
      }
      void display(){
          cout<<"Age:"<<*age<<endl;
      }
};
int main(){ 
    student s1(21); 
    s1.display();
    return 0;
}
