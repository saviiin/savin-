/* Write a program that takes name and age of a 5 persons as an input and
gives the degree of membership of the person as its output according to
following membership functions. */

#include<stdio.h>

struct Person{
	char name[50];
	int age;
};

int main(){
	int i;
	struct Person p[5];
	float b;
	
	for(i=0;i<5;i++){
		printf("Enter the name and age of %d person: \n",i+1);
		scanf("%s",&p[i].name);
	
		scanf("%d",&p[i].age);
		
		
	}
	for(i=0;i<5;i++){
		if(p[i].age<=20){
			printf("The degree of membership of %s is 1.\n",p[i].name);
		}
		else if(p[i].age>20 && p[i].age<=30){
			b = (30-p[i].age)*0.1;
			printf("The degree of membership of %s is %0.2f.\n",p[i].name,b);
		}
		else{
			printf("The degree of membership of %s is 0.\n",p[i].name);
		}
	}
	
	return 0;
}
