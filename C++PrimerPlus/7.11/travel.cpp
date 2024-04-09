#include <iostream>

struct travel_time 
{
    int hour;
    int mins;
};
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);


const int Mins_per_hr = 60;

int main()
{
    using namespace std;
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};
    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);
    travel_time day3 = {4, 32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;
    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hour = t1.hour + t2.hour + (t1.mins + t2.mins)/ Mins_per_hr;

    return total;
}
void show_time(travel_time t)
{
    using namespace std;
    cout << t.hour << " hours, " << t.mins << " minutes.\n"<<endl;
}