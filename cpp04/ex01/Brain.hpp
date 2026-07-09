#ifndef BRAIN_HPP
#define BRAIN_HPP

#define NBR_IDEAS 100

#include <iostream>

#define BLUE "\033[38;2;78;76;118m"
#define PURPLE "\033[38;2;144;133;188m"
#define LPINK "\033[38;2;242;203;224m"
#define PINK "\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

class Brain {
private:
	std::string ideas[NBR_IDEAS];

public:
	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);

	void		setIdea(unsigned int i, std::string const &idea);
	std::string	getIdea(unsigned int i) const;

};

#endif
