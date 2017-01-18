#include "stdafx.h"
#include "StringOperations.h"
#include <iostream>
#include <sstream>

StringOperations::StringOperations()
{
}

StringOperations::StringOperations(std::string string)
	:string__(string)
{
}

void StringOperations::loggerText(std::string simpleText) noexcept
{	std::cout << simpleText << std::endl;
	return;
}

void 
(StringOperations::loggerQuest)(std::string quest) noexcept
{	std::cout << "~ [QUES] " << quest << std::endl;
	return;
}

void 
(StringOperations::loggerInfo)(std::string info) noexcept
{	std::cout << "~ [INFO] " << info << std::endl;
	return;
}

void 
(StringOperations::loggerWarning)(std::string warning) noexcept
{	std::cout << "~ [WARN] " << warning << std::endl;
	return;
}

void 
(StringOperations::loggerError)(std::string error) noexcept
{	std::cout << "~ [WARN] " << error << std::endl;
	return;
}

void (StringOperations::simpleTextNoEndl)(std::string simpleText) noexcept
{	std::cout << simpleText;
	return;
}

void (StringOperations::loggerQuestNoEndl)(std::string quest) noexcept
{	std::cout << "~ [QUES] " << quest;
	return;
}

void (StringOperations::loggerInfoNoEndl)(std::string info) noexcept
{	std::cout << "~ [INFO] " << info;
	return;
}

void (StringOperations::loggerWarningNoEndl)(std::string warning) noexcept
{	std::cout << "~ [WARN] " << warning;
	return;
}

void (StringOperations::loggerErrorNoEndl)(std::string error) noexcept
{	std::cout << error;
	return;
}

std::string StringOperations::readString(std::string message) noexcept
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::string text{ "" };

	do
	{
		std::istringstream iss(text);
		if (iss >> text)
		{
			break;
		}
		else if(message != "")
		{
			std::cout << "~ [QUES] " << message;
		}
		else
		{
			
		}
	} while (std::getline(std::cin, text));

	return text;
}

std::ostream& 
(operator<<)(std::ostream& out, StringOperations string_operations__)
{	out << string_operations__.string__ << std::endl;
	return out;
}

std::istream& 
(operator>>)(std::istream& in, StringOperations string_operations__)
{	in >> string_operations__.string__;
	return in;
}
