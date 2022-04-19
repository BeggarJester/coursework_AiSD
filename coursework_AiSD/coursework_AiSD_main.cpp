#include "coursework_AiSD_IntegerToEnglishWords.h"

int main()
{
	cout << "Welcome to IntegerToEnglishWords Converter!\n\n";

	IntegerToEnglishWords MyIntegerToEnglishWords;

	cout << "Try to convert negative number:\n";

	try {
		MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(-5);
	}
	catch (const out_of_range error) {
		cout << error.what() << "\n\n";
	}

	cout << "Try to convert 0:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(0);

	cout << "\n\nTry to convert number below 20:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(17);

	cout << "\n\nTry to convert number below 100:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(73);

	cout << "\n\nTry to convert number below 100 and multiple 10:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(30);

	cout << "\n\nTry to convert number below 1000:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(173);

	cout << "\n\nTry to convert number below 10000:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(1734);

	cout << "\n\nTry to convert number below 100000:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(17345);

	cout << "\n\nTry to convert number below 1000000:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(173456);

	cout << "\n\nTry to convert number below 10000000:\n";

	 MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(1734567);

	cout << "\n\nTry to convert number below 100000000:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(17345678);

	cout << "\n\nTry to convert number below 1000000000:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(173456789);

	cout << "\n\nTry to convert number below 10000000000 and multiple 10:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(1734567890);

	cout << "\n\nTry to convert number below 10000000000:\n";

	MyIntegerToEnglishWords.PrintNumberInWordsRepresentation(1734567899);

	cout << "\n";
}
