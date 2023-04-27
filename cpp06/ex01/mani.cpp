#include "Serializer.hpp"

// int main()
// {
// 	Serializer  test;
// 	Data        ptr;
// 	int	arr[] = {1, 2, 3};
// 	uintptr_t	num;

// 	num = arr[0];
// 	ptr.i = 101;

// 	num = test.serialize(&ptr);
// 	std::cout << "num " << num << std::endl;
// 	test.deserialize(num);

// }

int main() {
    // Create an instance of MyData
	Serializer myclass;
    Data data = {10, 3};

    // Serialize the data
    uintptr_t serialized = myclass.serialize(&data);

    // Deserialize the data
	Data* deserialized = myclass.deserialize(serialized);

    // Print the original and deserialized data
    std::cout << "Original: " << data.x << ", " << data.y << std::endl;
    std::cout << "Deserialized: " << deserialized->x << ", " << deserialized->y << std::endl;

    return 0;
}