// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.
#include <iostream>
using namespace std;

int main(){

int initial_population =  312032486;
int births, deaths, immigration, seconds_per_year;
// the births, deaths, and immigrations per year
seconds_per_year = 365*24*60*60;
births = seconds_per_year/7;
deaths = seconds_per_year/13;
immigration = seconds_per_year/45;

//population for each year
/*int year_1 = initial_population + 1*(births - deaths + immigration);
int year_2 = initial_population + 2*(births - deaths + immigration);
int year_3 = initial_population + 3*(births - deaths + immigration);
int year_4 = initial_population + 4*(births - deaths + immigration);
int year_5 = initial_population + 5*(births - deaths + immigration);*/

int population_change = 0;

for(int i=1;i<6;i++){
population_change = population_change+(births - deaths + immigration);
cout<<"population after " << i <<" years is "<< (initial_population+population_change)<<"\n"; 

}

    return 0;
}

