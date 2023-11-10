#include "menu.h"

void Menu::ShowManu()
{
    std::cout << "**********************************" << std::endl;
    std::cout << "****** Please enter an option *****" << std::endl;
    std::cout << "****** 1. Add stuff info *********" << std::endl;
    std::cout << "****** 2. Display stuff info *****" << std::endl;
    std::cout << "****** 3. Delete stuff info ******" << std::endl;
    std::cout << "****** 4. Change stuff info ******" << std::endl;
    std::cout << "****** 0. Exit system ************" << std::endl;
    std::cout << "**********************************" << std::endl;

}

void Menu::Exit()
{
    system("pause");
    exit(0);
}