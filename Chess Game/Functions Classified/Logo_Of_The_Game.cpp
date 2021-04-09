// FILE WHICH CONTAINS ALL THE HEADER FILES SO THERE SHOULDN'T BE ANY NEED TO WRITE HEADERS FOR EACH PIECE OF CODE OR COMMANDS.
#include "std_lib_facilities.h"


// LIST OF FUNCTIONS THAT WE WILL BE USING DURING THE WHOLE EXECUTION OF THE PROGRAM.
void Rules_Of_The_Game            ( void );


// THE FIRST LOGO FUNCTION WHICH WAS CALLED BY THE MAIN FUNCTION.
void Logo_Of_The_Game( void ){

// IT WILL JUST CLEAR THE SCREEN.
system( "cls" );

// THE ACTUAL LOGO OF THE GAME.
cout << "\n \n";
cout << " \t \t \t ================================================================================================================= "                                 << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXX           "<< "\t" << " XXXXXXXX          "<< "\t" << " XXXXXXXX          " << endl;
cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXX           "<< "\t" << " XXXXXXXX          "<< "\t" << " XXXXXXXX          " << endl;
cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXX           " << "\t" << " XXXXXXXXXXXXXXXXXX " << "\t" << " XXXXXX           "<< "\t" << "         XXXXXXXXX "<< "\t" << "         XXXXXXXXX " << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXX           "<< "\t" << "         XXXXXXXXX "<< "\t" << "         XXXXXXXXX " << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t XXXXXXXXXXXXXXX " << "\t" << " XXXXXX      XXXXXX " << "\t" << " XXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX "<< "\t" << " XXXXXXXXXXXXXXXXX " << endl;
cout << " \t \t \t ================================================================================================================= "                                 << endl;
cout << "\n \n";

// IT WILL ASK PLAYER TO ENTER SO THAT IT CAN CONTINUE AND AFTER THAT IT WILL CLEAR THE SCREEN.
cout << "PRESS ENTER TO CONTINUE THE GAME........ ";
cin.ignore( numeric_limits < streamsize> :: max( ), '\n');
system( "cls" );

// CALLING THE OTHER FUNCTION TO SHOW THE RULES OF THE GAME.
Rules_Of_The_Game( );
}
