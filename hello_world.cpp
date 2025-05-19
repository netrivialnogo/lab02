<<<<<<< HEAD
//Простая программа Hello World, которая запрашивает имя пользователя
#include <iostream>
#include <string>

int main(){
	std::string name; //Переменная для хранения имени пользователя
	std::cout<<"Enter your name: ";
	std::cin>>name;
	std::cout<<"Hello world from "<<name<<std::endl;
	return 0;
=======
// Simple Hello World program that asks for user's name
#include <iostream>
#include <string>

int
main()
{
  std::string name; // Variable to store user's name
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0;
>>>>>>> b5250f5 (Reformat code with clang-format Mozilla style)
}
