//Simple Hello World program that asks for user's name
#include <iostream>
#include <string>

int main(){
	std::string name; //Variable to store user's name
	std::cout<<"Enter your name: ";
	std::cin>>name;
	std::cout<<"Hello world from "<<name<<std::endl;
	return 0;
}
