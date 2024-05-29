#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

//function to count vowel in a string 
int countvowels (const string& text ) {
    int count = 0;
    const string vowels = "aeiouAEIOU";
    for (char ch : text) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
        
    }
    return count;
}
   
  // function to count words in a string
  int countwords(const string& text) {
    int count = 0;
    bool inword = false;
    for (char ch : text)
    {
        if (isspace(ch))
        {
            inword = false;
        }
        else if (!inword)
        {
            inword = true;
            count++;
        }
        
        }
    return count;
  }

 // function to reverse a string
 std::string reverseString(const string& text){
    return string(text.rbegin(), text.rend());
 }

 // function to capitalze the second letter of each word
 std::string capatalizeSecondLetter(const string& text) {
   std::string result = text;
   for (size_t i = 0; i < result.size(); ++i)
   {
    if (isalpha(result[i]))
    {
        if (i + 1 < result.size() && isalpha(result[i + 1]))
        {
            result[i + 1] = std::toupper(result[i + 1]);
            break;
        }
        
    }
    
   }
   return result;
 }
  
  int main () {
    ifstream file("text_file.txt");
    if (!file.is_open()) {
        cerr << "Error opening file. \n";
        return 1;
    }

    string fileData;
    getline(file, fileData);

    file.close() ;  

   std::cout << "File content: \n" << fileData << "\n";

   int numVowels = countvowels(fileData);
   std::cout << "Number of vowels: " << numVowels << "\n";

   int numWords = countwords(fileData);
   std::cout << "number of words: " << numWords << "\n";

   std::string reversedText = reverseString(fileData);
   std::cout << "Reversed text: \n" << reversedText << "\n";

   string capitalzedText = capatalizeSecondLetter(fileData);
   std::cout << "capitalized text:\n" << capitalzedText << "\n";

   return 0;
    
  }

