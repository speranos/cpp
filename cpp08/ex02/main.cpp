#include "MutantStack.hpp"

// int main()
// {
// 	MutanStack<int> me_stack;

// 	me_stack.push(6);
// 	me_stack.push(5);
// 	me_stack.push(3);
// 	me_stack.push(9);

// 	MutanStack<int>::iterator it;

// 	it = me_stack.begin();
// 	std::cout << *it << std::endl;

// }

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}