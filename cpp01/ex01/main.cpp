#include "Zombie.hpp"

int main()
{
	Zombie *test;

	test = zombieHorde(5, "kaisa");
	delete[] test;
}
