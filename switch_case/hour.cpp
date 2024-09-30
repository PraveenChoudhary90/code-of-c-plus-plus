#include <iostream>
using namespace std;
int main()
{
    int hour = 0;
    int minutes = 0;
    cout << "Enter the hour uder (0-23)" << "\n";
    cin >> hour;
    cout << "Enter the minutes under (0-59)" <<"\n";
    cin >> minutes;
    switch(hour / 12){
        case 0:
        {
            cout << hour << ":" <<  minutes << " A.M" << "\t";
            break;
        }
        case 1:
        {
            int k = (hour-12)==0?0:hour;
            if(k==0){
                cout << "00.00"<<"A.M." <<"\n";
            }
            else{
                cout << "k -12" << ":"<<minutes << "P.M" << "\n";
            }
            break;
            // cout << hour-12 << ":" << minutes << "P.M." << "\t";
        }
        default:
        {
            cout << "Invalid time" << "\n";
        }
        break;
    }
    return 0;
}