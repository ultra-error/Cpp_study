#include <iostream>
const int Cities = 5;
const int Years = 4;

int main()
{
    using namespace std;
    // const char cities[Cities][25] = 
    const char* cities[Cities] = 
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"

    };

    int maxtemps[Years][Cities] = 
    {
        {96, 100, 89, 101, 105},    //maxtemps[0]
        {96, 98, 91, 107, 104},     //maxtemps[1]
        {97, 101, 93, 108, 107},    //maxtemps[2]
        {98, 103, 95, 109, 108}     //maxtemps[3]
    };

    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
        {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }

    return 0;
}