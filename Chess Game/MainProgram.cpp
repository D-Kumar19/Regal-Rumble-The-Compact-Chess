// FILE WHICH CONTAINS ALL THE HEADER FILES SO THERE SHOULDN'T BE ANY NEED TO WRITE HEADERS FOR EACH PIECE OF CODE OR COMMANDS.
#include "std_lib_facilities.h"

// LIST OF FUNCTIONS THAT WE WILL BE USING DURING THE WHOLE EXECUTION OF THE PROGRAM.
void Logo_Of_The_Game(void);
void Rules_Of_The_Game(void);
void Inital_Page_Of_The_Game(void);
void Quit_The_Game(void);
void Get_Names(void);
void Moving_Pieces(string& Number_Of_Players_Copy, vector <string>& Names_Of_Players_Copy);
void Distinct_Features(void);
void Rules_Called_During_The_Game(void);


// CLASSIFIED ERRORS THAT WE WILL BE USING SO THAT IT IS EASY TO POINT OUT ERRORS.
class Invalid_Char_Choice { };
class Invalid_Player_Count { };
class Invalid_Player_Name { };
class Invalid_Piece_Name { };
class Invalid_Undo_Choice { };
class Invalid_Move_Choice { };
class Invalid_Distinct_Feature { };


// KEEPING THE LENGTH OF MAIN FUNCTION AT ITS MINIMUM FOR SIMPLIFICATIONS.
// MAIN FUNCTION WILL CALL ONLY ONE FUNCTION AND THEN OTHER FUNCTIONS WILL BE CALLED AT THE END OF EACH FUCNTION, WHEN THE FIRST FUNCTION CALLED BY MAIN WILL BE COMPLETELY TERMINATED.
int main() {

    // MAIN FUNCTION CALLING JUST ONE FUNCTION WHICH IS THE LOGO OF THE GAME.
    Logo_Of_The_Game();

    return 0;
}


// THE FIRST LOGO FUNCTION WHICH WAS CALLED BY THE MAIN FUNCTION.
void Logo_Of_The_Game(void) {

    // IT WILL JUST CLEAR THE SCREEN.
    system("cls");

    // THE ACTUAL LOGO OF THE GAME.
    cout << "\n \n";
    cout << " \t \t \t ================================================================================================================= " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXX           " << "\t" << " XXXXXXXX          " << "\t" << " XXXXXXXX          " << endl;
    cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXX           " << "\t" << " XXXXXXXX          " << "\t" << " XXXXXXXX          " << endl;
    cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXX           " << "\t" << "         XXXXXXXXX " << "\t" << "         XXXXXXXXX " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXX           " << "\t" << "         XXXXXXXXX " << "\t" << "         XXXXXXXXX " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXXX " << endl;
    cout << " \t \t \t ================================================================================================================= " << endl;
    cout << "\n \n";

    // IT WILL ASK PLAYER TO ENTER SO THAT IT CAN CONTINUE AND AFTER THAT IT WILL CLEAR THE SCREEN.
    cout << "PRESS ENTER TO CONTINUE THE GAME........ ";
    cin.ignore(numeric_limits < streamsize> ::max(), '\n');
    system("cls");

    // CALLING THE OTHER FUNCTION TO SHOW THE RULES OF THE GAME.
    Rules_Of_The_Game();
}


// THE FUNCTION WHICH WILL SHOW THE RULES OF THE GAME AFTER LOGO OF THE GAME HAS BEEN COMPLETELY PROCESSED.
void Rules_Of_The_Game(void) {

    // IT WILL JUST CLEAR THE SCREEN.
    system("cls");

    // RULES OF A PARTICULAR CHESS GAME. BUT SINCE THIS GAME HAS PIECES OF CHESS BUT IT IS NOT COMPLETELY A CHESS GAME. THAT'S WHY RULES TO MOVE THE PIECES ARE SAME AS WE HAVE IN CHESS.
    // THAT'S WHY WE WILL FOLLOW THE MOVES OF A CHESS GAME.
    cout << "\n";
    cout << " ======================================================================================================================================================================" << endl;
    cout << " THESE ARE THE RULES OF A PARTICULAR CHESS GAME: " << endl << endl << endl;
    cout << "   1) THIS PARTICULAR CHESSBOARD GAME IS A TWO DIMENSIONAL GAME AND HAS SIZE (2 * 3) RATHER THAN ( 8 * 8 )." << endl;
    cout << "   2) THERE ARE JUST THREE TYPES OF PIECES: KING, BISHOP AND ROOK." << endl;
    cout << "   3) BUT THERE ARE TWO BISHOPS AND TWO ROOKS. ONE BISHOP AND ROOK ARE BLACK AND OTHER BISHOP AND ROOK ARE WHITE." << endl;
    cout << "   4) THERE ARE JUST SIX BOXES IN THIS GAME." << endl;
    cout << "   5) THE FIVE BOXES ARE FILLED WITH THE PIECES OF THE CHESS. SO THERE IS ONLY ONE BOX LEFT. THAT'S WHY EACH PIECE CAN MOVE BY JUST ONE SQUARE NOT MORE THAT THAT." << endl;
    cout << "   6) A KING CAN MOVE IN ANY DIRECTION INCLUDING UP, DOWN, RIGTH, LEFT AND DIAGONALLY UP RIGHT, UP LEFT, DOWN RIGHT AND DOWN LEFT TOO." << endl;
    cout << "   7) A BISHOP CAN MOVE DIAGONNALY ONLY. WHICH MEANS IT CAN ONLY MOVE DIAGONALLY UP RIGHT, UP LEFT, DOWN RIGHT AND DOWN LEFT." << endl;
    cout << "   8) A ROOK CAN MOVE UP, DOWN, RIGHT AND LEFT AS IT MOVES IN A STRAIGHT LINE NOT DIAGONALLY. " << endl;
    cout << " ======================================================================================================================================================================" << endl << endl;

    // IT WILL ASK PLAYER TO PRESS THE ENTER KEY SO THAT IT CAN SHOW THE OTHER RULES TOO AND AFTER THAT IT WILL CLEAR THE SCREEN.
    cout << " PRESS ENTER TO SEE THE OTHER RULES........ ";
    cin.ignore(numeric_limits <streamsize> ::max(), '\n');
    system("cls");


    // THESE RULES WILL TELL PLAYER ABOUT THE MAIN FUNCTION OF THIS GAME.
    cout << "\n";
    cout << " =================================================================================================================================================" << endl;
    cout << " HOW WILL THIS GAME WORK: " << endl << endl << endl;
    cout << " 1) WHEN A NEW PLAYER STARTS A NEW GAME IT WILL ASK ABOUT THE NUMBER OF PLAYERS." << endl;
    cout << " 2) BUT TO KEEP THE GAME SIMPLE WE HAVE LIMITIZED THE NUMBER OF PLAYERS TO THREE." << endl;
    cout << " 3) SO YOU CAN'T ENTER NUMBER OF PLAYERS TO BE MORE THAN THREE OR EQUALS TO OR EVEN LESS THAN ZERO." << endl;
    cout << " 4) AFTER ENTERING NUMBER OF PLAYERS IT WILL ASK PLAYERS TO ENTER THEIR RESPECTIVE NAMES." << endl;
    cout << " 5) IF ONE PLAYER IS PLAYING THE GAME THE GAME WILL START AND WHEN IT REACHES THE END POINT." << endl;
    cout << " 6) IT WILL SHOW THE PLAYER ABOUT NUMBER OF MOVES HE/SHE TOOK TO REACH THE END OF THE GAME." << endl;
    cout << " 7) WHEN MULTIPLE PLAYERS ARE PLAYING THE GAME, IT WILL FIRST ASK TO ENTER NAMES OF ALL THE PLAYERS." << endl;
    cout << " 8) AFTER ENTERING NAMES IT WILL START THE GAME FOR PLAYER # 1 AFTER HE/SHE REACHES THE END POINT." << endl;
    cout << " 9) THE NUMBER OF MOVES WILL BE RECORDED AND THEN THE OTHER PLAYERS WILL PLAY THE GAME." << endl;
    cout << " 10) AND EVENTUALLY WHEN ALL THE PLAYERS HAVE PLAYED THE GAME. THE GAME WILL END." << endl;
    cout << " 11) AT THE END OF THE GAME IT WILL SHOW THE PLAYERS ABOUT WHO TOOK THE MINIMUN MOVES AND WHO TOOK THE MAXIMUM MOVES TO REACH THE END OF THE GAME." << endl;
    cout << " =================================================================================================================================================" << endl << endl;

    // IT WILL ASK USER TO PRESS ENTER KEY SO THAT IT CAN SHOW THE FINAL RULES OF THE GAME TOO AND AFTER PLAYER PRESSES ENTER KEY IT WILL CLEAR THE SCREEN.
    cout << "PRESS ENTER TO SEE HOW YOU WILL MOVE THE PIECES........ ";
    cin.ignore(numeric_limits < streamsize > ::max(), '\n');
    system("cls");


    // THE FINAL RULES OF THE GAME ON HOW TO MOVE PIECES.
    cout << "\n";
    cout << " ===========================================================================================================================" << endl;
    cout << " THESE ARE THE RULES OF HOW TO MOVE THE PIECES:" << endl << endl << endl;
    cout << "  1) WHEN THE GAME WILL START OR AFTER ANY MOVE THERE CAN BE MAXIMUM 5 MOVES." << endl;
    cout << "  2) PLAYER WILL ENTER THE NAME OF THE PIECE WHICH HE/SHE WANTS TO MOVE." << endl;
    cout << "  3) PROGRAM WILL TELL THE PLAYER IF THE SPACE FOR THAT PARTICULAR PIECE IS EMPTY OR NOT." << endl;
    cout << "  4) IF THERE IS NO FREE SPACE AVAILABLE THE PROGRAM WILL SHOW AN ERROR AND ASK PLAYER TO ENTER THE NAME OF THE ANOTHER PIECE." << endl;
    cout << "  5) IF THERE IS A FREE SPACE IT WILL ASK PLAYER IF HE/SHE WANTS TO MOVE OR NOT." << endl;
    cout << "  6) IF PLAYER WANTS TO MOVE HE/SHE WILL ENTER EITHER YES TO MOVE OR NO FOR NOT TO MOVE." << endl;
    cout << "  7) AFTER IT HAS BEEN MOVED IT WILL ASK IF HE/SHE WANTS TO UNDO THE MOVE OR NOT." << endl;
    cout << "  8) IF THE PLAYER PRESSES YES IT WILL UNDO THE MOVE EITHER IT WILL NOT." << endl;
    cout << "  9) THEN IT WILL ASK FOR THE OTHER MOVE OR OTHER PIECE TO MOVE." << endl;
    cout << " ============================================================================================================================" << endl << endl;

    // IT WILL ASK USER TO PRESS ENTER KEY AFTER THAT IT WILL CLEAR THE SCREEN ANF WILL MOVE TO THE INITAL PAGE OF THE GAME. WHERE IT WILL ASK FOR THE POSSIBLE OPTIONS.
    cout << "PRESS ENTER TO MOVE TO THE INITAL PAGE OF THE GAME........ ";
    cin.ignore(numeric_limits < streamsize > ::max(), '\n');
    system("cls");

    // CALLING THE INITAL PAGE OF THE GAME.
    Inital_Page_Of_The_Game();
}


