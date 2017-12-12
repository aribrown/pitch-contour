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
	vector<vector<Note>> chords;
	vector<Note> notes = noteFileToArray("some_notes.notes");
	for(unsigned int i = 0; i < notes.size(); i++)
	{
		/* at first note, create a first vector
			and push to the first vector */
		if(i == 0)
		{
			vector<Note> a_chord;
			a_chord.push_back(notes[i]);
			chords.push_back(a_chord);
		}
		/* on all other notes, if the start time is still the same,
			add to the previous vector
			else, make a new vector */
		else
		{
			int previous_start_time = notes[i-1].start;

			if(previous_start_time == notes[i].start)
			{
				/* There must already be a vector of that
					start time */
				chords[chords.size()-1].push_back(notes[i]);
			}
			else
			{
				/* create a new vector for the start time */
				vector<Note> a_chord;
				a_chord.push_back(notes[i]);
				chords.push_back(a_chord);
			}
		}
	}

}