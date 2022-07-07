#include <iostream>

// OLD VERSION
// OLD VERSION
// OLD VERSION
using namespace std;

string abf;
string psw;
string Nutzername;
string ppsw;
string nNutzername;
int age;
int question;



void nopes() {


	cout << ("You are not old enough\n");

	exit(0);
}


void registr() {

	cout << (" REGISTER\n");
	cout << ("______\n");
	cout << ("Age       ");
	cin >> age;
	if (age < 18) {
		nopes();
	}
	cout << ("username     ");
	cin >> Nutzername;
	cout << ("Password         ");
	cin >> psw;
	cout << ("\nyour registration was succesful\n\n");
}

void login()
{
	cout << ("\n       login\n");
	cout << ("________");
	cout << (" \nNutzername     ");
	cin >> nNutzername;
	cout << ("Passwort      ");
	cin >> ppsw;

	if (Nutzername == nNutzername && psw == ppsw) {
		cout << ("Die Registrierung ist abgeschlossen");

	}


	else {
		cout << ("username or password is wrong\n\n");
		cout << (" press 4 to retry");
		cout << (" press 3 to exit\n");
		cin >> question;
		if (question == 4) {
			login();
		}

		if (question == 3) {

			exit(0);
		}

	}
}



int main() {



	int abf;

	cout << ("login");
	cout << ("      register\n");
	cout << ("\n   1");
	cout << ("           2\n");
	cin >> abf;

	if (abf == 1) {

		login();
	}

	if (abf == 2) {

		registr();
		login();

	}

	else {
		cout << ("your answer is incorrect,please try again\n\n");
		main();

	}

}
