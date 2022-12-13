#include <iostream>
using namespace std;

int countDigitPresent(int x, int d)
{
    int res = 0;
    while (x > 0)
    {
        if (x % 10 == d) {
          ++res;
        }
        x = x / 10;
    }
 
    return res;
}

// string summonFizz(int n, string s) {
//   string resultString = "";

//   if (n % 3 == 0) {
//     resultString += s.length() == 0 ? "Fizz" : " Fizz";
//   }
//   int fizzs = countDigitPresent(n, 3);

//   for (int i = 0; i < fizzs; i++) {
//     resultString += " Fizz";
//   }

//   return resultString;
// }

// string summonBuzz(int n, string s) {
//   string resultString = "";

//   if (n % 5 == 0) {
//     resultString += s.length() == 0 ? "Buzz" : " Buzz";
//   }
//   int buzzs = countDigitPresent(n, 5);

//   for (int i = 0; i < buzzs; i++) {
//     resultString += " Buzz";
//   }

//   return resultString;
// }

// string summonWoof(int n, string s) {
//   string resultString = "";
  
//   if (n % 7 == 0) {
//     resultString += s.length() == 0 ? "Woof" : " Woof";
//   }
//   int buzzs = countDigitPresent(n, 7);

//   for (int i = 0; i < buzzs; i++) {
//     resultString += " Woof";
//   }

//   return resultString;
// }

string summonString(int n, string s, int trigger, string summon) {
  string resultString = "";
  
  if (n % trigger == 0) {
    if (s.length() == 0) {
      resultString += summon;
    } else {
      resultString += " ";
      resultString += summon;
    } 
  }
  int digitPresents = countDigitPresent(n, trigger);

  for (int i = 0; i < digitPresents; i++) {
    resultString += " ";
    resultString += summon;
  }

  return resultString;
}

int main(void)
{
	int i;
  string currentString;
	for (i=1; i<=100; i++)
	{
    currentString = "";

    currentString += summonString(i, currentString, 3, "Fizz");
		currentString += summonString(i, currentString, 5, "Buzz") == currentString ? "" : summonString(i, currentString, 5, "Buzz");
    currentString += summonString(i, currentString, 7, "Woof") == currentString ? "" : summonString(i, currentString, 7, "Woof");
	
		if (currentString.length() == 0) cout << i;
    else cout << currentString << " (" << i << ")";

    if (i < 100) cout << ", ";
    else cout << endl;
	}

	return 0;
}
