#include "stdafx.h"
#include "body/ConcreteCreator.h"
#include <cstdlib>
#include <cassert>
#include <string>
#include <typeindex>
#include <map>
#include <vector>
#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
#include "body/interherence/Manager.h"
#include "body/interherence/Vide.h"
#include "body/interherence/OperatorOverloading.h"
#include "body/Creator.h"
#include "body/ConcreteCreator.h"


Creator* creator = new ConcreteCreator();

void
(menu)(void) noexcept;

void 
(helpMe)(void) 
{	creator->HelpMe();
}

void 
(createDatabase)(void) 
{	creator->CreateDatabase();
}

void 
(addNewPerson)(void) 
{	creator->AddNewPerson();
}

void 
(standardModification)(void) 
{	creator->StandardModification();
}

void 
(fileCount)(void) 
{	creator->FileCount();
}

void 
(readDatabase)(void) 
{	creator->ReadDatabase();
}

void 
(editDatabase)(void)
{	creator->EditDatabase();
}

void 
(searchInBase)(void)
{	creator->SearchInBase();
}

typedef void(*voidFunctionType)(void);

struct Interface 
{	std::map<int, std::pair<voidFunctionType, std::type_index>> m1;

	template<typename T>
	void insert(int s1, T f1) {
		auto tt = std::type_index(typeid(f1));
		m1.insert(std::make_pair(s1,
			std::make_pair((voidFunctionType)f1, tt)));
	}

	template<typename T, typename... Args>
	T searchAndCall(int s1, Args&&... args) {
		auto mapIter = m1.find(s1);
		auto mapVal = mapIter->second;

		auto typeCastedFun = (T(*)(Args ...))(mapVal.first);
		assert(mapVal.second == std::type_index(typeid(typeCastedFun)));

		return typeCastedFun(std::forward<Args>(args)...);
	}
};

int 
(_tmain)(int argc, _TCHAR* argv[])
{
	Interface interface;
	unsigned short int valueHolder{ 0 };

	interface.insert(0, helpMe);
	interface.insert(1, createDatabase);
	interface.insert(2, addNewPerson);
	interface.insert(3, standardModification);
	interface.insert(4, readDatabase);
	interface.insert(5, fileCount);
	interface.insert(6, editDatabase);
	interface.insert(7, searchInBase);

	for (;;) {
		menu();

		std::cout << "~~~~>";
		std::cin >> valueHolder;

		interface.searchAndCall<void>(valueHolder);
	}

	delete creator;
	return NULL;
}

void
(menu)(void) noexcept
{
	system("COLOR 6");
	system("CLS");
	std::cout << "***\n**\n*";
	std::cout << "\n\n\n" <<
		"\t=========================================================\n" <<
		"\t|\t\tMENU\t\t\t\t\t|\n" <<
		"\t---------------------------------------------------------\n" <<
		"\t|\t0. Pomoc w uzytkowaniu programu\t\t\t|\n" <<
		"\t|\t1. Tworzenie nowej bazy osob\\nadpisywanie bazy\t|\n" <<
		"\t|\t2. Dodawanie nowej osoby\t\t\t|\n" <<
		"\t|\t3. Tak zwana reczna edycja pliku bazy\t\t|\n" <<
		"\t|\t4. Wypisywanie bazy danych\t\t\t|\n" <<
		"\t|\t5. Wyswietlanie ilosci osob w bazie\t\t|\n" <<
		"\t|\t6. Edycja czlonkow bazy danych\t\t\t|\n" <<
		"\t|\t7. Wyszukiwanie wybranej osoby\t\t\t|\n" <<
		"\t=========================================================\n" <<
		"\n";
	return;
}