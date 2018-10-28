#include <iostream>

using namespace std;

class MyClass
{
public:

    MyClass(int x, string y, double z)
    {
        age = x;
        name =  y;
        income = z;
    }
    friend void PrintMembers(MyClass& ); /*this pointer is not passed to friend function (as its an external function) so it cant access the
                                                members directly; rather an alias is provided to access the member items*/


private:
        int age;
    std::string name;
    double income;

};

void PrintMembers (MyClass& thisclass)
{
    cout<< thisclass.age<<endl;
    cout<< thisclass.name<<endl;
    cout<< thisclass.income<<endl;

}

int main()
{

    MyClass newClass(21,"Kshitij",4600.00);
    MyClass& thisclass = newClass; /*Reference created ; Does this reference auto-delete itself? Yes its just an alias, the newClass object is cleaned
                                        up as soon as it goes out of scope*/
    PrintMembers(thisclass);

    return 0;
}
