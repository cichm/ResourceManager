#pragma once

class Product;

class Creator
{
public:
    virtual ~Creator();

    virtual Product* FactoryMethod() = 0;

	void HelpMe();

	void CreateDatabase();

	void AddNewPerson();

	void StandardModification();

	void FileCount();

	void ReadDatabase();

	void EditDatabase();

	void SearchInBase();

private:
    Product* product;
};

