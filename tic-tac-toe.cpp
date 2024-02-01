#include <iostream>
#include <vector>
#include "Header.h"

std::string player1; // This holds the name of player 1
int player1_choice; // This is used for player 1 to select their cell

std::string player2; // This holds the name of player 1
int player2_choice;// This is used for player 2 to select their cell


std::string play_again = "Y";

int next_player = 1; // This value decides which player picks next.

int winner = 3; // this variable is updated by is_winner1 or is_winner2 to re-use the output wihtout re-running the code

int turn = 0; // This variable is used to track the number of turns that have been completed.
//The grid strings below print the game board.
std::string grid1 = "         |       |       \n";
std::string grid2 = "     7   |   8   |  9    \n";
std::string grid3 = "  _______|_______|_______\n";
std::string grid4 = "         |       |       \n";
std::string grid5 = "     4   |   5   |  6    \n";
std::string grid6 = "  _______|_______|_______\n";
std::string grid7 = "         |       |       \n";
std::string grid8 = "     1   |   2   |  3    \n";
std::string grid9 = "         |       |       \n";



std::vector <char> game_board = { '1', '2', '3', '4', '5', '6', '7', '8', '9', };


void reset_game() {

    next_player = 1;

    winner = 3;

    turn = 0;

    game_board = { '1', '2', '3', '4', '5', '6', '7', '8', '9', };



}

void print_grid() {
    std::cout << "\n\n\n\n\n";

    grid2[5] = game_board[6];
    grid2[13] = game_board[7];
    grid2[20] = game_board[8];
    grid5[5] = game_board[3];
    grid5[13] = game_board[4];
    grid5[20] = game_board[5];
    grid8[5] = game_board[0];
    grid8[13] = game_board[1];
    grid8[20] = game_board[2];
    std::cout << grid1 << grid2 << grid3 << grid4 << grid5 << grid6 << grid7 << grid8 << grid9;
    std::cout << "\n\n\n\n\n";

}


void is_winner2() {
    if ((game_board[0, 1, 2] == 'X') ||
        (game_board[3, 4, 5] == 'X') ||
        (game_board[6, 7, 8] == 'X') ||
        (game_board[0, 3, 6] == 'X') ||
        (game_board[1, 4, 7] == 'X') ||
        (game_board[2, 5, 8] == 'X') ||
        (game_board[0, 4, 8] == 'X') ||
        (game_board[2, 4, 6] == 'X'))

    {
        std::cout << player1 << " wins!\n\n\n\n\n";
        turn = 9;
        winner = 1;
    }

    else if ((game_board[0, 1, 2] == 'O') ||
        (game_board[3, 4, 5] == 'O') ||
        (game_board[6, 7, 8] == 'O') ||
        (game_board[0, 3, 6] == 'O') ||
        (game_board[1, 4, 7] == 'O') ||
        (game_board[2, 5, 8] == 'O') ||
        (game_board[0, 4, 8] == 'O') ||
        (game_board[2, 4, 6] == 'O'))

    {
        std::cout << player2 << " wins!\n\n\n\n\n";
        turn = 9;
        winner = 2;
    }
}




void is_winner() {
    if ((game_board[0] == 'X' && game_board[1] == 'X' && game_board[2] == 'X') ||
        (game_board[3] == 'X' && game_board[4] == 'X' && game_board[5] == 'X') ||
        (game_board[6] == 'X' && game_board[7] == 'X' && game_board[8] == 'X') ||
        (game_board[0] == 'X' && game_board[3] == 'X' && game_board[6] == 'X') ||
        (game_board[1] == 'X' && game_board[4] == 'X' && game_board[7] == 'X') ||
        (game_board[2] == 'X' && game_board[5] == 'X' && game_board[8] == 'X') ||
        (game_board[0] == 'X' && game_board[4] == 'X' && game_board[8] == 'X') ||
        (game_board[2] == 'X' && game_board[4] == 'X' && game_board[6] == 'X')) {

        turn = 9;
        winner = 1;
    }

    if ((game_board[0] == 'O' && game_board[1] == 'O' && game_board[2] == 'O') ||
        (game_board[3] == 'O' && game_board[4] == 'O' && game_board[5] == 'O') ||
        (game_board[6] == 'O' && game_board[7] == 'O' && game_board[8] == 'O') ||
        (game_board[0] == 'O' && game_board[3] == 'O' && game_board[6] == 'O') ||
        (game_board[1] == 'O' && game_board[4] == 'O' && game_board[7] == 'O') ||
        (game_board[2] == 'O' && game_board[5] == 'O' && game_board[8] == 'O') ||
        (game_board[0] == 'O' && game_board[4] == 'O' && game_board[8] == 'O') ||
        (game_board[2] == 'O' && game_board[4] == 'O' && game_board[6] == 'O')) {

        turn = 9;
        winner = 2;
    }
}

