#include "MenuSystem.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

MenuSystem::MenuSystem() {}

MenuSystem::~MenuSystem() {}

void MenuSystem::run(const std::vector<MenuSystem::MenuOptions>& options)
{
	while (true)
	{
		system("cls");
		std::cout << "===Menu===" << std::endl;

		for (size_t i = 0; i < options.size(); ++i)
	}
}