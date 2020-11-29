#include "Header.h"
int main() {
	string email = "";
	cout << "Please enter an email address:\n";
	cin >> email;

	int i = (int)email.find('@');
	//This finds the index at which the @ is found

	string user_name = email.substr(0, i);
	//This 'copies' and takes a substring from the email address

	cout << "The username for the email input is " << user_name << endl;

	//To check validity:
	for (int i = 0; i < user_name.length(); ++i)
	{
		if ((user_name[i] < 65 || user_name[i] > 122 || user_name[i] == 91 || user_name[i] == 92 || user_name[i] == 93 || user_name[i] == 94 || user_name[i] == 96) && (user_name[i] != 46 || user_name[i] != 95))
		{
			cout << "Invalid email address\n";
			return 0;
		}
	}
	cout << "The email address entered appears to be valid\n";
}