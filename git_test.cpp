#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(void)

{

int age;
int calories,vitaminD,sleep,water;

	cout<<"Enter Your Age:\t";
	cin >> age;
	
	if (age < 6) {
		cout<<"You Are Too Young"<<endl;
		exit(0);
		}
		
		if (age >= 6 & age <= 12)
		{
		calories = 1200;
		vitaminD = 200;
		sleep    = 10;
		water    = 200;	
		cout<<"Recommended Calories:\t"<<calories<<" Kcal"<<endl;
		cout<<"Recommended Vitamin D:\t"<<vitaminD<<" Grams"<<endl;
		cout<<"Recommended Sleep:\t"<<sleep<<" Hours"<<endl;
		cout<<"Recommended water:\t"<<water<<" Litres"<<endl;
		}
			else if (age > 12 & age <= 18)
			{
			calories = 2400;
			vitaminD = 500;
			sleep    = 9;
			water    = 250;	
			cout<<"Recommended Calories:\t"<<calories<<" Kcal"<<endl;
			cout<<"Recommended Vitamin D:\t"<<vitaminD<<" Grams"<<endl;
			cout<<"Recommended Sleep:\t"<<sleep<<" Hours"<<endl;
			cout<<"Recommended water:\t"<<water<<" Litres"<<endl;
			}
				else if (age > 18 & age <= 60)
				{
				calories = 2000;
				vitaminD = 500;
				sleep    = 8;
				water    = 220;	
				cout<<"Recommended Calories:\t"<<calories<<" Kcal"<<endl;
				cout<<"Recommended Vitamin D:\t"<<vitaminD<<" Grams"<<endl;
				cout<<"Recommended Sleep:\t"<<sleep<<" Hours"<<endl;
				cout<<"Recommended water:\t"<<water<<" Litres"<<endl;
					
					}
				
			
					else {
					cout<< "You Are Too Old"<<endl;
						
						}
					
}