// THE INITAL PAGE FUNCTION WHICH WILL ASK PLAYER ABOUT THE POSSIBLE OPTIONS OF WHAT HE/SHE WANTS TO DO NEXT.
void Inital_Page_Of_The_Game(void) {

    // VARIABLES THAT WE WILL BE USING THROUGHOUT THIS FUNCTION TO FIRST ENTER CHOICE FROM THE USER AND THEN CHECK IF THE CHARACTER IS VALID OR NOT.
    bool Is_Choice_Valid = false;

    String User_Choice;

    // HERE THE INITAL PAGE STARTS.
    cout << "WELCOME TO THE GAME OF THE PARTICULAR PIECES OF CHESS: " << endl << endl;


    // WHILE LOOP BECAUSE IF PLAYER ENTERS THE CHAR OR STRING INCORRECTLY IT WILL ASK AGAIN AND AGAIN UNTIL HE/SHE ENTERS IT CORRECTLY.
    while (Is_Choice_Valid == false) {

        // CHOICES OF CHARACTERS FOR THE PLAYER TO ENTER. 
        cout << "PRESS 'R' TO SEE THE RULES OF THE GAME AGAIN." << endl;
        cout << "PRESS 'N' TO START A NEW GAME." << endl;
        cout << "PRESS 'Q' TO QUIT THE GAME!" << endl << endl;

        // TRY CATCH BLOCK TO THROW AND CATCH ERROR IF THE PLAYER ENTERS THE CHARACTER INCORRECTLY.
        try {

            // HERE PLAYER WILL ENTER THE CHARACTER.
            cout << "KINDLY ENTER A CHARACTER FROM THE ABOVE CHOICES TO MOVE: ";
            getline(cin, User_Choice);

            // HERE IT WILL CHECK THE CHARACTER INPUTTED IS CORRECT OR NOT.
            if (User_Choice == "R" || User_Choice == "r") {
                Is_Choice_Valid = true;
                Rules_Of_The_Game(); // IF PLAYER ENTERS 'R' IT WILL SHOW RULES AGAIN AND WILL CHANGE THE CHECK FROM FALSE TO TRUE.
            }
            else if (User_Choice == "N" || User_Choice == "n") {
                Is_Choice_Valid = true;
                Get_Names(); // IF PLAYER ENTERS 'N' IT WILL CALL THE FUNCTION TO ENTER NAMES AND NUMBER OF PLAYERS AND WILL CHANGE THE CHECK FROM FALSE TO TRUE.
            }
            else if (User_Choice == "Q" || User_Choice == "q") {
                Is_Choice_Valid = true;
                Quit_The_Game(); // IF PLAYER ENTERS 'Q' IT WILL QUIT THE GAME AND WILL CHANGE THE CHECK FROM FALSE TO TRUE.
            }
            else {
                Is_Choice_Valid = false; // IF IT DOESN'T MATCHES WITH ANY CHARACTER THEN IT WILL KEEP THE CHECK FALSE.
            }

            // IF THE CHOICE IS INVALID IT WILL THROW AN ERROR HERE.
            if (Is_Choice_Valid == false) {
                throw Invalid_Char_Choice{ };
            }

            // HERE ERROR THROWN WILL BE CAUGHT AND IT WILL ASK PLAYER TO ENTER AGAIN.
        }
        catch (Invalid_Char_Choice) {
            cout << endl << "SORRY THIS IS NOT A VALID CHARACTER OR STRING." << endl << endl;

            // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WILL SHOW ALL THE INSTRUCTIONS AGAIN TO ENTER THE CHARACTER A SECOND TIME.
            cout << "PRESS ENTER TO MOVE TO THE INITAL PAGE AGAIN AND ENTER A VALID CHARACTER........ ";
            cin.ignore(numeric_limits < streamsize > ::max(), '\n');
            system("cls");
        }
    }
}


// THIS IS THE QUIT FUNCTION WHICH WILL END THE PROGRAM.
void Quit_The_Game(void) {

    // USING THIS WE WILL END THE PROGRAM WHERE WE ARE.
    exit(0);
}


