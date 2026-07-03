#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#define BLUE "\033[38;2;78;76;118m"
#define PURPLE "\033[38;2;144;133;188m"
#define LPINK "\033[38;2;242;203;224m"
#define PINK "\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

class Fixed {
public:
  Fixed();                              // Default constructor
  Fixed(const Fixed &other);            // Copy constructor
  Fixed &operator=(const Fixed &other); // Copy assignment
  ~Fixed();                             // Destructor
  Fixed(const int nbr);
  Fixed(const float nbr);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;

  // Comparison operators
  bool operator>(const Fixed &other) const;
  bool operator<(const Fixed &other) const;
  bool operator>=(const Fixed &other) const;
  bool operator<=(const Fixed &other) const;
  bool operator==(const Fixed &other) const;
  bool operator!=(const Fixed &other) const;

  // Arithmetric operators
  Fixed operator+(const Fixed &other) const;
  Fixed operator-(const Fixed &other) const;
  Fixed operator*(const Fixed &other) const;
  Fixed operator/(const Fixed &other) const;

  // Increment and decrement operators
  // Pre-increment/decrement
  Fixed &operator++(void);
  Fixed &operator--(void);

  // Post-increment/decrement
  Fixed operator++(int);
  Fixed operator--(int);

  // Min / Max
	//Non-const versions
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

	//Const versions
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

private:
  int _value;
  static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
