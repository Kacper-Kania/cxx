#include <iostream>
#include <cstdlib>

auto main() -> int {

int szer=0;
int wys=0;

std::cout << "Podaj szerokosc prostokata = ";
std::cin >> szer;

std::cout << "Podaj wysokosc prostokata = ";
std::cin >> wys;


for(int i=0;i<=wys;i++)
{
std::cout<<"*";
}

std::cout<< "\n";

for (int k=0;k<=szer;k++)
{
std::cout<<"*";
	for(int i = 0;i<wys; i++){
std::cout<< " ";
}
std::cout << "*\n";

}

for (int i = 0; i<szer; i++){
std::cout << "*";
}
std::cout << "\n";
return 0;
} 

