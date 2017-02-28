//this is required at the start of (almost) every program in C++
#include <iostream>
using namespace std;

//this just makes the placeholder "size" set to whatever value we want.
//we do this so making changes to our code is easier.
#define size 2000

/*Original assignment instructions:

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
(The correct sum is 233,168).*/

//like all programs, this needs a main
int main() {

	//here we are defining our two ints
	int num, total;

	/*our "for" loop; it will continue to run until the condition in parenthesis isn't met.
	in this case, "num" will increment by one and this will stop looping when "num" is
	no longer less than or equal to "size" (essentially a counting loop; it runs "size" times)*/
	for (num = 1; num <= size; num++)

		/*the loop used for adding specific numbers. It stops when we reach "size".
		this "while" loop checks to see if "num is divisible by certain numbers.
		if it is, that number is added to the total and displayed on the screeen.
		if it isn't, that number is ignored and the program moves to the next number.*/
		while (num % 3 == 0 || num % 5 == 0 && num < size) {

			cout << num << endl;
			total = num + total;
			num++;

		}
	//the output of the total. This is how we display the code to the console
	cout << "The total of these numbers is " << total << endl;

	//this is required at the end of every C++ program if you don't want it closing upon completion.
	system("pause");
}
