#include "wordlistMode.hpp"


using namespace std;


WordList::WordList(const string& fileName) : fileName(fileName)
{
    this->freqResult = 0;
}


//simple reading into vector
void WordList::ReadFile()
{
    string token;

    ifstream fin(this->fileName);
    if (!fin.is_open())
    {
        cerr << "file cannot be opened" << endl;
        return;
    }
    
    while (fin >> token)
    {
        this->words.push_back(token);
    }

    fin.close();
    

}

void WordList::SortData()
{
    sort(this->words.begin(),this->words.end());

}



void WordList::PresortMode()
{
    int i = 0;
    int modeFreq = 0;
    int length = this->words.size();
    string modeValue;

    while (i <= length -1)
    {
        int runLength = 1;
        string runValue = this->words[i];
        while ((i + runLength <= length - 1) && (words[i + runLength] == runValue))
        {
            runLength++;
        }

        if (runLength > modeFreq)
        {
            modeFreq = runLength;
            modeValue = runValue;
        }

        i = i + runLength;
        
    }

    this->freqResult = modeFreq;
    this->modeResult = modeValue;
    
}


void WordList::FindModeInFile()
{
    this->ReadFile();
    this->SortData();
    this->PresortMode();
      
}

string WordList::GetModeResult()
{
    return this->modeResult;
}

int WordList::GetFreqResutl()
{
    return this->freqResult;
}




void WordList::PrintWords()
{
    for (auto &&i : this->words)
    {
        cout << i << " ";
    }
}
