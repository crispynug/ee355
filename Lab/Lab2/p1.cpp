#include <iostream>
#include <string>
#define arr_length 8
using namespace std;

class Grade{
	
	private:
		int grade;
	public:
		string name;
		void set_grade(string n, int g){
			grade = g;
			name = n;
			return;
		};
		int get_grade(){
			return grade;
		};
};

class GradeBook{
	//Note: assume the length of array is fixed (8).
	private:
		Grade gb[arr_length];
	public:
	   
	   GradeBook(int grades[], string names[]){
			for(int i = 0; i < arr_length; i++){
				gb[i].set_grade(names[i],grades[i]);
			}
		};
	   
		void set_value(int grades[], string names[]){
			for(int i = 0; i < arr_length; i++){
				gb[i].set_grade(names[i],grades[i]);
			}
			return;
		};
		void print_book(){
			
			for(int i = 0; i < arr_length; i++){
				cout<<"Name: "<<gb[i].name<<" Grade: "<<gb[i].get_grade()<<endl;
			}
			return;
		};
		void print_top(int n){
			//if greater than 7 just print whole grade book
			if(n > arr_length -1){
				cout<<"Error value too large printing whole gradebook: "<<endl; 
				print_book();
				return;
			}
							
			Grade* top_n = new Grade[n]; //array for top_n students
			int min_max = 0; //tracks minimum grade within top n
			int loc = 0; //tracks location of minimum grade
			//loop through whole grade book
			for(int i = 0; i < arr_length; i++){
				//put first n elements inside top_n
				if(i < n){
					top_n[i].set_grade(gb[i].name,gb[i].get_grade());
					if(min_max < gb[i].get_grade()){
						min_max = gb[i].get_grade();
						loc = i;
					}
				
				}//after n elements, compare iteration to min value
			 	else if(min_max < gb[i].get_grade()){
					top_n[loc].set_grade(gb[i].name,gb[i].get_grade());
					min_max = gb[i].get_grade();
					}
			
				else continue; //if no new value in top_n conintue to next iteration

				//refind mininum val within top_n if top_n changed
				for(int j = 0; j < n; j++){
					if(top_n[j].get_grade() < min_max){
	
						min_max = top_n[j].get_grade();
						loc = j;
			
					}

				}
			}
			//print out top_n
			cout<<"Top "<< n << " Students: " << endl;
			for(int i = 0; i < n; i++){
				cout<<"Name: "<<top_n[i].name<<" Grade: "<<top_n[i].get_grade()<<endl;
			}
		};
};

int main(){
	int grades[8] = {80,87,92,91,29,68,76,88};
	string names[8] = {"a","b","c","d","e","f","g","h"};

	//Write your code here
	GradeBook grade_book(grades,names);
	//grade_book.set_value(grades,names);
	grade_book.print_book();
	grade_book.print_top(3);
	grade_book.print_top(20);
	return 0;
}
