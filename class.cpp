#include<iostream>
using namespace std;

class Father{
    public: 
    void function1()
    {
        cout<<"I'm the Father"<<endl;
    }
};
class Mother{
    public:
    void function2(){
        cout<<"I'm the Mother"<<endl;
    }
};
class Child:public Father,public Mother{
    public:
    void function3()
    {
        cout<<"I'm the Child here"<<endl;
    }
};

 main()
{
    Child obj1;
    obj1.function1();
    obj1.function2();
    obj1.function3();

}