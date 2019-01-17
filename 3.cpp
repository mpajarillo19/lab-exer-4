#include <iostream>

using namespace std;

int main(){
	int num[5];
	int *hackerman;
	
	cout << "Enter 5 Integers" << endl;
	for(int i=0; i<5; i++)
	{
		cout << "Enter Integer " <<i+1 <<": ";
		cin >> num[i];
	}
	hackerman = num;
	cout << endl << endl;
	cout << "These are the integers that you've been put!";
	cout << endl << endl;
	for(int i=0; i<5; i++)
	{
		cout << "Integer " <<i+1 <<": " << *hackerman;
		cout << endl;
		hackerman++;
	}
}
