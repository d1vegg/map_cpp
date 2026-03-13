#include <iostream>
#include <vector>

std::vector<char> create_map(int width, int height) {
	std::vector<char> map(width*height);
	for (int i=0; i < width*height; i++)
		map[i] = '.';
	return map;
}

void show_map(std::vector<char>& map, int width, int height) {
	int y=0;
	while (y<height) {
		for (int x=0; x<width; x++)
			std::cout << map[y*width+x];
		std::cout << '\n';
		y++;
	}
}

std::vector<char> setCell(std::vector<char>& map, int x, int y, char value, int width)
{
	int index = y*width+x;
	map[index] = value;
	return map;
}

int main() {
	int width = 20;
	int height = 10;
	std::vector<char> map {create_map(width, height)};
	setCell(map, 10, 5, '#', width);
	setCell(map, width-1, 0, '#', width);
	setCell(map, 0, height-1, '#', width);
	setCell(map, width-1, height-1, '#', width);
	setCell(map, 0, 0, '#', width);
	show_map(map, width, height);
	return 0;
}

