#include <iostream>
#include <string>
using namespace std;
class Person{
	private:
	string name,occupation;
	int age;
	bool male,cook;
	public:
		void setName(string n){
			name = n;
		}
		void setAge(int a){
			age = a;
		}
		void setGender(bool m){
			male = m;
		}
		void setOccupation(string o){
			occupation = o;
		}
		void setCook(bool c){
			cook = c;
		}
		 string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    bool isMale() {
        return male;
    }

    bool isFemale() {
        return !male;
    }

    string getOccupation() {
        return occupation;
    }

    bool canCook() {
        return cook;
    }
};
int main(){
	Person p1, p2;
    string name, occupation;
    int age;
    bool male, cook;

    // ---------- Person 1 ----------
    cout << "Enter details for Person 1\n";

    cout << "Name: ";
    getline(cin, name);
    p1.setName(name);

    cout << "Age: ";
    cin >> age;
    p1.setAge(age);

    cout << "Male? (1 for Yes, 0 for No): ";
    cin >> male;
    p1.setGender(male);

    cin.ignore(); 
    cout << "Occupation: ";
    getline(cin, occupation);
    p1.setOccupation(occupation);

    cout << "Can cook? (1 for Yes, 0 for No): ";
    cin >> cook;
    p1.setCook(cook);

    cout << "\n--- Person 1 Details ---\n";
    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "Gender: " << (p1.isMale() ? "Male" : "Female") << endl;
    cout << "Occupation: " << p1.getOccupation() << endl;
    cout << "Can Cook: " << (p1.canCook() ? "Yes" : "No") << endl;

    cin.ignore();
    cout << "\nEnter details for Person 2\n";

    cout << "Name: ";
    getline(cin, name);
    p2.setName(name);

    cout << "Age: ";
    cin >> age;
    p2.setAge(age);

    cout << "Male? (1 for Yes, 0 for No): ";
    cin >> male;
    p2.setGender(male);

    cin.ignore();
    cout << "Occupation: ";
    getline(cin, occupation);
    p2.setOccupation(occupation);

    cout << "Can cook? (1 for Yes, 0 for No): ";
    cin >> cook;
    p2.setCook(cook);

    cout << "\n--- Person 2 Details ---\n";
    cout << "Name: " << p2.getName() << endl;
    cout << "Age: " << p2.getAge() << endl;
    cout << "Gender: " << (p2.isMale() ? "Male" : "Female") << endl;
    cout << "Occupation: " << p2.getOccupation() << endl;
    cout << "Can Cook: " << (p2.canCook() ? "Yes" : "No") << endl;	
}

