#include "Fixed.hpp"
#include <iostream>
int main(void)
{
    std::cout << std::boolalpha;

    std::cout << PURPLE "========== COMPARISON OPERATORS (INTS) ==========" RES << std::endl;
    Fixed c(10);
    Fixed d(5);

    std::cout << "a: " << c << std::endl;
    std::cout << "b: " << d << std::endl;
    std::cout << (c > d)  << " (a > b)"  << std::endl;
    std::cout << (c < d)  << " (a < b)"  << std::endl;
    std::cout << (c >= d) << " (a >= b)" << std::endl;
    std::cout << (c <= d) << " (a <= b)" << std::endl;
    std::cout << (c == d) << " (a == b)" << std::endl;
    std::cout << (c != d) << " (a != b)" << std::endl;

    std::cout << PURPLE "========== COMPARISON OPERATORS (FLOATS) ==========" RES << std::endl;
    Fixed e(10.5f);
    Fixed f(10.5f);
    Fixed g(-2.75f);

    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;

    std::cout << (e == f) << " (e == f)" << std::endl;
    std::cout << (e != g) << " (e != g)" << std::endl;
    std::cout << (g < e)  << " (g < e)"  << std::endl;
    std::cout << (g <= e) << " (g <= e)" << std::endl;
    std::cout << (e > g)  << " (e > g)"  << std::endl;
    std::cout << (e >= f) << " (e >= f)" << std::endl;


    std::cout << PURPLE "========== ARITHMETIC OPERATORS (INTS) ==========" RES << std::endl;
    Fixed x(10);
    Fixed y(5);

    std::cout << "a: " << x << std::endl;
    std::cout << "b: " << y << std::endl;
    std::cout << (x + y) << " (a + b)" << std::endl;
    std::cout << (x - y) << " (a - b)" << std::endl;
    std::cout << (x * y) << " (a * b)" << std::endl;
    std::cout << (x / y) << " (a / b)" << std::endl;


    std::cout << PURPLE "========== ARITHMETIC OPERATORS (FLOATS) ==========" RES << std::endl;
    Fixed h(2.5f);
    Fixed i(1.5f);

    std::cout << "a: " << h << std::endl;
    std::cout << "b: " << i << std::endl;
    std::cout << (h + i) << " (a + b)" << std::endl;
    std::cout << (h - i) << " (a - b)" << std::endl;
    std::cout << (h * i) << " (a * b)" << std::endl;
    std::cout << (h / i) << " (a / b)" << std::endl;


    std::cout << PURPLE "========== INCREMENT / DECREMENT ==========" RES << std::endl;
    Fixed a(1);
    Fixed b(2.5f);

    std::cout << "a: " << a << std::endl;
    std::cout << ++a << " (++a)" << std::endl;
    std::cout << a << " (a)" << std::endl;

    std::cout << "b: " << b << std::endl;
    std::cout << b++ << " (b++)" << std::endl;
    std::cout << b << " (b)" << std::endl;

    std::cout << --a << " (--a)" << std::endl;
    std::cout << a << " (a)" << std::endl;

    std::cout << b-- << " (b--)" << std::endl;
    std::cout << b << " (b)" << std::endl;


    std::cout << PURPLE "========== MIN / MAX ==========" RES << std::endl;

    Fixed m(42.42f);
    Fixed n(21.21f);

    std::cout << "m: " << m << std::endl;
    std::cout << "n: " << n << std::endl;

    std::cout << "min(m, n): " << Fixed::min(m, n) << std::endl;
    std::cout << "max(m, n): " << Fixed::max(m, n) << std::endl;


    std::cout << PURPLE "========== CONST MIN / MAX ==========" RES << std::endl;

    const Fixed j(100.5f);
    const Fixed k(100.25f);

    std::cout << "j: " << j << std::endl;
    std::cout << "k: " << k << std::endl;

    std::cout << "min(j, k): " << Fixed::min(j, k) << std::endl;
    std::cout << "max(j, k): " << Fixed::max(j, k) << std::endl;

    return 0;
}

