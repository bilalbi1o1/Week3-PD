#include <iostream>
using namespace std;
main()
{

float init_vel;
float final_vel;
float acc;
float time;
	
cout << "Enter Initial Velocity= ";
cin >> init_vel;
cout << "Enter Acceleration= ";
cin >> acc;
cout << "Enter Time taken= ";
cin >> time;
		
final_vel = acc * time + init_vel;
cout << "Final Velocity= " << final_vel; 

}