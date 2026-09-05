#include<iostream>
using namespace std;
class Student{
    public:
      string name;
      int age;
      // Default constructor
      Student(){
          name="unknown";
          age=0;
      }
      // parameterized constructor
      Student(string n, int a){
          name = n;
          age = a;
      }
      // copy constructor
      Student(const Student &obj){
          name=obj.name;
          age=obj.age;
      }
 void display(){
    cout <<"Name:"<<name<<endl;
    cout <<"Age:"<<age<<;
 }
};
int main(){
    Student s1;
    Student s2("Bob",21);
    Student s3=s2;
    
    cout<<"Student 1:"<<endl;
    s1.display();
    cout<<"\nStudent 2:"<<endl;
    s2.display();
    cout<<"\nStudent 3:"<<endl;
    s3.display();
}
