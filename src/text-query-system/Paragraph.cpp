// -------------------------------------------
//					Paragraph
// -------------------------------------------

#include "Paragraph.h"
#include <vector>
#include <string>
//Nhlakanipho Malinga 1481489
void Paragraph::addLine(const Line& line)
{
    Whole_Text.push_back(line);
}

tuple<bool, vector<int>> Paragraph::contains(const Word& search_word) const
{
    vector<int>Lines;
    auto Loop_Counter=0u;
    int Line_Numbers=1;
    int checker=0;
    if(!Whole_Text.empty())
        {
    while(Loop_Counter!=Whole_Text.size())
    {
        if(Whole_Text[Loop_Counter].contains(search_word))
        {
            Lines.push_back(Line_Numbers);
            checker++;
        }
        Loop_Counter++;
        Line_Numbers++;
    }
    }
    if(checker!=0)
    return{true,Lines};
    else
    return {false,Lines};
}
