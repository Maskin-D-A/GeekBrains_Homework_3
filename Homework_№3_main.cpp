#include <iostream>


void first_mission(){
	extern int a; 
	extern int b; 
	extern int c;
	extern int d;
	std::cout << (static_cast<float>(a)*(static_cast<float>(b)-(static_cast<float>(c)/static_cast<float>(d)))) << '\n';
}

void second_mission(){
	int number = 15;
	std::cout << ((number < 21) ? number - 21 : 2*(number - 21)) << '\n';
}

void third_mission(){
	int array[3][3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int *ar = &array[0][0][0];
	std:: cout << *ar;
}


int main(){
	first_mission();
	second_mission();
	third_mission();
	return 0;
}
