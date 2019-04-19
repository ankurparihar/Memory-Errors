#include <iostream>
#include <vector>

struct rectangel {
	int height;
	int width;
	rectangel(int h, int w) {
		height = h;
		width = w;
	}
};

int main(){
	std::vector <rectangel*> int_vec;
	int_vec.push_back(new rectangel(5, 10));
	int_vec.push_back(new rectangel(5, 10));
	int_vec.push_back(new rectangel(5, 10));
	int_vec.push_back(new rectangel(5, 10));
	int_vec.push_back(new rectangel(5, 10));
	std::cout << int_vec[0]->height << " " << int_vec[0]->width << std::endl;
	std::cout << int_vec.size() << std::endl;
	delete int_vec[0];
	std::cout << int_vec[0]->height << " " << int_vec[0]->width << std::endl;
	std::cout << int_vec.size() << std::endl;
	int_vec.pop_back();
	std::cout << int_vec[0]->height << " " << int_vec[0]->width << " ";
	std::cout << int_vec[1]->height << " " << int_vec[1]->width << std::endl;
	std::cout << int_vec.size() << std::endl;
	return 0;
}