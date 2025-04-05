#include "UserInput.h"
#include <iostream>
#include <string>

UserInput::UserInput()  {}

UserInput::~UserInput() {}

void UserInput::setPlayerName()
{
	std::cout << "Enter player name: ";
	std::getline(std::cin, playerName);
}

void UserInput::setCharacterName()
{
	std::cout << "Enter character name: ";
	std::getline(std::cin, characterName);
	fileName = "profile/" + playerName + "_profile.txt";
}

void UserInput::setRealmName()
{
	std::cout << "Enter Realm name:	";
	std::getline(std::cin, realmName);
}

std::string UserInput::getPlayerName() const
{
	return playerName;
}

std::string UserInput::getCharacterName() const
{
	return characterName;
}

std::string UserInput::getRealmName() const
{
	return realmName;
}

std::string UserInput::getFileName() const
{
	return fileName;
}