// THIS FUNCTION WILL ASK FOR NUMBER OF PLAYERS AND THEN STORE THEIR NAMES IN THE VECTOR.
void Get_Names(void) {

    // IT WILL CLEAR THE SCREEN.
    system("cls");

    // VECTORS THAT WE WILL BE USING THROUGHOUT THIS PROGRAM TO STORE NAMES AND SCORES OF THE PLAYERS. 
    vector <string> Names_Of_Players = { };

    // INITALIZED A BOOL VARIABLE THAT WE WILL BE USING THROUGHOUT THE FUNCTION.
    bool Valid_Player_Count = false;

    // INITALIZED SOME INTEGER VARIABLES THAT WE WILL BE USING AS LOOP COUNTERS.
    int Loop_Counter1 = 0, Loop_Counter2 = 0, Loop_Counter3 = 0;

    // CHAR VARIBALE TO STORE SINGLE CHARACTER.
    char Letter;

    // VARIABLES THAT WE WILL BE USING THROUGHOUT THE EXECUTION OF THE PROGRAM.
    string Number_Of_Players;


    // INITALIZED WHILE LOOP SO THAT IF PLAYER ENTERS NUMBER OF PLAYERS INCORRECTLY IT WILL THROW AN ERROR.
    while (Valid_Player_Count == false) {

        // INSTRUCTIONS FOR THE PLAYER TO ENTER NUMBER OF PLAYERS.
        cout << "YOU HAVE TO SPECIFY HOW MANY PLAYERS WILL BE PLAYING THIS GAME." << endl;
        cout << "KINDLY ENTER '1' FOR ONE PLAYER." << endl;
        cout << "KINDLY ENTER '2' FOR TWO PLAYERS." << endl;
        cout << "KINDLY ENTER '3' FOR THREE PLAYERS." << endl << endl;

        // TRY CATCH BLOCK TO CATCH THE ERROR IF USER ENTERS A WRONG VALUE.
        try {

            // USER WILL ENTER NUMBER OF PLAYERS HERE.
            cout << "ENTER YOUR CHOICE: ";
            getline( cin, Number_Of_Players );

            // WE WILL CHECK IF THE LENGTH IS MORE THAN ONE OR LESS OR EQUALS TO ZERO WHICH IS DEFINITELY AN ERROR. IT THAT IS THE SITUATION IT WILL THROW AN ERROR.
            if (Number_Of_Players.length() > 1 || Number_Of_Players.length() <= 0) {
                throw Invalid_Player_Count{ };
            }

            // IF THE LENGTH IS ONE THEN IT WILL CHECK IF THE NUMBER IS EITHER ONE, TWO OR THREE. IF IT ISN'T THE CASE IT WILL THROW AN ERROR. ALSO IT WILL CHECK IF THE SINGLE CHARACTER IS ALPHABET OR NOT.
            else {
                for (Loop_Counter1 = 0; Loop_Counter1 < Number_Of_Players.length(); Loop_Counter1++) {

                    Letter = Number_Of_Players.at(Loop_Counter1);

                    if (int(Letter) <= 48 || int(Letter) > 51) {
                        throw Invalid_Player_Count{ };
                    }
                    else {
                        Valid_Player_Count = true;
                    }
                }
            }

            // HERE WE WILL CATCH THE ERROR AND WILL TELL PLAYER TO ENTER THE VALUE AGAIN.
        }
        catch (Invalid_Player_Count) {
            cout << endl << "YOU INPUTTED A WRONG VALUE. KINDLY READ INSTRUCTIONS AGAIN AND THEN ENTER ANOTHER VALUE." << endl << endl;

            // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WILL SHOW ALL THE INSTRUCTIONS AGAIN TO ENTER THE CHARACTER AGAIN.
            cout << "PRESS ENTER TO MOVE TO THE INITAL PAGE AGAIN AND ENTER A VALID CHARACTER........ ";
            fflush(stdin);
            cin.ignore(numeric_limits < streamsize > ::max(), '\n');
            system("cls");
        }
    }

    // IT WILL SHOW PLAYER ABOUT THE NUMBER OF PLAYERS PLAYING THE GAME.
    cout << endl << "YOU ARE PLAYING THIS GAME AS " << stoi(Number_Of_Players) << " PLAYER GAME." << endl << endl;

    // FOR LOOP AS WE KNOW NUMBER OF PLAYERS. WE WILL USE IT TO ENTER THE NAME OF THE PLAYERS. 
    for (Loop_Counter1 = 0; Loop_Counter1 < stoi(Number_Of_Players); Loop_Counter1++) {

        // BOOL VARIABLE THAT WE WILL USE TO CHECK THE NAME ENTERED IS CORRECT OR NOT.
        bool Valid_Player_Name = false;

        // WE WILL FIRST STORE NAME IN THIS STRING.
        string Player_Name;


        // WHILE LOOP TO CHECK IF PLAYER HAS ENTERED THE CORRECT NAME OR NOT AND WILL ASK UNTIL PLAYER ENTERS A CORECT NAME.
        while (Valid_Player_Name == false) {

            // INITALIZED SOME INTEGER VARIABLES THAT WE WILL BE USING AS LOOP COUNTERS AND IN DIFFERENT OPERATIONS.
            int Letter_Count = 0;
            int ASCII_Values_Of_Char = 0;

            // TRY CATCH BLOCK TO THROW AN ERROR IF USER ENTERS THE INCORRECT NAME.
            try {

                // WE WILL ASK USER TO ENTER THE NAME AND STORE IT IN VARIABLE.
                cout << "ENTER NAME OF THE PLAYER NUMBER: " << (Loop_Counter1 + 1) << " = ";
                fflush(stdin);
                getline(cin, Player_Name);

                // THEN WE WILL CHECK HERE IF THERE IS ANY SPECIAL CHARACTER OR DIGIT IN NAME. IT WILL THEN COMPARE LENGTH OF LETTER COUNT AND IF LENGTH IS SAME THEN THERE IS NO SPECIAL CHARACTER. WHICH ACTUALLY MEANS IT IS A VALID NAME.
                for (Loop_Counter2 = 0; Loop_Counter2 < Player_Name.size(); Loop_Counter2++) {
                    ASCII_Values_Of_Char = toupper(Player_Name[Loop_Counter2]);

                    if (ASCII_Values_Of_Char >= 65 && ASCII_Values_Of_Char <= 90 || ASCII_Values_Of_Char >= 97 && ASCII_Values_Of_Char <= 122 || ASCII_Values_Of_Char == 32) {
                        Letter_Count++;
                    }
                }

                // WE WILL COMPARE HERE IF THERE IS CHANGE IN LENGTH OF NAME AND COUNT OF LETTERS IF THERE IS A CHANGE THEN IT IS NOT A NAME. IF THERE IS NO CHANGE THEN IT IS CORRECT NAME SO WE WILL STORE IT IN VECTOR.
                if (Letter_Count == Player_Name.length()) {
                    Valid_Player_Name = true;
                    Names_Of_Players.push_back(Player_Name);
                }

                // AN IF IT IS NOT THE SAME LENGTH SO IT WILL THROW AN ERROR.
                else {
                    throw Invalid_Player_Name{ };
                }

                // HERE WE WILL CATCH THE ERROR.
            }
            catch (Invalid_Player_Name) {
                cout << "YOU HAVE ENTERED THE NAME INCORRECTLY. EITHER THERE IS ANY SPECIAL CHARACTER OR DIGIT." << endl << endl;
            }
        }
    }

    // WE WILL CLEAR THE SCREEN HERE.
    system("cls");

    // WE WILL OUTPUT THE NAMES OF THE PLAYERS WHICH WE INPUTTED.
    for (Loop_Counter2 = 0; Loop_Counter2 < stoi(Number_Of_Players); Loop_Counter2++) {

        cout << "NAME OF THE PLAYER NUMBER: " << Loop_Counter2 + 1 << " IS: " << Names_Of_Players[Loop_Counter2] << "." << endl;
    }

    // WE WILL THEN CALL THE FUNCTION WHICH IS RESPONSIBLE FOR MOVING PIECES.
    Moving_Pieces(Number_Of_Players, Names_Of_Players);
}


