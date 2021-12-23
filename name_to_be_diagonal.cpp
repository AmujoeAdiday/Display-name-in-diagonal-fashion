//============================================================================
// Author      : AmuJoe Adiday
// Description : write a program to display the first name in odd number order,
// last name in even number order all in uppercase in diagonal.
//if there are more than 2 digits in odd and even number the setw(num):
//num needs to be decreased even more.
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
//using namespace std;


void display(){
	std::cout<<"Hello,  We are going to display your full name"
			<< "\nin diagonal."
			<<"\n**********************************************"
			<<"\nPLEASE pay attention when you enter your name."
	        <<"\n**********************************************\n"<<std::endl;
}

int main() {
	//call function
	display();

	std::string myName;
	std::cout<< "Enter your full name with only ONE space "
			<< "\nbetween first and last name"<<std::endl;

	//to get the letter even with space without stopping
	getline(std::cin, myName);

	int space = myName.find(" ",0);

	//find the length of full name to use in a loop
	int len = myName.size();

	// to change all letters to uppercase.
	transform(myName.begin(), myName.end(),myName.begin(), ::toupper);


	for(int i = 0; i < len; i++){
		// space is less than 10
		if(space<10){

			if(i<space){
				if((2*i+1)<10){
					std::cout << (2*i+1) << std::setw(i+2) << myName[i] << std::endl;
				}
				else{
					std::cout << (2*i+1) << std::setw(i+1) << myName[i] << std::endl;
				}
			}

			else if(i>space && i<=10 ){
				if(((i-space)*2)<10){
					std::cout << (i-space)*2 << std::setw(i+2) << myName[i] << std::endl;
				}
				else{
					std::cout << (i-space)*2 << std::setw(i+1) << myName[i] << std::endl;
				}
			}
			else if(i==space){
				std::cout<<" "<<std::endl;
			}
			else if(i>10){
				if(((i-space)*2)<10){
					std::cout << (i-space)*2 << std::setw(i+2) << myName[i] << std::endl;
				}
				else{
					std::cout << (i-space)*2 << std::setw(i+1) << myName[i] << std::endl;
				}
			}
		}
		// space is greater than 10
		else if(space>=10){
			if(i<10){
				if((2*i+1)<10){
					std::cout << (2*i+1) << std::setw(i+2) << myName[i] << std::endl;
				}
				else{
					std::cout << (2*i+1) << std::setw(i+1) << myName[i] << std::endl;
				}
			}
			else if(i>=10 && i<space){
				if((2*i+1)<10){
					std::cout << (2*i+1) << std::setw(i+2) << myName[i] << std::endl;
				}
				else{
					std::cout << (2*i+1) << std::setw(i+1) << myName[i] << std::endl;
				}

			}
			else if(i==space){
				std::cout<<" "<<std::endl;
			}
			else if(i>=space){
				if(((i-space)*2)<10){
					std::cout << (i-space)*2 << std::setw(i+2) << myName[i] << std::endl;
				}
				else{
					std::cout << (i-space)*2 << std::setw(i+1) << myName[i] << std::endl;
				}

			}
		}


	}
	return 0;
}
//Odd numbers: 2k+1
//Even numbers: 2k

