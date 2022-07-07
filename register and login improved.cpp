#include <iostream>

using namespace std;

int abf1;

int secquest;
int newsecquest;
string space;


class nutzer {

public:

	int age;
	string name;
	string password;
	string pet;
	string school;
	string username;
};

nutzer user{};
nutzer input{};

void recover() {
	printf("\033c");
	cout << ("PASSWORD RECOVER\n");
	cout << ("__________________");
	cout << ("\n\n\nchoose your security question\n\n");
	cout << ("________________________________\n");
	cout << ("what was your first pet                what was your first school");
	cout << ("\n        1                                          2       \n  ");
	cin >> newsecquest;

	if (newsecquest == 1) {
		cout << ("what was your first pet?\n");
		cin >> user.pet;

		if (user.pet == input.pet) {
			cout << ("write your new password\n");
			cin >> user.password;

		}
	}

	if (newsecquest == 2) {
		cout << ("what was your first school?\n");
		cin >> input.school;
	}



	if (user.school == input.school) {
		cout << ("write your new password");
		cin >> user.password;

	}

}

void regist() {

	
	cout << ("REGISTER\n_____________\n");

		cout << ("whats ur name\n");
		cin >> user.name;

		cout << ("\nhow old are you?\n");
		cin >> user.age;

		if (user.age < 18) {

			cout << ("you are not old enough");
			cout << ("give any input to close the program");
			cin >> space;
			exit(0);
}

		cout << ("\nchoose a username\n");
		cin >> user.username;

		cout << ("\nchoose your password\n");
		cin >> user.password;

		cout << ("\n\nchoose your security question\n");
		cout << ("_______________________________\n");
		cout << ("what was your first pet                what was your first school");
		cout << ("\n        1                                          2       \n\n  ");
		cin >> secquest;

		if (secquest == 1) {
			cout << ("what was your first pet?\n");
			cin >> user.pet;
		}

		if (secquest == 2) {
			cout << ("what was your first school?");
			cin >> user.school;
		}


}

 void log() {

	printf("\033c");

	cout << ("whats ur username?\n");
	cin >> input.username;


	cout << ("whats ur password?\n");
	cin >> input.password;


	if (input.password == user.password && user.username == input.username) {

		cout << ("your login was succesfull");

	}


	else {


		cout << ("your password and/or username is wrong?\n");
		cout << (" retry                            recover psw                  close programm\n");
		cout << ("  1                                    2                               3        ");
		cin >> abf1;

		if (abf1 == 1) {

			log();
		}

		if (abf1 == 2) {
			recover();
		}

		if (abf1 == 3) {

			exit(0);
		}

	}

}

int main() {


	regist();
	log();




}
