#include <iostream>

int map(int width, int height) {
	for (int i=0; i < height; i++)
		std::cout << std::string(width, '.') << std::endl;
	return 0;
}


int main() {
	map(20, 10);
	return 0;
}

#TODO
#
#
#
#
