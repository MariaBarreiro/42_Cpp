#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n===== CORRECT POLYMORPHISM =====\n" << std::endl;

    const Animal* animal = new Animal();

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << PURPLE "Types:" RES << std::endl;
    std::cout << "animal -> " << animal->getType() << std::endl;
    std::cout << "dog    -> " << dog->getType() << std::endl;
    std::cout << "cat    -> " << cat->getType() << std::endl;

    std::cout << PURPLE "Sounds:" RES << std::endl;
	std::cout << "animal -> ";
	animal->makeSound();
	std::cout << "dog -> ";
	dog->makeSound();
	std::cout << "cat -> ";
	cat->makeSound();

    delete animal;
    delete dog;
    delete cat;

    std::cout << "\n===== WRONG POLYMORPHISM =====\n" << std::endl;

    const WrongAnimal* wrongAnimal = new WrongAnimal();

    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << PURPLE "Types:" RES << std::endl;
    std::cout << "wrongAnimal -> " << wrongAnimal->getType() << std::endl;
    std::cout << "wrongCat    -> " << wrongCat->getType() << std::endl;

    std::cout << PURPLE "Sounds:" RES << std::endl;
	std::cout << "WrongAnimal -> ";
	wrongAnimal->makeSound();
	std::cout << "WrongCat -> ";
    wrongCat->makeSound(); 

    delete wrongCat;
    delete wrongAnimal;

    return 0;
}
/*int main() {
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();
  return 0;
}*/
