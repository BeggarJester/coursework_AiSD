#include "pch.h"
#include "CppUnitTest.h"

#include "../coursework_AiSD/coursework_AiSD_IntegerToEnglishWords.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace courseworkAiSDUnitTest
{
	TEST_CLASS(courseworkAiSDUnitTest)
	{
	public:
		
		TEST_METHOD(NumberToWordsTest)
		{
			IntegerToEnglishWords MyIntegerToEnglishWords;

			try {
				MyIntegerToEnglishWords.NumberToWords(-5);
			}
			catch (const out_of_range error) {
				Assert::AreEqual("Entered number is negative. Please, try input non negative number!", error.what());
			}

			Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(0) == "Zero");

			Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(17) == "Seventeen");
			
			Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(30) == "Thirty");

			Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(123) == "One Hundred Twenty Three");

			Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(12345) == "Twelve Thousand Three Hundred Forty Five");

			Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(1234567) == "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven");
		}

		TEST_METHOD(PrintNumberInWordsRepresentationTest)
		{
			IntegerToEnglishWords MyIntegerToEnglishWords;

			stringstream output;
			stringstream output123;
			stringstream output12345;
			stringstream output1234567;

			output << MyIntegerToEnglishWords.NumberToWords(0);

			Assert::IsTrue(output.str() == "Zero");

			output123 << MyIntegerToEnglishWords.NumberToWords(123);

			Assert::IsTrue(output123.str() == "One Hundred Twenty Three");

			output12345 << MyIntegerToEnglishWords.NumberToWords(12345);

			Assert::IsTrue(output12345.str() == "Twelve Thousand Three Hundred Forty Five");

			output1234567 << MyIntegerToEnglishWords.NumberToWords(1234567);

			Assert::IsTrue(output1234567.str() == "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven");
		}
	
		TEST_METHOD(ConvertNumberTest)
		{
		IntegerToEnglishWords MyIntegerToEnglishWords;

		try {
			MyIntegerToEnglishWords.NumberToWords(-5);
		}
		catch (const out_of_range error) {
			Assert::AreEqual("Entered number is negative. Please, try input non negative number!", error.what());
		}

		Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(0) == "Zero");

		Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(17) == "Seventeen");

		Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(30) == "Thirty");

		Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(123) == "One Hundred Twenty Three");

		Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(12345) == "Twelve Thousand Three Hundred Forty Five");

		Assert::IsTrue(MyIntegerToEnglishWords.NumberToWords(1234567) == "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven");
		}

	};
}
