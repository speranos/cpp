#include "Fixed.hpp"

// int main()
// {
//     const float num = 10.5;
//     Fixed a(10);
//     Fixed b(num);

//     std::cout << "a is " << a << " GTYt "  << std::endl;
//     // std::cout << a.getRawBits() << std::endl;
//     // std::cout << b.getRawBits() << std::endl;
// // std::cout << c.getRawBits() << std::endl;

// }
int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
// a = 
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}