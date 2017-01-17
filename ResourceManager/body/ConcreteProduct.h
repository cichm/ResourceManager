#pragma once

#include "Product.h"
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <fstream>

class ConcreteProduct : public Product
{
public:
    ConcreteProduct() {};
    virtual ~ConcreteProduct() {};

    virtual void SomeRandomOp ()
    {
		std::cout << "SomeRandomOp" << std::endl;
    };

	virtual void HelpMe();

	virtual void CreateDatabase();

	virtual void AddNewPerson();

	virtual void StandardModyfication();

	virtual void FileCount();

	virtual void EditDatabase();

	virtual void SearchInBase();

	void ReadDatabase() override;
};

