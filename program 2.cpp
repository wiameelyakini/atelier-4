#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string userInput,day,month,year,hour,minute;
    cout << "entre un date sous la forme (JJMMAAAAHHNN): \n";
    cin >> userInput;
    if ( userInput.length() != 12 )
        cout << "Chaine invalide." << endl;
    else
    {

    //utilisation de substr() de la classe string 
    //pour l'extraction des composant de la date. 
    day = userInput.substr(0,2);
    month = userInput.substr(2,2);
    year = userInput.substr(4,4);
    hour = userInput.substr(8,2);
    minute = userInput.substr(10,2);
    

    // affichage des valeurs:
    cout << "la date entree est: \nday: " << day << 
    "\nmonth: " << month << "\nyear: " << year
    << "\nhour: " << hour << "\nminutes: " << minute << endl;
    }

    return 0;
}
