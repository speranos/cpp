#include "Fixed.hpp"

int main()
{
    const float num = 10.5;
    Fixed a(10);
    Fixed b(num);

    std::cout << "a is " << a << " GTYt "  << std::endl;
    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
// std::cout << c.getRawBits() << std::endl;

}