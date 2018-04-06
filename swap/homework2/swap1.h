#include "stdafx.h"
template < class T >  // or template< typename T >
 void swap1(T &value1, T &value2)
{
	T swapValue = value1;
	value1 = value2;
	value2 = swapValue;		
} 
