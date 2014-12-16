#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

		for(int i = 32; i < 256; i++) {
			cout << setw(4) << i << " " << char(i) << "\t";
		}

		cout << endl;
		return 0; 

}