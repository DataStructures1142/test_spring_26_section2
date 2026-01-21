#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;
    string breed;
public:
    void setName(string n);
    void setAge(int a);
    void setBreed(string b);
    string getName() const;
    int getAge() const;
    string getBreed() const;
    void bark() const;
};

void Dog::setName(string n) {
    name = n;
}
void Dog::setAge(int a) {
    age = a;
}
void Dog::setBreed(string b) {
    breed = b;
}
string Dog::getName() const {
    return name;
}
int Dog::getAge() const {
    return age;
}
string Dog::getBreed() const {
    return breed;
}

void Dog::bark() const {
    cout << "Woof! Woof!" << endl;
}

int main()
{
    Dog dogOne;

    dogOne.setName("Rex");
    dogOne.setAge(1E6);
    dogOne.setBreed("Doodle");

    cout << "Name: " << dogOne.getName() << endl;
    cout << "Age: " << dogOne.getAge() << endl;
    cout << "Breed: " << dogOne.getBreed() << endl;

    dogOne.bark();
    
}