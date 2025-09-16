#include <iostream>
#include <random>
#include <string>
#include <ctime>

int main(){

    int random_number = 0;
    int user_guess = 0;

    // must seed rand() intially
    srand(time(0));

    random_number = rand() % 100 + 1; //generate rand number between (99 + 1) and (0 + 1)

    //introduce premise to user
    std::cout << "I will generate a number between 1 and 100. Guess it within 10 attempts to win..." << std::endl;
    
    int no_guesses = 0;
    while(no_guesses < 10){
    
        no_guesses += 1;

        if (no_guesses == 10){ // inform of last try
            std::cout << "Last attempt, make it count!" << std::endl;
        }

        //ask user guess
        std::cout << "Enter your guess here (must be an integer): ";
        std::cin >> user_guess;

        // check if it is higher lower or correct
        if(user_guess == random_number){ // correct guess
            std::cout << "Correct! Well done. You guessed my number in" << no_guesses << "tries. Stopping program..." << std::endl;
            break; // exit loop
        }
        else if(user_guess < random_number){ // low
            std::cout << "Too low!" << std::endl;
        }
        else if(user_guess > random_number){ // high
            std::cout << "Too high!" << std::endl;
        }
        
        if(no_guesses == 10 && user_guess != random_number){
            std::cout << "Ran out of guesses. You lost... Stopping program..." << std::endl;
        }

    }

    return 0;
}