#include <iostream>

int main() {
	
	constexpr double smallPrice = 9.99;
	constexpr double medPrice = 13.99;
	constexpr double largePrice = 14.99;
	constexpr double salesTax = 1.13;
	constexpr const char* storeName = "Zaid's Pizza Palace";

	int smallPizza;
	int medPizza;
	int largePizza;
	double subTotal; 
	double taxAmount;
	double total;

	std::cout << "How many small pizzas: ";
	std::cin >> smallPizza;

	std::cout << "How many medium pizzas: ";
	std::cin >> medPizza;

	std::cout << "How many large pizzas: ";
	std::cin >> largePizza;

	subTotal = 
		(smallPizza * smallPrice)
		+ (medPizza * medPrice)
		+ (largePizza * largePrice);	

	taxAmount =  subTotal * (salesTax - 1);

	
	total = subTotal * salesTax;

	


	std::cout << storeName << std::endl;
	std::cout << "You ordered: \n";
	std::cout << smallPizza <<  " small pizzas.\n";
	std::cout << medPizza << " medium pizzas.\n";
	std::cout << largePizza << " large pizzas.\n";
	std::cout << "SubTotal: " <<  subTotal << std::endl;
	std::cout << "Tax: " <<  taxAmount << std::endl;
	std::cout << "Total: " << total << std::endl;



	return 0;
}	
