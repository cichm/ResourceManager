#include "stdafx.h"
#include "ConcreteProduct.h"
#include <sstream>
#include <chrono>
#include <thread>
#include <algorithm>
#include <map>
#include <iomanip>
#include "StringOperations.h"
#include "FileOperations.h"
#include "interherence/ArrayOfObjects.h"

void 
(ConcreteProduct::HelpMe)(void)
{	StringOperations string_operations__("\t@Pomoc w uzytkowaniu programu.");
	std::cout << string_operations__;
	StringOperations::loggerInfo("Program sluzy do tworzenia baz danych osob.");
	StringOperations::loggerInfo("Aby moc sprawnie poslugiwac sie programem, nalezy przestrzegac kilku podstawowych wskazan:");
	StringOperations::loggerInfo(" ~<> Gdy musisz odpowiedziec na dane pytanie za pomoca kilku slow: nie uzywaj \"pustego znaku\", ");
	StringOperations::loggerInfo("\t\tzamiast tego miedzy slowami umiesc znak \"_\". Np.: Sluchanie_muzyki,_gotowanie_i_taniec.");
	StringOperations::loggerInfo(" ~<> Nie nalezy udzielac wylgarnych odpowiedzi.");
	StringOperations::loggerInfo("");
	StringOperations::loggerInfo(" ~<> Odpowiedzi powinny byc jednoznaczne i musza odnosic sie do pytan.");
	system("PAUSE");
	return;
}

void 
(ConcreteProduct::CreateDatabase)(void)
{	StringOperations::loggerText("\t@Tworzenie bazy danych.");

	StringOperations::loggerQuestNoEndl("Jak ma nazywac sie plik : ");
	std::string fileName = StringOperations::readString("") + ".db";

	FileOperations::pressWindowsCommand("del " + fileName);
	FileOperations::createEmptyFile(fileName);
	
	StringOperations::loggerInfo(" Poprawnie utworzono plik " + fileName);
	return;
}

void
(ConcreteProduct::AddNewPerson)(void)
{	StringOperations::loggerText("\t@Dodawanie osoby do bazy danych.");
	std::string currentFileName = StringOperations::readString("Wprowadz i zatwierdz baze danych na kotrej maja zostac wykonane operacje: ");
	currentFileName += ".db";

	// TODO: Funny joke =)
	if (true) 
	{	std::string firstName = StringOperations::readString("Wprowadz i zatwierdz imie osoby: ");
		std::string lastName = StringOperations::readString("Wprowadz i zatwierdz nazwisko osoby: ");
		std::string yearOfBirth = StringOperations::readString("Wprowadz i zatwierdz rok urodzenia: ");
		std::string address = StringOperations::readString("Wprowadz i zatwierdz miasto zamieszkania: ");
		std::string firstAddress = StringOperations::readString("Wprowadz i zatwierdz miasto rodzinne: ");
		std::string position = StringOperations::readString("Wprowadz i zatwierdz obecne stanowisko w pracy: ");
		std::string hobby = StringOperations::readString("Wprowadz i zatwierdz hobby: ");

		std::vector < std::string > allOfThis;
		allOfThis.push_back(".\t");
		allOfThis.push_back(firstName + "\t");
		allOfThis.push_back(lastName + "\t");
		allOfThis.push_back(yearOfBirth + "\t");
		allOfThis.push_back(address + "\t");
		allOfThis.push_back(firstAddress + "\t");
		allOfThis.push_back(position + "\t");
		allOfThis.push_back(hobby + "\t");

		allOfThis.push_back("\n");

		FileOperations::saveVectorToFile(allOfThis, currentFileName);

		StringOperations::loggerInfoNoEndl("Dane zostaly wpisane do pliku. ");
	}
	else
	{	ArrayOfObjects<std::string> array_of_objects_setter__[7];

		array_of_objects_setter__->readMessage();

		array_of_objects_setter__[0].set_value("Klaudia");
		array_of_objects_setter__[1].set_value("Bogacka");
		array_of_objects_setter__[2].set_value("1997");
		array_of_objects_setter__[3].set_value("Katowice");
		array_of_objects_setter__[4].set_value("Katowice");
		array_of_objects_setter__[5].set_value("Student");
		array_of_objects_setter__[6].set_value("Czytanie");

		std::vector < std::string > allOfThis;
		
		allOfThis.push_back(".\t");
		allOfThis.push_back(array_of_objects_setter__[0].Value + "\t");
		allOfThis.push_back(array_of_objects_setter__[1].Value + "\t");
		allOfThis.push_back(array_of_objects_setter__[2].Value + "\t");
		allOfThis.push_back(array_of_objects_setter__[3].Value + "\t");
		allOfThis.push_back(array_of_objects_setter__[4].Value + "\t");
		allOfThis.push_back(array_of_objects_setter__[5].Value + "\t");
		allOfThis.push_back(array_of_objects_setter__[6].Value + "\t");
		allOfThis.push_back("\n");

		FileOperations::saveVectorToFile(allOfThis, currentFileName);

		StringOperations::loggerInfoNoEndl("Dane zostaly wpisane do pliku. ");

		std::cout << std::endl;
		system("PAUSE");
	}

	return;
}

