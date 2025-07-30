/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:30:17 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/28 22:41:08 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>


template <typename T>
void swap(T &value1, T &value2){
	T swap_value;
	swap_value = value1;
	value1 = value2;
	value2 = swap_value;
}

template <typename T>
T min(T value1, T value2){
	if (value1 <= value2)
		return value1;
	return value2;
}

template <typename T>
T max(T value1, T value2){
	if (value1 >= value2)
		return value1;
	return value2;
}