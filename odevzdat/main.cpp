#include "wordlistMode.hpp"

using namespace std;

int main()
{

    WordList WL = WordList("words.txt");
   
    WL.FindModeInFile();
    
    cout << "the most appearing word is: " << WL.GetModeResult() << endl;
    cout << "with a freqeuncy of: " << WL.GetFreqResutl() << endl;;

    return 0;
}