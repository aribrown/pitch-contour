// Tania Valrani and Ari John Brown
// Music Synthesizer
// 

#include <iostream>
#include "utils.h"
#include <vector>
#include "parser.hpp"
#include "key_consensus.h"

using namespace std;
// constructor
key_consensus::key_consensus()
{

}

// destructor
key_consensus::~key_consensus()
{

}

void key_consensus::make_chords()
{
	vector<vector <Note>> chords;
	vector <Note> notes = noteFileToArray("some_notes.notes");
	for(unsigned int i = 0; i < notes.size(); i++)
	{
		if(i == 0)
		{
			chords.push_back(notes[i]);
		}
		else
		{
			if(notes[i].start == chords[chords.size()-1].start)
			{
				chords[chords.size()-1].push_back(notes[i]);
			}
			else
			{
				chords.push_back(notes[i]);
			}
		}
	}

}