#pragma once
#include <string>

class UserInput
{
public:
	UserInput();
	~UserInput();

	void setPlayerName();
	void setCharacterName();
	void setRealmName();
	std::string getPlayerName() const;
	std::string getCharacterName() const;
	std::string getRealmName() const;
	std::string getFileName() const;

private:
	std::string playerName = "";
	std::string characterName = "";
	std::string realmName = "";
	std::string fileName = "";
	int xpCurrentSession = 0;
	int goldCurrentSession = 0;
	int currentLevel = 0;
	int currentLevelXp = 0;
};

