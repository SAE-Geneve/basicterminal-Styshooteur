#include <iostream>
#include <stdio.h> 
#include <stdlib.h>    
#include <time.h>
#include <string>

int main()
{
	
	 int crepe = 3;
		std::string apple_count = std::to_string(crepe) + " apples ";
	char value = apple_count[5];
		std::cout << "you have " << apple_count;
		std::cout << "size: " << apple_count.length();
		std::cout << " the character is " <<  value;

		std::cout << " \n\nEnter your first name: ";
		std::string first_name;
		std::cin >> first_name;
		std::cout << first_name;
		std::string name;
		std::getline(std::cin, name);
		std::cout << name;
	    return 0;
}