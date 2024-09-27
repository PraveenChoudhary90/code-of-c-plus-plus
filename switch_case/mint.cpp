// #include <iostream>
// using namespace std;
// int main()
// {
//     int houres = 0;
//     cout << "Enter the houres" << "\n";
//     cin >> houres;
//     int mint = 0;
//     cout << "Enter the minute" <<"\n";
//     cin >> mint;
//     switch(houres >= 12 && houres <= 24){
//         case 1:
//         {
//             cout << " Time is in  PM" << "\n";
//             break;
//         }
//         switch(houres >= 1 && houres <= 11){
//         case 2:
//         {
//            cout << "Time is in AM" << "\n";
//            break;
//         }

//     }
// }
// }
#include<iostream>
using namespace std;
int main()
{
	int h,m;
	cout<<"Input The time in 24 hours format in Given Sequence  "<<endl;
	cout<<"input Hours : ";
	cin>>h;
	cout<<"Input Minutes : ";
	cin>>m;
	switch(h>=12 && h<=24)
	{
		case 1: 
		cout<<"The time is in PM "<<endl;
		break;
		case 0:
			switch (h>=0 && h<=11)
			{
				case 1:
				cout<<"Time is in AM "<<endl;
				break;
				case 0:
				cout<<"Input is Wrong  "<<endl;
				break;
			}
		break;			
    }}