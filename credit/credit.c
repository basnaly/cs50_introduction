#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

long get_number(void);
int calculate_sum(long number);
bool is_valid(int sum);
bool is_amex(false);
bool is_master(false);
bool is_visa(false);
string check_card(is_valid(true))

int main(void)
{
    // Ask for a credit card number
    long number = get_number();

    // Calculate sum of credit card digts
    int sum = calculate_sum(number);
}

long get_number(void)
{
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);
    return number;
}

int calculate_sum(long number)
{
    int sum_even;
    int sum_odd;
    for (int i = 0; number <= 0; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + i;
        }
        else
        {
            int double = i * 2;
            if (double > 9)
            {
                double = 1 + (double - 10);
            }
            sum_odd = sum_odd + double;
        }
    }
    return sum_even + sum_odd;
}

bool is_valid(int sum)
{
    if (sum % 10 === 0)
    {
        return true;
    }
    return false;
}

bool is_amex(long number)
{
    int start1 = 34;
    int start2 = 37;
    int digits = 15;
    for (int i = 0; i < digits; i++) {
        rem = number % 10;
        number = (number - rem) /10;
        if ((number == start1 && i == (digits - 3)) || (number == start2 && i == (digits - 3)))
        {
            return true
        }
        return false
    }
}

bool is_master(long number)
{
    int start1 = 51;
    int start2 = 52;
    int start3 = 53;
    int start4 = 54;
    int start5 = 55;
    int digits = 16;
    for (int i = 0; i < digits; i++) {
        rem = number % 10;
        number = (number - rem) /10;
        if ((number == start1 && i == (digits - 3)) || (number == start2 && i == (digits - 3)) || (number == start3 && i == (digits - 3)) || (number == start4 && i == (digits - 3)) || (number == start5 && i == (digits - 3)))
        {
            return true
        }
        return false
    }
}

bool is_visa(long number)
{
    int start = 4;
    int digits1 = 13;
    int digits2 = 16;
    for (int i = 0; i < digits; i++) {
        rem = number % 10;
        number = (number - rem) /10;
        if ((number == start && i == (digits1 - 2)) || (number == start && i == (digits2 - 2)))
        {
            return true
        }
        return false
    }
}

string check_card()
{
    if (is_valid(false))
    {
        return "INVALID";
    }
    else if (is_amex(true))
    {
        return "AMEX";
    }
    else if (is_master(true))
    {
        return "MASTERCARD";
    }
    else if (is_visa(true))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}