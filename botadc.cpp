#include <iostream>
using namespace std;

int main()
{
   string botadc;

    cout << "Enter the name of a champion: ";
    cin >> botadc;
    if (botadc == "nilah"){cout << "You must play nami " << endl;}
    else if(botadc == "yasuo") {cout << "You must play janna " << endl;}
    else if (botadc == "kai'sa") {cout << "You must play seraphine" << endl;}
    else if (botadc == "tristana") {cout << "You must play lulu"<< endl;}
    else if (botadc == "ashe") {cout << "You must play lux"<< endl;}
    else if (botadc == "lux") {cout << "You must play morgana"<< endl;}
    else if (botadc == "jhin") {cout << "You must play soraka"<< endl;}
    else if (botadc == "jinx") {cout << "You must play soraka"<< endl;}
    else if (botadc == "twitch") {cout << "You must play soraka"<< endl;}
    else if (botadc == "vayne") {cout << "You must play neeko"<< endl;}
    else {cout<< "You must play sona" << endl;}
	cout<<"good luck have fun!";


    return 0;
}
