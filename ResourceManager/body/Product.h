#pragma once

class Product
{
public:
    virtual ~Product() {}

    virtual void SomeRandomOp()			= 0;

	virtual void HelpMe()				= 0;

	virtual void CreateDatabase()		= 0;

	virtual void AddNewPerson()			= 0;

	virtual void StandardModyfication()	= 0;

	virtual void ReadDatabase()			= 0;

	virtual void FileCount()			= 0;

	virtual void EditDatabase()			= 0;

	virtual void SearchInBase()			= 0;
};

