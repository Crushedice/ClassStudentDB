// SchülerDB Menu.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <Windows.h>

using namespace std;

string password;
string adress;
int housenumber;
string roomclass;
int eingabe;


boolean Login(){


	cout << "Bitte geben Sie Ihr Passwort ein" << endl;

	cin >> password;



	if (password == "admin1234") {
		cout << "Vielen Dank! Was wollen Sie als nächstes tun?" << endl;
		return true; 
	}
	else {
		cout << "Das Passwort war leider Falsch. Versuchen Sie es nochmal" << endl;
		return false;

	}
}




string entername(){
	string name;
	cout << "Geben Sie den Namen des Schülers ein" << endl; //Mit dieser Funktion wird der Nachname der Variable name definiert
	
	cin >> name;

	return name;

}

string enterphonenum(){			//Mit dieser Funktion wird die Telefonnummer der Variable Phonenumber definiert
	string phonenumber;

	cout << "Geben Sie bitte die Telefonnummer ein" << endl;

	cin >> phonenumber;

	return phonenumber;
}
void inputPerson(){

}

void showPerson(string name, string phonenumber) {
	cout << name + phonenumber << endl;


}


int main()
{
	SetConsoleOutputCP(CP_UTF8);

	boolean LoginSuccessful;
	
	LoginSuccessful = Login();

		if (LoginSuccessful == true) {




	cout << "Drücken Sie 1 wenn die Liste der Schueler angezeigt werden soll" << endl;
	cout << "Drücken Sie 2 wenn Sie einen neuen Schüler anlegen wollen" << endl;
	cout << "Drücken Sie 3 wenn Sie einen Schüler bearbeiten möchten" << endl;
	cout << "Drücken Sie 4 um einen Schüler zu löschen" << endl;
	cout << "Drücken Sie 5 um das Programm zu schließen" << endl;

	cin >> eingabe;
	}

	if (eingabe == 1) {
		cout << "Hier wird der Schüler und die Telefonnummer angezeigt"<< endl;

	

		

	}
	else if (eingabe == 2) {
	
		cout << "Hier können Sie einen Schüler Anlegen" << endl;     //Hier wird ein neuer Schüler mit den Funktionen entername und enterphonenumber angelegt
	
		string name= entername();
		string phonenumber= enterphonenum();
		
		showPerson(name, phonenumber); 

	}
	else if (eingabe == 3) {
		cout << "Hier können Sie einen Schüler bearbeiten"<< endl;
	}
	else if (eingabe == 4) {
		cout << "Hier können Sie einen Schüler löschen" << endl;
	}
	else if (eingabe == 5) {
		cout << "Das Programm wird geschlossen" << endl;
	}

	else {
		cout << "Ihre Eingabe war leider falsch!" << endl;
	}
}
