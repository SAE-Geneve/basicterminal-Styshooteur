#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

enum class Direction {
	Left = 'l',
	Right = 'r',
	Forward = 'f',
};
void move()
{
	std::cout << "Where do you want to move?\n";
	std::string direction;
	std::cout << ">";
	std::getline(std::cin, direction);
	switch (direction[0])
	{
	case (char)Direction::Left:
			std::cout << "Your moved to the Left!\n";
			break;
	case (char)Direction::Right:
			std::cout << "Your moved to the Right!\n";
			break;
	case (char)Direction::Forward:
			std::cout << "Your moved Forward!\n";
			break;
	default:
			std::cout << "Your moved ???\n";
			break;
	}
}
void dégats() {
	std::srand((int)NULL);
	int i;
	i = (std::rand() % 9) + 1;
	std::cout << "You inflicted " << i << " damage points !\n";
}
void encounter() {
	std::srand((int)time(0));
	int k;
	k = std::rand()%3;

	if(k == 0)
		{
		std::cout << "A wolf comes out of the shadows !\n";
		}
	if(k == 1)
		{
		std::cout << "A goblin comes out of the shadows !\n";
		}
	if(k == 2)
		{
		std::cout << "A demon comes out of the shadows !\n";
		}
	std::cout << " Choose a weapon : spear, dagger or crossbow ? \n";
}

int main() 
{
	{
	std::string welcome;
	std::cout << "Welcome to the gates of Dilhevia ! \n\nWould you like yo enter the dungeon ?\n";
	}
bool playing = true;
while (playing)
{
	std::cout << ">";
	std::string value;
	std::getline(std::cin, value);
	if (value == "exit")
	{
		playing = false;
	}
	if (value == "yes")
		{
			move();
			break;
		}
	if (value == "left" || "right" || "forward")
		{ 
			encounter();
			break;
		}
	if (value == "spear" || "dagger" || "crossbow")
		{
		dégats();
		break;
		}
	
		std::cout << " ??? \n";
		std::cout << " You didn't moved \n";
}
	return 0;
}










