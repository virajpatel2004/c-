#include<iostream>

using namespace std;

main(){
	
	char ch;
  
  cout<<"enter the text:"<<endl;
  cin>>ch;
  
  if(ch >= '0' && ch <= '9'){
  	     cout << endl << ch << " is DIGIT.";
  }
  else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
  	
  	  cout << endl << ch << " is ALPHABET.";
  }
   else{
     cout << endl << ch << " is SPECIAL CHARACTER.";
}
  	
  }	


