/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:39:42 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/23 21:57:23 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	std::srand(time(0));
	int random = std::rand() % 3;
	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else if (random == 2)
		return (new C);
	else
	{
		std::cout << "error: something went wrong with rand()" << std::endl;
		return NULL;
	}
}

void identify(Base *base_ptr)
{
	if (dynamic_cast<A*>(base_ptr))
		std::cout << "A is the identified one\n";
	else if (dynamic_cast<B*>(base_ptr))
		std::cout << "-B is the identified one\n";
	else if (dynamic_cast<C*>(base_ptr))
		std::cout << "C is the identified one\n";
	else
		std::cout << "error: no identified derived class" << std::endl;
}



void identify(Base &base_ref)
{
	void * handle_unused = NULL;
	Base & unused_cast = (Base &)handle_unused;
	// std::cout << "adress of null : " << &unused_cast << std::endl;
	try{
		unused_cast = dynamic_cast<A&>(base_ref);
		std::cout << "A is the identified one" << std::endl;
	}catch(std::exception &e)
	{
		try{
			unused_cast = dynamic_cast<B&>(base_ref);
			std::cout << "B is the identified one" << std::endl;
		}catch(std::exception &e)
		{
			try{
			unused_cast = dynamic_cast<C&>(base_ref);
			std::cout << "C is the identified one" << std::endl;	
			}catch(std::exception &e)
			{
				// (void)unused_cast;
				std::cout << "no identified derived class : " << std::endl;
			}
		}
	}
	
}


int main()
{
	// B f;
	Base *base_t = generate();

		
	identify(base_t);
	identify(*base_t);

	delete base_t;
	return 0;
	

}