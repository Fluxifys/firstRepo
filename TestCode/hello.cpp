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
        std::cout << "The correct answear was " << randomInt << "!" << std::endl;

        return 0;
    }
