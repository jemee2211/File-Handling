#include<stdio.h>
#include<string.h>
main(){
	
	FILE *s;
	
	char name[100];
	
	s= fopen("Demo.txt","w");
	if(s ==NULL){
		
		printf("Error");
	}
	else{
		
		int i;
		
		printf("Enter Text:");
		gets(name);
		
		for(i=0; i<strlen(name); i++){
			
			fputc(name[i],s);
		}
		fclose(s);
	}
}
