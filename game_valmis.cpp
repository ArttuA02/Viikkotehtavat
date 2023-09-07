#include "game.h"

using namespace std;

Game::Game()
{
    cout<<"Give max number"<<endl;
    cin>>maxNumber;
    cout<<"Object initialized with "<<maxNumber<<" as a maximum value"<<endl;
}

Game::~Game()
{
    cout<<"Object cleared from stack memory"<<endl;
}

void Game::play()
{
    srand(time(0));
    randomNumber = (rand()%maxNumber)+1;
    numOfGuesses = 1;

    while(true)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;

        if(playerGuess < randomNumber)
        {
            cout<<"Number is too small"<<endl;
        }
        else if(playerGuess > randomNumber)
        {
            cout<<"number is too big"<<endl;
        }
        else
        {
            cout<<"you guessed right"<<endl;
            break;
        }
        numOfGuesses++;
    }

    printGameResult();
}

void Game::printGameResult()
{
    cout<<"you guessed the right answer which is "<<randomNumber<<" with "<<numOfGuesses<<"guesses."<<endl;
}

