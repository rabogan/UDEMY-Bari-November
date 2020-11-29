#include "Header.h"

//Initial attempts at vowel/consonant/word count in C++

int main() {
	string str;
	cout << "Please enter your string: \n";
	getline (cin, str);
	int v_count = 0;
	int c_count = 0;
	int w_count = 1;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] < 65 || str[i]>122) //Kind of untidy, but prevents other characters being included in the c_count.
			--c_count;
		if (str[i] > 90 && str[i] < 97)
			--c_count;
		if (str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85 || str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
			//An ALTERNATIVE here is to use:
			// if (str[i] == 'A' || str[i] == 'E' || etc...)
			++v_count;
		else
			++c_count;
	}
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ' ')
			++w_count;
		if (str[i] == ' ' && str[i + 1] == ' ')  //This is to avoid the inclusion of spaces!   Nice thinking!
			--w_count;
	}
	cout << "The number of consonants is " << c_count << ", the number of vowels is " << v_count << ", and the number of words is " << w_count;
}