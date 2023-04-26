#include "Serializer.hpp"

int main()
{
	Serializer  test;
	Data        ptr;
	int	arr[] = {1, 2, 3};
	uintptr_t	num;

	num = arr[0];
	ptr.i = 101;

	test.serialize(&ptr);
	test.deserialize(num);
}