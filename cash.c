#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //get value 
    float value;
    do
    {
        value = get_float("please provide change amount: ");
    }
    //Do not accept values less then 0
    while (value < 0);
    
    //round value and convert to int
    int newValue = round(value * 100);
    
    
    //calculate
    int total = 0;
    
    //loop through and add to total to get end results
    for (int i = newValue; i >= 25; i -= 25)
    {
        total++;
        newValue -= 25;
    }
    
    for (int i = newValue; i >= 10; i -= 10)
    {
        total++;
        newValue -= 10;
    }
    
    for (int i = newValue; i >= 5; i -= 5)
    {
        total++;
        newValue -= 5;
    }
    
    for (int i = newValue; i >= 1; i -= 1)
    {
        total++;
        newValue -= 1;
    }
    
    //print total amount of coins to use
    printf("%i\n", total);
}
