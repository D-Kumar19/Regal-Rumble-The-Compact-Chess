// FILE WHICH CONTAINS ALL THE HEADER FILES SO THERE SHOULDN'T BE ANY NEED TO WRITE HEADERS FOR EACH PIECE OF CODE OR COMMANDS.
#include "std_lib_facilities.h"


// LIST OF FUNCTIONS THAT WE WILL BE USING DURING THE WHOLE EXECUTION OF THE PROGRAM.
void Inital_Page_Of_The_Game      ( void );
void Quit_The_Game                ( void );
void Get_Names                    ( void );
void Rules_Of_The_Game            ( void );
void Moving_Pieces( string & Number_Of_Players_Copy, vector <string> & Names_Of_Players_Copy);


// CLASSIFIED ERRORS THAT WE WILL BE USING SO THAT IT IS EASY TO POINT OUT ERRORS.
class Invalid_Char_Choice      { };
class Invalid_Player_Count     { };
class Invalid_Player_Name      { };

// THE INITAL PAGE FUNCTION WHICH WILL ASK PLAYER ABOUT THE POSSIBLE OPTIONS OF WHAT HE/SHE WANTS TO DO NEXT.
void Inital_Page_Of_The_Game( void ){

    // VARIABLES THAT WE WILL BE USING THROUGHOUT THIS FUNCTION TO FIRST ENTER CHOICE FROM THE USER AND THEN CHECK IF THE CHARACTER IS VALID OR NOT.
    bool Is_Choice_Valid = false;

    String User_Choice;

    // HERE THE INITAL PAGE STARTS.
    cout << "WELCOME TO THE GAME OF THE PARTICULAR PIECES OF CHESS: " << endl << endl;
    

    // WHILE LOOP BECAUSE IF PLAYER ENTERS THE CHAR OR STRING INCORRECTLY IT WILL ASK AGAIN AND AGAIN UNTIL HE/SHE ENTERS IT CORRECTLY.
    while( Is_Choice_Valid == false ){

    // CHOICES OF CHARACTERS FOR THE PLAYER TO ENTER. 
    cout << "PRESS 'R' TO SEE THE RULES OF THE GAME AGAIN."         << endl;
    cout << "PRESS 'N' TO START A NEW GAME."                        << endl;
    cout << "PRESS 'Q' TO QUIT THE GAME!"                   << endl << endl;

        // TRY CATCH BLOCK TO THROW AND CATCH ERROR IF THE PLAYER ENTERS THE CHARACTER INCORRECTLY.
        try{
            
            // HERE PLAYER WILL ENTER THE CHARACTER.
            cout << "KINDLY ENTER A CHARACTER FROM THE ABOVE CHOICES TO MOVE: ";
            getline( cin, User_Choice );
             
              // HERE IT WILL CHECK THE CHARACTER INPUTTED IS CORRECT OR NOT.
                if      ( User_Choice == "R" || User_Choice == "r" ){
                  Is_Choice_Valid = true;
                  Rules_Of_The_Game( ); // IF PLAYER ENTERS 'R' IT WILL SHOW RULES AGAIN AND WILL CHANGE THE CHECK FROM FALSE TO TRUE.
                } 
                else if ( User_Choice == "N" || User_Choice == "n" ){
                    Is_Choice_Valid = true;
                    Get_Names( ); // IF PLAYER ENTERS 'N' IT WILL CALL THE FUNCTION TO ENTER NAMES AND NUMBER OF PLAYERS AND WILL CHANGE THE CHECK FROM FALSE TO TRUE.
                } 
                else if ( User_Choice == "Q" || User_Choice == "q" ){
                    Is_Choice_Valid = true;
                    Quit_The_Game( ); // IF PLAYER ENTERS 'Q' IT WILL QUIT THE GAME AND WILL CHANGE THE CHECK FROM FALSE TO TRUE.
                }
                else{
                    Is_Choice_Valid = false; // IF IT DOESN'T MATCHES WITH ANY CHARACTER THEN IT WILL KEEP THE CHECK FALSE.
                } 
              
                // IF THE CHOICE IS INVALID IT WILL THROW AN ERROR HERE.
                if( Is_Choice_Valid == false ){
                    throw Invalid_Char_Choice { };
                }

            // HERE ERROR THROWN WILL BE CAUGHT AND IT WILL ASK PLAYER TO ENTER AGAIN.
            }catch( Invalid_Char_Choice ){
              cout << endl << "SORRY THIS IS NOT A VALID CHARACTER OR STRING." << endl << endl;

              // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WILL SHOW ALL THE INSTRUCTIONS AGAIN TO ENTER THE CHARACTER A SECOND TIME.
              cout << "PRESS ENTER TO MOVE TO THE INITAL PAGE AGAIN AND ENTER A VALID CHARACTER........ ";
              cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
              system( "cls" );
            }
    }
}


