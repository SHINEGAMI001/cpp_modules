/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 06:14:26 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/08 06:04:45 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sys/time.h>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <stdexcept>
#include <utility>

// template <typename T>



class PmergeMe{
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;

	public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	~PmergeMe();

	void	stack_containers(char **args);
	template<typename T>
	void	apply_sort(T &container);
	void	execute();
	
};

int			check_args(char **av);
long long	get_ustime();
template<typename T>
void		print_container(T container);
