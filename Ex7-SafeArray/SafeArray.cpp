/********************************************************\
File Name: SafeArray.cpp
Author: Liri (22/4/2020)
Purpose: This file contain the implementation of the fucntions in SafeArray,
the functions that push and pop element from the array, get element
and erase array
\********************************************************/

#pragma once

#include "SafeArray.h"

template<class T>
SafeArray<T>::SafeArray()
{
	array_size = 0;
	array = 0;
}

template<class T>
bool SafeArray<T>::resize_array(unsigned int new_size, unsigned int stop_fill_array) {
	T * new_array = new T[new_size];
	if (nullptr == new_array) {
		return false;
	}
	for (unsigned int i = 0; i < stop_fill_array; i++) {
		new_array[i] = array[i];
	}
	delete[] array;
	array = new_array;
	return true;
}

template<class T>
bool SafeArray<T>::push_back(const T & new_element)
{
	bool is_succeed;
	array_size++;
	unsigned int stop_fill_array = array_size - 1;
	is_succeed = resize_array(array_size, stop_fill_array);
	array[array_size - 1] = new_element;
	return is_succeed;
}

template<class T>
bool SafeArray<T>::pop_back()
{
	array_size--;
	return resize_array(array_size, array_size);
}

template<class T>
unsigned int SafeArray<T>::size()const
{
	return array_size;
}

template<class T>
T& SafeArray<T>::operator[](unsigned int index)
{
	return array[index];
}

template<class T>
void SafeArray<T>::erase()
{
	delete[] array;
	array_size = 0;
}