// FUNCTION WHICH WE WILL BE USING TO MOVE PIECES. IT IS TAKING THE NUMBER OF PLAYERS AND NAMES.
// WITH NUMBER OF PLAYERS WE CAN ACTUALLY DETERMINE HOW MANY TIMES WE HAVE TO RU THE LOOP AND WITH NAMES WE WILL CALL THE SPECIFIC PERSON TO PLAY THE GAME.
// WHEN FIRST PLAYER'S GAME WILL BE ENDED WE WILL CALL THE OTHER PLAYER TO PLAY THE GAME.
void Moving_Pieces(string& Number_Of_Players_Copy, vector <string>& Names_Of_Players_Copy) {

    // WE WILL CONVERT NUMBER OF PLAYERS FROM STRING TO INT TO SIMPLIFY CALCULATIONS. SO WE INITALIZED A VARIABLE AND THEN CONVERTED IT AND STORED IN THAT VARIABLE.
    int Number_Of_Players_In_Int;
    Number_Of_Players_In_Int = stoi(Number_Of_Players_Copy);

    // SOME LOOP COUNTER VARIABLES THAT WE WILL BE USING THROUGHOUT THIS FUNCTION.
    int Loop_Counter1 = 0, Loop_Counter2 = 0, Loop_Counter3 = 0;

    // VECTORS THAT WE WILL BE USING THROUGHOUT THIS PROGRAM TO STORE THE SCORES OF THE PLAYERS.
    vector <int>    Number_Of_Moves = { };

    // A FOR LOOP AS WE KNOW THE NUMBER OF PLAYERS SO WE WILL RUN THE LOOP FOR JUST THE NUMBER OF PLAYERS WE HAVE.
    for (Loop_Counter3 = 0; Loop_Counter3 < Number_Of_Players_In_Int; Loop_Counter3++) {

        // WE WILL CALL THE SPECIFIC PLAYER TO PLAY THE GAME. ACCORDING TO THEIR NAME ENTERED.
        cout << endl << "THE GAME HAS STARTED FOR PLAYER NAME: " << Names_Of_Players_Copy[Loop_Counter3] << "." << endl;
        cout << "GOOD LUCK!" << endl << endl;

        // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL SHOW THE INITAL POSITIONS AND FINAL POSITIONS OF THE PIECES.
        cout << "PRESS ENTER TO SEE THE INITAL AND FINAL POSITIONS OF THE PIECES ON THE CHESSBOARD........ ";
        fflush(stdin);
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        system("cls");

        // IT WILL OUTPUT THE INITAL POSITIONS OF THE PIECES ON CHESSBOARD.
        cout << "===============================================================" << endl;
        cout << "THESE ARE THE INITAL POSITIONS OF THE PIECES ON THE CHESSBOARD:" << endl;

        // FIRST WE STORED THE INITAL POSITIONS OF PIECES IN AN ARRAY. THEN WE OUTPUT THEM.
        string Inital_Positions[2][3] = { { "King", "BishopW", "BishopB" }, { "RookW", "RookB", " " } };

        for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
            for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                cout << Inital_Positions[Loop_Counter1][Loop_Counter2] << "\t \t";
            }
            cout << endl;
        }
        cout << "===============================================================" << endl << endl;

        // HERE WE WILL OUTPUT THE FINAL POSITIONS OF THE PIECES ON THE CHESS BOARD.
        cout << "===============================================================" << endl;
        cout << "THESE ARE THE FINAL POSITIONS OF THE PIECES ON THE CHESSBOARD:" << endl;

        // HERE ALSO WE STORED THE FINAL POSITIONS OF THE PIECES IN THE ARRAY FIRST. THEN WE OUTPUT THEM.
        string Final_Positions[2][3] = { { "BishopB", "BishopW", " " }, { "RookW", "RookB", "King" } };

        for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
            for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                cout << Final_Positions[Loop_Counter1][Loop_Counter2] << "\t \t";
            }
            cout << endl;
        }
        cout << "=============================================================== " << endl;

        // IT WILL SHOW THE USER THAT AS SOON THE FINAL POSITION HAS BEEN REACHED THE GAME ENDS FOR THE USER. 
        cout << "WHEN GAME REACHES THIS POINT GAME ENDS." << endl << endl;

        // HERE WE TOLD THE PLAYER ABOUT THE EXPECTION.
        cout << "ALSO KEEP IN MIND. IN FINAL POSITIONS BLACK ROOK CAN BE AT THE WHITE BOX." << endl;
        cout << "SAME GOES FOR THE WHITE ROOK WHICH CAN BE AT THE BLACK BOX." << endl;
        cout << "AS ROOK AREN'T LIMITIZED UNLIKE BISHOPS THEY CAN MOVE IN ANY BOXES IN STRAIGHT LINE" << endl;
        cout << "THAT'S WHY GAME WILL END REGARDLESS OF THE POSITION OF ROOKS AS LONG AS THEY ARE IN THEIR SPECIFIEC BOXES." << endl << endl;

        // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL SHOW THE PLAYER RULES OF HOW TO MOVE PIECES OR SEE FEATURES DURING THE GAME.
        cout << "PRESS ENTER TO MOVE TO THE SEE RULES ON HOW TO MOVE THE PIECES........ ";
        fflush(stdin);
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        system("cls");

        cout << "THE GAME HAS STARTED." << endl;


        // A BOOL VARIABLE WHICH WILL BE USED TO DETERMINE EITHER THE GAME HAS ENDED OR NOT.
        bool Has_Game_Ended = false;

        // AN INTEGER VARIABLE THAT WE WILL USE TO RECORD THE NUMBER OF MOVES OF THE USER.
        int Number_Of_Moves_Of_The_Player = 0;


        // A WHILE LOOP TO ENSURE HAS THE GAME ENDED OR NOT.
        while (Has_Game_Ended == false) {

            // SOME INTEGER VARIBALES TO STORE THE ROW AND COLUMN POSITION OF THE PIECE. AND THE FREE ROW AND COLUMN POSITION.
            int Row_Position_Of_Piece = 0, Free_Row_Position = 0;
            int Column_Position_Of_Piece = 0, Free_Column_Position = 0;
            int Number_Of_Pieces_Matched = 0;

            // BOOL VARIABLES TO SEE IF THERE IS ANY FREE SPACE OR NOT.
            bool Is_There_Free_Space = false;
            bool Is_Piece_Valid = false;

            // STRING VARIABLE TO STORE NAME OF THE PIECE.
            String Name_Of_The_Piece;


            // A WHILE LOOP TO ENSURE IF THE PIECE ENTERED IS CORRECT OR NOT. IT WILL ASK UNTIL USER ENTERS A VALID NAME OF THE PIECE.
            while (Is_Piece_Valid == false) {

                // WE WILL SHOW THE PLAYER THE INSTRUCTIONS ABOUT WHAT TO ENTER TO MOVE WHICH PIECE. AND ALSO INSTRUCTIONS ABOUT 'F' WHICH WILL BE USED TO SEE FEATURES.
                cout << "YOU MAY ENTER 'K' TO MOVE KING." << endl;
                cout << "YOU MAY ENTER 'BW' TO MOVE WHITE BISHOP." << endl;
                cout << "YOU MAY ENTER 'BB' TO MOVE BLACK BISHOP." << endl;
                cout << "YOU MAY ENTER 'RW' TO MOVE WHITE ROOK." << endl;
                cout << "YOU MAY ENTER 'RB' TO MOVE BLACK ROOK." << endl << endl;
                cout << "KEEP IN MIND YOU CAN EVEN ENTER 'F' TO SEE THE DISTINCT FEATURES DURING THE GAME. ALSO THE GAME WILL RESUME WHERE YOU LEFT." << endl << endl;
                cout << "NOW YOU HAVE TO SELECT THE NAME OF THE PIECE WHICH YOU WANT TO MOVE." << endl << endl;

                // HERE WE WILL OUTPUT THE INITAL POSITIONS FOR NOW AND AFTER MOVES IT WILL BE POSITIONS AFTER SOME CHANGE. SO IT WILL BE EASIER FOT THE PLAYER TO SEE WHICH PIECE HE/SHE WANTS TO MOVE.
                cout << "=============================================================== " << endl;
                cout << "THESE ARE THE INITAL POSITIONS OF THE PIECES ON THE CHESSBOARD: " << endl;

                for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                    for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                        cout << Inital_Positions[Loop_Counter1][Loop_Counter2] << "\t \t";
                    }
                    cout << endl;
                }
                cout << "=============================================================== " << endl << endl;

                // A TRY CATCH BLOCK THAT WE WILL USE TO SEE IF PIECE IS INCORRECT OR NOT. IF IT IS THEN IT WILL THROW AN ERROR.
                try {

                    // HERE WE ASKED USER TO ENTER THE NAME OF THE PIECE WHICH HE/SHE WANTS TO MOVE.
                    cout << "ENTER THE NAME OF THE PIECE WHICH YOU WANT TO MOVE: ";
                    getline (cin, Name_Of_The_Piece);

                    // POSSIBLE STATEMENTS FOT BEING THE NAME OF THE PIECE TO BE TRUE. EITHER IT WOULD BE NAME OF THE PIECE OR USER WANTS TO SEE THE FEATURES.
                    if (Name_Of_The_Piece == "F" || Name_Of_The_Piece == "f") {
                        Distinct_Features();
                    }
                    else if (Name_Of_The_Piece == "K" || Name_Of_The_Piece == "k") {
                        Is_Piece_Valid = true;
                    }
                    else if (Name_Of_The_Piece == "BB" || Name_Of_The_Piece == "bb" || Name_Of_The_Piece == "bB" || Name_Of_The_Piece == "Bb") {
                        Is_Piece_Valid = true;
                    }
                    else if (Name_Of_The_Piece == "BW" || Name_Of_The_Piece == "bw" || Name_Of_The_Piece == "bW" || Name_Of_The_Piece == "Bw") {
                        Is_Piece_Valid = true;
                    }
                    else if (Name_Of_The_Piece == "RW" || Name_Of_The_Piece == "rw" || Name_Of_The_Piece == "rW" || Name_Of_The_Piece == "Rw") {
                        Is_Piece_Valid = true;
                    }
                    else if (Name_Of_The_Piece == "RB" || Name_Of_The_Piece == "rb" || Name_Of_The_Piece == "rB" || Name_Of_The_Piece == "Rb") {
                        Is_Piece_Valid = true;
                    }

                    // IF IS_PIECE_VALID IS STILL FALSE THEN IT MEANS IT DOESN'T LIE IN  ANY CATEGORY. SO WE WILL THROW AN ERROR. EXCEPT ONE CATEGORY IF USER ENTERS 'F' FOR THE FEATURES.
                    if (Is_Piece_Valid == false && Name_Of_The_Piece != "F" && Name_Of_The_Piece != "f") {
                        throw Invalid_Piece_Name{ };
                    }

                    // IF PLAYER HAS ENTERED 'F' THEN IT WILL TAKE PLAYER TO HERE. WHERE WE WILL TELL PLAYER TO MOVE ON TO GAME NOW OR RESUME WHERE HE LEFT.
                    else if (Name_Of_The_Piece == "F" || Name_Of_The_Piece == "f") {
                        cout << "NOW YOU HAVE SEEN THE FEATURES SO THE GAME WILL RESUME NOW." << endl << endl;

                        // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL SHOW THE PLAYER RULES OF HOW TO ENTER NAME OF THE PIECE. AFTER WE HAVE SHOWN THEN FEATURES.
                        cout << "PRESS ENTER TO MOVE TO THE SEE RULES ON HOW TO MOVE THE PIECES........ ";
                        fflush(stdin);
                        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
                        system("cls");
                    }

                    // HERE WE WILL CATCH THE ERROR. AND WE WILL TELL THE PROBLEM TO USER.
                }
                catch (Invalid_Piece_Name) {
                    cout << endl << "SORRY! WE CAN'T FIND OUT WHICH PIECE YOU WANT TO MOVE. TRY AGAIN!" << endl << endl;

                    // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL AGAIN OUTPUT THE INSTRUCTIONS AND ASK FOR THE NAME OF THE PIECE AGAIN.
                    cout << "PRESS ENTER TO SEE THE INITAL AND FINAL POSITIONS OF THE PIECES ON THE CHESSBOARD........ ";
                    fflush(stdin);
                    cin.ignore(numeric_limits < streamsize > ::max(), '\n');
                    system("cls");
                }
            }

            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS KING. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            if (Name_Of_The_Piece == "K" || Name_Of_The_Piece == "k") {

                // IF THE PIECE IS KING WE WILL NOTIFY USER ABOUT THAT.
                cout << endl << "YOU HAVE SELECTED THE KING TO MOVE." << endl;
                cout << "SINCE IT IS A KING IT WILL ONLY MOVE ONE BOX BUT IN ANY DIRECTION." << endl << endl;

                // HERE WE WILL FIND THE POSITION OF KING. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE KING.
                for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                    for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                        if (Inital_Positions[Loop_Counter1][Loop_Counter2] == "King") {

                            Row_Position_Of_Piece = Loop_Counter1;
                            Column_Position_Of_Piece = Loop_Counter2;
                        }
                    }
                }

                // HERE WE WILL FIND FOR EVERY POSITION WHERE KING CAN MOVE. AS IT CAN BE IN ANY BOXES AS IT IS NOT RESTRICTED BY WHITE OR BLACK UNLIKE BISHOP.
                // SO WE WILL CHECK FOR EVERY POSITION AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL EIGTH DIRECTIONS.
                if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 0) {
                    if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 1) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 2) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 0) {
                    if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 1) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 2) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }
            }


            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS BLACK BISHOP. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            else if (Name_Of_The_Piece == "BB" || Name_Of_The_Piece == "bb" || Name_Of_The_Piece == "bB" || Name_Of_The_Piece == "Bb") {

                // IF THE PIECE IS BLACK BISHOP WE WILL NOTIFY PLAYER ABOUT THAT.
                cout << endl << "YOU HAVE SELECTED THE BLACK BISHOP TO MOVE." << endl;
                cout << "SINCE IT IS A BLACK BISHOP IT WILL ONLY MOVE IN BLACK BOXES BUT DIAGONALLY." << endl << endl;

                // HERE WE WILL FIND THE POSITION OF BLACK BISHOP. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE BLACK BISHOP.
                for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                    for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                        if (Inital_Positions[Loop_Counter1][Loop_Counter2] == "BishopB") {

                            Row_Position_Of_Piece = Loop_Counter1;
                            Column_Position_Of_Piece = Loop_Counter2;
                        }
                    }
                }

                // HERE WE WILL FIND FOR EVERY POSITION WHERE BLACK BISHOP CAN MOVE. AS IT IS A BLACK BISHOP, SO IT'S MOVES ARE RESTRICTED TO JUST BLACK BOXES. 
                // SO WE WILL CHECK FOR JUST BLACK BOXES AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL FOUR DIAGONAL DIRECTIONS OR NOT.      
                if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 0) {
                    if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 2) {
                    if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 1) {
                    if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }
            }


            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS WHITE BISHOP OR NOT. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            else if (Name_Of_The_Piece == "BW" || Name_Of_The_Piece == "bw" || Name_Of_The_Piece == "bW" || Name_Of_The_Piece == "Bw") {

                // IF THE PIECE IS WHITE BISHOP WE WILL NOTIFY PLAYER ABOUT THAT.
                cout << endl << "YOU HAVE SELECTED THE WHITE BISHOP TO MOVE." << endl;
                cout << "SINCE IT IS A WHITE BISHOP IT WILL ONLY MOVE IN WHITE BOXES BUT DIAGONALLY." << endl << endl;

                // HERE WE WILL FIND THE POSITION OF WHITE BISHOP. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE WHITE BISHOP.
                for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                    for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                        if (Inital_Positions[Loop_Counter1][Loop_Counter2] == "BishopW") {

                            Row_Position_Of_Piece = Loop_Counter1;
                            Column_Position_Of_Piece = Loop_Counter2;
                        }
                    }
                }

                // HERE WE WILL FIND FOR EVERY POSITION WHERE WHITE BISHOP CAN MOVE. AS IT IS A WHITE BISHOP, SO IT'S MOVES ARE RESTRICTED TO JUST WHITE BOXES. 
                // SO WE WILL CHECK FOR JUST WHITE BOXES AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL FOUR DIAGONAL DIRECTIONS OR NOT.          
                if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 1) {
                    if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 0) {
                    if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 2) {
                    if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }
            }


            // SINCE THE MOVES FOR BOTH WHITE AND BLACK BISHOPS ARE SAME AND EVEN THEY AREN'T RESTRICTED TO THEIR COLOUR BOXES SO WE HAVE KEPT THEM IN ONE BLOCK. BUT WE WILL DO OPERATIONS SEPERATELY.
            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS WHITE BOOK OR BLACK ROOK OR NEITHER. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            else if ((Name_Of_The_Piece == "RW" || Name_Of_The_Piece == "rw" || Name_Of_The_Piece == "rW" || Name_Of_The_Piece == "Rw") || (Name_Of_The_Piece == "RB" || Name_Of_The_Piece == "rb" || Name_Of_The_Piece == "rB" || Name_Of_The_Piece == "Rb")) {

                // FOR WHITE ROOK
                if (Name_Of_The_Piece == "RW" || Name_Of_The_Piece == "rw" || Name_Of_The_Piece == "Rw" || Name_Of_The_Piece == "rW") {

                    // IF THE PIECE IS WHITE ROOK WE WILL NOTIFY USER ABOUT THAT. 
                    cout << endl << "YOU HAVE SELECTED THE WHITE ROOK TO MOVE." << endl;
                    cout << "SINCE IT IS A WHITE ROOK IT WILL ONLY MOVE IN WHITE BOXES BUT RIGHT, LEFT, UP AND DOWN." << endl << endl;

                    // HERE WE WILL FIND THE POSITION OF WHITE ROOK. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE WHITE ROOK.
                    for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                        for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                            if (Inital_Positions[Loop_Counter1][Loop_Counter2] == "RookW") {

                                Row_Position_Of_Piece = Loop_Counter1;
                                Column_Position_Of_Piece = Loop_Counter2;
                            }
                        }
                    }
                }

                // FOR BLACK ROOK
                else if (Name_Of_The_Piece == "RB" || Name_Of_The_Piece == "rb" || Name_Of_The_Piece == "rB" || Name_Of_The_Piece == "Rb") {

                    // IF THE PIECE IS BLACK ROOK WE WILL NOTIFY USER ABOUT THAT.   
                    cout << endl << "YOU HAVE SELECTED THE BLACK ROOK TO MOVE." << endl;
                    cout << "SINCE IT IS A BLACK ROOK IT WILL ONLY MOVE IN WHITE BOXES BUT RIGHT, LEFT, UP AND DOWN." << endl << endl;

                    // HERE WE WILL FIND THE POSITION OF BLACK ROOK. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE BLACK ROOK.
                    for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                        for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                            if (Inital_Positions[Loop_Counter1][Loop_Counter2] == "RookB") {

                                Row_Position_Of_Piece = Loop_Counter1;
                                Column_Position_Of_Piece = Loop_Counter2;
                            }
                        }
                    }
                }

                // HERE WE WILL FIND FOR EVERY POSITION WHERE BLACK ROOK OR WHITE ROOK CAN MOVE.  BUT IT WILL BE JUST DOING FOR ONE PIECE WHICH USER HAS INPUTTED.
                // AS IT CAN BE IN ANY BOXES BECAUSE IT'S MOVES ARE NOT RESTRICTED BY WHITE OR BLACK BOXES UNLIKE BISHOP. 
                // SO WE WILL CHECK FOR EVERY POSITION AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL FOUR STRAIGHT DIRECTIONS.  
                if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 0) {
                    if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 1) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }

                else if (Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 2) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece + 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 0) {
                    if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 1) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece + 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }

                else if (Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 2) {
                    if (Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if (Inital_Positions[Row_Position_Of_Piece - 1][Column_Position_Of_Piece] == " ") {
                        Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }
            }

            // WE WILL CHECK IF FREE SPACE IS TRUE FOR ANY SPECIFIC PIECE. IF IT IS TRUE THEN WE ARE SURE THAT THIS PIECE CAN MOVE.
            if (Is_There_Free_Space == true) {

                // A STRING VARIABLE THAT WILL STORE THE CHOICE OF PLAYER IF HE/SHE WANTS TO MOVE OR NOT. AND OTHER ONE TO STORE THE CHOICE FOR UNDO OR NOT.
                string Want_To_Move;
                string Want_To_Undo;

                // TWO BOOL VARIABLES ONE WILL MAKE SURE PLAYER HAS ENTERED THE CORRECT VALUE FOR MOVE AND UNDO OR NOT. 
                bool Make_A_Move = false;
                bool Undo_The_Move = false;

                // INTEGER VARIABLE TO STORE THE NUMBER OF MOVES WHEN WE HAVE UNDO THE MOVE IN THAT CASE IT WILL REDUCE ONE MOVE.
                int Reduced_Move;

                // WE WILL TELL THE PLAYER HERE THAT THIS PIECE CAN ME MOVED AT THIS ROW AND COLUMN POSITION.
                cout << "YES THIS PIECE CAN BE MOVED AT THE ROW NUMBER " << Free_Row_Position << " AND COLUMN NUMBER " << Free_Column_Position << endl << endl;


                // A WHILE LOOP WHICH WILL MAKE SURE THAT PLAYER HAS ENTERED THE RIGHT KEY TO MOVE OR NOT. EITHER IT WILL ASK AGAIN UNTIL HE/SHE ENTERS IT CORRECTLY. 
                while (Make_A_Move == false) {

                    // A TRY CATCH BLOCK TO THROW AND CATCH ERROR IF PLAYER ENTERS AN INVALID CHARACTER OR STRING TO MOVE PIECES.
                    try {

                        // WE WILL ASK HERE IF HE/SHE WANTS TO MOVE OR NOT. THEN WE WILL STORE IT IN A STRING VARIABLE.
                        cout << "DO YOU WANT TO MOVE THE PIECE AT THIS POSITION OR NOT?" << endl;
                        cout << "PRESS 'Y' FOR YES AND 'N' FOR NO." << endl;

                        cout << "PLEASE ENTER YOUR CHOICE: ";
                        getline (cin,Want_To_Move);


                        // WE WILL CHECK IF USER HAS ENTERED THE CORRECT STRING OR CHARACTER OR NOT. 
                        if (Want_To_Move == "Y" || Want_To_Move == "N" || Want_To_Move == "y" || Want_To_Move == "n") {

                            // IF USER HAS ENTERED A CORRECT CHARACTER OR STRING THEN WE WILL CHANGE THE BOOL VARIABLE AS TRUE SO IT SHOULDN'T THROW THE ERROR.
                            Make_A_Move = true;

                            // IF CHOICE IS YES OR 'Y' WE WILL MAKE THE MOVE.
                            if (Want_To_Move == "Y" || Want_To_Move == "y") {

                                // HERE WE WILL SWAP THE POSITIONS OF BOTH BOXES.
                                Inital_Positions[Free_Row_Position][Free_Column_Position] = Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece];
                                Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece] = " ";

                                // HERE WE WILL TELL USER IF MOVE WAS SUCCESSFUL OR NOT. THEN WE WILL INCREMENT THE MOVE AND OUTPUT THE NUMBER OF MOVES.
                                cout << endl << "YOUR MOVE WAS SUCCESSFUL!" << endl;

                                Number_Of_Moves_Of_The_Player++;
                                cout << "YOUR NUMBER OF MOVES NOW ARE: " << Number_Of_Moves_Of_The_Player << endl << endl;

                                // HERE WE WILL OUTPUT THE POSITIONS OF CHESS PIECES AFTER CHANGES HAVE BEEN MADE.
                                cout << "PIECES AFTER YOUR MOVE:" << endl;
                                cout << "=============================================================== " << endl;
                                for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                                    for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                                        cout << Inital_Positions[Loop_Counter1][Loop_Counter2] << "\t \t";
                                    }
                                    cout << endl;
                                }
                                cout << "=============================================================== " << endl;

                                // HERE WHILE LOOP WILL CHECK IF CHARACTER OR STRING ENTERED FOR UNDO IS CORRECT OR NOT.
                                while (Undo_The_Move == false) {

                                    // A TRY CATCH BLOCK WHICH WE WILL USE TO CHECK IF USER HAS ENTERED THE CORRECT CHARACTER OR STRING TO UNDO OR NOT.
                                    try {

                                        // HERE WE WILL OUTPUT USER THE INSTRUCTIONS TO OUTPUT HOW HE/SHE CAN UNDO THE MOVE.
                                        cout << endl << "DO YOU WANT TO UNDO THE MOVES OR NOT?" << endl;
                                        cout << "PRESS 'Y' FOR YES AND 'N' FOR NO." << endl;

                                        cout << "PLEASE ENTER YOUR CHOICE: ";
                                        getline (cin, Want_To_Undo);

                                        // WE WILL CHECK HERE IF PLAYER HAS ENTERED THE RIGHT CHARACTER OR STRING TO UNDO OR NOT TO.
                                        if (Want_To_Undo == "Y" || Want_To_Undo == "N" || Want_To_Undo == "y" || Want_To_Undo == "n") {

                                            // IF IT IS CORRECT WE WILL CHANGE THE STATE OF BOOL VARIABLE AS TRUE. SO IT SHOULDN'T THROW ERROR.
                                            Undo_The_Move = true;

                                            // IF INPUT IS YES OR 'Y' WE WILL UNDO THE MOVE.
                                            if (Want_To_Undo == "Y" || Want_To_Undo == "y") {

                                                // HERE WE WILL SWAP POSITIONS TO UNDO THE MOVE.
                                                Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece] = Inital_Positions[Free_Row_Position][Free_Column_Position];
                                                Inital_Positions[Free_Row_Position][Free_Column_Position] = " ";

                                                // HERE WE WILL TELL USER IF UNDO WAS SUCCESSFUL OR NOT. THEN WE WILL DECREMENT THE MOVE AND OUTPUT THE NUMBER OF MOVES.
                                                cout << endl << "UNDO WAS SUCCESSFUL!" << endl;

                                                Reduced_Move = Number_Of_Moves_Of_The_Player--;
                                                cout << "YOUR NUMBER OF MOVES WERE DECREASED FROM " << Reduced_Move << " TO " << Number_Of_Moves_Of_The_Player << "." << endl << endl;

                                                // HERE WE WILL OUTPUT THE POSITIONS OF CHESS PIECES AFTER CHANGES HAVE BEEN MADE.
                                                cout << "POSITIONS AFTER UNDOING THE MOVE:" << endl;
                                                cout << "=============================================================== " << endl;
                                                for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                                                    for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                                                        cout << Inital_Positions[Loop_Counter1][Loop_Counter2] << "\t \t";
                                                    }
                                                    cout << endl;
                                                }
                                                cout << "=============================================================== " << endl;
                                            }
                                        }

                                        // IF UNPUTTED CHARACTER OR STRING IS NOT THE ONE MENTIONED IT WILL THROW AN ERROR.
                                        else {
                                            throw Invalid_Undo_Choice{ };
                                        }

                                        // HERE WE WILL CATCH THE ERROR IS CHARACTER FOR UNDO IS INVALID.
                                    }
                                    catch (Invalid_Undo_Choice) {
                                        cout << endl << "SORRY! YOU INPUTTED A WRONG CHARACTER OR STRING TO UNDO. TRY AGAIN!" << endl;
                                    }
                                }



                                // HERE WE WILL CHECK HOW MANY PIECES ARE ON THEIR FINAL POSITIONS.
                                for (Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++) {
                                    for (Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++) {

                                        // IF THERE ARE WE WILL INCREMENT THE NUMBER OF PIECES MATCHED.
                                        if (Inital_Positions[Loop_Counter1][Loop_Counter2] == Final_Positions[Loop_Counter1][Loop_Counter2]) {
                                            Number_Of_Pieces_Matched++;
                                        }
                                    }
                                }

                                // THERE IS AN EXCEPTION THAT WHITE ROOK CAN BE AT BLACK BOX AND BLACK ROOK CAN BE AT WHITE ROOK IN FINAL POSITION. IF THAT IS THE CASE SO WE WILL INCREMENT THE NUMBER OF MATCHED PIECES AGAIN.
                                if (Inital_Positions[1][0] == "RookB") {
                                    Number_Of_Pieces_Matched++;
                                }
                                if (Inital_Positions[1][1] == "RookW") {
                                    Number_Of_Pieces_Matched++;
                                }

                                // HERE WE WILL OUTPUT HOW MANY PIECES WERE MATCHED. BUT IF ALL PIECES HAVE BEEN MATCHED WITH THEIR FINAL POSTIONS THAT MEANS GAME HAS BEEN ENDED. SO WE WILL SHOW THE OUTPUT SEPARETELY FOR THEM.
                                if (Number_Of_Pieces_Matched < 6) {
                                    cout << endl << "THERE ARE STILL " << (6 - Number_Of_Pieces_Matched) << " PIECES TO MATCH!" << endl;
                                }
                                else {
                                    cout << endl << endl << "CONGRATULATIONS!" << endl;
                                    cout << "YOUR GAME HAS ENDED." << endl;
                                    cout << "YOU COMPLETED THE GAME IN " << Number_Of_Moves_Of_The_Player << " MOVES." << endl << endl;
                                }

                                // WE CHECKED IF ALL PIECES ARE MATCH AND IF ALL PIECES ARE MATCHED WE WILL STORE THE NUMBER OF MOVES AND WE WILL SET THE GAME ENDED AS TRUE TO END THE LOOP.
                                if (Number_Of_Pieces_Matched == 6) {

                                    Number_Of_Moves.push_back(Number_Of_Moves_Of_The_Player);

                                    Has_Game_Ended = true;
                                }
                            }
                        }

                        // HERE WE THROW AN ERROR IF CHARACTER OR STRING ENTERED FOR MOVE OPTION IS CORRECT OR NOT.
                        else {
                            throw Invalid_Move_Choice{ };
                        }

                        // HERE WE WILL CATCH THE ERROR FOR MOVE OPTION.
                    }
                    catch (Invalid_Move_Choice) {
                        cout << endl << "SORRY! YOU INPUTTED A WRONG CHARACTER OR STRING TO MOVE. TRY AGAIN!" << endl << endl;
                    }
                }

                // HERE WE WILL ASK PLAYER TO PRESS ENTER KEY IF GAME HASN'T ENDED. SO HE/SHE CAN MOVE ANOTHER PIECE. BUT IF GAME HAS ENDED SO WE WILL START GAME FOR ANOTHER PLAYER IF THERE ARE MORE THAN ONE PLAYER. 
                if (Number_Of_Pieces_Matched < 6) {

                    // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL AGAIN ASK USER TO ENTER ANOTHER PIECE TO MOVE.   
                    cout << endl << "PRESS ENTER TO MOVE ANOTHER PIECE........ ";
                    fflush(stdin);
                    cin.ignore(numeric_limits < streamsize > ::max(), '\n');
                    system("cls");
                }
                else
                {
                    if (Number_Of_Players_In_Int > 1 && Number_Of_Players_In_Int < Number_Of_Players_In_Int) {

                        // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND AFTER THAT GAME WILL START FOR ANOTHER PLAYER.   
                        cout << "PRESS ENTER SO THAT OTHER PLAYER CAN PLAY THE GAME........ ";
                        fflush(stdin);
                        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
                        system("cls");
                    }
                }
            }


            // HERE WE WILL OUTPUT THE USER THAT THERE IS NO FREE SPACE. IF THAT PIECE CAN'T BE MOVED.
            else {
                cout << "THERE IS NO FREE SPACE FOR THIS PIECE TO MOVE." << endl << endl;

                // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL AGAIN TELL PLAYER TO INPUT THE PIECE WHICH HE/SHE WANTS TO MOVE.   
                cout << "PRESS ENTER TO TRY AGAIN........ ";
                fflush(stdin);
                cin.ignore(numeric_limits < streamsize > ::max(), '\n');
                system("cls");
            }
        }
    }

    //WE WILL OUTPUT THE RESULTS NOW. FIRST WE WILL CLEAR THE SCREEN.
    system("cls");

    // THEN WE WILL SHOW THE OUTPUT WHICH IS DIFFERENT ACCORDING TO NUMBER OF PLAYERS.
    if (Number_Of_Players_In_Int == 1) {
        cout << "GAME HAS ENDED." << endl;
    }
    else {
        cout << "GAME HAS ENDED FOR ALL THE PLAYERS." << endl << endl;
    }

    // HERE WE ARE SORTING THE DATA BY NUMBER OF MOVES. SO WE CAN FIND OUT ACTUALLY WHICH PLAYER HAS LEAST NUMBER OF MOVES AND WHICH PLAYER HAS MOST NUMBER OF MOVES.
    for (Loop_Counter1 = 0; Loop_Counter1 < Number_Of_Players_In_Int; Loop_Counter1++) {
        for (Loop_Counter2 = 0; Loop_Counter2 < Number_Of_Players_In_Int; Loop_Counter2++) {

            if (Number_Of_Moves[Loop_Counter1] < Number_Of_Moves[Loop_Counter2]) {

                // AN INTEGER VARIABLE TO STORE NUMBER OF MOVES FOR TEMPORARY PUSRPOSE.
                int Temp_Moves;

                // A STRING VARIABLE TO STORE NAME OF VARIABLE FOR TEMPORARY PURPOSE.
                string Temp_Name;

                // SWAPPING FOR MOVES.
                Temp_Moves = Number_Of_Moves[Loop_Counter2];
                Number_Of_Moves[Loop_Counter2] = Number_Of_Moves[Loop_Counter1];
                Number_Of_Moves[Loop_Counter1] = Temp_Moves;

                // SWAPPPING FOR NAMES.
                Temp_Name = Names_Of_Players_Copy[Loop_Counter2];
                Names_Of_Players_Copy[Loop_Counter2] = Names_Of_Players_Copy[Loop_Counter1];
                Names_Of_Players_Copy[Loop_Counter1] = Temp_Name;
            }
        }
    }

    // WE WILL OUTPUT ALL THE RESULTS AT THE END OF THE GAME.
    for (Loop_Counter1 = 0; Loop_Counter1 < Number_Of_Players_In_Int; Loop_Counter1++) {

        cout << "NAME OF THE PLAYER: " << Names_Of_Players_Copy[Loop_Counter1] << " AND YOUR SCORE IS: " << Number_Of_Moves[Loop_Counter1] << "." << endl;
    }

    // HERE WE WILL COMPARE THE RESULTS AS IF THERE ARE MORE THAN ONE PLAYERS WE WILL COMPARE THE MOVES LIKE WHO TOOK LESS MOVES AND WHO TOOK MOST NOVES.
    if (Number_Of_Players_In_Int == 1) {
        cout << endl << "CONGRATULATIONS!" << endl;
    }

    // IF NUMBER OF PLAYERS ARE THREE AND ALL HAVE THE SAME NUMBER OF MOVES THEN THIS WILL EXECUTE.
    else if ((Number_Of_Players_In_Int == 3) && (Number_Of_Moves[0] == Number_Of_Moves[1]) && (Number_Of_Moves[1] == Number_Of_Moves[2])) {
        cout << endl << "MOVES OF ALL PLAYERS ARE SAME. SO ALL ARE WINNERS! " << endl;
        cout << "CONGRATULATIONS ALL!" << endl;
    }

    // IF NUMBER OF PLAYERS ARE 2 AND BOTH HAVE SAME SCORES.
    else if ((Number_Of_Players_In_Int == 2) && (Number_Of_Moves[0] == Number_Of_Moves[1])) {
        cout << endl << "MOVES OF BOTH PLAYERS ARE SAME. SO BOTH ARE WINNERS! " << endl;
        cout << "CONGRATULATIONS BOTH!" << endl;
    }

    // HERE WE WILL BE COMPARING THE DATA TO GIVE OUTPUT TO PLAYERS. IF THERE ARE MORE THAN ONE PLAYERS WE WILL CHECK EITHER THE MOST MOVES OR LEAST MOVES ARE SAME FOR ANOTHER PLAYER SO WE WILL GIVE OUTPUT DIFFERENT IN THAT CASE.
    // EITHER WE WILL OUTPUT THE USUAL OUTPUT FOR WINNER AND LOOSER
    else {

        // INTEGER VARIABLES TO STORE MOVES
        int Most_Moves, Most_Moves2, Least_Moves, Least_Moves2;

        // STRING VARIABLE TO STORE NAMES OF THE PLAYERS.
        string Most_Moves_Name, Least_Moves_Name, Most_Moves2_Name, Least_Moves2_Name;

        // WE WILL BE STORING HERE LEAST NUMBER OF MOVES WHICH WILL BE AT FIRST AND IT'S NAME. THEN THE MOVES AND NAME FOR SECOND PLAYER.
        Least_Moves = Number_Of_Moves[0];
        Least_Moves_Name = Names_Of_Players_Copy[0];

        Least_Moves2 = Number_Of_Moves[1];
        Least_Moves2_Name = Names_Of_Players_Copy[1];

        // HERE WE WILL CHECK IF BOTH MOVES ARE SAME THEN THE FIRST AND SECOND BOTH ARE WINNERS.
        if (Least_Moves == Least_Moves2) {
            cout << endl;
            cout << "FIRST MOST LESS NUMBER OF MOVES AND SECOND MOST LESS MOVES TO COMPLETE THIS GAME ARE SAME!" << endl;
            cout << "THE FIRST LESS NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Least_Moves << " AND IT WAS COMPLETED BY: " << Least_Moves_Name << "." << endl;
            cout << "THE SECOND LESS NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Least_Moves2 << " AND IT WAS COMPLETED BY: " << Least_Moves2_Name << "." << endl;
        }

        // IF THEY AREN'T SAME THEN IT MEANS ONLY FIRST PLAYER IS THE WINNER.
        else {
            cout << endl;
            cout << "THE LEAST MOVES TO COMPLETE THIS GAME ARE: " << Least_Moves << " AND IT WAS COMPLETED BY: " << Least_Moves_Name << "." << endl;
        }

        // HERE WE WILL BE CHECKING IF NUMBER OF MOVES FOR LAST AND SECOND LAST ARE SAME OR NOT. SO WE WILL STORE THE SCORES AND NAMES OF BOTH POSITIONS IN DIFFERENT VARIABLES.
        Most_Moves = Number_Of_Moves[Number_Of_Players_In_Int - 1];
        Most_Moves_Name = Names_Of_Players_Copy[Number_Of_Players_In_Int - 1];

        Most_Moves2 = Number_Of_Moves[Number_Of_Players_In_Int - 2];
        Most_Moves2_Name = Names_Of_Players_Copy[Number_Of_Players_In_Int - 2];

        // HERE WE WILL COMPARE IF BOTH ARE SAME OR NOT. IF BOTH ARE SAME WE WILL OUTPUT THE RESULTS ACCORDINGLY.
        if (Most_Moves == Most_Moves2) {
            cout << endl;
            cout << "FIRST MOST NUMBER OF MOVES AND SECOND MOST NUMBER OF MOVES ARE SAME!" << endl;
            cout << "THE FIRST MOST NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Most_Moves << " AND IT WAS COMPLETED BY: " << Most_Moves_Name << "." << endl;
            cout << "THE SECOND MOST NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Most_Moves2 << " AND IT WAS COMPLETED BY: " << Most_Moves2_Name << "." << endl;
        }

        // IF THEY AREN'T SAME WE WILL JUST OUTPUT THE MOST NUMBER OF MOVES WHICH ARE BY THE LAST PLAYER.
        else {
            cout << endl;
            cout << "THE MOST MOVES TO COMPLETE THIS GAME ARE: " << Most_Moves << " AND IT WAS COMPLETED BY: " << Most_Moves_Name << "." << endl;
        }
    }

    // AND AN END NOTE.
    cout << endl << "THANKS FOR PLAYING THIS GAME." << endl;

    // HERE WE WILL END THE GAME EVWNTUALLY WHEN THIS POINT IS REACHED.
    exit(1);
}


