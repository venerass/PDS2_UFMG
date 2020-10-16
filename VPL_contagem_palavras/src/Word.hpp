#ifndef WORD
#define WORD

#include <string>
#include <algorithm>

using namespace std;

class Word {

public:

	string word;
	int count;
    
	Word ();
	void incrementFreq ();
};

#endif