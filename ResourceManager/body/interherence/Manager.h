#pragma once
#include "Employee.h"

class Manager : public virtual Employee
{
private:
	double prize_;

public:
	Manager(std::string name_, double salary_);

public:
	Manager(Manager &manager_);

public:
	Manager();

public:
	std::string getName();

public:
	double getSalary();

public:
	void SetBonus(double prize);
};