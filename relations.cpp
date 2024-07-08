#include <iostream>

class Super
{
    public:
        virtual void method1();
};
class Sub : public Super
{
    public:
        virtual void method2();
};

void Super::method1(void)
{
    std::cout << "Calling Method 1 from class Super\n";
}
void Sub::method2(void)
{
    std::cout << "Calling Method 2 from class Sub\n";
}
#define DEBUG   2
int main()
{

#if DEBUG==0
    Super p = super();
    p.method1();

    p = Sub();
   // ((sub&)p).method2();
#elif DEBUG==1

    Super* p = new Super();
    p->method1();
    p = new Sub();
    p->method1();

    ((Sub* )p)->method2();
    return 0;

#elif DEBUG==2
    Super super;
    super.method1();

    Sub sub;
    Super& ref = super;
    ref.method1();

    ref = sub;

    ref.method1();
   // ((Sub&)ref).method2();

    Super* ptr = &super;
    ptr->method1();

    ptr = &sub;
  //  ptr->method1();



#endif
}