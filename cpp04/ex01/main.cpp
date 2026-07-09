#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    std::cout << "\n========================================\n";
    std::cout << "TEST 1 - POLYMORPHISM";

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;


    std::cout << "\n========================================\n";
    std::cout << "TEST 2 - ARRAY OF ANIMALS";

    Animal* animals[10];

    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();

    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();


    for (int i = 0; i < 10; i++)
        delete animals[i];


    std::cout << "\n========================================\n";
    std::cout << "TEST 3 - COPY CONSTRUCTOR";

    Dog basicDog;

    basicDog.setIdea(0, "I like bones.");

    {
        std::cout << "\nCreating a copy inside a scope...\n" << std::endl;

        Dog tmp(basicDog);

        std::cout << "basicDog idea : " << basicDog.getIdea(0) << std::endl;
        std::cout << "tmp idea      : " << tmp.getIdea(0) << std::endl;

        std::cout << "\nChanging tmp's idea...\n" << std::endl;

        tmp.setIdea(0, "I like cats.");

        std::cout << "basicDog idea : " << basicDog.getIdea(0) << std::endl;
        std::cout << "tmp idea      : " << tmp.getIdea(0) << std::endl;

        std::cout << "\nLeaving scope..." << std::endl;
    }

    std::cout << "\nAfter tmp has been destroyed:\n" << std::endl;

    std::cout << "basicDog idea : " << basicDog.getIdea(0) << std::endl;

    std::cout << "\nIf the program reaches here without crashing,\n";
    std::cout << "the copy constructor performed a deep copy.\n";


    std::cout << "\n========================================\n";
    std::cout << "TEST 4 - COPY ASSIGNMENT";
    std::cout << "\n========================================\n\n";

    Dog dogA;
    Dog dogB;

    dogA.setIdea(0, "Original idea");
    dogB.setIdea(0, "Different idea");

    std::cout << "Before assignment:" << std::endl;
    std::cout << "dogA : " << dogA.getIdea(0) << std::endl;
    std::cout << "dogB : " << dogB.getIdea(0) << std::endl;

    dogB = dogA;

    std::cout << "\nAfter assignment:" << std::endl;
    std::cout << "dogA : " << dogA.getIdea(0) << std::endl;
    std::cout << "dogB : " << dogB.getIdea(0) << std::endl;

    std::cout << "\nChanging dogB..." << std::endl;

    dogB.setIdea(0, "Changed after assignment");

    std::cout << "dogA : " << dogA.getIdea(0) << std::endl;
    std::cout << "dogB : " << dogB.getIdea(0) << std::endl;

    std::cout << "\nIf dogA did not change, operator= performs a deep copy.\n";


    std::cout << "\n========================================\n";
    std::cout << "END OF TESTS";
    std::cout << "\n========================================\n" << std::endl;

    return (0);
}
