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
			if(n > 7){
				print_book();
				return;
			}
			Grade* top_n = new Grade[n];
			for(int i = 0; i < arr_length; i++){
				for(int j = 0; j < n; j++){
					if(i < n){
					//	top_n[i].grade = gb[i].grade;
					//	top_n[i].name = gb[i].name;
						break;
					}
					if(top_n[j].get_grade() < gb[i].get_grade()){
					//	top_n[j].grade = gb[i].grade;
					//	top_n[j].name = gb[j].grade;

					}
				}
			}

		}
};

int main(){
	int grades[8] = {80,87,92,91,29,68,76,88};
	string names[8] = {"a","b","c","d","e","f","g","h"};

	//Write your code here
	GradeBook grade_book;
	grade_book.set_value(grades,names);
	grade_book.print_book();
	return 0;
}
