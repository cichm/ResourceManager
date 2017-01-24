#pragma once

template<class T>
class Vide
{
private:
	T first_;
	T second_;
public:
	T compare(void) noexcept;
public:
	void set(T first, T second) noexcept;
public:
	bool operator==(Vide& vide) const noexcept;
};

template <class T>
T (Vide<T>::compare)(void) noexcept
{
	if (first_ == second_) return true;
	else return false;
}

template <class T>
void (Vide<T>::set)(T first, T second) noexcept
{
	this->first_ = first;
	this->second_ = second;
}

template <class T>
bool (Vide<T>::operator==)(Vide& vide) const noexcept
{
	if (this->first_ == vide.first_)	return true;
	return false;
}