// WE WILL BE USING THIS FUNCTIONS TO PROVIDE SOME DISTINCT FEATURES DURING THE GAME. 
void Distinct_Features(void) {

    // WE WILL USE THIS TO CLEAR THE SCREEN.
    system("cls");

    // A BOOL VARIABLE TO USE IN THE WHILE LOOP TO CHECK IF PLAYER HAS ENTERED THE CORRECT CHOICE OR NOT.
    bool Distinct_Choice = false;

    // A STRING VARIABLE TO STORE THE CHOICE ENTERED BY THE USER.
    string Choice_Of_The_User;

    // A WHILE LOOP WHICH WILL MAKE SURE PLAYER IS ENTERING CORRECT VALUE OR NOT.
    while (Distinct_Choice == false) {

        // SOME LIST OF FEATURES THAT WE CAN PROVIDE TO THE USER.
        cout << endl;
        cout << " WE ARE SORRY FOR THE INCONVINIENCE! " << endl << endl;
        cout << " THE DISTINCT FEATURES THAT YOU CAN USE ARE: " << endl;
        cout << " 1) PRESS 'R' FOR RULES OF THE GAME!" << endl;
        cout << " 2) PRESS 'N' TO RESTART A NEW GAME!" << endl;
        cout << " 3) PRESS 'P' TO START THE PREVIOUS GAME" << endl;
        cout << " 4) PRESS 'Q' TO QUIT THE GAME!" << endl << endl;

        // A TRY CATCH BLOCK TO THROW AND CATCH ERROR IF USER ENTERS AN INCORRECT CHARACTER OR STRING AS HIS/HER CHOICE. 
        try {

            // HERE WE WILL ASK USER TO ENTER ANY CHARACTER OR STRING.
            cout << "KINDLY ENTER A CHARACTER FROM ABOVE: ";
            fflush(stdin);
            getline(cin, Choice_Of_The_User);

            // HERE WE WILL CHECK IF CHOICE IS VALID OR NOT. IF IT IS VALID WE WILL CALL THE SPECIFIC FUNCTION.
            if (Choice_Of_The_User == "R" || Choice_Of_The_User == "r") {
                Distinct_Choice = true;
                cout << endl << "WE ARE CALLING THE RULES AGAIN: " << endl << endl;
                Rules_Called_During_The_Game();
            }
            else if (Choice_Of_The_User == "P" || Choice_Of_The_User == "p") {
                Distinct_Choice = true;
                cout << endl << "THE GAME HAS STARTED WHERE YOU LEFT: " << endl << endl;
            }
            else if (Choice_Of_The_User == "N" || Choice_Of_The_User == "n") {
                Distinct_Choice = true;
                cout << endl << "WE ARE RESTARTING THE GAME: " << endl << endl;
                Logo_Of_The_Game();
            }
            else if (Choice_Of_The_User == "Q" || Choice_Of_The_User == "q") {
                Distinct_Choice = true;
                cout << endl << "GAME WAS QUIT!" << endl << endl;
                Quit_The_Game();
            }

            // IF IT DOESN'T MATCH ANY CHOICE THEN WE WILL THROW ERROR.
            else {
                throw Invalid_Distinct_Feature{ };
            }
        }
        catch (Invalid_Distinct_Feature) {
            cout << "SORRY THIS CHARACTER OR STRING IS NOT VALID." << endl << endl;

            // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL AGAIN ASK FROM PLAYER ABOUT THE DISTINCT FEATURE CHOICE.   
            cout << "PRESS ENTER TO ENTER CHOICE AGAIN........ ";
            fflush(stdin);
            cin.ignore(numeric_limits < streamsize > ::max(), '\n');
            system("cls");
        }
    }
}


