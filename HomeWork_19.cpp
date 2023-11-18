#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Voice()
    {
        cout << "Voice!" << endl;
    }
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        cout << "Meow!" << endl;
    }
};

class Cow : public Animal
{
public:
    void Voice() override
    {
        cout << "Moo!" << endl;
    }
};

int main()
{
    const int arraySize = 3;

    Animal* animals[arraySize];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < arraySize; i++)
    {
        animals[i]->Voice();
    }

    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }

    return 0;
}
