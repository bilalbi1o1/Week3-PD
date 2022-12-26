#include <iostream>
using namespace std;
main(){

int number;
int one;
int two;
int three;
int four;
int result;
cout << "Enter a 4-digit number: ";
cin >> number;
one = number % 10;
two = number / 10 % 10;
three = number / 100 % 10;
four = number / 1000 % 10;
result = one+two+three+four;
cout << "Result: " << result;
	
}