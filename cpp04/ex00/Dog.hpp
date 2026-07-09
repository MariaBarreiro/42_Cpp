#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog();
<<<<<<< HEAD
=======
  Dog(const std::string &type);
>>>>>>> 329488f79d93a5535b0cd7aa6910a5032603d0b2
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  ~Dog();

	void	makeSound() const;
};

#endif

