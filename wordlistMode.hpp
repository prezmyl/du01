#if !defined(WORDLISTMODE)
#define WORDLISTMODE

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>


class WordList
{
    private:
        vector<string> words;
        string fileName;

    public:
        WordList(const string& fileName);
        void ReadFile();
        void SortData(vector<string>& data);
        string PresortMode();
        string Solution();
        void PrintWords();


};


#endif // WORDLISTMODE

