// QUESTION 1
#include<iostream>
using namespace std;
/*class student{
    public://by default it is private we give class as a public to access the main function
    int roll_no;
    string name;
    int marks;
    char grade;
};


int main(){

    student s1;//s1 is a objct of class
    s1.name="vanshika";
    s1.roll_no=19;
    s1.marks=99;
    s1.grade='A';
    cout<<"name is:"<<s1.name<<endl;
    cout<<"roll no is:"<<s1.roll_no<<endl;
    cout<<"marks is:"<<s1.marks<<endl;
    cout<<"grade is:"<<s1.grade<<endl;

    //class gives the blue print of object
    //object is a real world entity



    return 0;
}*/




//QUESTION 2
//if we have a class as a private then how to access the data item of private class
//by using functions
#include<iostream>
using namespace std;

/*class student{

    //by default it is private we no need to write this
    string name;
    int marks;
    int age;

    public:
    void setvalue(int a){ //it is called setter function set the value
        age=a;
    }

    public:
    void getvalue(int a){//getter function get the value
        cout<<"age is:"<<a;
    }
    
};
int main(){

    student s1;
    s1.setvalue(19);
    s1.getvalue(19);
    

    return 0;
}*/



//QUESTION 3 PRACTICE OF CLASS AND OBJECT
#include<iostream>
using namespace std;

/*class student{
    public:
    int age;
    int marks;
    string name;
    char grade;

};
int main(){

    student s1;
    s1.name="vanshika";
    s1.age=19;
    s1.grade='A';
    s1.marks=99;
    cout<<"name is:"<<s1.name<<endl;
    cout<<"marks is:"<<s1.marks<<endl;
    cout<<"grade is:"<<s1.grade<<endl;
    cout<<"age is:"<<s1.age<<endl;


    return 0;
}*/

#include<iostream>
using namespace std;

/*class student{

    int age;
    int marks;
    int roll_no;
    string name;
    char grade;

    public:
    void set_values(int a,int b,int c){
        age=a;
        marks=b;
        roll_no=c;
    }

    public:
    void display_values(int a,int b,int c){
        
        cout<<"age is:"<<a<<endl;
        cout<<"marks is:"<<b<<endl;
        cout<<"roll_no is:"<<c<<endl;
        
    }
    
};

int main(){

    student s1;
    s1.set_values(19,98,74);
    s1.display_values(19,98,74);
    

    return 0;
}*/

