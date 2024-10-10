    #include <iostream>
    #include <stdlib.h> 
    #include <time.h>

    int main() 
    {
        std::cout << "Hello world!" << std::endl;
        
        srand(time(0));
        int randomInt = rand()%100+1;
        int guess = -1;
        int guesses = 0;
        do 
        {
            std::cout << "Guess a number between 1-100: ";
            std::cin >> guess;
            std::cin.ignore();
            guesses++;
            if(guess < randomInt) 
            {
                std::cout << "The correct number is higher" << std::endl;
            } else if (guess > randomInt)
            {
                std::cout << "The correct number is smaller" << std::endl;
            }    
        } while(guess != randomInt);
        std::cout << "You guessed the correct number in " << guesses << " tries." <<std::endl;
        std::cout << "The correct answear was " << randomInt << "!" << std::endl << std::endl;

        int playerScore = 0;
        int computerScore = 0;
        int computerGuess = -1;
        while (playerScore < 3 && computerScore < 3)
        {
            std::cout << "Pick 0: Rock, 1: Paper or 2: Scissor: ";
            std::cin>>guess;
            std::cin.ignore();
            computerGuess = rand()%3;
            if(0 <= guess < 3) {
                if(guess == computerGuess) {
                    std::cout << "TIE" << std::endl;
                } else if (guess == 0 && computerGuess == 1) {
                    std::cout << "The computer won this round! " << std::endl;
                    computerScore++;
                } else if(guess == 0 && computerGuess == 2) {
                    std::cout << "You won this round!" << std::endl;
                    playerScore++;
                } else if(guess == 1 && computerGuess == 0) {
                    std::cout << "You won this round!" << std::endl;
                    playerScore++;
                } else if(guess == 1 && computerGuess == 2) {
                    std::cout << "The computer won this round!" << std::endl;
                    computerScore++;
                } else if(guess == 2 && computerGuess == 0) {
                    std::cout << "The computer won this round!" << std::endl;
                    computerScore++;
                } else if(guess == 2 && computerGuess == 1) {
                    std::cout << "You won this round!" << std::endl;
                    playerScore++;
                }
            }
            std::cout <<"Your score: " << playerScore << " computer: " << computerScore << std::endl;
        }
        if (playerScore > computerScore) {
            std::cout<<"You won over the computer! Score was: " << playerScore << " - " << computerScore << std::endl;
        } else {
            std::cout<<"You lost over the computer! Score was: " << playerScore << " - " << computerScore << std::endl;
        }

        return 0;
    }
