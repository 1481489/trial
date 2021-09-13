// -------------------------------------------
//					Word
// -------------------------------------------

#include "Word.h"
#include <iostream>
#include <string>
#include <algorithm>
// Nhlakanipho Malinga 1481489

Word::Word(const string& word): word_{word}
{
	// throws an exception (in the form of WordContainsNoLetters object)
	// indicating that the word being constructed contains no letters
	if (word_.empty()) throw WordContainsNoLetters{};
    string newWord{""};
    unsigned int Loop_Counter=0;
    unsigned int counter=0;
    while(Loop_Counter !=word_.length())
    {
        if(isalpha(word_[Loop_Counter]))
        {
            word_[Loop_Counter]=tolower(word_[Loop_Counter]);
            newWord += word_[Loop_Counter];
        }
        else if(!isalpha(word_[Loop_Counter]))
        {
            counter++;
            if(counter==word_.length())
            {
                throw WordContainsNoLetters{};
            }
            if(word_[Loop_Counter]==' ')
            {
                throw WordContainsSpace{};
            }
        }
         Loop_Counter++;
    }
    word_ = newWord;
}

// overloads the equivalence operator which allows to Words to be compared using ==
bool Word::operator==(const Word& rhs) const
{
	if (word_ == rhs.word_)
		return true;
	else
		return false;
}
//

//Determine Size of string
bool Word::isQueryable() const
{
    if(word_.size()<3)
	return false;
	else
        return true;
}
