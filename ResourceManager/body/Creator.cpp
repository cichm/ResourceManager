#include "stdafx.h"
#include "Creator.h"
#include "Product.h"

Creator::~Creator()
{
    if (product != NULL)
    {
        delete product;
    }
}

void Creator::HelpMe()
{
	product = FactoryMethod();

	if (product != NULL)
	{
		product->HelpMe();
	}
}

void Creator::CreateDatabase()
{
	product = FactoryMethod();

	if (product != NULL)
	{
		product->CreateDatabase();
	}
}

void Creator::AddNewPerson()
{
	product = FactoryMethod();

	if (product != NULL)
	{
		product->AddNewPerson();
	}
}

void Creator::StandardModification()
{
	product = FactoryMethod();

	if (product != NULL)
	{
		product->StandardModyfication();
	}
}

void Creator::FileCount()
{
	product = FactoryMethod();

	if (product != NULL)
	{
		product->FileCount();
	}
}

void Creator::ReadDatabase()
{
	product = FactoryMethod();

	if(product != NULL)
	{
		product->ReadDatabase();
	}
}

void Creator::EditDatabase()
{
	product = FactoryMethod();

	if (product != NULL)
	{
		product->EditDatabase();
	}
}

void Creator::SearchInBase()
{
	product = FactoryMethod();

	if (product != NULL)
	{
		product->SearchInBase();
	}
}

