#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Animal
{
    public:
        virtual void MakeSound() = 0;
        virtual ~Animal() = default;
};

class Dog : public Animal
{
    public:
        Dog()
        {   
            RunOnFourLegs();
        }
        void MakeSound() override
        {
            cout << "Doog sound" << endl;
        }
        void RunOnFourLegs()
        {
            cout << "Dog runs on four legs" << endl;
        }
};

class cow : public Animal
{
    public:
        void MakeSound() override
        {
            cout << "Cow sound" << endl;
        }
};


class cat : public Animal
{
    public:
        void MakeSound() override
        {
            cout << "Cat sound" << endl;
        }
};

void Sound (std::vector<Animal*> animals)
{
    for (auto animal : animals)
    {
        animal->MakeSound();

        if (Dog* dog = dynamic_cast<Dog*>(animal))
        {
            dog->RunOnFourLegs();
        }
        
    }
}

int main()
{
    vector<Animal*> animals;
    animals.push_back(new Dog);
    animals.push_back(new cow);
    animals.push_back(new cat);
    Sound(animals);

    return 0;
} 