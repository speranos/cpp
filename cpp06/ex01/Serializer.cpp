#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "const called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Dst called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	//change cast model
	return((uintptr_t)ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	//change cast model
	return((Data*)raw);
}

