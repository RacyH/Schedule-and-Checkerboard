/*
Racy Halterman
C++ Fall 2020
Due: August 31st
Lab 2 Exploring Output
Write a code that makes my schedule appear on the screen, as well as write a code that makes
a checkerboard appear on the screen.
*/

#include <iostream>

using namespace std;

/* This is where I set string variables so that I could output different things without having to
retype a bunch of the same words. I used the above "using namespace std;" so that I wouldn't have to type
it every time I wanted to used cout or any other such functions.*/

const string m = "Monday		";
const string t = "Tuesday		";
const string f = "Friday		";
const string w = "Wednesday	";
const string x = "8:00	";
const string c = "General Chemistry";
const string a = "Algebra and Trigonometry \n";
const string C = "C++";
const string l = "(lab)\n";

/* Here I used string so that I wouldn't have to retype the star patterns over and over again.
Another comment to add is that I used several spaces between the stars so that the pattern looked more like a chessboard. */
const string one = "*   *   *   *  \n";
const string two = "  *   *   *   *\n";

int main()
{
	/* This is where I called my string variables to output the different words they were set as to print my schedule.
	I also typed some things that I didn't use often, such as, in line 40, "1:30	".*/

	cout << m;
	cout << x;
	cout << a;
	cout << m;
	cout << "1:30	";
	cout << C;
	cout << '\n';
	cout << t;
	cout << x;
	cout << c;
	cout << '\n';
	cout << t;
	cout << "1:00	";
	cout << C;
	cout << l;
	cout << w;
	cout << x;
	cout << a;
	cout << f;
	cout << x;
	cout << "Introduction to Honors\n";
	cout << f;
	cout << "10:00	Honors Service Learning Project\n";
	cout << f;
	cout << "11:00	";
	cout << c;
	cout << l;
	cout << '\n';

	//Here is where I called on the string variables to output the star chessboard pattern.

	cout << one;
	cout << two;
	cout << one;
	cout << two;
	cout << one;
	cout << two;
	cout << one;
	cout << two;
	return 0;
}

