#include <iostream>
using namespace std;
main()
{
	int BagSize;
	int BagCost;
	int Area;
	int Per_pound;
	int Per_area;
	
	cout << "Enter the size of bag in Pounds: ";
	cin >> BagSize;
	cout << "Enter Cost of one Bag: ";
	cin >> BagCost;
	cout << "Enter area covered by each bag in Square Feet: ";
	cin >> Area;
		
	Per_pound = BagCost/BagSize;
	Per_area = BagCost/Area;
	cout << "per pound: " << Per_pound << endl;
	cout << "Fertilizing cost of area per square feet: " << Per_area;

}