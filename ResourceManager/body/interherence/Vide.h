#pragma once

template<class T>
class Vide
{
private:
	T first_;
	T second_;
public:
	T Vide<T>::compare() noexcept;
public:
	void Vide<T>::set(T first, T second) noexcept;
};

template <class T>
T Vide<T>::compare() noexcept
{
	if (first_ == second_) return true;
	else return false;
}

template <class T>
void Vide<T>::set(T first, T second) noexcept
{
	this->first_ = first;
	this->second_ = second;
}
