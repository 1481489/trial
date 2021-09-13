#include "Word.h"
#include "Line.h"
#include "Paragraph.h"
#include "FileReader.h"

#include <iostream>
#include <string>
#include <vector>

int main()
{
    cout << "Enter Word to search for it or press space to quit: "  ;
    string User_Input;
    cin >> User_Input;
    Word search_term(User_Input);
}
