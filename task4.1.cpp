#include <iostream>
#include <string>
#include <fstream>

int main() {
	
	std::ifstream picture;
	std::string str;	

	picture.open("file.png", std::ios::binary);

	if (picture.is_open()) {

		std::cout << "File is open\n";
		std::cout << std::endl;

		picture >> str;					

		if ( (str[0] == -119) && (str.substr(1, 3) == "PNG")) {

			std::cout << "This file is a PNG image" << std::endl;

		}
		else {

			std::cout << "Unknown file type" << std::endl;

		}

		picture.close();

	}
	else {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}
}

