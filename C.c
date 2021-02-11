//Problem C

#include <stdio.h>

int main(){

unsigned int m, d;

printf("Enter your numerical birth month: ");
scanf("%u",&m);
printf("Enter your numerical day of birth: ");
scanf("%u",&d);

	if(m>0 && d>0){
		
	if(m == 1 && d <= 31){
        if(d >= 20 && d <= 31){
           printf("Zodiac Sign: Aquarius\n");
           printf("Your Fate:\nYou have the body of a 19 year old. Please return it before it gets wrinkled.\n");
           }
        
	else {
           printf("Zodiac Sign: Capricorn\n");
           printf("Your Fate:\nDo what comes naturally. Seethe and fume and throw a tantrum.\n"); }        
        
	}

	if(m == 2 && d <= 29){
        if(d >= 20 && d <= 29){
           printf("Zodiac Sign: Pisces\n");
           printf("Your Fate:\nAfter your lover has gone you will still have PEANUT BUTTER!\n");
           }
        
	else {
           printf("Zodiac Sign: Aquarius\n");
           printf("Your Fate:\nYou have the body of a 19 year old. Please return it before it gets wrinkled.\n"); }        
        
	}
	
	if(m == 3 && d <= 31){
        if(d >= 21 && d <= 31){
           printf("Zodiac Sign: Aries\n");
           printf("Your Fate:\nDon't relax! It's only your tension that's holding you together.\n");
           }
        
	else {
           printf("Zodiac Sign: Pisces\n");
           printf("Your Fate:\nAfter your lover has gone you will still have PEANUT BUTTER!\n"); }        
        
	}
	
	if(m == 4 && d <= 30){
        if(d >= 21 && d <= 30){
           printf("Zodiac Sign: Taurus\n");
           printf("Your Fate:\nYou will be reincarnated as a toad; and you will be much happier.\n");
           }
        
	else {
           printf("Zodiac Sign: Aries\n");
           printf("Your Fate:\nDon't relax! It's only your tension that's holding you together.\n"); }        
        
	}
	
	if(m == 5&& d <= 31){
        if(d >= 21 && d <= 31){
           printf("Zodiac Sign: Gemini\n");
           printf("Your Fate:\nYou are wise, witty, and wonderful, but you spend too much time reading this sort of trash.\n");
           }
        
	else {
           printf("Zodiac Sign: Taurus\n");
           printf("Your Fate:\nYou will be reincarnated as a toad; and you will be much happier.\n"); }        
        
	}
	
	if(m == 6 && d <= 30){
        if(d >= 21 && d <= 30){
           printf("Zodiac Sign: Cancer\n");
           printf("Your Fate:\nThis will be a memorable month -- no matter how hard you try to forget it.\n");
           }
        
	else {
           printf("Zodiac Sign: Gemini\n");
           printf("Your Fate:\nYou are wise, witty, and wonderful, but you spend too much time reading this sort of trash.\n"); }        
        
	}
	
	//half year 
	
	if(m == 7 && d <= 31){
        if(d >= 21 && d <= 31){
           printf("Zodiac Sign: Leo\n");
           printf("Your Fate:\nYou are scrupulously honest, frank, and straightforward. Therefore you have few friends.\n");
           }
        
	else {
           printf("Zodiac Sign: Cancer\n");
           printf("Your Fate:\nThis will be a memorable month -- no matter how hard you try to forget it.\n"); }        
        
	}
	
	if(m == 8 && d <= 31){
        if(d >= 21 && d <= 31){
           printf("Zodiac Sign: Virgo\n");
           printf("Your Fate:\nExpect the worst, it's the least you can do.\n");
           }
        
	else {
           printf("Zodiac Sign: Leo\n");
           printf("Your Fate:\nYou are scrupulously honest, frank, and straightforward. Therefore you have few friends.\n"); }        
        
	}
	
	if(m == 9 && d <= 30){
        if(d >= 21 && d <= 30){
           printf("Zodiac Sign: Libra\n");
           printf("Your Fate:\nGood day to let down old friends who need help.\n");
           }
        
	else {
           printf("Zodiac Sign: Virgo\n");
           printf("Your Fate:\nExpect the worst, it's the least you can do.\n"); }        
        
	}

	if(m == 10 && d <= 31){
        if(d >= 21 && d <= 31){
           printf("Zodiac Sign: Scorpio\n");
           printf("Your Fate:\nYou will be attacked next Wednesday at 3:15 p.m. by six samurai sword wielding purple fish glued to Harley-Davidson motorcycles. Oh, and have a nice day!\n");
           }
        
	else {
           printf("Zodiac Sign: Libra\n");
           printf("Your Fate:\nGood day to let down old friends who need help.\n"); }        
        
	}
	
	if(m == 11 && d <= 30){
        if(d >= 21 && d <= 30){
           printf("Zodiac Sign: Sagittarius\n");
           printf("Your Fate:\nSomeone whom you reject today, will reject you tomorrow.\n");
           }
        
	else {
           printf("Zodiac Sign: Scorpio\n");
           printf("Your Fate:\nYou will be attacked next Wednesday at 3:15 p.m. by six samurai sword wielding purple fish glued to Harley-Davidson motorcycles. Oh, and have a nice day!\n"); }        
        
	}
	
	if(m == 12 && d <= 31){
        if(d >= 21 && d <= 31){
           printf("Zodiac Sign: Capricorn\n");
           printf("Your Fate:\nDo what comes naturally. Seethe and fume and throw a tantrum.\n");
           }
        
	else {
           printf("Zodiac Sign: Sagittarius\n");
           printf("Your Fate:\nSomeone whom you reject today, will reject you tomorrow.\n"); }        
        
	}
	
}
	
	else 
	printf("Invalid input.\n"); 

	return 0;
	
	}
