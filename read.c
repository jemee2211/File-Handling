#include<stdio.h>
#include<string.h>
main(){
	
	FILE *s;
	
	char name;
	
	s= fopen("Demo.txt","r");
	if(s ==NULL){
		
		printf("Error");
	}
	else{
		
		while(name != EOF){
			
			name =fgetc(s);
			printf("%c",name);
		}
		}
		fclose(s);
	}


