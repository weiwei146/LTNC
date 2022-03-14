#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


string chooseWord();
void renderGame(string guessedWord, int badGuessCount);
char readAGuess();
bool contains(string secretWord, char guess);
string update(string guessedWord, string secretword, char guess);

int main()
{
	srand(time(0));
	string secretWord = chooseWord();
	string guessedWord = string(secretWord.length(), '-');
	int badGuessCount = 0;
	while (badGuessCount < 7 && secretWord != guessedWord) {
		renderGame(guessedWord, badGuessCount);
		char guess = readAGuess();
		if (contains(secretWord, guess)) {
			guessedWord = update(guessedWord, secretWord, guess);
		} 
		else badGuessCount++;
	}
	renderGame(guessedWord, badGuessCount);
	if (badGuessCount != 7) 
		cout << "Congratulations! You win!";
	else 
		cout << "You lost. The correct word is " << secretWord; 	
	return 0;
}
const string WORD_LIST[] = { 
	"anime", "love", "kimono", "bankai",
        "tokyoghoul", "onepunchman", "hunterxhunter", "sensei", "baka", "basket", "kimetsunoyaiba", "jujutsukaisen", "naruto", "bleach", "dragonball",
        "angrybird", "lookism", "attackontitan", "fairytail", "owarinoseraph", "gintama", "overlord", "onepiece", "blackclover", "swordartonline",
        "boruto", "pokemon", "nanatsunotaizai", "shokugekinosoma", "datealive", "fatestaynight", "nisekoi", "hyouka", "magi",
        "kurokonobasuke", "inazumaeleven", "dororo",  "highkyuu", "blackbullet", "noragami", "katekyouhitreborn", "inuzasha", "akamegakill",
        "lovewar", "bokunohero", "doraemon", "charlotte", "danmachi", "toradora", "collar", "comb", "cord",
        "cow", "boylove", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye"};

const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);
string chooseWord() {
	int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}
const string FIGURE[] = {
    "  -------------     \n"
    "  |                 \n"
    "  |                 \n"
    "  |                 \n"
    "  |                 \n"
    "  |    \n"
    "-----  \n",
     "  -------------    \n"
    "  |            |    \n"
    "  |                 \n"
    "  |                 \n"
    "  |                 \n"
    "  |    \n"
    "-----  \n",
     "  -------------    \n"
    "  |            |    \n"
    "  |            o    \n"
    "  |                 \n"
    "  |                 \n"
    "  |    \n"
    "-----  \n",
     "  -------------    \n"
    "  |            |    \n"
    "  |            o    \n"
    "  |            |    \n"
    "  |                 \n"
    "  |    \n"
    "-----  \n",
     "  -------------    \n"
    "  |            |    \n"
    "  |            o    \n"
    "  |           /|    \n"
    "  |                 \n"
    "  |    \n"
    "-----  \n",
     "  -------------    \n"
    "  |            |    \n"
    "  |            o    \n"
    "  |           /|\\   \n"
    "  |                 \n"
    "  |    \n"
    "-----  \n",
     "  -------------    \n"
    "  |            |    \n"
    "  |            o    \n"
    "  |           /|\\   \n"
    "  |           /     \n"
    "  |    \n"
    "-----  \n",
    "  -------------    \n"
    "  |            |    \n"
    "  |            o    \n"
    "  |           /|\\   \n"
    "  |           / \\  \n"
    "  |    \n"
    "-----  \n"
};
void renderGame(string guessedWord, int badGuessCount) {
    cout << FIGURE[badGuessCount] << endl;
    cout << guessedWord << endl;
    cout << "Number of wrong guesses: " << badGuessCount << endl;
}
char readAGuess() {
    char yourGuess;
    cout << "Your guess: ";
    cin >> yourGuess;
    return yourGuess;
}
bool contains(string secretWord, char guess)
{
    for (int i=0; i < secretWord.length(); i++)
    {
        if (secretWord[i] == guess) return true;
    }
    return false;
}
string update(string guessedWord, string secretWord, char guess) {
    for(int i= secretWord.length(); i>=0;i--) {
        if(secretWord[i]==guess) {
            guessedWord[i]=guess;
        }
    }
    return guessedWord;
}

