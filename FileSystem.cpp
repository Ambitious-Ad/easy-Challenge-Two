#include "Filesystem.h"
#include "UserInput.h"
#include "fstream"
#include <filesystem>
#include <iostream>
#include <string>

FileSystem::FileSystem() {}

FileSystem::~FileSystem() {}

void FileSystem::createFile()
{
	UserInput user;

	std::filesystem::create_directories("profiles");

	user.setPlayerName();
	user.setCharacterName();
	user.setRealmName();

	std::ofstream file(user.getFileName());
	if (file.is_open())
	{
		file << "player name: " << user.getPlayerName() << std::endl;
		file << "Charater name: " << user.getCharacterName() << std::endl;
		file << "Realm name: " << user.getRealmName() << std::endl;
	}
	else
	{
		std::cerr << "Failed to create file: " << user.getPlayerName() << std::endl;
	}
	file.close();
}