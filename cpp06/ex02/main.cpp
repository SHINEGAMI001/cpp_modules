/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:39:42 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/25 21:33:28 by hlachhab         ###   ########.fr       */
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
	if ((Base*)&base_ref){
		try{
			A& a_cast = dynamic_cast<A&>(base_ref);
			(void)a_cast;
			std::cout << "A is the identified one" << std::endl;
		}catch(std::exception &e)
		{
			try{
				B& b_cast = dynamic_cast<B&>(base_ref);
				(void)b_cast;
				std::cout << "B is the identified one" << std::endl;
			}catch(std::exception &e)
			{
				try{
				C& c_cast = dynamic_cast<C&>(base_ref);
				(void)c_cast;
				std::cout << "C is the identified one" << std::endl;	
				}catch(std::exception &e)
				{
					// (void)unused_cast;
					std::cout << "no identified derived class : " << e.what() << std::endl;
				}
			}
		}
	}
	else{
		
		std::cout << "error: base_ref cant be NULL\n";
		return;
	}
}


int main()
{	
	Base *base_t = generate();

		
	identify(base_t);
	identify(*base_t);

	delete base_t;
	return 0;
	

}