#include <iostream>
using namespace std;

class Sample
{
private:
	int x;
	double y;
public :
	Sample(); //Constructor 1
	Sample(int); //Constructor 2
	Sample(int, int); //Constructor 3
	Sample(int, double); //Constructor 4
	void print_data_members();
};

//Constructor1
Sample::Sample(){
	
	x = 0;
	y = 0;
}

//Constructor 2
Sample::Sample(int a){
	
	x = a;
	y = 0;

}

//Constructor 3
Sample::Sample(int a, int b){

	x = a;
	y = float(b);

}

//Constructor 4
Sample::Sample(int a, double b){

	x = a;
	y = b;

}

void Sample::print_data_members(){

	cout<<"x:"<<x<<" y:"<<y<<endl;
}

int main(){
	
	//constructor1
	Sample s1;
	cout<<"constructor1 ";
	s1.print_data_members();

	//constructor2
	Sample s2(5);
	cout<<"constructor2 ";
	s2.print_data_members();


	//constructor3
	Sample s3(5,7);
	cout<<"constructor3 ";
	s3.print_data_members();
			
	
	//constructor4
	Sample s4(5,2.2);
	cout<<"constructor4 ";
	s4.print_data_members();

}
