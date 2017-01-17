#pragma once
#include "Employee.h"

class ArrayOfObjectsMainClass
{
protected:
	static inline void sendMessage(void) noexcept
	{
		std::cout << "\n\tTo ja - piekna tablica obiektow\n";
		return;
	}
};

template<typename T>
class ArrayOfObjects : public ArrayOfObjectsMainClass
{
public:
	void readMessage()
	{
		sendMessage();
	}
private:
	T value{ "" };
public:
	std::string value1() const
	{
		return value;
	}
public:
	void set_value(const std::string& value)
	{
		this->value = value;
	}
public:
	__declspec(property(get = value1, put = set_value)) std::string Value;
};