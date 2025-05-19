//Простая программа Hello World, которая запрашивает имя пользователя
#include <iostream>
#include <string>

int main(){
	std::string name; //Переменная для хранения имени пользователя
	std::cout<<"Enter your name: ";
	std::cin>>name;
	std::cout<<"Hello world from "<<name<<std::endl;
	return 0;
}
