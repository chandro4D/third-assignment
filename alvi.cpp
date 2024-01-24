#include<iostream>
using namespace std;

class mybio
{
    public:
    void show()
    {
        cout<<"I am chandro"<<endl;
    }

};
class mybio1:public mybio
{
    public:
    void display()
    {
        cout<<"I love bangladesh"<<endl;
    }
};
class mybio3:public mybio
{
    public:
    void bio()
    {
        cout<<"chandro shakhor mondal"<<endl;

    }
};
int main()
{
    mybio1 obj1;
    obj1.show();
    obj1.display();

    mybio3 obj3;
    obj3.show();
    obj3.bio();

    return 0;
}