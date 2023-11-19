#include "Pets.h"

int main() {
	Dog dog("Ted", 15, 7, "labrador", "Short");
	dog.print();
	cout << endl;
	Cat cat("Tom", 6.5, 9, "Asian", "Long");
	cat.print();
	cout << endl;
	Parrot parrot("Jack", 3, 6, "lory", "more");
	parrot.print();
}