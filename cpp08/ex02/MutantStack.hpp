/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 21:47:57 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/03 01:40:39 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>
#include <stack>

template <typename S>
class MutantStack: public std::stack<S>{
	public:
		//typedef names for cleaner and readible code
		typedef std::stack<S>					stack;
		typedef typename stack::container_type	container;
		typedef typename container::iterator	iterator;
		

	public:
		MutantStack(){
			std::cout << "Default Constructer Called\n";
		}

		MutantStack(const MutantStack &other){
			std::cout << "Copy Constructer Called\n";
			*this = other;
		}

		~MutantStack(){
			std::cout << "Default Destructer Called\n";
		}

		//can use in public method from c deque object
		iterator begin(){
			return stack::c.begin();
		}

		iterator end(){
			return stack::c.end();
		}

};