// THIS IS THE QUIT FUNCTION WHICH WILL END THE PROGRAM.
void Quit_The_Game( void ){
    
    // USING THIS WE WILL END THE PROGRAM WHERE WE ARE.
    exit( 0 );
}


// THIS FUNCTION WILL ASK FOR NUMBER OF PLAYERS AND THEN STORE THEIR NAMES IN THE VECTOR.
void Get_Names ( void ){
    
    // IT WILL CLEAR THE SCREEN.
    system( "cls" );

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
    while( Valid_Player_Count == false ){

    // INSTRUCTIONS FOR THE PLAYER TO ENTER NUMBER OF PLAYERS.
    cout << "YOU HAVE TO SPECIFY HOW MANY PLAYERS WILL BE PLAYING THIS GAME." << endl;
    cout << "KINDLY ENTER '1' FOR ONE PLAYER."                                << endl;
    cout << "KINDLY ENTER '2' FOR TWO PLAYERS."                               << endl;
    cout << "KINDLY ENTER '3' FOR THREE PLAYERS."                     << endl << endl;

        // TRY CATCH BLOCK TO CATCH THE ERROR IF USER ENTERS A WRONG VALUE.
        try{
    
            // USER WILL ENTER NUMBER OF PLAYERS HERE.
            cout << "ENTER YOUR CHOICE: ";
            cin >> Number_Of_Players;

            // WE WILL CHECK IF THE LENGTH IS MORE THAN ONE OR LESS OR EQUALS TO ZERO WHICH IS DEFINITELY AN ERROR. IT THAT IS THE SITUATION IT WILL THROW AN ERROR.
            if( Number_Of_Players.length( ) > 1 || Number_Of_Players.length( ) <= 0 ){
                throw Invalid_Player_Count { };
            }
    
            // IF THE LENGTH IS ONE THEN IT WILL CHECK IF THE NUMBER IS EITHER ONE, TWO OR THREE. IF IT ISN'T THE CASE IT WILL THROW AN ERROR. ALSO IT WILL CHECK IF THE SINGLE CHARACTER IS ALPHABET OR NOT.
            else{
                for( Loop_Counter1 = 0; Loop_Counter1 < Number_Of_Players.length(); Loop_Counter1++ ){

                    Letter = Number_Of_Players.at(Loop_Counter1);
               
                    if( int ( Letter ) <= 48 || int ( Letter ) > 51 ){
                        throw Invalid_Player_Count { };
                    }
                    else{
                        Valid_Player_Count = true;
                    }
                }
            }
        
        // HERE WE WILL CATCH THE ERROR AND WILL TELL PLAYER TO ENTER THE VALUE AGAIN.
        }catch( Invalid_Player_Count ){
            cout << endl << "YOU INPUTTED A WRONG VALUE. KINDLY READ INSTRUCTIONS AGAIN AND THEN ENTER ANOTHER VALUE." << endl << endl;

            // HERE WE WILL ASK PLAYER TO PRESS ENTER AFTER THAT IT WILL CLEAR SCREEN AND WILL SHOW ALL THE INSTRUCTIONS AGAIN TO ENTER THE CHARACTER AGAIN.
            cout << "PRESS ENTER TO MOVE TO THE INITAL PAGE AGAIN AND ENTER A VALID CHARACTER........ ";
            fflush( stdin );
            cin.ignore ( numeric_limits < streamsize > :: max( ), '\n');
            system( "cls" );
        }
    }
    
    // IT WILL SHOW PLAYER ABOUT THE NUMBER OF PLAYERS PLAYING THE GAME.
    cout << endl << "YOU ARE PLAYING THIS GAME AS " << stoi ( Number_Of_Players ) << " PLAYER GAME." << endl << endl;

    // FOR LOOP AS WE KNOW NUMBER OF PLAYERS. WE WILL USE IT TO ENTER THE NAME OF THE PLAYERS. 
    for( Loop_Counter1 = 0; Loop_Counter1 < stoi ( Number_Of_Players ); Loop_Counter1++ ){

        // BOOL VARIABLE THAT WE WILL USE TO CHECK THE NAME ENTERED IS CORRECT OR NOT.
        bool Valid_Player_Name = false;

        // WE WILL FIRST STORE NAME IN THIS STRING.
        string Player_Name;


        // WHILE LOOP TO CHECK IF PLAYER HAS ENTERED THE CORRECT NAME OR NOT AND WILL ASK UNTIL PLAYER ENTERS A CORECT NAME.
        while( Valid_Player_Name == false ){

            // INITALIZED SOME INTEGER VARIABLES THAT WE WILL BE USING AS LOOP COUNTERS AND IN DIFFERENT OPERATIONS.
            int Letter_Count = 0;
            int ASCII_Values_Of_Char = 0;
            
            // TRY CATCH BLOCK TO THROW AN ERROR IF USER ENTERS THE INCORRECT NAME.
            try{

                // WE WILL ASK USER TO ENTER THE NAME AND STORE IT IN VARIABLE.
                cout << "ENTER NAME OF THE PLAYER NUMBER: " << ( Loop_Counter1 + 1 ) << " = ";
                fflush( stdin );
                getline ( cin, Player_Name );

                // THEN WE WILL CHECK HERE IF THERE IS ANY SPECIAL CHARACTER OR DIGIT IN NAME. IT WILL THEN COMPARE LENGTH OF LETTER COUNT AND IF LENGTH IS SAME THEN THERE IS NO SPECIAL CHARACTER. WHICH ACTUALLY MEANS IT IS A VALID NAME.
                for( Loop_Counter2 = 0; Loop_Counter2 < Player_Name.size(); Loop_Counter2++ ){
                    ASCII_Values_Of_Char = toupper ( Player_Name [ Loop_Counter2 ] );

		            if( ASCII_Values_Of_Char >= 65 && ASCII_Values_Of_Char <= 90 || ASCII_Values_Of_Char >= 97 && ASCII_Values_Of_Char <= 122 || ASCII_Values_Of_Char == 32 ){
                        Letter_Count++;
                    }
                }

                // WE WILL COMPARE HERE IF THERE IS CHANGE IN LENGTH OF NAME AND COUNT OF LETTERS IF THERE IS A CHANGE THEN IT IS NOT A NAME. IF THERE IS NO CHANGE THEN IT IS CORRECT NAME SO WE WILL STORE IT IN VECTOR.
                if( Letter_Count == Player_Name.length( ) ){
                    Valid_Player_Name = true;
                    Names_Of_Players.push_back( Player_Name );
                }

                // AN IF IT IS NOT THE SAME LENGTH SO IT WILL THROW AN ERROR.
                else{
                    throw Invalid_Player_Name { };
                }

                // HERE WE WILL CATCH THE ERROR.
                }catch( Invalid_Player_Name ){
                    cout << "YOU HAVE ENTERED THE NAME INCORRECTLY. EITHER THERE IS ANY SPECIAL CHARACTER OR DIGIT." << endl << endl;
                }
        }
    }

    // WE WILL CLEAR THE SCREEN HERE.
    system( "cls" );

    // WE WILL OUTPUT THE NAMES OF THE PLAYERS WHICH WE INPUTTED.
    for( Loop_Counter2 = 0; Loop_Counter2 < stoi ( Number_Of_Players ); Loop_Counter2++ ){
 
        cout << "NAME OF THE PLAYER NUMBER: " << Loop_Counter2 + 1 << " IS: "<< Names_Of_Players [ Loop_Counter2 ] << "."<< endl;
    }

    // WE WILL THEN CALL THE FUNCTION WHICH IS RESPONSIBLE FOR MOVING PIECES.
    Moving_Pieces( Number_Of_Players, Names_Of_Players );
    }