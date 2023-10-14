#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here

    int L = (int)input.length();
    
   for (int i = 0; i < L; i++)
   {
       if (isdigit(input[i]))
       {
            cout << input[i];
        }
    }
   cout << endl << endl;

    // Or

   int start = input.find("\"") +1;
   int finish = input.find("\"", start+1);

   int length = finish - start;

   string number = input.substr(start, length);
   cout << number << endl;

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int count = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        if (word == "the" || word == "The")
        {
            count++;
        }
    }
    cout << "Count = " << count << endl;   //Output count of "the"

}

