#include <iostream>

using namespace std;

void showRestaurantMenu() {
	int choice;

	cout << "\n1. View menu\n2. Place an order\n3. Exit\nChoose: ";
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "Pasta, burger, salad, and soup.\n";
			break;
		case 2:
			cout << "Order placed.\n";
			break;
		case 3:
			cout << "Goodbye!\n";
			return;
	}

	showRestaurantMenu();
}

int main() {
	showRestaurantMenu();
	return 0;
}
