//Problem B

#include <stdio.h>

int main(){

float mm;

printf("Enter a rainfall measurement in mm: ");
scanf("%f",&mm);

	if(mm > 0){
		if (mm > 0 && mm < 2.55)
        printf("Measurement: %.2f (Light Rain).\n Flooding is still possible in certain areas.\n", mm);      
		
		else
		
        if (mm >= 2.55 && mm <= 7.5)	
		printf("Measurement: %.2f (Moderate Rain).\n Flooding is still possible in certain areas.\n", mm); 
            
		else
   
		if (mm > 7.55 && mm <= 15)	
		printf("Yellow Rainfall Advisory!\n Measurement: %.2f (Heavy Rain).\n Flooding is possible \n Response: Monitor the weather condition.\n", mm); 
            
		else
         
		if (mm > 15 && mm <= 30)	
		printf("Orange Rainfall Advisory!!\n Measurement: %.2f (Intense Rain).\n Flooding is threatening \n Response: Alert for possible evacuation.\n", mm); 
            
		else
			
		if (mm > 30)	
		printf("Red Rainfall Advisory!!!\n Measurement: %.2f (Torrential Rain).\n Serious flooding expected in low lying areas \n Response: Evacuation\n", mm); 
            
				
		 
}
	
	else
	printf("Invalid input. %.2f is not a positive mm measurement\n", mm);


	return 0;
	
	}