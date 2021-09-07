#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";
    // cout << "Enter name";
    // //cin >> str; gets one word
    // getline(cin, str);
    // cout << str;

    // int len = str.length();        // counts to \n
    // int size = str.size();         // same as length
    // int capacity = str.capacity(); // length of whole str

    // str.resize(20); // change the capacity
    // str.max_size(); // returns max size

    // str.clear(); // clear string length will 0
    // str.empty(); // return true is stirng is empty

    // str.append(" World");      // add to string "Hello World"
    // str.insert(3, "kk");       // inserts kk from third index -> "Hellkko"
    // str.insert(2, "kkkkk", 3); // inserts three char kkk from second index -> "Helkkklo"

    // str.replace(2, 4, "LL"); // replaces from second to fourth index LL ->> "HeLLo"
    // str.erase();             //clear

    // str.push_back('z'); // inserts z to end of str
    // str.pop_back();     // deletes last char
    // str.swap(str2);     // swaps values

    // str.copy(destination, length); //
    // str.find(str);                 // return index
    // str.find("h");                 // returns index
    // str.rfind(str);                // searches from right
    // str.find_first_of("l");        // first l from left
    // str.find_first_of("le");       // returns index of l or e which found first
    // str.find_last_of("l");         // first l from right
    // str.substr(newIndex);          // first index will newIndex
    // str.compare(str2);             // if equal returns 0 if not returns difference betwwen ascii

    // str.at(3); // returns the  third index's value
    // str.front(); // returns first letter
    // str.back(); // returns last letter

    // "[]" , "+", "=" are overloaded operatprs so it works even string is a class
    // str.[4] // str1 + str2 // str1 = "world"

    // string::iterator it;
    // for (it = str.begin(); it != str.end(); it++)
    // //prints hello
    // //if use reverse_iterator, rbegin rend prints olleh
    // {
    //     cout<<*it;
    //     //*it=*it-32 //it makes capital letter
    // }

    // //find user name from email
    // string email = "john123@gmail.com";
    // int i = (int)email.find('@');
    // string uname = email.substr(0, i);
    // cout << "user name is " << uname << endl;
    // return 0;

    //check palindrome
    // string str = "MADAM";
    // string rev = "";
    // int len = (int)str.length();
    // rev.resize(len);
    // for (int i = 0; j = len - 1; i < len; i++; j--)
    // {
    //     rev[i] = str[j];
    // }
    // rev[len] = '\0';
    // if (str.compare(rev) == 0)
    //     cout << "palindrome" << endl;
    // else
    //     cout << "not a pallindrome" << endl;
    // return 0;

    //program for count vowels consonant and words
    // string str = "how many words" int vowels = 0, consonant = 0, space = 0;
    // for (int i = 0; str[i] = !'\0'; i++)
    // {
    //     if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    //         vowels++;
    //     else if (str[i] == ' ')
    //         space++;
    //     else
    //         consonant++;
    // }
    // cout << "vowels " << vowels << endl;
    // cout << "consonant " << consonant << endl;
    // cout << "words " << space++ << endl;
    // return 0;
}