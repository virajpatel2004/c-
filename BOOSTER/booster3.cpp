#include<iostream>

using namespace std;

main(){
	
	char vo;
	char a;
	
	vo='a','e','i','o','u';
	
	cout<<"Enter the character  : ";
	cin>>a;
	
	if(vo==a){
		cout<<"  is a vowel";
	}
	else{
		cout<<"  is a consonant";
	}
}
