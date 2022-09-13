#include <iostream>
using namespace std;
class A
{
public :
A() {fun();}
~A() { fun();}
void fun()
{ cout<< 1; }
};
int main()
{

A a;
a.fun();
return 0;
}
