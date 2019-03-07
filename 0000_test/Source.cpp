#include <iostream>
using namespace std;

int x = 55;
int y = 5;



int main() {
	int x = 55;
	int y = 5;
	switch (x % 7) {
		case 0:
		case 1:
			y++;
		case 2:
		case 3:
			y = y + 2;
		case 4:
			break;
		case 5:
		case 6:
			y = (y - 3);
	}
	cout << y;
}

