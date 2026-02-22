//STATIC MEMBER FUNCTION
/*we can not access the static data member in the the class directly
 if it is the part of private then we use static member function*/
//static ember function only access the static data memeber but not the access class member
//it is a function of class

#include<iostream>
using namespace std;
class customer{
    
    string name;
    int acc_no;
    int balance;
    static int total_customer;
    static int total_balance;

    public:
    customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }

    void display(){
        cout<<"name is:"<<name<<endl;
        cout<<"account number is:"<<acc_no<<endl;
        cout<<"balance is:"<<balance<<endl; 
    }

    //STATIC MEMBER FUNCTION
    static void accessstatic(){
        cout<<"total customer:"<<total_customer<<endl;
        cout<<"total balance:"<<total_balance<<endl;
    }

    void deposite(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }




    
};

//inilatization of static member 
    //data_type_of_static_member class_name ::total_customer(static member name)=0
    //int customer :: total_customer=0
    int customer :: total_customer=0;
    int customer :: total_balance=0;


int main(){

    customer A("vanshi",2343,1000);
    //customer A1("khushi",8966,10000);
    A.display();
    customer A1("khushi",8966,10000);
    A1.display();
    customer::accessstatic();
    A.deposite(10000);
    customer::accessstatic();
    A1.withdraw(500);
    customer::accessstatic();

    
    return 0;
}
