#include <iostream>
using namespace std;

int main(){

	int number;
	for (number = 1; number < 101; number++){
		if(number % 3 == 0)
			{cout<<"Fizz ";}
			
		if(number % 5 == 0)
			cout<<"Buzz ";
		//////////////////////////////////////////////	
		if((number % 3 == 0)&&(number % 5 == 0)){
			cout<<"FizzBuzz "<<endl;
		//////////////////////////////////////////////	
	}
		if((number % 3 != 0)&&(number % 5 != 0)){
			cout<<number<<" ";
	}	
	
	
		}
		
	return 0;
	}
