#include "Header.h"

int main() 
{
	string str = "";
	cout << "Please enter your string:\n";
	cin >> str;
	string rev = "";

	/*
	You need to ensure that the index of rev equals the size of str
	To do so, ensure that you resize rev, so that it is equal to
	the size of the string str
	*/
	int len = str.length();
	rev.resize(len);

	/*
	A for-loop is needed to iterate from the right of the string
	*/

	for (int i = 0,j=len-1;i<len;++i,--j)
	{
		rev[i] = str[j];
	}

	/*
	At some point, you need to ensure that the null character is included
	in your reverse of the input string.  Either of the below are fine!
	*/
	rev[str.length()] = '\0'; //OR  
	rev[len] = '\0';

	cout << "The reverse of the string input is " << rev << endl;  //Added to check if the output of rev is correct

	string cop_str = "";
	cop_str = str;

	for (int i = 0; i < len; ++i)
	{
		if (rev[i] == cop_str[i] + 32 || rev[i] == cop_str[i] - 32)
		{
			cop_str[i] = rev[i];
		}
	}

	cout << "New string is " << cop_str << endl;

	if (str == rev) {
		cout << "It's a palindrome.  " << str << " and " << rev << " are identical\n";
	}

	else if (cop_str == rev) {
		cout << "While some upper case and lower case letters are different, "
			<< str << " and " << rev << " are palindromic.\n";
	}

	else
	{
		cout << str << " is not a palindrome." << endl;
	}

}