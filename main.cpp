/* 
 * File:   main.cpp
 * Author: Kendra Devlahovicht
 * Created: 10/05/2024
 * Purpose: Homework Lab Assignment 4 Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes
void q1();
void q2();
void q3();
void q4();
void q5();
void q6();
void q7();
void q8();
void q9();
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option;//Option to choose from menu
    unsigned char nOpts; //Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpts = '9';//In this case we have 3 options
    
	do{ 
        //Display user choice
        cout << "Choose from the options displayed"<<endl;
        cout << "1 -> Question 1 - Gaddis_9thEd_Chap5_Prob1_Sum" << endl;
        cout << "2 -> Question 2 - Gaddis_9thEd_Chap5_Prob7_PayInPennies" << endl;
        cout << "3 -> Question 3 - Gaddis_9thEd_Chap5_Prob13_MinMax" << endl;
        cout << "3 -> Question 4 - Gaddis_9thEd_Chap5_Prob22_Rectangle" << endl;
        cout << "3 -> Question 5 - Gaddis_9thEd_Chap5_Prob23_Pattern" << endl;
        cout << "3 -> Question 6 - Savitch_9thEd_Chap4_Prob1_MPG" << endl;
        cout << "3 -> Question 7 - Savitch_9Ed_Chap4_Prob2_FuelEff" << endl;
        cout << "3 -> Question 8 - Savitch_9Ed_Chap4_Prob4_Inflation" << endl;
        cout << "3 -> Question 9 - Savitch_9Ed_Chap4_Prob9_2or3Max\n\n\n" << endl;
        cin  >> option;//Read in the option
		
        //Use a switch case to implement
        switch( option ){
            case '1':
                q1();
                break;
            case '2':
                q2();
                break;
            case '3':
                q3();
                break;
            case '4':
                q4();
                break;
            case '5':
                q5();
                break;
            case '6':
                q6();
                break;
            case '7':
                q7();
                break;
            case '8':
                q8();
                break;
            case '9':
                q9();
                break;
             default:
                 break;
        }
    } while( option <= nOpts );
    
    //Exit the Program
    return 0;
}

void q1(){
    //Declare Variables
    unsigned int input{}, sum{};
    
    cin >> input;
    for(unsigned int i = 1; i <= input; ++i){
        sum+=i;
    }
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Sum = " << sum;
}
void q2(){
    //Set the random number seed
    
    int salary{}, days{}, penny = 1;
    float inc;
    
    cin >> days;
    
    //Display the outputs
    if(days < 1)
        cout << "Please enter a number of days greater than 0.";
    else
    {
        for(unsigned int i = 0; i < days; ++i)
        {
            salary += penny;
            penny *= 2;
        }
        cout << "Pay = $" << fixed << setw(4) << setprecision(2) << (salary * 0.01);
    }
    //Exit stage right or left!
}
void q3(){
    //Set the random number seed
    
    //Declare Variables
    int input, max{}, min{};
    cin >> input;
    max = input, min = input;
    
    while(input != -99){
        if(input < min) min = input;
        if(input > max) max = input;
        
        cin >> input;
    }
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Smallest number in the series is " << min << '\n';
    cout << "Largest  number in the series is " << max;
    //Exit stage right or left!
}
void q4(){
    //Set the random number seed
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    unsigned length;
    char letter;
    string line = "";
    
    cin >> length;
    cin >> letter;
    
    //create a row
    for(int i = 0; i < length; i++)
    {
        if(length <= 15) line += letter;
        else cout << "Please pick an number above 0 and less than 15.\n";
    }
    
    //print rows until desired length
    for(int i = 0; i < length; i++)
    {
        if(i >= length - 1) cout << line;
        else cout << line << endl;
    }
    //Exit stage right or left!
}
void q5(){
    //Set the random number seed
    
    //Declare Variables
    const char SYMBOL = '+';
    int size{};
    string line{}, sub{};
    
    //Initialize or input i.e. set variable values
    cin >> size;
    
    //Map inputs -> outputs
    //iterate through a loop, twice the size of 'size'
    if(line.length() <= size)
    {
        //FOR LOOP FOR THE LENGTH OF THE INPUT
        for(int i = 0; i < size; i++)
        {
            //ADDS A '+' TO THE LINE, THEN PRINTS IT
            line += SYMBOL;
            cout << line << endl << endl;
        }
    }
    
    if(line.length() >= size)//IF STATEMENT FOR INPUT HITTING MAX VALUE
    {
        //FOR LOOP FOR THE LENGTH OF THE INPUT
        for(int i = 0; i < size; i++)
        {
            //IF STATEMENT TO CHECK IF THE LOOP IS ALMOST DONE
            if(i <= size - 2)
            {
                //REMOVES A '+' TO THE LINE, THEN PRINTS IT
                sub = line.substr(0, (size - i));
                cout << sub << endl << endl;
            }
            else
            {
                //IF THE LOOP IS ALMOST DONE, DON'T INPUT AN EXTRA << endl;
                sub = line.substr(0, (size - i));
                cout << sub;
            }
        }
    } 
    //Display the outputs

    //Exit stage right or left!
}
void q6(){
    //Set the random number seed
    
    //Declare Variables
    const float ltrCon = 0.264179;
    float liters{}, MPG{}, miles{};
    char again{};
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do{
        //ASKS FOR LITERS IN GAS
        cout << fixed << setprecision(2) <<
        "Enter number of liters of gasoline:\n\n";
        cin >> liters;
        
        //ASKS FOR MILES TRAVALED
        cout << "Enter number of miles traveled:\n\n";
        cin >> miles;
        
        //MPG CONVERSION
        MPG = miles / (ltrCon * liters);
    
        //PRINTS MPG
        cout << "miles per gallon:\n";
        cout << MPG << "\nAgain:\n";
        
        //PRINTS AN << endl ONLY IF LOOP CONTINUES
        cin >> again;
        if(again == 'y' || again == 'Y')
            cout << endl;
        
    }
    while(again != 'n');

    //Exit stage right or left!
}
void q7(){
    //car 1
    float liters1, MPG1, miles1;
    
    //CAR 2
    float liters2, MPG2, miles2;
    
    const float ltrCon = 0.264179;
    char again;

    //Display the outputs
    do{
                    //CAR 1
        //ASKS FOR LITERS IN GAS
        cout << fixed << setprecision(2) <<
        "Car 1\nEnter number of liters of gasoline:\n";
        cin >> liters1;
        
        //ASKS FOR MILES TRAVALED
        cout << "Enter number of miles traveled:\n";
        cin >> miles1;
        
        //MPG CONVERSION
        MPG1 = miles1 / (ltrCon * liters1);
    
        //PRINTS MPG FOR CAR 1
        cout << "miles per gallon: ";
        cout << MPG1;
        
                    //CAR 2
        cout << "\n\nCar 2\nEnter number of liters of gasoline:\n";
        cin >> liters2;
        
        //ASKS FOR MILES TRAVALED
        cout << "Enter number of miles traveled:\n";
        cin >> miles2;
        
        //MPG CONVERSION
        MPG2 = miles2 / (ltrCon * liters2);
        
        //PRINTS MPG FOR CAR 2
        cout << "miles per gallon: ";
        cout << MPG2;
        
        //CALCULATING AND PRINTING WHICH HAS HIGHER MPG
        if(MPG2 > MPG1)
            cout << "\n\nCar 2 is more fuel efficient\n\n";
        else if(MPG1 > MPG2)
            cout << "\n\nCar 1 is more fuel efficient\n\n";
        else
            cout << "\n\nBoth cars are equally efficient\n\n";
            
        cout << "Again:\n";
        
        //PRINTS AN << endl ONLY IF LOOP CONTINUES
        cin >> again;
        if(again == 'y' || again == 'Y')
            cout << endl;
        
    }
    while(again != 'n');
}
void q8(){
    //Set the random number seed
    
    //Declare Variables
    float yrAgo{}, yrNow{}, infRate{}, diff{};
    char again{};
    
    //DO WHILE AGAIN DOES NOT EQUAL 'n'
    do{
        //FORMATTING OUTPUTS & ASKING FOR INPUTS
        cout << fixed << setprecision(2) <<
        "Enter current price:\n";
        cin >> yrNow;
        
        cout <<
        "Enter year-ago price:\n";
        cin >> yrAgo;
        
        //CALCULATING INFLATION RATE
        diff = yrNow - yrAgo;
        infRate = (diff / yrAgo) * 100;
        
        //PRINTING INFLATION RATE
        cout <<
        "Inflation rate: " << infRate << "%\n\n";
        cin >> again;
        
        //IF STATEMENT TO SEE IF LOOP IS ENDING, FORMAT CORRECTLY
        if(again == 'n')
            cout << "Again:\n";
        else
            cout << "Again:\n\n";
        
    }while(again != 'n');

    //Exit stage right or left!
}
void q9(){
    //Set the random number seed
    
    //Declare Variables
    float num1, num2, num3, maxOf2{}, maxOf3{};
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    
    //FORMAT OUTPUT & ASK FOR INPUTS
    cout << fixed << setprecision(1) <<
    "Enter first number:\n\n";
    cin >> num1;
    
    cout << 
    "Enter Second number:\n\n";
    cin >> num2;
    
    cout <<
    "Enter third number:\n\n";
    cin >> num3;
    
    cout << "Largest number from two parameter function:\n";
    
    //FIND LARGEST NUMBER FROM TWO PARAMETERS
    if( (num1 - num2) > 0)
        maxOf2 = num1;
    else
        maxOf2 = num2;
    
    //FIND LARGEST NUMBER FROM THREE PARAMETERS
    if( num1 > num2 && num1 > num3)
        maxOf3 = num1;
    else if( num2 > num1 && num2 > num3)
        maxOf3 = num2;
    else if( num3 > num1 && num3 > num2)
        maxOf3 = num3;
    
    //OUTPUT LARGEST NUMBER FROM TWO PARAMETERS & THREE PARAMETERS
    cout << maxOf2 << "\n\nLargest number from three parameter function:\n" << maxOf3 << "\n";
    
    //Exit stage right or left!
}