// THE FUNCTION WHICH WILL SHOW THE RULES OF THE GAME IF USER WANTS TO SEE RULES DURING THE GAME.
void Rules_Called_During_The_Game(void) {

    // IT WILL JUST CLEAR THE SCREEN.
    system("cls");


    // RULES OF A PARTICULAR CHESS GAME. BUT SINCE THIS GAME HAS PIECES OF CHESS BUT IT IS NOT COMPLETELY A CHESS GAME. THAT'S WHY RULES TO MOVE THE PIECES ARE SAME AS WE HAVE IN CHESS.
    // THAT'S WHY WE WILL FOLLOW THE MOVES OF A CHESS GAME.
    cout << "\n";
    cout << " ======================================================================================================================================================================" << endl;
    cout << " THESE ARE THE RULES OF A PARTICULAR CHESS GAME: " << endl << endl << endl;
    cout << "   1) THIS PARTICULAR CHESSBOARD GAME IS A TWO DIMENSIONAL GAME AND HAS SIZE (2 * 3) RATHER THAN (8 * 8)." << endl;
    cout << "   2) THERE ARE JUST THREE TYPES OF PIECES: KING, BISHOP AND ROOK." << endl;
    cout << "   3) BUT THERE ARE TWO BISHOPS AND TWO ROOKS. ONE BISHOP AND ROOK ARE BLACK AND OTHER BISHOP AND ROOK ARE WHITE." << endl;
    cout << "   4) THERE ARE JUST SIX BOXES IN THIS GAME." << endl;
    cout << "   5) THE FIVE BOXES ARE FILLED WITH THE PIECES OF THE CHESS GAME. SO THERE IS ONLY ONE BOX LEFT. THAT'S WHY EACH PIECE CAN MOVE BY JUST ONE SQUARE NOT MORE THAT THAT." << endl;
    cout << "   6) A KING CAN MOVE IN ANY DIRECTION INCLUDING UP, DOWN, RIGTH, LEFT AND DIAGONALLY UP RIGHT, UP LEFT, DOWN RIGHT AND DOWN LEFT TOO." << endl;
    cout << "   7) A BISHOP CAN MOVE DIAGONNALY ONLY. WHICH MEANS IT CAN ONLY MOVE DIAGONALLY UP RIGHT, UP LEFT, DOWN RIGHT AND DOWN LEFT." << endl;
    cout << "   8) A ROOK CAN MOVE UP, DOWN, RIGHT AND LEFT AS IT MOVES IN A STRAIGHT LINE NOT DIAGONALLY. " << endl;
    cout << " ======================================================================================================================================================================" << endl << endl;

    // IT WILL ASK PLAYER TO PRESS THE ENTER KEY SO THAT IT CAN SHOW THE OTHER RULES TOO AND AFTER THAT IT WILL CLEAR THE SCREEN.
    cout << "PRESS ENTER TO SEE THE OTHER RULES........ ";
    cin.ignore(numeric_limits <streamsize> ::max(), '\n');
    system("cls");


    // THESE RULES WILL TELL PLAYER ABOUT THE MAIN FUNCTION OF THIS GAME.
    cout << "\n";
    cout << " =================================================================================================================================================" << endl;
    cout << " HOW WILL THIS GAME WORK: " << endl << endl << endl;
    cout << " 1) WHEN A NEW PLAYER STARTS A NEW GAME IT WILL ASK ABOUT THE NUMBER OF PLAYERS." << endl;
    cout << " 2) BUT TO KEEP THE GAME SIMPLE WE HAVE LIMITIZED THE NUMBER OF PLAYERS TO THREE." << endl;
    cout << " 3) SO YOU CAN'T ENTER NUMBER OF PLAYERS TO BE MORE THAN THREE OR EQUALS TO OR EVEN LESS THAN ZERO." << endl;
    cout << " 4) AFTER ENTERING NUMBER OF PLAYERS IT WILL ASK PLAYERS TO ENTER THEIR RESPECTIVE NAMES." << endl;
    cout << " 5) IF ONE PLAYER IS PLAYING THE GAME THE GAME WILL START AND WHEN IT REACHES THE END POINT." << endl;
    cout << " 6) IT WILL SHOW THE PLAYER ABOUT NUMBER OF MOVES HE/SHE TOOK TO REACH THE END OF THE GAME." << endl;
    cout << " 7) WHEN MULTIPLE PLAYERS ARE PLAYING THE GAME, IT WILL FIRST ASK ALL THE PLAYERS TO ENTER THEIR NAMES." << endl;
    cout << " 8) AFTER ENTERING NAMES IT WILL START THE GAME FOR PLAYER # 1 AFTER HE/SHE REACHES THE END POINT." << endl;
    cout << " 9) THE NUMBER OF MOVES WILL BE RECORDED AND THEN THE OTHER PLAYERS WILL PLAY THE GAME." << endl;
    cout << " 10) AND EVENTUALLY WHEN ALL THE PLAYERS HAVE PLAYED THE GAME. THE GAME WILL END." << endl;
    cout << " 12) AT THE END OF THE GAME IT WILL SHOW THE PLAYERS ABOUT WHO TOOK THE MINIMUN MOVES AND WHO TOOK THE MAXIMUM MOVES TO REACH THE END OF THE GAME." << endl;
    cout << " =================================================================================================================================================" << endl << endl;

    // IT WILL ASK USER TO PRESS ENTER KEY SO THAT IT CAN SHOW THE FINAL RULES OF THE GAME TOO AND AFTER PLAYER PRESSES ENTER KEY IT WILL CLEAR THE SCREEN.
    cout << "PRESS ENTER TO SEE HOW YOU WILL MOVE THE PIECES........ ";
    cin.ignore(numeric_limits < streamsize > ::max(), '\n');
    system("cls");


    // THE FINAL RULES OF THE GAME ON HOW TO MOVE PIECES.
    cout << "\n";
    cout << " ===========================================================================================================================" << endl;
    cout << " THESE ARE THE RULES OF HOW TO MOVE THE PIECES:" << endl << endl << endl;
    cout << "  1) WHEN THE GAME WILL START OR AFTER ANY MOVE THERE CAN BE MAXIMUM 3 MOVES." << endl;
    cout << "  2) PLAYER WILL ENTER THE NAME OF THE PIECE WHICH HE/SHE WANTS TO MOVE." << endl;
    cout << "  3) PROGRAM WILL TELL THE PLAYER IF THE SPACE FOR THAT PARTICULAR PIECE IS EMPTY OR NOT." << endl;
    cout << "  4) IF THERE IS NO FREE SPACE AVAILABLE THE PROGRAM WILL SHOW AN ERROR AND ASK PLAYER TO ENTER THE NAME OF THE OTHER PIECE." << endl;
    cout << "  5) IF THERE IS A FREE SPACE IT WILL ASK PLAYER IF HE/SHE WANTS TO MOVE OR NOT." << endl;
    cout << "  6) IF PLAYER WANTS TO MOVE HE/SHE WILL ENTER EITHER YES TO MOVE OR NO FOR NOT TO MOVE." << endl;
    cout << "  7) AFTER IT HAS BEEN MOVED IT WILL ASK IF HE/SHE WANTS TO UNDO THE MOVE OR NOT." << endl;
    cout << "  8) IF THE PLAYER PRESSES YES IT WILL UNDO THE MOVE EITHER IT WILL NOT." << endl;
    cout << "  9) THEN IT WILL ASK FOR THE OTHER MOVE OR OTHER PIECE TO MOVE." << endl;
    cout << " ============================================================================================================================" << endl << endl;

    // IT WILL ASK USER TO PRESS ENTER KEY AFTER THAT IT WILL CLEAR THE SCREEN ANF WILL MOVE TO THE INITAL PAGE OF THE GAME. WHERE IT WILL ASK FOR THE POSSIBLE OPTIONS.
    cout << "PRESS ENTER TO MOVE TO THE INITAL PAGE OF THE GAME........ ";
    cin.ignore(numeric_limits < streamsize > ::max(), '\n');
    system("cls");
}
