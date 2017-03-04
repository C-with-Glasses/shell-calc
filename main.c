//
//  main.c
//  Calc
//
//  Created by Flynn Sellers on 02/02/2017.
//  Copyright © 2017 Flynn Sellers. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

void CalcPlus(double numberOne, double numberTwo)
{
    double total = numberOne + numberTwo;

    printf("%lf\n", total);
}

void CalcMinus(double numberOne, double numberTwo)
{
    double total = numberOne - numberTwo;
    
    printf("%lf\n", total);
}

void CalcTimes(double numberOne, double numberTwo)
{
    double total = numberOne * numberTwo;
    
    printf("%lf\n", total);
}

void CalcDivide(double numberOne, double numberTwo)
{
    double total = numberOne / numberTwo;
    
    printf("%lf\n", total);
}

int main(int argc, const char * argv[]) 
{
    if(argc != 4)
    {
        fprintf(stderr, "Usage: Calc <number> <+, -, x, %%> <number>\n");
        
        return 0;
    }
    
    double numberOne, numberTwo;

    numberOne = atoi(argv[1]);
    
    const char *symbol = argv[2];
    
    numberTwo = atoi(argv[3]);
    
    if(*symbol == '+')
    {
        CalcPlus(numberOne, numberTwo);
    }
    
    if(*symbol == '-')
    {
        CalcMinus(numberOne, numberTwo);
    }
    
    if(*symbol == 'x')
    {
        CalcTimes(numberOne, numberTwo);
    }
    
    if(*symbol == '%')
    {
        CalcDivide(numberOne, numberTwo);
    }
    
    return 0;
}
