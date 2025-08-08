/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 06:14:14 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/08 06:08:17 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
	std::cout << "Default Constructer Called\n";
}

PmergeMe::PmergeMe(const PmergeMe &other):_vec(other._vec), _deq(other._deq){
	std::cout << "Copy Construcetr Called\n";
}

PmergeMe::~PmergeMe(){
	std::cout << "Destrcuter Called\n";
}


void PmergeMe::stack_containers(char **args)
{
	for (int i = 1; args[i]; i++)
	{
		int number = atoi(args[i]);
		_vec.push_back(number);
		_deq.push_back(number);
	}
	
}
template<typename T>
void binary_insert(T &smallest, int element)
{
	typename T::iterator pos = std::lower_bound(smallest.begin(), smallest.end(), element);
	smallest.insert(pos, element);
}

template<typename T>
void PmergeMe::apply_sort(T &container)
{
	std::vector<std::pair<int, int> > tmp;

	
	for (size_t i = 0; i < container.size() - 1;i++, i++)
	{
		if (container[i] > container[i + 1])
			std::swap(container[i], container[i + 1]);
		tmp.push_back(std::make_pair(container[i], container[i + 1]));
		
	}
	
	int leftover = 0;
	if (container.size() % 2 != 0)
		leftover = *(container.end() - 1);


	std::vector<std::pair<int, int> >::iterator it = tmp.begin();
	T sorted;
	//push smallest half and recursevly sort
	while (it != tmp.end())
	{
		sorted.push_back(it->first);
		it++;
	}

	if (sorted.size() > 1)
		apply_sort(sorted);

	it = tmp.begin();
	//push biggest half each on its order to the first half
	while (it != tmp.end())
	{
		binary_insert(sorted, it->second);
		it++;
	}
	//check if any number left
	if (leftover != 0)
		binary_insert(sorted, leftover);
	container.clear();
	container = sorted;
	
}

template<typename T>
void print_container(T container)
{
	typename T::iterator it = container.begin();
	while (it != container.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

long long get_ustime(){
	struct timeval time;
	gettimeofday(&time, NULL);
	return (static_cast<long long>(time.tv_sec) * 1000000LL + time.tv_usec);
}

void PmergeMe::execute()
{
	// std::cout << "\ttry vector\t" << std::endl;
	//********************************************
	std::cout << "before\t:\t"; print_container(_vec);
	long long start = get_ustime();
	apply_sort(_vec);
	long long end = get_ustime();
	std::cout << "after\t:\t"; print_container(_vec);

	std::cout << "time to process a range of " << _vec.size() << " elements";
	std::cout << " with std::vector : " << (end - start) << " us" << std::endl;
	//********************************************


	// std::cout << "\ttry deque\t" << std::endl;
	//********************************************
	start = get_ustime();
	apply_sort(_deq);
	end = get_ustime();
	
	std::cout << "time to process a range of " << _deq.size() << " elements";
	std::cout << " with std::deque : " << (end - start) << " us" << std::endl;
	//********************************************
}
