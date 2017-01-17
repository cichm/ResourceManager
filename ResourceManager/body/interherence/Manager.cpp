#include "stdafx.h"
#include "Manager.h"

Manager::Manager(std::string name_, double salary_): Employee(name_, salary_)
{
}

Manager::Manager(Manager& manager_)
{
	name_	= manager_.name_;
	salary_ = manager_.salary_;
}

Manager::Manager(): Employee()
{
}

std::string Manager::getName()
{
	return name_;
}

double Manager::getSalary()
{
	double base_salary = salary_;
	return base_salary + prize_;
}

void Manager::SetBonus(double prize)
{
	this->prize_ = prize;
}
