#include <iostream>
using namespace std;
main(){

string name;
int adult_ticket;
int children_ticket;
int adult_ticket_sold;
int children_ticket_sold;
int total;
float percent;
float donation;
cout << "Enter movie name: ";
cin >> name;
cout << "Enter adult ticket price: ";
cin >> adult_ticket;
cout << "Enter children ticket price: ";
cin >> children_ticket;
cout << "Enter number of adult ticket sold: ";
cin >> adult_ticket_sold;
cout << "Enter number of children ticket sold: ";
cin >> children_ticket_sold;
cout << "Enter percentage to donate: ";
cin >> percent;
total = (adult_ticket*adult_ticket_sold) + (children_ticket*children_ticket_sold);
donation = total - total * percent/100 ;
cout << "Total generated=> " << total << endl;
cout << "Amount after donation=> " << donation;

}