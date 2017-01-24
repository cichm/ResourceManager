#pragma once
#include <string>
#include "Employee.h"
#include "OperatorOverloading.h"
#include <iostream>

class Employee
{
protected:
	std::string name_;
protected:
	double salary_;
public:
	Employee::Employee(std::string name, double salary)
		:name_(name), salary_(salary)
	{
	}
public:
	Employee::Employee(Employee & employee__)
	{
		name_	= employee__.name_;
		salary_ = employee__.salary_;
	}
public:
	Employee::Employee(void)
	{
	}
public:
	std::string Employee::getName(void)
	{
		return name_;
	}
public:
	double Employee::getSalary(void)
	{
		return salary_;
	}
public:
	void Employee::monthSalary(double byPercent)
	{
		double month_Salary__ = salary_ * byPercent / 100;
		salary_ += month_Salary__;

		return;
	}
public:
	inline bool (Employee::operator==)(Employee& rhs) const noexcept
	{
		
	}
};
