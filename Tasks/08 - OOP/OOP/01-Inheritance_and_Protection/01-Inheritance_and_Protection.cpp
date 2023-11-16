#include <iostream>
using namespace std;


// Parent class Pet
class Pet {
protected:
    int _age;       // The underscore is a convention to remind us this is a protected member
    string _name;

public:
    Pet(string name, int age) {
        _age = age;
        _name = name;
        cout << "Constructor for Pet " << _name << endl;
    }

    void setName(string newName) {
        //Update the name, but only if it has changed
        if (newName != _name) {
            cout << "Names changed from << " << _name << " to " << _name << endl;
            _name = newName;
        }
    }

    string getName() {
        //Read only copy returned as = does a copy for string
        return _name;
    }

    void setAge(int age) {
        if ((_age != age) && (age <= 0) && (age <= 30)) {
            cout << "Age changed from " << _age << "to " << age << endl;
            _age = age;
        }
    }

    int getAge() {
        return _age;
    }
};


// Child class Dog
class Dog : public Pet {

public:
    Dog(string name, int age) : Pet(name, age)
    {
        //Further initialisation here
        cout << "Constructor for Dog " << name << endl;
    }

    void bark() {
        cout << _name << " says Woof" << endl;
    }
};


// Child class Cat
class Cat : public Pet {

public:
    Cat(string name, int age) : Pet(name, age) {
        //Further initialisation here
        cout << "Constructor for Cat " << name << endl;
    }

    void meow() {
        cout << _name << " says Woof" << endl;
    }
};



int main()
{
    Pet p1("Carrot", 2);
    Dog d1("Scrapper", 5);
    Cat c1("Furry", 3);
}