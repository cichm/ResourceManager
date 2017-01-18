#pragma once
#include <string>

class StringOperations
{
private:
	std::string string__;
public:
	(StringOperations)();
public:
	explicit (StringOperations)(std::string string);
friend 
	std::ostream &operator << (std::ostream &out, StringOperations string_operations__);
friend
	std::istream &operator >> (std::istream &in, StringOperations string_operations__);
public:
	static void (loggerText)(std::string simpleText) noexcept;
public:
	static void (loggerQuest)(std::string quest) noexcept;
public:
	static void (loggerInfo)(std::string info) noexcept;
public:
	static void (loggerWarning)(std::string warning) noexcept;
public:
	static void (loggerError)(std::string error) noexcept;
public:
	static void (simpleTextNoEndl)(std::string simpleText) noexcept;
public:
	static void (loggerQuestNoEndl)(std::string quest) noexcept;
public:
	static void (loggerInfoNoEndl)(std::string info) noexcept;
public:
	static void (loggerWarningNoEndl)(std::string warning) noexcept;
public:
	static void (loggerErrorNoEndl)(std::string error) noexcept;
public:
	static std::string(readString)(std::string message) noexcept;
};
