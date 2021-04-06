#include<iostream>
#include <vector>
using namespace std;



class Car {
	string cname;
	int year;
	int volume;
	int price;
public:
	Car()
	{
		string name = "";
		year = 0;
		volume = 0;
		price = 0;
	}
	Car(string _cname,int _year,int _volume,int _price)
	{
		this->cname = _cname;
		this->year = _year;
		this->volume = _volume;
		this->price = _price;
	}



};
void main(){

	vector<Car>v;
	Car c{ "Toyota",1975,300,50000 };
	v.push_back(c);



}