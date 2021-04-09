// FILE WHICH CONTAINS ALL THE HEADER FILES SO THERE SHOULDN'T BE ANY NEED TO WRITE HEADERS FOR EACH PIECE OF CODE OR COMMANDS.
#include "std_lib_facilities.h"


// LIST OF FUNCTIONS THAT WE WILL BE USING DURING THE WHOLE EXECUTION OF THE PROGRAM.
void Moving_Pieces( string & Number_Of_Players_Copy, vector <string> & Names_Of_Players_Copy);
void Distinct_Features            ( void );

// CLASSIFIED ERRORS THAT WE WILL BE USING SO THAT IT IS EASY TO POINT OUT ERRORS.
class Invalid_Piece_Name       { };
class Invalid_Undo_Choice      { };
class Invalid_Move_Choice      { };


// FUNCTION WHICH WE WILL BE USING TO MOVE PIECES. IT IS TAKING THE NUMBER OF PLAYERS AND NAMES.
// WITH NUMBER OF PLAYERS WE CAN ACTUALLY DETERMINE HOW MANY TIMES WE HAVE TO RU THE LOOP AND WITH NAMES WE WILL CALL THE SPECIFIC PERSON TO PLAY THE GAME.
// WHEN FIRST PLAYER'S GAME WILL BE ENDED WE WILL CALL THE OTHER PLAYER TO PLAY THE GAME.
void Moving_Pieces( string & Number_Of_Players_Copy, vector <string> &Names_Of_Players_Copy ){

    // WE WILL CONVERT NUMBER OF PLAYERS FROM STRING TO INT TO SIMPLIFY CALCULATIONS. SO WE INITALIZED A VARIABLE AND THEN CONVERTED IT AND STORED IN THAT VARIABLE.
    int Number_Of_Players_In_Int;
    Number_Of_Players_In_Int = stoi(Number_Of_Players_Copy);

    // SOME LOOP COUNTER VARIABLES THAT WE WILL BE USING THROUGHOUT THIS FUNCTION.
    int Loop_Counter1 = 0, Loop_Counter2 = 0, Loop_Counter3 = 0;
    
    // VECTORS THAT WE WILL BE USING THROUGHOUT THIS PROGRAM TO STORE THE SCORES OF THE PLAYERS.
    vector <int>    Number_Of_Moves = { };

    // A FOR LOOP AS WE KNOW THE NUMBER OF PLAYERS SO WE WILL RUN THE LOOP FOR JUST THE NUMBER OF PLAYERS WE HAVE.
    for( Loop_Counter3 = 0; Loop_Counter3 < Number_Of_Players_In_Int; Loop_Counter3++ ){

        // WE WILL CALL THE SPECIFIC PLAYER TO PLAY THE GAME. ACCORDING TO THEIR NAME ENTERED.
        cout << endl << "THE GAME HAS STARTED FOR PLAYER NAME: " <<  Names_Of_Players_Copy [ Loop_Counter3 ] << "." << endl;
        cout << "GOOD LUCK!" << endl << endl;

        // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL SHOW THE INITAL POSITIONS AND FINAL POSITIONS OF THE PIECES.
        cout << "PRESS ENTER TO SEE THE INITAL AND FINAL POSITIONS OF THE PIECES ON THE CHESSBOARD........ ";
        fflush( stdin );
        cin.ignore ( numeric_limits < streamsize > :: max(), '\n');
        system( "cls" );

        // IT WILL OUTPUT THE INITAL POSITIONS OF THE PIECES ON CHESSBOARD.
        cout << "===============================================================" << endl;
        cout << "THESE ARE THE INITAL POSITIONS OF THE PIECES ON THE CHESSBOARD:" << endl;

        // FIRST WE STORED THE INITAL POSITIONS OF PIECES IN AN ARRAY. THEN WE OUTPUT THEM.
        string Inital_Positions [ 2 ] [ 3 ] = { { "King", "BishopW", "BishopB" }, { "RookW", "RookB", " " } };

        for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
            for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                cout << Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] << "\t \t";
            }
            cout << endl;
        }
        cout << "===============================================================" << endl << endl;

        // HERE WE WILL OUTPUT THE FINAL POSITIONS OF THE PIECES ON THE CHESS BOARD.
        cout << "===============================================================" << endl;
        cout << "THESE ARE THE FINAL POSITIONS OF THE PIECES ON THE CHESSBOARD:"  << endl;

        // HERE ALSO WE STORED THE FINAL POSITIONS OF THE PIECES IN THE ARRAY FIRST. THEN WE OUTPUT THEM.
        string Final_Positions[2][3] = { { "BishopB", "BishopW", " " }, { "RookW", "RookB", "King" } };

        for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
            for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                cout << Final_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] << "\t \t";
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
        fflush( stdin );
        cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
        system( "cls" );

        cout << "THE GAME HAS STARTED." << endl;


        // A BOOL VARIABLE WHICH WILL BE USED TO DETERMINE EITHER THE GAME HAS ENDED OR NOT.
        bool Has_Game_Ended = false;

        // AN INTEGER VARIABLE THAT WE WILL USE TO RECORD THE NUMBER OF MOVES OF THE USER.
        int Number_Of_Moves_Of_The_Player = 0;


        // A WHILE LOOP TO ENSURE HAS THE GAME ENDED OR NOT.
        while( Has_Game_Ended == false ){

            // SOME INTEGER VARIBALES TO STORE THE ROW AND COLUMN POSITION OF THE PIECE. AND THE FREE ROW AND COLUMN POSITION.
            int Row_Position_Of_Piece    = 0, Free_Row_Position    = 0;
            int Column_Position_Of_Piece = 0, Free_Column_Position = 0;
            int Number_Of_Pieces_Matched = 0;

            // BOOL VARIABLES TO SEE IF THERE IS ANY FREE SPACE OR NOT.
            bool Is_There_Free_Space = false;
            bool Is_Piece_Valid      = false;

            // STRING VARIABLE TO STORE NAME OF THE PIECE.
            String Name_Of_The_Piece;


            // A WHILE LOOP TO ENSURE IF THE PIECE ENTERED IS CORRECT OR NOT. IT WILL ASK UNTIL USER ENTERS A VALID NAME OF THE PIECE.
            while( Is_Piece_Valid == false ){

                // WE WILL SHOW THE PLAYER THE INSTRUCTIONS ABOUT WHAT TO ENTER TO MOVE WHICH PIECE. AND ALSO INSTRUCTIONS ABOUT 'F' WHICH WILL BE USED TO SEE FEATURES.
                cout << "YOU MAY ENTER 'K' TO MOVE KING."                                                                                                     << endl;
                cout << "YOU MAY ENTER 'BW' TO MOVE WHITE BISHOP."                                                                                            << endl;
                cout << "YOU MAY ENTER 'BB' TO MOVE BLACK BISHOP."                                                                                            << endl;
                cout << "YOU MAY ENTER 'RW' TO MOVE WHITE ROOK."                                                                                              << endl;
                cout << "YOU MAY ENTER 'RB' TO MOVE BLACK ROOK."                                                                                      << endl << endl;
                cout << "KEEP IN MIND YOU CAN EVEN ENTER 'F' TO SEE THE DISTINCT FEATURES DURING THE GAME. ALSO THE GAME WILL RESUME WHERE YOU LEFT." << endl << endl;
                cout << "NOW YOU HAVE TO SELECT THE NAME OF THE PIECE WHICH YOU WANT TO MOVE."                                                        << endl << endl;

                // HERE WE WILL OUTPUT THE INITAL POSITIONS FOR NOW AND AFTER MOVES IT WILL BE POSITIONS AFTER SOME CHANGE. SO IT WILL BE EASIER FOT THE PLAYER TO SEE WHICH PIECE HE/SHE WANTS TO MOVE.
                cout << "=============================================================== " << endl;
                cout << "THESE ARE THE INITAL POSITIONS OF THE PIECES ON THE CHESSBOARD: " << endl;

                for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                    for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                        cout << Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] << "\t \t";
                    }
                    cout << endl;
                }
                cout << "=============================================================== " << endl << endl;

                // A TRY CATCH BLOCK THAT WE WILL USE TO SEE IF PIECE IS INCORRECT OR NOT. IF IT IS THEN IT WILL THROW AN ERROR.
                try{

                    // HERE WE ASKED USER TO ENTER THE NAME OF THE PIECE WHICH HE/SHE WANTS TO MOVE.
                    cout << "ENTER THE NAME OF THE PIECE WHICH YOU WANT TO MOVE: ";
                    cin >> Name_Of_The_Piece;
            
                    // POSSIBLE STATEMENTS FOT BEING THE NAME OF THE PIECE TO BE TRUE. EITHER IT WOULD BE NAME OF THE PIECE OR USER WANTS TO SEE THE FEATURES.
                    if     (Name_Of_The_Piece == "F"  || Name_Of_The_Piece == "f"){
                        Distinct_Features();
                    }
                    else if( Name_Of_The_Piece == "K"  || Name_Of_The_Piece == "k"){
                        Is_Piece_Valid = true;
                    }
                    else if( Name_Of_The_Piece == "BB" || Name_Of_The_Piece == "bb" || Name_Of_The_Piece == "bB" || Name_Of_The_Piece == "Bb"){
                        Is_Piece_Valid = true;
                    }
                    else if( Name_Of_The_Piece == "BW" || Name_Of_The_Piece == "bw" || Name_Of_The_Piece == "bW" || Name_Of_The_Piece == "Bw"){
                        Is_Piece_Valid = true;
                    }
                    else if( Name_Of_The_Piece == "RW" || Name_Of_The_Piece == "rw" || Name_Of_The_Piece == "rW" || Name_Of_The_Piece == "Rw"){
                        Is_Piece_Valid = true;
                    }
                    else if( Name_Of_The_Piece == "RB" || Name_Of_The_Piece == "rb" || Name_Of_The_Piece == "rB" || Name_Of_The_Piece == "Rb"){
                        Is_Piece_Valid = true;
                    }
 
                    // IF IS_PIECE_VALID IS STILL FALSE THEN IT MEANS IT DOESN'T LIE IN  ANY CATEGORY. SO WE WILL THROW AN ERROR. EXCEPT ONE CATEGORY IF USER ENTERS 'F' FOR THE FEATURES.
                    if( Is_Piece_Valid == false && Name_Of_The_Piece != "F" && Name_Of_The_Piece != "f" ){
                        throw Invalid_Piece_Name { };
                    }

                    // IF PLAYER HAS ENTERED 'F' THEN IT WILL TAKE PLAYER TO HERE. WHERE WE WILL TELL PLAYER TO MOVE ON TO GAME NOW OR RESUME WHERE HE LEFT.
                    else if(Name_Of_The_Piece == "F" || Name_Of_The_Piece == "f" ){
                        cout << "NOW YOU HAVE SEEN THE FEATURES SO THE GAME WILL RESUME NOW." << endl << endl;

                        // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL SHOW THE PLAYER RULES OF HOW TO ENTER NAME OF THE PIECE. AFTER WE HAVE SHOWN THEN FEATURES.
                        cout << "PRESS ENTER TO MOVE TO THE SEE RULES ON HOW TO MOVE THE PIECES........ ";
                        fflush( stdin );
                        cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
                        system( "cls" );
                    }

                // HERE WE WILL CATCH THE ERROR. AND WE WILL TELL THE PROBLEM TO USER.
                }catch( Invalid_Piece_Name ){
                    cout << endl <<"SORRY! WE CAN'T FIND OUT WHICH PIECE YOU WANT TO MOVE. TRY AGAIN!" << endl << endl;

                    // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL AGAIN OUTPUT THE INSTRUCTIONS AND ASK FOR THE NAME OF THE PIECE AGAIN.
                    cout << "PRESS ENTER TO SEE THE INITAL AND FINAL POSITIONS OF THE PIECES ON THE CHESSBOARD........ ";
                    fflush( stdin );
                    cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
                    system( "cls" );
                }
            }

            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS KING. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            if( Name_Of_The_Piece == "K"  || Name_Of_The_Piece == "k" ){

                // IF THE PIECE IS KING WE WILL NOTIFY USER ABOUT THAT.
                cout << endl << "YOU HAVE SELECTED THE KING TO MOVE." << endl;
                cout << "SINCE IT IS A KING IT WILL ONLY MOVE ONE BOX BUT IN ANY DIRECTION." << endl << endl;

                // HERE WE WILL FIND THE POSITION OF KING. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE KING.
                for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                    for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                        if( Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] == "King" ){

                            Row_Position_Of_Piece = Loop_Counter1;
                            Column_Position_Of_Piece = Loop_Counter2;
                        }
                    }
                }
        
                // HERE WE WILL FIND FOR EVERY POSITION WHERE KING CAN MOVE. AS IT CAN BE IN ANY BOXES AS IT IS NOT RESTRICTED BY WHITE OR BLACK UNLIKE BISHOP.
                // SO WE WILL CHECK FOR EVERY POSITION AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL EIGTH DIRECTIONS.
                if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 0 ){
                    if( Inital_Positions [Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece    ] == " " ) { Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 1){
                    if( Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1] [ Column_Position_Of_Piece     ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    } 
                }

                else if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 2){
                    if( Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1] [ Column_Position_Of_Piece     ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }

                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 0){
                    if      (Inital_Positions [ Row_Position_Of_Piece - 1] [ Column_Position_Of_Piece ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if (Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if (Inital_Positions [ Row_Position_Of_Piece - 1] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }
    
                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 1){
                    if( Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1] [ Column_Position_Of_Piece ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1] [ Column_Position_Of_Piece + 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 2){
                    if( Inital_Positions [ Row_Position_Of_Piece    ] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1] [ Column_Position_Of_Piece ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1] [ Column_Position_Of_Piece - 1 ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }
            }
    

            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS BLACK BISHOP. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            else if( Name_Of_The_Piece == "BB" || Name_Of_The_Piece == "bb" || Name_Of_The_Piece == "bB" || Name_Of_The_Piece == "Bb" ){
    
                // IF THE PIECE IS BLACK BISHOP WE WILL NOTIFY PLAYER ABOUT THAT.
                cout << endl << "YOU HAVE SELECTED THE BLACK BISHOP TO MOVE." << endl;
                cout << "SINCE IT IS A BLACK BISHOP IT WILL ONLY MOVE IN BLACK BOXES BUT DIAGONALLY." << endl << endl;

                // HERE WE WILL FIND THE POSITION OF BLACK BISHOP. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE BLACK BISHOP.
                for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                    for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                        if( Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] == "BishopB" ){

                            Row_Position_Of_Piece = Loop_Counter1;
                            Column_Position_Of_Piece = Loop_Counter2;
                        }
                    }
                }

                // HERE WE WILL FIND FOR EVERY POSITION WHERE BLACK BISHOP CAN MOVE. AS IT IS A BLACK BISHOP, SO IT'S MOVES ARE RESTRICTED TO JUST BLACK BOXES. 
                // SO WE WILL CHECK FOR JUST BLACK BOXES AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL FOUR DIAGONAL DIRECTIONS OR NOT.      
                if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 0 ){
                    if( Inital_Positions [ Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece + 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 2 ){
                    if( Inital_Positions [ Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece - 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }

                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 1 ){
                    if( Inital_Positions [ Row_Position_Of_Piece - 1 ] [ Column_Position_Of_Piece - 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1 ] [ Column_Position_Of_Piece + 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }
            }


            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS WHITE BISHOP OR NOT. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            else if( Name_Of_The_Piece == "BW" || Name_Of_The_Piece == "bw" || Name_Of_The_Piece == "bW" || Name_Of_The_Piece == "Bw" ){

                // IF THE PIECE IS WHITE BISHOP WE WILL NOTIFY PLAYER ABOUT THAT.
                cout << endl <<"YOU HAVE SELECTED THE WHITE BISHOP TO MOVE." << endl;
                cout << "SINCE IT IS A WHITE BISHOP IT WILL ONLY MOVE IN WHITE BOXES BUT DIAGONALLY." << endl << endl;
        
                // HERE WE WILL FIND THE POSITION OF WHITE BISHOP. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE WHITE BISHOP.
                for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                    for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                        if( Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] == "BishopW" ){

                            Row_Position_Of_Piece = Loop_Counter1;
                            Column_Position_Of_Piece = Loop_Counter2;
                        }
                    }
                }

                // HERE WE WILL FIND FOR EVERY POSITION WHERE WHITE BISHOP CAN MOVE. AS IT IS A WHITE BISHOP, SO IT'S MOVES ARE RESTRICTED TO JUST WHITE BOXES. 
                // SO WE WILL CHECK FOR JUST WHITE BOXES AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL FOUR DIAGONAL DIRECTIONS OR NOT.          
                if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 1 ){
                    if( Inital_Positions [ Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece - 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece + 1]  == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }
    
                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 0 ){
                    if( Inital_Positions [ Row_Position_Of_Piece - 1 ] [ Column_Position_Of_Piece + 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 2 ){
                    if( Inital_Positions [ Row_Position_Of_Piece - 1 ] [ Column_Position_Of_Piece - 1 ]  ==  " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                }
            }


            // SINCE THE MOVES FOR BOTH WHITE AND BLACK BISHOPS ARE SAME AND EVEN THEY AREN'T RESTRICTED TO THEIR COLOUR BOXES SO WE HAVE KEPT THEM IN ONE BLOCK. BUT WE WILL DO OPERATIONS SEPERATELY.
            // HERE WE ARE CHECKING IF THE NAME OF THE PIECE IS WHITE BOOK OR BLACK ROOK OR NEITHER. SO WE CAN DO SOME OPERATIONS LIKE CHECKING FOR FREE SPACE TO MOVE THE PIECE.
            else if( (Name_Of_The_Piece == "RW" || Name_Of_The_Piece == "rw" || Name_Of_The_Piece == "rW" || Name_Of_The_Piece == "Rw" ) || ( Name_Of_The_Piece == "RB" || Name_Of_The_Piece == "rb" || Name_Of_The_Piece == "rB" || Name_Of_The_Piece == "Rb" ) ){

                // FOR WHITE ROOK
                if( Name_Of_The_Piece == "RW" || Name_Of_The_Piece == "rw" || Name_Of_The_Piece == "Rw" || Name_Of_The_Piece == "rW" ){

                    // IF THE PIECE IS WHITE ROOK WE WILL NOTIFY USER ABOUT THAT. 
                    cout << endl <<"YOU HAVE SELECTED THE WHITE ROOK TO MOVE." << endl;
                    cout << "SINCE IT IS A WHITE ROOK IT WILL ONLY MOVE IN WHITE BOXES BUT RIGHT, LEFT, UP AND DOWN." << endl<< endl;
  
                    // HERE WE WILL FIND THE POSITION OF WHITE ROOK. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE WHITE ROOK.
                    for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++){
                        for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++){

                            if( Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] == "RookW" ){

                                Row_Position_Of_Piece = Loop_Counter1;
                                Column_Position_Of_Piece = Loop_Counter2;
                            }
                        }
                    }
                }

                // FOR BLACK ROOK
                else if( Name_Of_The_Piece == "RB" || Name_Of_The_Piece == "rb" || Name_Of_The_Piece == "rB" || Name_Of_The_Piece == "Rb" ){

                    // IF THE PIECE IS BLACK ROOK WE WILL NOTIFY USER ABOUT THAT.   
                    cout << endl << "YOU HAVE SELECTED THE BLACK ROOK TO MOVE." << endl;
                    cout << "SINCE IT IS A BLACK ROOK IT WILL ONLY MOVE IN WHITE BOXES BUT RIGHT, LEFT, UP AND DOWN." << endl<< endl;

                    // HERE WE WILL FIND THE POSITION OF BLACK ROOK. AND WE WILL STORE THE ROW AND COLUMN POSITION OF THE BLACK ROOK.
                    for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                        for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                            if( Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] == "RookB" ){

                                Row_Position_Of_Piece = Loop_Counter1;
                                Column_Position_Of_Piece = Loop_Counter2;
                            }
                        }
                    }
                }

                // HERE WE WILL FIND FOR EVERY POSITION WHERE BLACK ROOK OR WHITE ROOK CAN MOVE.  BUT IT WILL BE JUST DOING FOR ONE PIECE WHICH USER HAS INPUTTED.
                // AS IT CAN BE IN ANY BOXES BECAUSE IT'S MOVES ARE NOT RESTRICTED BY WHITE OR BLACK BOXES UNLIKE BISHOP. 
                // SO WE WILL CHECK FOR EVERY POSITION AND SEE IF THERE IS FREE SPACE IN NEIGHBOURING BOXES IN ALL FOUR STRAIGHT DIRECTIONS.  
                if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 0 ){
                    if( Inital_Positions [ Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece ] == " " ){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece + 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 1 ){
                    if( Inital_Positions[Row_Position_Of_Piece][Column_Position_Of_Piece - 1] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece + 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }

                else if( Row_Position_Of_Piece == 0 && Column_Position_Of_Piece == 2 ){
                    if( Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece - 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece + 1 ] [ Column_Position_Of_Piece ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece + 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }
                
                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 0 ){
                    if( Inital_Positions[Row_Position_Of_Piece - 1 ] [ Column_Position_Of_Piece ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                    else if( Inital_Positions[ Row_Position_Of_Piece ] [ Column_Position_Of_Piece + 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                }

                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 1 ){
                    if( Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece - 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece] [ Column_Position_Of_Piece + 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece + 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1 ] [ Column_Position_Of_Piece ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }
    
                else if( Row_Position_Of_Piece == 1 && Column_Position_Of_Piece == 2 ){
                    if( Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece - 1 ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece; Free_Column_Position = Column_Position_Of_Piece - 1;
                    }
                    else if( Inital_Positions [ Row_Position_Of_Piece - 1 ] [ Column_Position_Of_Piece ] == " "){ Is_There_Free_Space = true; Free_Row_Position = Row_Position_Of_Piece - 1; Free_Column_Position = Column_Position_Of_Piece;
                    }
                }
            }

            // WE WILL CHECK IF FREE SPACE IS TRUE FOR ANY SPECIFIC PIECE. IF IT IS TRUE THEN WE ARE SURE THAT THIS PIECE CAN MOVE.
            if( Is_There_Free_Space == true){

                // A STRING VARIABLE THAT WILL STORE THE CHOICE OF PLAYER IF HE/SHE WANTS TO MOVE OR NOT. AND OTHER ONE TO STORE THE CHOICE FOR UNDO OR NOT.
                string Want_To_Move;
                string Want_To_Undo;

                // TWO BOOL VARIABLES ONE WILL MAKE SURE PLAYER HAS ENTERED THE CORRECT VALUE FOR MOVE AND UNDO OR NOT. 
                bool Make_A_Move   = false;
                bool Undo_The_Move = false;

                // INTEGER VARIABLE TO STORE THE NUMBER OF MOVES WHEN WE HAVE UNDO THE MOVE IN THAT CASE IT WILL REDUCE ONE MOVE.
                int Reduced_Move;

                // WE WILL TELL THE PLAYER HERE THAT THIS PIECE CAN ME MOVED AT THIS ROW AND COLUMN POSITION.
                cout << "YES THIS PIECE CAN BE MOVED AT THE ROW NUMBER " << Free_Row_Position << " AND COLUMN NUMBER " << Free_Column_Position << endl << endl;


                // A WHILE LOOP WHICH WILL MAKE SURE THAT PLAYER HAS ENTERED THE RIGHT KEY TO MOVE OR NOT. EITHER IT WILL ASK AGAIN UNTIL HE/SHE ENTERS IT CORRECTLY. 
                while( Make_A_Move == false ){
            
                    // A TRY CATCH BLOCK TO THROW AND CATCH ERROR IF PLAYER ENTERS AN INVALID CHARACTER OR STRING TO MOVE PIECES.
                    try{
                    
                        // WE WILL ASK HERE IF HE/SHE WANTS TO MOVE OR NOT. THEN WE WILL STORE IT IN A STRING VARIABLE.
                        cout << "DO YOU WANT TO MOVE THE PIECE AT THIS POSITION OR NOT?" << endl;
                        cout << "PRESS 'Y' FOR YES AND 'N' FOR NO."                      << endl;
                    
                        cout << "PLEASE ENTER YOUR CHOICE: ";
                        cin >> Want_To_Move;
                    

                        // WE WILL CHECK IF USER HAS ENTERED THE CORRECT STRING OR CHARACTER OR NOT. 
                        if( Want_To_Move == "Y" || Want_To_Move == "N" || Want_To_Move == "y" || Want_To_Move == "n" ){
                    
                            // IF USER HAS ENTERED A CORRECT CHARACTER OR STRING THEN WE WILL CHANGE THE BOOL VARIABLE AS TRUE SO IT SHOULDN'T THROW THE ERROR.
                            Make_A_Move = true;
                        
                            // IF CHOICE IS YES OR 'Y' WE WILL MAKE THE MOVE.
                            if( Want_To_Move == "Y" || Want_To_Move == "y" ){      
                            
                                // HERE WE WILL SWAP THE POSITIONS OF BOTH BOXES.
                                Inital_Positions [ Free_Row_Position ] [ Free_Column_Position ] = Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece ];
                                Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece ] = " ";
                            
                                // HERE WE WILL TELL USER IF MOVE WAS SUCCESSFUL OR NOT. THEN WE WILL INCREMENT THE MOVE AND OUTPUT THE NUMBER OF MOVES.
                                cout << endl << "YOUR MOVE WAS SUCCESSFUL!" << endl;

                                Number_Of_Moves_Of_The_Player++;
                                cout << "YOUR NUMBER OF MOVES NOW ARE: " << Number_Of_Moves_Of_The_Player << endl << endl;

                                // HERE WE WILL OUTPUT THE POSITIONS OF CHESS PIECES AFTER CHANGES HAVE BEEN MADE.
                                cout << "PIECES AFTER YOUR MOVE:" << endl;
                                cout << "=============================================================== " << endl;
                                for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                                    for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                                        cout << Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] << "\t \t";
                                    }
                                    cout << endl;
                                }
                                cout << "=============================================================== " << endl;

                                // HERE WHILE LOOP WILL CHECK IF CHARACTER OR STRING ENTERED FOR UNDO IS CORRECT OR NOT.
                                while( Undo_The_Move == false ){
                            
                                    // A TRY CATCH BLOCK WHICH WE WILL USE TO CHECK IF USER HAS ENTERED THE CORRECT CHARACTER OR STRING TO UNDO OR NOT.
                                    try{
                                
                                        // HERE WE WILL OUTPUT USER THE INSTRUCTIONS TO OUTPUT HOW HE/SHE CAN UNDO THE MOVE.
                                        cout << endl << "DO YOU WANT TO UNDO THE MOVES OR NOT?" << endl; 
                                        cout << "PRESS 'Y' FOR YES AND 'N' FOR NO."     << endl;

                                        cout << "PLEASE ENTER YOUR CHOICE: ";
                                        cin >> Want_To_Undo;
                                
                                        // WE WILL CHECK HERE IF PLAYER HAS ENTERED THE RIGHT CHARACTER OR STRING TO UNDO OR NOT TO.
                                        if( Want_To_Undo == "Y" || Want_To_Undo == "N" || Want_To_Undo == "y" || Want_To_Undo == "n" ){

                                            // IF IT IS CORRECT WE WILL CHANGE THE STATE OF BOOL VARIABLE AS TRUE. SO IT SHOULDN'T THROW ERROR.
                                            Undo_The_Move = true;
                                    
                                            // IF INPUT IS YES OR 'Y' WE WILL UNDO THE MOVE.
                                            if( Want_To_Undo == "Y" || Want_To_Undo == "y" ){
    
                                               // HERE WE WILL SWAP POSITIONS TO UNDO THE MOVE.
                                                Inital_Positions [ Row_Position_Of_Piece ] [ Column_Position_Of_Piece ] = Inital_Positions [ Free_Row_Position] [ Free_Column_Position ];
                                                Inital_Positions [ Free_Row_Position ] [ Free_Column_Position ] = " ";
                                        
                                                // HERE WE WILL TELL USER IF UNDO WAS SUCCESSFUL OR NOT. THEN WE WILL DECREMENT THE MOVE AND OUTPUT THE NUMBER OF MOVES.
                                                cout << endl <<"UNDO WAS SUCCESSFUL!" << endl;
    
                                                Reduced_Move = Number_Of_Moves_Of_The_Player--;
                                                cout << "YOUR NUMBER OF MOVES WERE DECREASED FROM " << Reduced_Move << " TO " << Number_Of_Moves_Of_The_Player << "." << endl << endl;

                                                // HERE WE WILL OUTPUT THE POSITIONS OF CHESS PIECES AFTER CHANGES HAVE BEEN MADE.
                                                cout << "POSITIONS AFTER UNDOING THE MOVE:" << endl;
                                                cout << "=============================================================== " << endl;
                                                for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                                                    for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){

                                                        cout << Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] << "\t \t";
                                                    }
                                                    cout << endl;
                                                }
                                                cout << "=============================================================== " << endl;
                                            }
                                        }

                                        // IF UNPUTTED CHARACTER OR STRING IS NOT THE ONE MENTIONED IT WILL THROW AN ERROR.
                                        else{
                                            throw Invalid_Undo_Choice { };
                                        }
                            
                                    // HERE WE WILL CATCH THE ERROR IS CHARACTER FOR UNDO IS INVALID.
                                    }catch( Invalid_Undo_Choice ){
                                        cout << endl <<"SORRY! YOU INPUTTED A WRONG CHARACTER OR STRING TO UNDO. TRY AGAIN!" << endl;
                                    }
                                }

                                

                                // HERE WE WILL CHECK HOW MANY PIECES ARE ON THEIR FINAL POSITIONS.
                                for( Loop_Counter1 = 0; Loop_Counter1 <= 1; Loop_Counter1++ ){
                                    for( Loop_Counter2 = 0; Loop_Counter2 <= 2; Loop_Counter2++ ){
    
                                        // IF THERE ARE WE WILL INCREMENT THE NUMBER OF PIECES MATCHED.
                                        if( Inital_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] == Final_Positions [ Loop_Counter1 ] [ Loop_Counter2 ] ){
                                            Number_Of_Pieces_Matched++;
                                        }
                                    }
                                }
                        
                                // THERE IS AN EXCEPTION THAT WHITE ROOK CAN BE AT BLACK BOX AND BLACK ROOK CAN BE AT WHITE ROOK IN FINAL POSITION. IF THAT IS THE CASE SO WE WILL INCREMENT THE NUMBER OF MATCHED PIECES AGAIN.
                                if( Inital_Positions [ 1 ] [ 0 ] == "RookB" ){
                                    Number_Of_Pieces_Matched ++;
                                }
                                if( Inital_Positions [ 1 ] [ 1 ] == "RookW" ){
                                    Number_Of_Pieces_Matched++;
                                }
                        
                                // HERE WE WILL OUTPUT HOW MANY PIECES WERE MATCHED. BUT IF ALL PIECES HAVE BEEN MATCHED WITH THEIR FINAL POSTIONS THAT MEANS GAME HAS BEEN ENDED. SO WE WILL SHOW THE OUTPUT SEPARETELY FOR THEM.
                                if( Number_Of_Pieces_Matched < 6 ){
                                    cout << endl << "THERE ARE STILL " << ( 6 - Number_Of_Pieces_Matched ) << " PIECES TO MATCH!" << endl;
                                }
                                else{
                                    cout << endl << endl << "CONGRATULATIONS!" << endl;
                                    cout << "YOUR GAME HAS ENDED." << endl;
                                    cout << "YOU COMPLETED THE GAME IN " << Number_Of_Moves_Of_The_Player << " MOVES." << endl << endl;
                                }
                        
                                // WE CHECKED IF ALL PIECES ARE MATCH AND IF ALL PIECES ARE MATCHED WE WILL STORE THE NUMBER OF MOVES AND WE WILL SET THE GAME ENDED AS TRUE TO END THE LOOP.
                                if( Number_Of_Pieces_Matched == 6 ){

                                    Number_Of_Moves.push_back ( Number_Of_Moves_Of_The_Player );

                                    Has_Game_Ended = true;
                                } 
                            }
                        }

                        // HERE WE THROW AN ERROR IF CHARACTER OR STRING ENTERED FOR MOVE OPTION IS CORRECT OR NOT.
                        else{
                            throw Invalid_Move_Choice { };
                        }

                    // HERE WE WILL CATCH THE ERROR FOR MOVE OPTION.
                    }catch( Invalid_Move_Choice ){
                        cout << endl << "SORRY! YOU INPUTTED A WRONG CHARACTER OR STRING TO MOVE. TRY AGAIN!" << endl << endl;
                    }
                }

                // HERE WE WILL ASK PLAYER TO PRESS ENTER KEY IF GAME HASN'T ENDED. SO HE/SHE CAN MOVE ANOTHER PIECE. BUT IF GAME HAS ENDED SO WE WILL START GAME FOR ANOTHER PLAYER IF THERE ARE MORE THAN ONE PLAYER. 
                if( Number_Of_Pieces_Matched < 6 ){

                    // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL AGAIN ASK USER TO ENTER ANOTHER PIECE TO MOVE.   
                    cout << endl << "PRESS ENTER TO MOVE ANOTHER PIECE........ ";
                    fflush( stdin );
                    cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
                    system( "cls" );
                }
                else
                {
                    if(Number_Of_Players_In_Int > 1 && Number_Of_Players_In_Int < Number_Of_Players_In_Int){

                        // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND AFTER THAT GAME WILL START FOR ANOTHER PLAYER.   
                        cout << "PRESS ENTER SO THAT OTHER PLAYER CAN PLAY THE GAME........ ";
                        fflush( stdin );
                        cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
                        system( "cls" );     
                    }
                }
            }


            // HERE WE WILL OUTPUT THE USER THAT THERE IS NO FREE SPACE. IF THAT PIECE CAN'T BE MOVED.
            else{
                cout << "THERE IS NO FREE SPACE FOR THIS PIECE TO MOVE." << endl << endl;

                // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WE WILL AGAIN TELL PLAYER TO INPUT THE PIECE WHICH HE/SHE WANTS TO MOVE.   
                cout << "PRESS ENTER TO TRY AGAIN........ ";
                fflush( stdin );
                cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
                system( "cls" );
            }
        }
    }

    //WE WILL OUTPUT THE RESULTS NOW. FIRST WE WILL CLEAR THE SCREEN.
    system( "cls" );
    
    // THEN WE WILL SHOW THE OUTPUT WHICH IS DIFFERENT ACCORDING TO NUMBER OF PLAYERS.
    if( Number_Of_Players_In_Int == 1 ){ 
        cout << "GAME HAS ENDED." << endl;
    }
    else{
        cout << "GAME HAS ENDED FOR ALL THE PLAYERS." << endl << endl;
    }

    // HERE WE ARE SORTING THE DATA BY NUMBER OF MOVES. SO WE CAN FIND OUT ACTUALLY WHICH PLAYER HAS LEAST NUMBER OF MOVES AND WHICH PLAYER HAS MOST NUMBER OF MOVES.
    for( Loop_Counter1 = 0; Loop_Counter1 < Number_Of_Players_In_Int; Loop_Counter1++ ){
        for( Loop_Counter2 = 0; Loop_Counter2 < Number_Of_Players_In_Int; Loop_Counter2++ ){
            
            if( Number_Of_Moves [ Loop_Counter1 ] < Number_Of_Moves [ Loop_Counter2 ] ){

                // AN INTEGER VARIABLE TO STORE NUMBER OF MOVES FOR TEMPORARY PUSRPOSE.
                int Temp_Moves;

                // A STRING VARIABLE TO STORE NAME OF VARIABLE FOR TEMPORARY PURPOSE.
                string Temp_Name;
        
                // SWAPPING FOR MOVES.
                Temp_Moves = Number_Of_Moves [ Loop_Counter2 ];
                Number_Of_Moves [ Loop_Counter2 ] = Number_Of_Moves [ Loop_Counter1 ];
                Number_Of_Moves [ Loop_Counter1 ] = Temp_Moves;

                // SWAPPPING FOR NAMES.
                Temp_Name = Names_Of_Players_Copy [ Loop_Counter2 ];
                Names_Of_Players_Copy [ Loop_Counter2 ] = Names_Of_Players_Copy [ Loop_Counter1 ];
                Names_Of_Players_Copy [ Loop_Counter1 ] = Temp_Name;
            }
        }
    }
    
    // WE WILL OUTPUT ALL THE RESULTS AT THE END OF THE GAME.
    for( Loop_Counter1 = 0; Loop_Counter1 < Number_Of_Players_In_Int; Loop_Counter1++ ){

        cout << "NAME OF THE PLAYER: " << Names_Of_Players_Copy[Loop_Counter1] << " AND YOUR SCORE IS: " << Number_Of_Moves[Loop_Counter1]<< "." << endl;
    }
    
    // HERE WE WILL COMPARE THE RESULTS AS IF THERE ARE MORE THAN ONE PLAYERS WE WILL COMPARE THE MOVES LIKE WHO TOOK LESS MOVES AND WHO TOOK MOST NOVES.
    if( Number_Of_Players_In_Int == 1 ){
        cout << endl << "CONGRATULATIONS!" << endl;
    }
    
    // IF NUMBER OF PLAYERS ARE THREE AND ALL HAVE THE SAME NUMBER OF MOVES THEN THIS WILL EXECUTE.
    else if( ( Number_Of_Players_In_Int == 3 ) && ( Number_Of_Moves [ 0 ] ==  Number_Of_Moves [ 1 ] ) && ( Number_Of_Moves [ 1 ] == Number_Of_Moves [ 2 ] ) ){
        cout << endl << "MOVES OF ALL PLAYERS ARE SAME. SO ALL ARE WINNERS! " << endl;
        cout << "CONGRATULATIONS ALL!" << endl;
    }

    // IF NUMBER OF PLAYERS ARE 2 AND BOTH HAVE SAME SCORES.
    else if( ( Number_Of_Players_In_Int == 2 ) && ( Number_Of_Moves [ 0 ] ==  Number_Of_Moves [ 1 ] ) ){
        cout << endl <<"MOVES OF BOTH PLAYERS ARE SAME. SO BOTH ARE WINNERS! " << endl;
        cout << "CONGRATULATIONS BOTH!" << endl;
    }

    // HERE WE WILL BE COMPARING THE DATA TO GIVE OUTPUT TO PLAYERS. IF THERE ARE MORE THAN ONE PLAYERS WE WILL CHECK EITHER THE MOST MOVES OR LEAST MOVES ARE SAME FOR ANOTHER PLAYER SO WE WILL GIVE OUTPUT DIFFERENT IN THAT CASE.
    // EITHER WE WILL OUTPUT THE USUAL OUTPUT FOR WINNER AND LOOSER
    else{
        
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
        if( Least_Moves == Least_Moves2 ){
            cout << endl;
            cout << "FIRST MOST LESS NUMBER OF MOVES AND SECOND MOST LESS MOVES TO COMPLETE THIS GAME ARE SAME!" << endl;
            cout << "THE FIRST LESS NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Least_Moves << " AND IT WAS COMPLETED BY: " << Least_Moves_Name << "." << endl;
            cout << "THE SECOND LESS NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Least_Moves2 << " AND IT WAS COMPLETED BY: " << Least_Moves2_Name << "." << endl;
        }

        // IF THEY AREN'T SAME THEN IT MEANS ONLY FIRST PLAYER IS THE WINNER.
        else{ 
            cout << endl;
            cout << "THE LEAST MOVES TO COMPLETE THIS GAME ARE: " << Least_Moves << " AND IT WAS COMPLETED BY: " << Least_Moves_Name << "." << endl;
        }
        
        // HERE WE WILL BE CHECKING IF NUMBER OF MOVES FOR LAST AND SECOND LAST ARE SAME OR NOT. SO WE WILL STORE THE SCORES AND NAMES OF BOTH POSITIONS IN DIFFERENT VARIABLES.
        Most_Moves = Number_Of_Moves[Number_Of_Players_In_Int - 1]; 
        Most_Moves_Name = Names_Of_Players_Copy[Number_Of_Players_In_Int - 1];

        Most_Moves2 = Number_Of_Moves[Number_Of_Players_In_Int - 2];
        Most_Moves2_Name = Names_Of_Players_Copy[Number_Of_Players_In_Int - 2];
        
        // HERE WE WILL COMPARE IF BOTH ARE SAME OR NOT. IF BOTH ARE SAME WE WILL OUTPUT THE RESULTS ACCORDINGLY.
        if( Most_Moves == Most_Moves2 ){
            cout << endl;    
            cout << "FIRST MOST NUMBER OF MOVES AND SECOND MOST NUMBER OF MOVES ARE SAME!" << endl;
            cout << "THE FIRST MOST NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Most_Moves << " AND IT WAS COMPLETED BY: " << Most_Moves_Name << "." << endl;
            cout << "THE SECOND MOST NUMBER OF MOVES TO COMPLETE THIS GAME ARE: " << Most_Moves2 << " AND IT WAS COMPLETED BY: " << Most_Moves2_Name << "." << endl;
        } 

        // IF THEY AREN'T SAME WE WILL JUST OUTPUT THE MOST NUMBER OF MOVES WHICH ARE BY THE LAST PLAYER.
        else{
            cout << endl;
            cout << "THE MOST MOVES TO COMPLETE THIS GAME ARE: " << Most_Moves << " AND IT WAS COMPLETED BY: " << Most_Moves_Name << "." << endl;
        }
    }

    // AND AN END NOTE.
    cout << endl << "THANKS FOR PLAYING THIS GAME." << endl;
    
    // HERE WE WILL END THE GAME EVWNTUALLY WHEN THIS POINT IS REACHED.
    exit(1);
