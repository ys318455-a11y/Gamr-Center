#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mazerules() {
    cout << "\n===== MAZE RULES =====\n";
    cout << "1. Reach the exit (E).\n";
    cout << "2. # means a wall.\n";
    cout << "3. You cannot move through walls.\n";
    cout << "4. Use W, A, S, D to move.\n";
    cout << "5. Reach E to complete the level.\n";
}
void mazegame(){
    int choice;
    cout << "\n===== MAZE =====\n";
    cout << "1. Start Game\n";
    cout << "2. Rules\n";
    cout << "3. Back\n";
    cout << "Choose: ";
    cin >> choice;
    if(choice ==1){
        char maze1[7][10] = {
            {'#','#','#','#','#','#','#','#','#','#'},
            {'#','P','.','.','.','#','.','.','.','#'},
            {'#','.','#','#','.','#','.','#','.','#'},
            {'#','.','.','.','.','.','.','#','.','#'},
            {'#','#','#','#','#','#','.','#','.','#'},
            {'#','.','.','.','.','.','.','.','E','#'},
            {'#','#','#','#','#','#','#','#','#','#'}
        };
        int playerrow = 1;
        int playercol = 1;
        char move;
        bool gameover = false;
        while (!gameover)
        {
            cout << "\n---- LEVEL 1 ----\n";
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 10; j++) {
                    cout << maze1[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\nW = Up";
            cout << "\nS = Down";
            cout << "\nA = Left";
            cout << "\nD = Right";
            cout << "\nQ = Quit";
            cout << "\n\nYour move: ";
            cin >> move;
            if (move == 'q' || move == 'Q') {
                gameover = true;
            }
            else{
                int newrow=playerrow , newcol=playercol;
                if (move == 'w' || move == 'W'){
                    newrow--;
                }
                else if (move == 's' || move == 'S'){
                    newrow++;
                }
                else if (move == 'a' || move == 'A'){
                    newcol--;
                }
                else if (move == 'd' || move == 'D'){
                    newcol++;
                }
                else {
                    cout << "\nInvalid move\n";
                    continue;
                }
                if (maze1[newrow][newcol] == '#') {
                    cout << "\nYou cannot move there\n";
                }
                else {
                    maze1[playerrow][playercol] = '.';
                    playerrow = newrow;
                    playercol = newcol;
                    if (maze1[playerrow][playercol] == 'E') {
                        cout << "\nCongratulations! Level 1 Complete\n";
                        gameover = true;
                    }
                    else {
                        maze1[playerrow][playercol] = 'P';
                    }
                }
            }
        }

         if (gameover&& move != 'q' && move != 'Q') {

            char maze2[7][10] = {
                {'#','#','#','#','#','#','#','#','#','#'},
                {'#','P','.','#','.','.','.','#','.','#'},
                {'#','.','.','#','.','#','.','#','.','#'},
                {'#','#','.','#','.','#','.','.','.','#'},
                {'#','.','.','.','.','#','#','#','.','#'},
                {'#','.','#','.','.','.','.','.','E','#'},
                {'#','#','#','#','#','#','#','#','#','#'}
            };

            playerrow = 1;
            playercol = 1;
            gameover = false;
            while (!gameover){
            cout << "\n---- LEVEL 2 ----\n";
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 10; j++) {
                    cout << maze2[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\nW = Up";
            cout << "\nS = Down";
            cout << "\nA = Left";
            cout << "\nD = Right";
            cout << "\nQ = Quit";
            cout << "\n\nYour move: ";
            cin >> move;
            if (move == 'q' || move == 'Q') {
                gameover = true;
            }
            else{
                int newrow=playerrow , newcol=playercol;
                if (move == 'w' || move == 'W'){
                    newrow--;
                }
                else if (move == 's' || move == 'S'){
                    newrow++;
                }
                else if (move == 'a' || move == 'A'){
                    newcol--;
                }
                else if (move == 'd' || move == 'D'){
                    newcol++;
                }
                else {
                    cout << "\nInvalid move\n";
                    continue;
                }
                if (maze2[newrow][newcol] == '#') {
                    cout << "\nYou cannot move there\n";
                }
                else {
                    maze2[playerrow][playercol] = '.';
                    playerrow = newrow;
                    playercol = newcol;
                    if (maze2[playerrow][playercol] == 'E') {
                        cout << "\nCongratulations! Level 2 Complete\n";
                        gameover = true;
                    }
                    else {
                        maze2[playerrow][playercol] = 'P';
                    }
                }
            }
        }
    }

        if (gameover && move != 'q' && move != 'Q') {
            char maze3[7][10] = {
                {'#','#','#','#','#','#','#','#','#','#'},
                {'#','P','.','.','#','.','.','.','.','#'},
                {'#','#','#','.','#','.','#','#','.','#'},
                {'#','.','.','.','.','.','.','#','.','#'},
                {'#','.','#','#','#','#','.','#','.','#'},
                {'#','.','.','.','.','.','.','.','E','#'},
                {'#','#','#','#','#','#','#','#','#','#'}
            };
            playerrow = 1;
            playercol = 1;
            gameover = false;
            while (!gameover) {
                cout << "\n---- LEVEL 3 ----\n";
                for (int i = 0; i < 7; i++) {
                    for (int j = 0; j < 10; j++) {
                        cout << maze3[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << "\nW = Up";
                cout << "\nS = Down";
                cout << "\nA = Left";
                cout << "\nD = Right";
                cout << "\nQ = Quit";
                cout << "\n\nYour move: ";
                cin >> move;
                if (move == 'q' || move == 'Q') {
                    gameover = true;
                }
                else {
                    int newrow = playerrow;
                    int newcol = playercol;
                    if (move == 'w' || move == 'W')
                        newrow--;
                    else if (move == 's' || move == 'S')
                        newrow++;
                    else if (move == 'a' || move == 'A')
                        newcol--;
                    else if (move == 'd' || move == 'D')
                        newcol++;
                   else {
                        cout << "\nInvalid move\n";
                        continue;
                    }

                    if (maze3[newrow][newcol] == '#') {
                        cout << "\nYou cannot move there!\n";
                    }
                    else {
                        maze3[playerrow][playercol] = '.';
                        playerrow = newrow;
                        playercol = newcol;
                        if (maze3[playerrow][playercol] == 'E') {
                            cout << "\nCongratulations! Level 3 Complete\n";
                            gameover = true;
                        }
                        else {
                            maze3[playerrow][playercol] = 'P';
                        }
                    }
                }
            }
        }
        cout << "\nReturning to Game Center\n";
    }
    else if(choice==2){
      mazerules();
    }
    else if(choice==3){
        cout << "\nBack to Game Center\n";
    }
    else {
        cout << "\nInvalid choice!\n";
    }
}
void sudokurules() {
    cout << "\n===== SUDOKU RULES =====\n";
    cout << "1. The board is 9 x 9.\n";
    cout << "2. Fill empty( 0 ) cells with numbers from 1 to 9.\n";
    cout << "3. No repeated numbers in the same row.\n";
    cout << "4. No repeated numbers in the same column.\n";
    cout << "5. No repeated numbers in the same 3 x 3 box.\n";
    cout << "6. Complete the board to win.\n";
}
void sudokugame(){
    int choice;
    cout << "\n===== SUDOKU =====\n";
    cout << "1. Start Game\n";  
    cout << "2. Rules\n";
    cout << "3. Back\n";
    cout << "Choose: ";
    cin >> choice;
    if (choice==1) {
        int sudoku[9][9] = {
            {5,3,0,0,7,0,0,0,0},
            {6,0,0,1,9,5,0,0,0},
            {0,9,8,0,0,0,0,6,0},
            {8,0,0,0,6,0,0,0,3},
            {4,0,0,8,0,3,0,0,1},
            {7,0,0,0,2,0,0,0,6},
            {0,6,0,0,0,0,2,8,0},
            {0,0,0,4,1,9,0,0,5},
            {0,0,0,0,8,0,0,7,9}
        };
        int original[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                original[i][j] = sudoku[i][j]; 
            } 
        }
        int row, col, number;
        bool gameover =false;
        while(!gameover){
            for (int i = 0; i < 9; i++) {
                if (i == 3 || i == 6) {
                cout << "------+-------+------\n";
                }
                for (int j = 0; j < 9; j++) {
                    if (j == 3 || j == 6) {
                        cout << "| ";
                }
                    cout << sudoku[i][j] << " ";
                }
                cout << endl;
            }
            cout << "\nEnter row (1-9) or 0 to quit: ";
            cin >> row;
            if (row == 0) {
                gameover = true; 
            }
            else {
                cout << "Enter column (1-9): ";
                cin >> col;
                cout << "Enter number (1-9) or 0 to erase: ";
                cin >> number;
                if (row < 1 || row > 9 || col < 1 || col > 9 || number < 0 || number > 9){
                    cout << "\nInvalid input!\n";
                }
                else{
                row--; col--;
                if(number==0){
                    if (original[row][col] != 0){ 
                        cout << "\nYou cannot erase an original number\n";
                    }
                    else {
                        sudoku[row][col] = 0; 
                        cout << "\nNumber erase\n";
                    }
                }
                else if (sudoku[row][col] != 0){
                    cout << "\nThis cell is already filled\n";
                }
                else {
                    bool valid = true;  
                    for (int j = 0; j < 9; j++){
                        if (sudoku[row][j] == number) {
                            valid = false; 
                        }  
                    }
                    for(int i = 0; i < 9; i++){
                        if (sudoku[i][col] == number){ 
                            valid = false;
                        }
                    }
                    int startrow = row - row % 3;
                    int startcol = col - col % 3;
                    for (int i = startrow; i < startrow + 3; i++){
                         for (int j = startcol; j < startcol + 3; j++){
                            if (sudoku[i][j] == number){
                                valid = false;
                            }
                        }
                    }
                    if (valid){
                        sudoku[row][col]=number;
                        cout << "\nAdded successfully\n";
                        bool solved =true;
                        for (int i = 0; i < 9; i++) {
                            for (int j = 0; j < 9; j++) {
                                if (sudoku[i][j] == 0) {
                                    solved = false;
                                }
                            }
                        }
                        if (solved) {
                            cout << "\n====================\n";
                            cout << "   Sudoku Completed\n";
                            cout << "====================\n";
                            gameover = true;
                        }
                    }
                    else{
                        cout << "\nInvalid\n"; 
                    }
                }           
            }
        }
    }
        cout << "\nReturning to Game Center\n";
}
    else if (choice == 2) {
        sudokurules();
    }
    else if(choice==3){
        cout << "\nBack to Game Center\n";
    }
    else {
        cout << "\nInvalid choice\n";
    }
}

void guessrules() {
    cout << "\n===== GUESS GAME RULES =====\n";
    cout << "1. The computer chooses a random number from 1 to 10000.\n";
    cout << "2. You have 20 attempts.\n";
    cout << "3. Your score starts at 100.\n";
    cout << "4. Every wrong guess loses 5 points.\n";
    cout << "5. If your guess is too low, the game tells you.\n";
    cout << "6. If your guess is too high, the game tells you.\n";
    cout << "7. If you guess the number, you win.\n";
    cout << "8. If you use all 20 attempts, you lose.\n";
}
void guessgame(){
    int choice;
    cout << "\n===== GUESS GAME =====\n";
    cout << "1. Start Game\n";
    cout << "2. Rules\n";
    cout << "3. Back\n";
    cout << "Choose: ";
    cin >> choice;
    if (choice == 1) {
        int number = rand() % 10000 + 1;
        int guess;
        int attempts = 20;
        int score = 100;
        bool win = false;
        cout << "\n===== GUESS THE NUMBER =====\n";
        cout << "I chose a number from 1 to 10000.\n";
        cout << "You have 20 attempts to guess it.\n";
        cout << "Your score starts at 100.\n";
        cout << "Every wrong guess loses 5 points.\n";
        for (int i = 1; i <= attempts; i++){ 
            cout << "\nAttempt " << i << " / " << attempts <<"\n";
            cout << "Enter your guess: ";
            cin >> guess;
            if (guess < 1 || guess > 10000){ 
                cout << "Please enter a number between 1 and 10000.\n";
                i--; 
            }
            else if (guess == number){ 
                cout << " YOU WIN\n";
                cout << "Correct number: " << number << "\n";
                cout << "Attempts used: " << i << "\n";
                cout << "Final Score: " << score << "\n";
                win = true;
                break;
            }
            else if (guess < number) {
                cout << "Too low\n";
                score -= 5;
            }
            else {
                cout << "Too high\n";
                score -= 5;
            }
        }
        if (!win) {
            cout << " GAME OVER\n"; 
            cout << "The correct number was: " << number << "\n";
            cout << "Final Score: " << score <<"\n";
        }
        
    }
    else if (choice == 2) {
        guessrules();
    }
     else if(choice==3){
        cout << "\nBack to Game Center\n";
    }
    else {
        cout << "\nInvalid choice\n";
    }
}
int main (){
    srand(time(0));
    int choice;
    do
    {
        cout<<"\n---- GAME CENTER----\n";
        cout<<"1. Maze\n";
        cout<<"2. Sudoku\n";
        cout<<"3. Guess Number\n";
        cout<<"4. Exit\n";
        cout << "Choose a game: ";
        cin>>choice;
        if(choice==1){
            mazegame();
        }
        else if(choice==2){ 
            sudokugame();
        }
        else if(choice==3){
           guessgame();
        }
        else if(choice ==4){
            cout << "\nGoodbye\n";
            break;
        }
        else{
            cout << "\nInvalid choice\n";
        
        }
    
        
    } while (choice !=4);
    
return 0;
}
