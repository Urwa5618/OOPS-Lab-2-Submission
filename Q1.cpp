#include <iostream>
#include <string>
using namespace std;
struct player{
	string name;
	int homeruns;
	int hits;
	
};
void inputData(player p[],int x){
	for(int i=0;i<3;i++){
		cout << "enter the data of player:\n" << i+1 <<endl;
		cout << "Name:" << endl;
		cin.ignore();
		getline(cin,p[i].name);
		cout << "Number of hits:" << endl ;
		cin >> p[i].hits;
		cout << "Number of homeruns:" << endl;
		cin >> p[i].homeruns;
	}

}
void displayData(player p[],int x){
	cout <<"-----Player Data-----\n" << endl;
	for(int i=0;i<3;i++){
		cout << "Player: " << i+1 << endl;
		cout << "Name:" << p[i].name << endl;
		cout << "Hits:" << p[i].hits << endl;
		cout << "Homeruns:" << p[i].homeruns << endl;
	}

}
int searchplayer(player p[],int x,string searchname){
	for(int i=0;i<3;i++){
	if(p[i].name == searchname)
	return i;
	}
	return -1;
}
void updateplayer(player p[],int index){
	cout << "Updating Data for "<< p[index].name << endl;
	cout <<"Enter new homeruns:";
	cin >> p[index].homeruns;
	cout <<"Enter new hits:";
	cin >> p[index].hits;
}
int main(){
	player p[3];
	int choice;
	string name;
	do
	{
		cout << "=====MENU=====" << endl;
		cout << "1)Input Player Data:\n" << endl;
		cout << "2)Display Player Data:\n" << endl;
		cout << "3)Search Player Data:\n" << endl;
		cout << "4)Update Player Data:\n" << endl;
		cout << "5)Exit\n" << endl;
		cout << "Enter your choice" << endl;
		cin >> choice;

		switch (choice)
	{
	case 1:
		inputData(p,3);
		break;

	case 2:
		displayData(p,3);
		break;

		case 3:
		cout <<"Enter the palyer to search:"<< endl;
		cin.ignore();
		getline(cin,name);{
			int index = searchplayer(p,3,name);
			if(index != -1){
				cout << "Player found at index:" << index;
			}else cout <<"Player not found !" << endl;
		}
		break;

		case 4:
		cout <<"Enter the palyer name to update:"<< endl;
		cin.ignore();
		getline(cin,name);{
			int index = searchplayer(p,3,name);
			if(index != -1){
				updateplayer(p,index);
			}else cout <<"Player not found !" << endl;
		}
		break;

		case 5:
		cout << "Exiting program" << endl;
		break;

	default:
	cout << "Invalid Choice" << endl;
		break;
	}

	} while (choice != 0);
	
	return 0;
}