void 
(ConcreteProduct::StandardModyfication)(void)
{
	StringOperations::loggerText("\t@Standardowa modyfikacja pliku.");
	std::string currentFileName = StringOperations::readString("Wprowadz i zatwierdz baze danych na kotrej maja zostac wykonane operacje: ");
	currentFileName += ".db";

	FileOperations::pressWindowsCommand("notepad " + currentFileName);

	return;
}

void ConcreteProduct::FileCount(void)
{
	StringOperations::loggerText("\t@Wyswietlanie ilosci osob w bazie.");
	std::string currentFileName = StringOperations::readString("Wprowadz i zatwierdz baze danych na kotrej maja zostac wykonane operacje: ");
	currentFileName += ".db";

	int numLines = FileOperations::fileLineCounter(currentFileName);

	std::cout << "~ [QUES] Ilosc osob w bazie: " << numLines;

	return;
}

void 
(ConcreteProduct::ReadDatabase)(void)
{
	StringOperations::loggerText("\t@Wyswietlanie czlonkow bazy danych.");
	std::string currentFileName = StringOperations::readString("Wprowadz i zatwierdz baze danych na kotrej maja zostac wykonane operacje : ");
	currentFileName += ".db";

	std::vector<std::string> lines = FileOperations::readFromFile<std::string>(currentFileName, 10000);
	for (unsigned int i = 0; i < lines.size(); i++)
	{
		std::cout << i + 1 << lines[i] << std::endl;
	}

	system("PAUSE");

	return;
}

void
(ConcreteProduct::EditDatabase)(void)
{
	StringOperations::loggerText("\t@Edycja czlonkow bazy danych.");
	std::string currentFileName = StringOperations::readString("Wprowadz i zatwierdz baze danych na kotrej maja zostac wykonane operacje: ");
	currentFileName += ".db";

	std::vector<std::string> lines = FileOperations::readFromFile<std::string>(currentFileName, 10000, true);

	std::string peopleName = StringOperations::readString("Wprowadz imie osoby i zatwierdz: ");
	std::string peoplesurname = StringOperations::readString("Wprowadz nazwisko osoby i zatwierdz: ");

	for (unsigned int i = 7; i < lines.size() + 1; i++) {
		if (
			lines[i - 7] == "." &&
			lines[i - 6] == peopleName &&
			lines[i - 5] == peoplesurname
			)
		{
			StringOperations::loggerQuest("Czy edytowac osbe: ");
			std::cout << std::endl << "\t" << lines[i - 7] << " " << lines[i - 6] << " " << lines[i - 5] << " " << lines[i - 4] << " " <<
				lines[i - 3] << " " << lines[i - 2] << " " << lines[i - 1] << " ";
			std::string checkPeople = StringOperations::readString("Edytowac [Y/N]: ");

			std::transform(checkPeople.begin(), checkPeople.end(), checkPeople.begin(), ::tolower);
			if (checkPeople == "y" || checkPeople == "yes")
			{
				//lines.insert(i - 6, );

				/*lines[i - 6] = StringOperations::readString("Wprowadz i zatwierdz imie osoby: ") + "\t";
				lines[i - 5] = StringOperations::readString("Wprowadz i zatwierdz nazwisko osoby: ") + "\t";
				lines[i - 4] = StringOperations::readString("Wprowadz i zatwierdz rok urodzenia: ") + "\t";
				lines[i - 3] = StringOperations::readString("Wprowadz i zatwierdz miasto zamieszkania: ") + "\t";
				lines[i - 2] = StringOperations::readString("Wprowadz i zatwierdz miasto rodzinne: ") + "\t";
				lines[i - 1] = StringOperations::readString("Wprowadz i zatwierdz obecne stanowisko w pracy: ") + "\t";
				lines[i - 0] = StringOperations::readString("Wprowadz i zatwierdz hobby: ") + "\t" + "\n";*/
			}
		}
	}
	FileOperations::pressWindowsCommand("del " + currentFileName);
	FileOperations::createEmptyFile(currentFileName);

	FileOperations::saveVectorToFile(lines, currentFileName);

	std::cout << std::endl;

	system("PAUSE");
	return;
}

void 
(ConcreteProduct::SearchInBase)(void)
{
	StringOperations::loggerText("\t@Edycja czlonkow bazy danych.");
	std::string currentFileName = StringOperations::readString("Wprowadz i zatwierdz baze danych na kotrej maja zostac wykonane operacje: ");
	currentFileName += ".db";

	std::vector<std::string> lines = FileOperations::readFromFile<std::string>(currentFileName, 10000, true);

	std::string peopleName = StringOperations::readString("Wprowadz i zatwierdz imie osoby ktora chcesz znalezc: ");

	for (unsigned int i = 7; i < lines.size() + 1; i++) {
		if (lines[i-7] == peopleName && lines[i - 8] == ".") {
			std::cout << std::endl << "\t" << lines[i - 7] << " " << lines[i - 6] << " " << lines[i - 5] << " " <<
				lines[i - 4] << " " << lines[i - 3] << " " << lines[i - 2] << " " << lines[i - 1] << " ";
		}
	}

	std::cout << std::endl;
	system("PAUSE");
	return;
}