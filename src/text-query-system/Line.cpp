// -------------------------------------------
//					Line
// -------------------------------------------

#include "Line.h"
#include "Word.h"
#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
//Nhlakanipho Malinga 1481489
using namespace std;

Line::Line(const string& line)
{
    if(line.size()!=0)
    {
    Passed_Line = line;
    auto *Temp_Storage=new char[Passed_Line.length()+1];
    strcpy(Temp_Storage, Passed_Line.c_str());
    auto *Break_Sentence=strtok(Temp_Storage," ");
    Word Temp_Var(Break_Sentence);
    while(Break_Sentence!=0)
    {
        Word Temp_Var(Break_Sentence);
        Word_Arr.push_back(Temp_Var);
        Break_Sentence=strtok(0, " ");
    }
    }
}


bool Line::contains(const Word& search_word) const
{

    if(Passed_Line.size()!=0)
    {
        if(search_word.isQueryable())
        {
            for(unsigned int i=0; i< Word_Arr.size() ; i++)
             {
                 if(search_word==Word_Arr[i])
                     return true;
             }
        }
        else
        return false;
    }
    else
	   return false;
}
