#include <iostream>
int main(int argc, char* argv[])
{
	int account_number, pin;
	std::cout << " Enter account number followed by PIN ";
	std::cin >> account_number >> pin;
	std::cout << "You entered:" << account_number << "  pin" << pin << "\n";
	return 0;
}
