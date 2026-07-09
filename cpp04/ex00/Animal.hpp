#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define BLUE "\033[38;2;78;76;118m"
#define PURPLE "\033[38;2;144;133;188m"
#define LPINK "\033[38;2;242;203;224m"
#define PINK "\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

class Animal {
protected:
  std::string _type;

public:
  Animal();
<<<<<<< HEAD
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  virtual ~Animal();

	std::string const& getType() const;
	virtual void	makeSound() const;
=======
  Animal(const std::string &type);
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  ~Animal()

	void	makeSound();

>>>>>>> 329488f79d93a5535b0cd7aa6910a5032603d0b2
};

#endif
