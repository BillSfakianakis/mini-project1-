# Casino Number Guessing Game (C++)

## Description

This project is a simple "Casino Number Guessing Game" implemented in C++. The user starts with a balance and can place bets by guessing a number between 1 and 10. If the guess is correct, the user wins 10 times the amount they bet. If the guess is wrong, the user loses the amount they bet. The game continues until the user decides to stop or runs out of money.

## Technologies Used
- **C++ Programming Language**

## How to Run the Program

1. **Clone the repository**:
    ```bash
    git clone https://github.com/BillSfakianakis/casino-game.git
    ```

2. **Compile the program**:
    Open the terminal and navigate to the project directory, then compile the program using `gcc`:
    ```bash
    gcc -o casino_game casino_game.cpp
    ```

3. **Run the program**:
    After compiling, you can run the program with the following command:
    ```bash
    ./casino_game
    ```

## Game Rules

1. The player must choose a number between 1 and 10.
2. If the player guesses correctly, they win 10 times the amount they bet.
3. If the guess is incorrect, the player loses the amount they bet.
4. The game continues until the player chooses to exit or runs out of money.

## Example Gameplay
-----------------------------------------WELCOME TO CASINO WORLD-------------------------------------- 
What's your name ? : Bill
Enter the starting balance to play game: 100

-----------------------------CASINO NUMBER GUESSING RULES!-----------------------------------

Choose a number between 1 to 10
Winner gets 10 times the money bet
Wrong bet...and you lose the amount you bet
Your current balance is $100 Enter amount to bet: $20 Guess any betting number between 1-10: 5

You are in luck!!! you have won Rs.200 The winning number was: 5 Bill, You have balance of $220 ---> Do you want to continue? (y/n): y

Your current balance is $220 Enter amount to bet: $50 Guess any betting number between 1-10: 7

Oops, better luck next time!!! you lost $50 The winning number was: 3 Bill, You have balance of $170 ---> Do you want to continue? (y/n): n

Thanks for playing the game Bill!!! Your final balance is $170

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

