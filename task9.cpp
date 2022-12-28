#include <iostream>
using namespace std;
main()
{
	int first,second,third,fourth,fifth,sixth,seventh,eigth,ninth,tenth;
	int eleventh,twelveth,thirteenth,fourteenth,fifteenth;
	int total1,total2,total3;
	int final;
		
	cout << "Enter the 1st number=  ";
	cin >> first;
	cout << "Enter the 2nd number=  ";
	cin >> second;
	cout << "Enter the 3rd number=  ";
	cin >> third;
	cout << "Enter the 4th number=  ";
	cin >> fourth;
	cout << "Enter the 5th number=  ";
	cin >> fifth;
	cout << "Enter the 6th number=  ";
	cin >> sixth;
	cout << "Enter the 7th number=  ";
	cin >> seventh;
	cout << "Enter the 8th number=  ";
	cin >> eigth;
	cout << "Enter the 9th number= ";
	cin >> ninth;
	cout << "Enter the 10th number= ";
	cin >> tenth;
	cout << "Enter the 11th number= ";
	cin >> eleventh;
	cout << "Enter the 12th number= ";
	cin >> twelveth;
	cout << "Enter the 13th number= ";
	cin >> thirteenth;
	cout << "Enter the 14th number= ";
	cin >> fourteenth;
	cout << "Enter the 15th number= ";
	cin >> fifteenth;
		
	total1 = first + second + third + fourth + fifth;
	total2 = sixth * seventh * eigth * ninth * tenth;	
	total3 = eleventh - twelveth - thirteenth - fourteenth - fifteenth;
			
	final = (total1 + total2) - total3;
	cout << "total=> " << final;
}