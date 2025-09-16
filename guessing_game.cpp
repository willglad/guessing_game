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
    std::cout << "I will generate a number between 1 and 100. Guess it..." << std::endl;
    
    bool guessed = false;
    while(guessed == false){
    
        //ask user guess
        std::cout << "Enter your guess here (must be an integer): ";
        std::cin >> user_guess;

        // check if it is higher lower or correct
        if(user_guess == random_number){ // correct guess
            std::cout << "Correct! Well done. Stopping program..." << std::endl;
            guessed = true; // exit loop
        }
        else if(user_guess < random_number){ // low
            std::cout << "Too low! Try again..." << std::endl;
        }
        else if(user_guess > random_number){ // high
            std::cout << "Too high! Try again" << std::endl;
        }

    }

    return 0;
}