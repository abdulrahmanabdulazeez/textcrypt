using namespace std;

const char
*green = "\033[1;32m",
*yellow = "\033[1;33m",
*blue = "\033[1;34m",
*cyan = "\033[36m",
*red = "\033[31m",
*reset = "\e[0m";

void head(){

    cout << "🟦🟦🟦🟦 🟦🟦🟦 🟦    🟦 🟦🟦🟦🟦        🟦🟦🟦 🟦🟦🟦 🟦  🟦 🟦🟦  🟦🟦🟦🟦   \n";
    cout << "   🟦   🟦        🟦🟦      🟦          🟦      🟦   🟦 🟦🟦  🟦  🟦   🟦      \n";
    cout << "   🟦   🟦🟦🟦     🟦       🟦   🟦🟦🟦 🟦      🟦 🟦    🟦   🟦 🟦    🟦      \n";
    cout << "   🟦   🟦        🟦🟦      🟦          🟦      🟦  🟦   🟦   🟦       🟦      \n";
    cout << "   🟦    🟦🟦🟦 🟦    🟦    🟦           🟦🟦🟦 🟦   🟦  🟦   🟦       🟦 " ;
    cout << red;
    cout << "[V1.1]  ";
    cout << red << "\n\n[**] "<< cyan << "Author: AbdulRahman AbdulAzeez" << red << "  [**]\n" << red;
    cout << "[**] " << cyan << "Github: https://github.com/abdulrahmanabdulazeez" << red << "  [**]\n\n";
    cout << reset;
}

void winHead(){
    cout << cyan;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~" << red << " TEXT-CRYPT "
    << cyan << "~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << red;
    cout << "[V1.1]  \n\n";
    cout << red << "[**] "<< cyan << "Author: AbdulRahman AbdulAzeez" << red << "  [**]\n" << red;
    cout << "[**] " << cyan << "Github: https://github.com/abdulrahmanabdulazeez" << red << "  [**]\n\n";
    cout << reset;
}


