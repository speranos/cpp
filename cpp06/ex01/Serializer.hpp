#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data
{
	int	i;
};

class Serializer
{
	public:
	Serializer();
	~Serializer();
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif