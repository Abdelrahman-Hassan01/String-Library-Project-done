// String Library Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "clsString.h"
int main()
{
    
    clsString string1("Ahmed Aly 5alid Ahemd aly");

    cout << "Original String: " << string1.Value() << endl;
    cout << "Length: " << string1.Length() << endl;
    cout << "Number of Vowels: " << string1.CountVowels() << endl;
    cout << "Number of Words: " << string1.CountWords() << endl;
    cout << "Capital Letters: " << string1.CountCapitalLetters() << endl;
    cout << "Small Letters: " << string1.CountSmallLetters() << endl;

    cout << "\nFirst letters of each word:";
    string1.PrintFirstLetterOfEachWord();

    cout << "\nVowels in the string:";
    string1.PrintVowels();

    cout << "\n\nEach word in the string:";
    string1.PrintEachWordInString();

    // ÊÚÏíá Úáì ÇáäÕ
    string1.UpperFirstLetterOfEachWord();
    cout << "\nAfter Upper First Letter: " << string1.Value() << endl;

    string1.LowerAllString();
    cout << "After Lower All: " << string1.Value() << endl;

 
    string1.InvertAllStringLettersCase();
    cout << "After Invert Case : " << string1.Value() << endl;

    string1.RemovePunctuationsFromString();
    cout << "After Remove Punctuions: " << string1.value;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
