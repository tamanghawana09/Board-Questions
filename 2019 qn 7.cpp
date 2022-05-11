//WAP to demostrate ambiguity in multiple inheritance......
#include <iostream>
using namespace std;
class A {
  public:
    Father()
    {
      cout << "He is a father." << endl;
    }
};
class B {
  public:
    Mother()
    {
      cout << "She is a mother." << endl;
    }
};
class Son: public A, public B {
};
int main()
{
    Son b1;
    b1.Father();   /*Causes ambiguity*/
    return 0;
}
/*Ambiguity resolution
int main()
{
    Son b;
    b.A::Father();
    b.B::Father();
    return 0;
}*/