void turn1() {
    std::cout << player1 << "\n\n Select your space.\n\n\n\n";
    std::cin >> player1_choice;

    switch (player1_choice) {
    case 1:
        if (game_board[0] == '1') {
            game_board[0] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 2:
        if (game_board[1] == '2') {
            game_board[1] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 3:
        if (game_board[2] == '3') {
            game_board[2] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 4:
        if (game_board[3] == '4') {
            game_board[3] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 5:
        if (game_board[4] == '5') {
            game_board[4] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 6:
        if (game_board[5] == '6') {
            game_board[5] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 7:
        if (game_board[6] == '7') {
            game_board[6] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 8:
        if (game_board[7] == '8') {
            game_board[7] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 9:
        if (game_board[8] == '9') {
            game_board[8] = 'X';
            next_player = 2;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    default:
        std::cout << "\n\nInvalid entry. Try again.\n\n";
        turn--;
        break;

    }
}

void turn2() {
    std::cout << player2 << "\n\n Select your space.\n\n\n\n";
    std::cin >> player2_choice;

    switch (player2_choice) {
    case 1:
        if (game_board[0] == '1') {
            game_board[0] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 2:
        if (game_board[1] == '2') {
            game_board[1] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 3:
        if (game_board[2] == '3') {
            game_board[2] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 4:
        if (game_board[3] == '4') {
            game_board[3] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 5:
        if (game_board[4] == '5') {
            game_board[4] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 6:
        if (game_board[5] == '6') {
            game_board[5] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 7:
        if (game_board[6] == '7') {
            game_board[6] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 8:
        if (game_board[7] == '8') {
            game_board[7] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    case 9:
        if (game_board[8] == '9') {
            game_board[8] = 'O';
            next_player = 1;
            break;
        }
        else {
            std::cout << "\n\nAlready taken! Try again.\n\n";
            turn--;
            break;
        }
    default:
        std::cout << "\n\nInvalid entry. Try again.\n\n";
        turn--;
        break;

    }
}

void play_game() {
    for (turn = 0; turn <= 10; turn++) {


        print_grid();
        is_winner();


        if (winner == 1) {
            std::cout << player1 << " wins!\n Play again? Y/N\n";
            std::cin >> play_again;
            if (play_again == "Y") {
                reset_game();
            }
            else if (play_again == "N") {
                turn = 10;
                std::cout << "\nBye bye!";
            }
        }

        else if (winner == 2) {
            std::cout << player2 << " wins!\n Play again? Y/N\n";
            std::cin >> play_again;
            if (play_again == "Y") {
                reset_game();
            }
            else if (play_again == "N") {
                turn = 10;
                std::cout << "\nBye bye!";
            }
        }

        else if ((turn == 9) && ((winner != 1) && (winner != 2))) {
            std::cout << "Match is a draw! \n Play again? Y/N\n";
            std::cin >> play_again;
            if (play_again == "Y") {
                reset_game();
            }
            else if (play_again == "N") {
                turn = 10;
                std::cout << "\nBye bye!";
            }
        }

        else if (next_player == 1) {
            turn1();
        }

        else if (next_player == 2) {
            turn2();
        }

    }
}


void start_game() {

    std::cout << "Player 1, enter your name.\n\n\n";

    std::cin >> player1;

    std::cout << "\n\n\nWelcome " << player1 << "!\n\n\nPlayer 2, enter your name.\n\n\n";

    std::cin >> player2;

    std::cout << "\n\n\nWelcome " << player2 << "!\n\n\n";




}
