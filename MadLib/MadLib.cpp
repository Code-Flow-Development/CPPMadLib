#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pluralbodypart, adjective1, color, plurnalnoun1, adjective2, place, pluralnoun2, noun1, personinroom, adjective3, pluralnoun3, noun2, pluralnoun4, pluralnoun5, verb1, adjective4, noun3, number, pluralnoun6, pluralnoun7, noun4;

	cout << "Welcome to Spy Video Games!" << endl;
	//
	cout << "Please enter a body part in plural form: ";
	cin >> pluralbodypart;
	cout << "Please enter an adjective: ";
	cin >> adjective1;
	cout << "Please enter a color: ";
	cin >> color;
	cout << "Please enter plural noun: ";
	cin >> plurnalnoun1;
	cout << "Please enter an adjective: ";
	cin >> adjective2;
	cout << "Enter a place: ";
	cin >> place;
	cout << "Please enter a plural noun: ";
	cin >> pluralnoun2;
	cout << "Please enter a noun: ";
	cin >> noun1;
	cout << "Please enter the name of a person in the room: ";
	cin >> personinroom;
	cout << "Please enter an adjective: ";
	cin >> adjective2;
	cout << "Please enter a plural noun: ";
	cin >> pluralnoun3;
	cout << "Please enter a noun: ";
	cin >> noun2;
	cout << "Please enter a plural noun: ";
	cin >> pluralnoun4;
	cout << "Please enter a plural noun: ";
	cin >> pluralnoun5;
	cout << "Please enter a verb: ";
	cin >> verb1;
	cout << "Please enter an adjective: ";
	cin >> adjective4;
	cout << "Please enter a noun: ";
	cin >> noun3;
	cout << "Please enter a number: ";
	cin >> number;
	cout << "Please enter a plural noun: ";
	cin >> pluralnoun6;
	cout << "Please enter a plural noun: ";
	cin >> pluralnoun7;
	cout << "Please enter a noun: ";
	cin >> noun4;

	// Main output
	cout << "Grab your favorite controller, flex your " << pluralbodypart << ", and get ready to play in these " << adjective1 << " video games:" << endl;
	cout << "Operation " << color << " " << plurnalnoun1 << "\n";
	cout << "You are a spy in the hot" << adjective2 << "jungles of (the) " << place << "\n";
	cout << "Your mission: Vaporize " << pluralnoun2 << " as you search for the missing and priceless " << noun1 << "";
	cout << "It was stolen by the rouge operative named " << personinroom << ".\n\n";

	return 0;
}