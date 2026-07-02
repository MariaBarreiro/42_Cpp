#ifndef FIXED_HPP
#define FIXED_HPP

#define BLUE "\033[38;2;78;76;118m"
#define PURPLE "\033[38;2;144;133;188m"
#define LPINK "\033[38;2;242;203;224m"
#define PINK "\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

#include <iostream>

class Fixed{
public:
	Fixed();								//Default constructor
	Fixed(const Fixed &other);				//Copy constructor
	Fixed &operator=(const Fixed &other);	//Copy assignment
	~Fixed();								//Destructor
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_value;
	static const int	_fractionalBits = 8;
};

#endif
