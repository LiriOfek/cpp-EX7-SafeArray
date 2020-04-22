/********************************************************\
File Name: SafeArray.h
Author: Liri (22/4/2020)
Purpose: This header file contain class of SafeArray, with parameters
		 of the array and the array size, and declaration of functions that push,
		 pop elements from the array, get element and erase array
\********************************************************/

#pragma once
#include <iostream>

/*Class SafeArray that contain array, its size, and fucntions that add
element to the end of the array, and remove element form the end*/
template <class T>
class  SafeArray
{
public:

	SafeArray();
	/**
	* @brief  initialize the SafeArray object, initialize the array and
	*			the size of the array
	* @param  this function has no input/output parameters
	* @return this function has no return value
	* @notes  init the array and the size of the array to zero
	* @author  Liri
	*/

	unsigned int size() const;
	/**
	* @brief  get the size of the array
	* @param  OUT size of the array
	* @return the size of the array
	* @author  Liri
	*/
	bool push_back(const T & new_element);
	/**
	* @brief  push new the new element to the end of the array
	* @param  IN const T & new_element - the new element to push to array
	* @notes  the array change in such way that the new element is pushed
	*		  in the end of the array, and add one to the size of the array
	* @return this function has no return value
	* @author  Liri
	*/
	bool pop_back();
	/**
	* @brief  remove last element from the array
	* @param  This function has no input/output oarameters
	* @notes  the array change in such way that the last element from the
	*		  array is removed, and the size of the array reduced by one
	* @return this function has no return value
	* @author  Liri
	*/
	void erase();
	/**
	* @brief  erase the array, and release the memory
	* @param  This function has no input/output oarameters
	* @notes  the array change in such way it deleted, all the memory release,
	*		  and the size of the array reduce to zero
	* @return this function has no return value
	* @author  Liri
	*/
	bool resize_array(unsigned int new_size,
		unsigned int stop_fill_array);
	/**
	* @brief  resize the array to the given new size, and fill the array
	*		  with elements till stop_fill_array
	* @param  IN unsigned int new_size - the new size of the array
	*		  IN unsigned int stop_fill_array - till where to fill the array
	* @notes  the array change in such way that the size change to be the new size,
	*		  and the elements are the old elements till stop_fill_array
	* @return this function has no return value
	* @author  Liri
	*/
	T & operator[](unsigned int index);
	/**
	* @brief  get the element of array that in the given index
	* @param  IN unsigned int index - the index of the element from the array
	*		  OUT T & the element in the array in the given index
	* @return the element from the array in the givrn index
	* @author  Liri
	*/
private:
	unsigned int array_size;
	T * array;
};
