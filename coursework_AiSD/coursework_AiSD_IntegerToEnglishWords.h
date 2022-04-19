#pragma once
#include <iostream>
#include <string>

using namespace std;

// Class IntegerToEnglishWords to convert integer numbers to English words
class IntegerToEnglishWords {

    // Array contains words to representation numbers below Twenty
    const string belowTwenty[20] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

    //Array contains words to tens representation 
    const string tens[10] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    // Recirsive convert integer numbers to English words
    string ConvertNumber(int NumberToConvert) {
        string converted_number;

        if (NumberToConvert < 20)
            converted_number = belowTwenty[NumberToConvert];
        else if (NumberToConvert < 100)
            converted_number = tens[NumberToConvert / 10] + " " + belowTwenty[NumberToConvert % 10];
        else if (NumberToConvert < 1000)
            converted_number = ConvertNumber(NumberToConvert / 100) + " Hundred " + ConvertNumber(NumberToConvert % 100);
        else if (NumberToConvert < 1000000)
            converted_number = ConvertNumber(NumberToConvert / 1000) + " Thousand " + ConvertNumber(NumberToConvert % 1000);
        else if (NumberToConvert < 1000000000)
            converted_number = ConvertNumber(NumberToConvert / 1000000) + " Million " + ConvertNumber(NumberToConvert % 1000000);
        else
            converted_number = ConvertNumber(NumberToConvert / 1000000000) + " Billion " + ConvertNumber(NumberToConvert % 1000000000);

        // If number multiple 10, trim final excess space
        if ((NumberToConvert > 10) && (NumberToConvert % 10 == 0))
            converted_number.erase(converted_number.find_last_not_of(' ') + 1);

        return converted_number;
    }

public:
    // Convert integer numbers to English words
    string NumberToWords(int NumberToConvert) {
        if (NumberToConvert >= 0) {
            if (NumberToConvert == 0)
                return "Zero";
            return ConvertNumber(NumberToConvert);
        }
        else {
            throw out_of_range("Entered number is negative. Please, try input non negative number!");
        }
    }

    // Print converted integer numbers
    void PrintNumberInWordsRepresentation(int NumberToConvert) {
        cout << NumberToWords(NumberToConvert);
    }
};

