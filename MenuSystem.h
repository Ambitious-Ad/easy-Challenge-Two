#pragma once

class MenuSystem
{
public:
	MenuSystem();
	~MenuSystem();

	void display(int option);
	void menuLogic();

private:
	enum menuOptions
	{
		menuAdd,
		menuView,
		menuDel,
		menuExit
	};

	int currentOption{ 0 };
	char input;
	const int numOption{ 4 };
};
