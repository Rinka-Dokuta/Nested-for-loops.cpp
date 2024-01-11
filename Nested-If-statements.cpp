#include<iostream>
using namespace std;
int main() {

	char input1;
	char input2;

	cout << "Do you like icecream? Y/N" << endl;
	cin >> input1;
	cout << "Do you like nuts? Y/N" << endl;
	cin >> input2;

	if (input1 == 'Y') {
		if (input2 == 'Y')
			cout << "You get rocky road ice cream!" << endl;
		else if (input2 == 'N')
			cout << "You get vanilla ice cream!" << endl;
	}
	else if (input1 == 'N')
		if (input2 == 'Y')
			cout << "You get snickers bar! You're Not You When You're Hungry" << endl;
		else if (input2 == 'N')
			cout << "You get skittles! Taste the rainbow" << endl;


	  cout << "Do you like dogs or cats? D/C" << endl;
	cin >> input1;
	cout << "Do you like small or big pets? S/B" << endl;
	cin >> input2;

	if (input1 == 'D') {
		if (input2 == 'S')
			cout << "You get a Chihuahua!" << endl;
		else if (input2 == 'B')
			cout << "You get a Dobermann!" << endl;
	}
	else if (input1 == 'C')
		if (input2 == 'S')
			cout << "You get a  Munchkin!" << endl;
		else if (input2 == 'B')
			cout << "You get a American Bobtail!" << endl;



}
