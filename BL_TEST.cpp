#include <iostream>
using namespace std;

/*
Select a problem from the following list and solve it.
its okay if you want to solve a question that has already been solved.
Create a user defined funtion and call it inside the main funtion.
Happy coding!
*/

/* Q1 )  Write a program in C++ that converts kilometers per hour to meter per second.
	 Start your code here (where this comment ends).
	 for ease comment your name email
*/
int kmph;
void KMPH_2_MPS()
{
	//Formula: divide the speed value by 3.6
	cout<<"Enter speed in KMPH: ";
	cin>>kmph;
	cout<<kmph/3.6<<" kmps";
}



/* Q2 )  Write a program in C++ which swap the values of two variables not using third variable
	 Start your code here (where this comment ends).
	 for ease comment your name email
*/
numberSwap()
{
	cout << "\n\n Swap two numbers without using third variable:\n";
	cout << "---------------------------------------------------\n";
	int num1, num2, temp;
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;
	num2=num2+num1;
	num1=num2-num1;
	num2=num2-num1;
    cout << " After swapping the 1st number is : "<< num1 <<"\n" ;
    cout << " After swapping the 2nd number is : "<< num2 <<"\n\n" ;
}
/* ganeshfutane3@gmail.com
*/

/* Q3 )  Write a program in C++ to display distinct elements from an array.
	 Start your code here (where this comment ends).
	 for ease comment your name email
*/



/* Q4 ) Write a program in C++ to find the area and circumference of a circle.
	Start your code here (where this comment ends).
	for ease comment your name email
*/




/* Q5 ) Write a program in C++ to find the sum of the array elements.
	Start your code here (where this comment ends).
	for ease comment your name email
*/
void sum()
{
	cout<<"Enter 10 numbers to find the sum"<<endl;
	int arr[10],s=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter "<<i+1<<"st Number="<<endl;
		cin>>arr[i];
		s=s+arr[i];
	}
	cout<<"Sum of all the numbers in the array="<<s<<endl;
}
//yashkumbhar21@gmail.com
	


/* Q6 ) Write a program in C++ to implement binary search.
	Start your code here (where this comment ends).
	for ease comment your name email
*/


/* Q7 ) Write a program in C++ to find the largest smallest and average of the array.
	Start your code here (where this comment ends).
	for ease comment your name email
*/


/* Q8 ) Write a program in C++ to reverse a string.
	Start your code here (where this comment ends).
	for ease comment your name email
*/


/* Q9 ) Write a program in C++ to check if string is palindrome.
	Start your code here (where this comment ends).
	for ease comment your name email
*/


/* Q10 ) Write a program in C++ to insert a element in linked list.
	Start your code here (where this comment ends).
	for ease comment your name email
*/

int main()
{

	cout<<"Put your function calls here!"<<endl;

	//karan
	KMPH_2_MPS();
	//futane
	numberSwap();
	//yash
	sum();
}
