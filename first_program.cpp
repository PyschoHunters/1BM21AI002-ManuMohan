#include <iostream>

using namespace std;
class add{
    public: int a,b;
    private: int c,d;
    public:int addition()
    {
        cout<<a+b;
    }
    public: void subtraction(int p,int q);
};

void add::subtraction(int p,int q)//:: is the scope resolution operator. you can use it to access variables that are not in your scope.
{
    cout<<p-q;
}


class add_private
{
    private:int a,b; //private means the objects created using this class cant access these variables
    //even if this keyword is not provided the variables are protected or "private" by default
    public: void getab(int m, int n)
    {
        a=m;
        b=n;
    }
    public: void addition()
    {
        cout<<a+b;
    }
    
};

int main()
{
    add a1;
    a1.a=20;
    a1.b=30;
    a1.addition();
    a1.subtraction(50,30);
    /* add_private a2;
    a2.a=30; */
    add_private a2;
    a2.getab(10,20);
    a2.addition();
}
