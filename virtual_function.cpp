#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"base class function";
    }
};

class derived:public base{
    void show(){
        cout<<"derived class function";
    }
};

int main(){
    base *b;
    derived d;
    b=&d;
    b->show();

    return 0;
}