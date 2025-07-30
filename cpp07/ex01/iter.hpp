/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 23:03:25 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/29 00:39:48 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>

template <typename F>
void iter(F *array_adrr, size_t array_len, void (*fun)(F&)){
	if (array_adrr == NULL || !fun)
		return;
	for (size_t i = 0; i < array_len; i++)
		fun(array_adrr[i]);
}