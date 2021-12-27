#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{

	srand(time(nullptr)); // use current time as seed for random generator
    int random_number = rand()%100; // generate a random number between 0 and 99
    int guessed_number = 0; // variable to store the guessed number
    bool game_over = false; // variable to check if game is over or not

    cout<<"Welcome to the guessing game."<<endl;
    cout<<"The system has generated a random number between 0 and 99 and you have to guess it."<<endl;

    while (game_over == false)
    {
    	
    	cout<<"Please write your guess: ";
    	cin>> guessed_number;

    	if (guessed_number == random_number)
    	{
    		cout<< "You have won."<<endl;
    		game_over = true;
    	}

    	if (guessed_number > random_number)
    	{
    		cout<< "The generated number is smaller."<<endl;
    	}

    	if (guessed_number < random_number)
    	{
    		cout<< "The generated number is greater."<<endl;
    	}

    }

    
    

	return 0;
}