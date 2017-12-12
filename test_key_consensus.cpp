#include <iostream>
#include "key_consensus.h"
using namespace std;

// clang++ -Wall -Wextra -std=c++11 key_consensus.cpp test_key_consensus.cpp -o program

int main()
{
	key_consensus test;
	test.make_chords();
	return 0;
}