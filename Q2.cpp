#include<iostream>
#include<string>
using namespace std;
class Date{
private:
	int day;
	int month;
	int year;
public:
	Date(int m,int d, int y){
		if(m>=1 && m<= 12){
			month = m;
		}else month = 1;
		if(d>=1 && d<=31){
			day = d;
		}else day = 1;
		year = y;
	}

	void printnumeric(){
	cout << month << "/" << day << "/" << year;
}
	void printmonthfirst(){
		string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	cout << months[month - 1] << " " << day << ", " << year << endl;
	};
	void printdayfirst(){
		string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	cout << day << " " << months[month - 1] << " " << year << endl;
	};
};
int main(){
	Date d1(12,25,2010);
	cout << "Numeric Format:" << endl;
	d1.printnumeric();

	cout << "\nMonth First Format:" << endl;
	d1.printmonthfirst();

	cout << "Day First Format:" << endl;
	d1.printdayfirst();
	return 0;
}
