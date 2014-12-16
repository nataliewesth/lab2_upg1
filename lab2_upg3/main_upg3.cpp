#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
	locale swedish("swedish");
	locale::global(swedish);

	cout << "Skriv in ett femsiffrigt tal: " << endl;

	int numbers;
	const size_t SIZE = 5;
	int numberArray[SIZE] = {0};
	cin >> numbers;
			int lenght = 1;
	if(numbers > 0)
	{
		for(lenght = 0; numbers > 0; lenght++)
			numbers = numbers / 10;
	}

	if(lenght < 4 || lenght >5)
	{
			cout << "Ditt tal ska vara  5 siffror. Skriv in ett femsiffrigt tal: ";
	cin >> numbers;
	}
	else if(lenght == 5)
	{
		int reverse = 0;
		int num = 0, lenght = numbers;
		for(int i = 1; numbers !=0; i++)
		{
			num = numbers%10;
			numbers = numbers/10;
			reverse = num + (reverse*10);

		}
		if (reverse == lenght)
		{
			cout << "är ett palindrom";

		}
		else{
			cout << "är inte";
		}
			
	}

	



	return 0;
}
