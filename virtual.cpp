#include <iostream>



class Device
{

    private:
        int num;

    public:
        virtual void setModelNumber(int num) 
        {
            std::cout << "from class " << std::endl;            
        }
};

class Mobile : public Device
{
    public:
        void setModelNumber(int num) override
        {
            this->modelNo = num;
            std::cout << "override " << std::endl;
        }

    int modelNo;
};

    #if 0
        Professor(string name, int age, int publications) : Person(name, age)
        {
            this->publications = publications;
        }
    #endif


int main()
{

    Device var;
    var.setModelNumber(1);


    Device *ptr = new Mobile();
    ptr->setModelNumber(3);

    return 1;
}