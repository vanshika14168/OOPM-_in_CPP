//SINGLE INHERITANCE
//HUMAN(BASE CLASS)-->student(derived class)
//in single inheritance one class derived from another class
//when we call the base class constructor then firstly call base class constructor
//but in case of destructor it is opposite
//constructor and destructor of base class is automaticaaly called when derived class object is created


#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;

    public:
    /*human(){
        cout<<"base class constructor is called"<<endl;
    }

    ~human(){
        cout<<"base class destructor is called"<<endl;
    }*/
};

class student:public human{
    int roll_no;
    int marks;
    public:
    student(string name,int age,int roll_no,int marks){
        this->name=name;
        this->marks=marks;
        this->roll_no=roll_no;
        this->age=age;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<marks<<" "<<roll_no<<endl;
    }

    /*student(){
        cout<<"derived class constructor is called"<<endl;
    }

    ~student(){
        cout<<"derived class destructor is called"<<endl;
    }*/

};
int main(){

    student A("vanshika",19,99,74);
    A.display();

    //student A;


    return 0;
}