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
        string modeResult;
        int freqResult;

    public:
        WordList(const string& fileName);
        void ReadFile();
        void SortData();
        void PresortMode();
        void FindModeInFile();
        string GetModeResult();
        int GetFreqResutl();
        void PrintWords();


};


#endif // WORDLISTMODE

