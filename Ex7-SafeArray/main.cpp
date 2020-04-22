/********************************************************\
File Name: main.cpp
Author: Liri (22/4/2020)
Purpose: This file contain tests for functions in SafeArray.cpp,
		 make array of chars and ints, add elements to them, remove
		 elements and print the array
\********************************************************/

#include "SafeArray.h"
#include "SafeArray.cpp"

const int INITIAL_INDEX = 0;
const char* const COMMA = ", ";
const char* ARRAY_ELEMENTS = "Array elements: ";
const char* ARRAY_SIZE = "Size of array: ";
const char* ARRAY_AFTER_REMOVE_ELEMENT = "Array after remove last element: ";
const char* ARRAY_SIZE_AFTER_REMOVE_ELEMENT = "Size of array after remove last element: ";
const char* BAD_ALLOCATION = "Bad allocation caught: ";

void safe_array_of_chars() {
	/**
	* @brief  create safe array of chars, fill it with elements and call function
	*			that print the elements, before and after remove element and
	*			in the end delete the array
	* @param  this function has no input/output parameters
	* @return this function has no return value
	* @notes  this function create SafeArray object of chars, fill it with elements,
	*			and in the end delete the array
	* @author  Liri
	*/
	SafeArray<char> array;

	try
	{
		array.push_back('a');
		array.push_back('b');
		array.push_back('c');
	}
	catch (std::bad_alloc& bad_allocation) {
		std::cerr << BAD_ALLOCATION << bad_allocation.what() << std::endl;
	}

	/*print array elements*/
	std::cout << ARRAY_ELEMENTS;
	for (unsigned int index = INITIAL_INDEX; index < array.size(); index++) {
		std::cout << array[index] << COMMA;
	}
	std::cout << std::endl;
	/*print array size*/
	std::cout << ARRAY_SIZE << array.size() << std::endl;
	/*print array after pop last element from it*/
	try {
		array.pop_back();
	}
	catch (std::bad_alloc& bad_allocation) {
		std::cerr << BAD_ALLOCATION << bad_allocation.what() << std::endl;
	}
	std::cout << ARRAY_AFTER_REMOVE_ELEMENT;
	/*print the size of the array after pop last element*/
	for (unsigned int index = INITIAL_INDEX; index < array.size(); index++) {
		std::cout << array[index] << COMMA;
	}
	std::cout << std::endl;
	std::cout << ARRAY_SIZE_AFTER_REMOVE_ELEMENT << array.size() << std::endl << std::endl;
}

int main() {
	/**
	* @brief  test the functions of SafeArray, create array of chars and ints,
	*		  print the elements before and after pop the last element and
	*		  delete the array
	* @param  OUT 0 for success
	* @return 0 for success
	* @notes  this function create SafeArray object of chars, fill it with elements,
	*			and in the end delete the array
	* @author  Liri
	*/
	safe_array_of_chars();

	return 0;
}