#pragma once

template<class T>
struct OperatorOverloading
{
	T& OperatorOverloading<T>::operator++()
	{
		T& reference = static_cast<T&>(*this);
		reference.add();
		return reference;
	}

	T operator++(int)
	{
		AddHelper<T> copy(*this);
		operator++();
		return static_cast<T>(copy);
	}
};