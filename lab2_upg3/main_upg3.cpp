#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
	locale swedish("swedish");
	locale::global(swedish);

	//int numbers;

	cout << "Skriv in ett femsiffrigt tal: ";
/*	cin >> numbers;

	int lenght = 1;
	if(numbers > 0)
	{
		for(lenght = 0; numbers > 0; lenght++)
			numbers = numbers / 10;
	
	}
	cout << lenght;

	if(lenght < 4 || lenght >5)
	{
			cout << "Ditt tal ska vara  5 siffror. Skriv in ett femsiffrigt tal: ";
	cin >> numbers;
	}
	cout << "arrayen innehåller " << numberArray[0];*/
	// Deklarera en array
	int numbers;
	const size_t SIZE = 5;
	int x[SIZE] = {0};
	cin >> numbers;

	// Fyll arrayen
	for(size_t idx = 0; idx < SIZE; idx++)
	{
		x[idx] = numbers % 10;
		numbers /= 10; //dödanummerrad eller eternitybreaker
		cout << setw(4) << x[idx] << endl;
	}
	
	return 0;
}