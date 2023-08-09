//wap to display day using switch case

#include<iostream>
using namespace std;

class days
{
public:
void info()
{
    int day;
    cout << "Enter the day value: " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
     case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Please enter a valid input!!" << endl;
    }
}
}d1;
int main()
{
    d1.info();
    return 0;

}

