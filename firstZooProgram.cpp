#include <iostream>
#include <list>
using namespace std;

class Animal {

    // Create constructors for our class.

public:
    Animal (string aName) {
        name = aName;
        origin = "somewhere";
    }

    Animal() {
        age = 0;
        sex = "unknown";
        weight = 0;
        birthDate = "unknown";
        color = "unknown";
        name = "toBeNamed";
        origin = "someWhere";
    }

    int age;
    string sex;
    int weight;
    string birthDate;
    string color;
    string name;
    string origin;
};

class Hyena : public Animal {
    // Create a constructor that uses the super class's constructor
public:
    Hyena (string someName) : Animal(someName) {

    }
    Hyena() : Animal() {

    }
};

int main() {
    cout << "\nWelcome to my Zoo Program!\n";

    // Create a NEW animal object
    // The new keyword allocates memory on the heap and returns the address of the object.
    Animal* myAnimal = new Animal;

    myAnimal -> age = 10;
    myAnimal -> sex = "m";
    myAnimal -> weight = 55;
    myAnimal -> birthDate = "fall";
    myAnimal -> color = "red";
    myAnimal -> name = "Bob";

    cout << "\nThis is my animal object (created with 'new'): \n";

    cout << "Age: " << myAnimal -> age << " Sex: " << myAnimal -> sex << " Weight: " << myAnimal -> weight << " Birth Date: " << myAnimal -> birthDate
    << " Color: " << myAnimal -> color << " Name: " << myAnimal -> name << endl;

    // Create another animal without using a pointer and new
    Animal anotherAnimal;

    anotherAnimal.age = 10;
    anotherAnimal.color = "red";
    anotherAnimal.birthDate = "2021";

    cout << "\nThis is anotherAnimal: \n";
    cout << "Age: " << anotherAnimal.age << " Color: " << anotherAnimal.color << " Birth Date: " << anotherAnimal.birthDate << endl;

    // Create an animal with a name.
    Animal* animalWithAName = new Animal("Leo");

    cout << "\nThis is an animal with a name: ";
    cout << "\nname: " << animalWithAName -> name << endl;

    // Create an animal with the default constructor
    Animal* animalWithDefaultConstructor = new Animal();


    cout << "\nThis is an animal with a defaultConstructor: ";
    cout << "\nAge: " << animalWithDefaultConstructor -> age << " name: " << animalWithDefaultConstructor -> name << endl;

    // Create a Hyena
    Hyena* myNewHyena = new Hyena("Zig");
    cout << "\nThis is a Hyena: \n";
    cout << "Origin: " << myNewHyena -> origin << " Name: " << myNewHyena -> name << endl;

    Hyena* myNewHyena2 = new Hyena();
    cout << "\nThis is a Hyena2: \n";
    cout << "Name: " << myNewHyena2 -> name << "\n";

    return 0;
}