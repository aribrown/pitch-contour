#include <iostream>

#include "parser.hpp"
#include "utils.h"
#include "vector"

int main () {
	std::string input;
	std::cout << "filename: ";
	std::cin >> input;

	std::vector<Note> notes = noteFileToArray(input);

	/* print data */
	for (int i = 0; i < notes.size(); i++) {
		std::cout << notes[i].start 
		<< " " << notes[i].end 
		<< " " << notes[i].pitch << std::endl;
	}

	return 0;
}