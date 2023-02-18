#include <stdlib.h> // Prototypes of srand() and rand()
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
unsigned int i;

cout << "\n\n "
"****** RANDOM NUMBERS ******\n\n";
for( i = 1 ; i <= 20 ; ++i)
cout << setw(20) << i << ". random number = "
<< setw(3) << (rand() % 100 + 1) << endl;
return 0;
}

