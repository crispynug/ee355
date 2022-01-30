#include "stdio.h"
#include "string.h"
#include <stdlib.h>


void file_word_count(const char *file_name){
	FILE *input = fopen(file_name, "r"); //open input text
	char input_txt[500]; //string for holding each word
	char *distinct_words[500]; //array of strings for distinct words
	int  counter = 0; //counts number of distinct words
	
	//if input file doesn't open print error
	if(input == NULL){
		printf("Could not open file: %s",file_name);
	}
	
	
	else{
	
	
	   //reading input file
		while(fscanf(input,"%s",input_txt)!= EOF){
		   int flag = 0; //flag if for repeated word
			for(int i = 0; i<counter;i++){
				if(strcasecmp(input_txt,distinct_words[i]) == 0){ //if repeated word
				      flag = 1;
			      	break;
				}				
			}
			if(flag == 0){
		      distinct_words[counter] = (char *) malloc(sizeof(input_txt)); //allocates memory for new distinct work
		      strcpy(distinct_words[counter],input_txt); //copies distinct word
		      counter++;
		   }
 
		}		
		fclose(input);
		
		
		//writing output file
		FILE *output = fopen("out.txt", "w");
		fprintf(output,"Number of distinct words: %d \n",counter);
		fprintf(output,"List of distinct words: ");
		for(int i = 0; i < counter; i++){
		   fprintf(output, "%s ",distinct_words[i]);
		}
		fclose(output);
	}
	
	return;

}

int main(){

	file_word_count("words.txt");

}
