using namespace std;
#include<iostream>
#include<string>
class Cat
{
    int age;
    double weight;
    string color; 

    public:
    Cat(int age, double weight, string color)
    {
        this->age = age;
        this->weight = weight;
        this->color = color;
    }

    Cat(Cat const &c)
    {
        this->age = c.age;
        this->weight = c.weight;
        this->color = c.color;
    };

    Cat() {  };
    ~Cat() {   }

    int getage()   {return this->age;}
    double getweight()     {return this->weight;}   
    string getcolor()  {return this->color;}
    void speak()    {cout << "miaomiaomiao";}
   
};

int main()
{
    Cat *c1 = new Cat();
    Cat *c2 = new Cat(0, 1.5, "white");
    Cat c3(*c2);
    return 0;
}

