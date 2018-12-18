//Write a program to print this pattern
/* 4 4 4 4 4 4 4
   4 3 3 3 3 3 4
   4 3 2 2 2 3 4
   4 3 2 1 2 3 4
   4 3 2 2 2 3 4
   4 3 3 3 3 3 4
   4 4 4 4 4 4 4   */

//including libraries
#include<iostream>
using namespace std;

//declaring main class
int main(){
	//declaring variables
	int n, i, j, cn, end, p;
	//asking user to enter the size of pattern
	cout<<"Enter size of pattern."<<endl;
	//accepting values
	cin>>n;
	//initializing variables
	end=n*2-1; cn=0;//counter variable to count columns
	j=0;//to generate number
	//running for loop for rows

	for(i=0; i<=(end-1)/2; i++){//first half+1
		j=0; cn=0; 
		while(cn<(end-i)){ //generating columns
			//printing
			cout<<(n-j)<<" ";
			if(j!=i){
				j++;//changing the value of j to change the values appropriately
			}
			cn++;
		}
		while(cn<end){//generating columns
			if(j!=0){j--;}//checking value of j
			cout<<(n-j)<<" "; //printing
			cn++;
		}
		cout<<endl;//taking cursor to next line
	}

	
	for(i=0; i<(end-1)/2; i++){ //second half
		j=0; cn=0; p=n-i-2; //setting appropriate values to generate columns
		while(cn<(n+i)){//generating columns
			cout<<(n-j)<<" ";//printing
			if(j!=p){//checking value of j
				j++;
			}
			cn++;
		}
		while(cn<end){//generating remaining columns
			cout<<(n-j)<<" ";//printing
			if(j!=0){ j--;}//checking value of j
			cn++;
		}
		cout<<endl;//taking cursor to next line
	}
	//returning integer value to main function		
	return 0;
}	
		
