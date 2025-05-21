/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:04:08 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/05 16:07:28 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"
#include <list>

int	main(void) {

	std::cout << "---------------------------------------------\n" << std::endl;
	std::cout << "TEST 1: Verifying the inheritance of \n"
				"	MutantStack from stack" << std::endl;
	std::cout << "---------------------------------------------\n" << std::endl;

	MutantStack<int>	mstack1;

	mstack1.push(1);
	mstack1.push(2);
	mstack1.push(3);

	while (!mstack1.empty()) {
		std::cout << mstack1.top() << " ";
		mstack1.pop();
	}
	mstack1.push(100);
	std::cout << std::endl;

	std::cout << "---------------------------------------------\n" << std::endl;
	std::cout << "TEST 2: Verifying the copy constructor\n" << std::endl;
	std::cout << "---------------------------------------------\n" << std::endl;

	MutantStack<int>	mstack2(mstack1);

	std::cout << mstack2.top() << std::endl;
	mstack2.push(42);

	std::cout << "---------------------------------------------\n" << std::endl;
	std::cout << "TEST 3: Verifying the operator overload\n" << std::endl;
	std::cout << "---------------------------------------------\n" << std::endl;

	MutantStack<int>	mstack3;

	mstack3 = mstack2;

	while (!mstack3.empty()) {
		std::cout << mstack3.top() << " ";
		mstack3.pop();
	}
	std::cout << std::endl;

	std::cout << "---------------------------------------------\n" << std::endl;
	std::cout << "TEST 4: Verifying iterators\n" << std::endl;
	std::cout << "---------------------------------------------\n" << std::endl;

	MutantStack<int>	mstack4;

	mstack4.push(10);
	mstack4.push(20);
	mstack4.push(30);
	mstack4.push(40);

	std::cout << "Forward iteration (iterator): ";
	for (MutantStack<int>::iterator it = mstack4.begin();
		it != mstack4.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	mstack4.push(50);

	std::cout << "Forward iteration (const_iterator): ";
	for (MutantStack<int>::const_iterator const_it = mstack4.begin();
		const_it != mstack4.end(); ++const_it)
		std::cout << *const_it << " ";
	std::cout << std::endl;

	mstack4.push(60);

	std::cout << "Reverse iteration (rev_iterator): ";
	for (MutantStack<int>::rev_iterator rev_it = mstack4.rbegin();
		rev_it != mstack4.rend(); ++rev_it)
		std::cout << *rev_it << " ";
	std::cout << std::endl;

	mstack4.pop();

	std::cout << "Reverse iteration (const_rev_iterator): ";
	for (MutantStack<int>::const_rev_iterator const_rev_it = mstack4.rbegin();
		const_rev_it != mstack4.rend(); ++const_rev_it)
		std::cout << *const_rev_it << " ";
	std::cout << std::endl;

	std::cout << "---------------------------------------------\n" << std::endl;
	std::cout << "TEST 5: Subject tests\n" << std::endl;
	std::cout << "---------------------------------------------\n" << std::endl;

	MutantStack<int> mstack5;

	mstack5.push(5);
	mstack5.push(17);
	std::cout << "1st element of stack: " << mstack5.top() << std::endl;
	mstack5.pop();
	std::cout << "size of stack after pop: " << mstack5.size() << std::endl;
	mstack5.push(3);
	mstack5.push(5);
	mstack5.push(737);
	mstack5.push(0);
	MutantStack<int>::iterator it = mstack5.begin();
	MutantStack<int>::iterator ite = mstack5.end();
	++it;
	--it;
	std::cout << "elements of stack: ";
	while (it != ite)
	{
	std::cout << *it << " ";
	++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack5);

	std::list<int> l;
	l.push_front(5);
	l.push_front(17);
	std::cout << "1st element of list: "  << l.front() << std::endl;
	l.pop_front();
	std::cout << "size of list after pop: " << l.size() << std::endl;
	l.push_front(3);
	l.push_front(5);
	l.push_front(737);
	l.push_front(0);
	std::list<int>::iterator itl = l.end();
	std::list<int>::iterator itel = l.begin();
	--itl;
	std::cout << "elements of list: ";
	while (itl != itel)
	{
	std::cout << *itl << " ";
	--itl;
	}
	std::cout << std::endl;
	std::list<int> lst(l);

	return (0);
}
