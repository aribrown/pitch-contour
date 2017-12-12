#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED

#include "utils.h"
#include <iostream>
#include <vector>
#include <fstream>

/* read the .notes file and convert into an array of Note structs */

std::vector<Note> noteFileToArray(std::string inputfile) {

	std::ifstream infile(inputfile, std::ifstream::in);

	std::vector<Note> notes;

	while (infile.good()) {
		std::string place_holder;
		infile >> place_holder;

		Note current_note;

		infile >> current_note.start;
		infile >> current_note.end;
		infile >> current_note.pitch;

		notes.push_back(current_note);
	}

	return notes;
}


#endif