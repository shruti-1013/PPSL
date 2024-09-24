#include <iostream>
 #include <string>
 using namespace std;
 int main() {
 string str = "happy";
 // Concatenation
 string greeting = str + " birthday";
 cout << "Concatenation: " << greeting << endl;
 // Substring
 string part = greeting.substr(6, 8); // Extracts "birthday"
 cout << "Substring: " << part << endl;
 // Find
 size_t pos = greeting.find("birthday");
 cout << "Find: 'birthday' found at position " << pos << endl;
 // Replace
 string replaced = greeting;
 replaced.replace(pos,8, "C++");
 cout << "Replace: " << replaced << endl;
 // Insert
 string inserted = greeting;
 inserted.insert(6, " beautiful ");
 cout << "Insert: " << inserted << endl;
 // Erase
 string erased = greeting;
 erased.erase(6, 9); // Removes " beautiful"
 cout << "Erase: " << erased << endl;
 // To uppercase
 string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);
 cout << "To Uppercase: " << uppercase << endl;
 // To lowercase
 string lowercase = greeting;
 for (char &c : lowercase) c = tolower(c);
 cout << "To Lowercase: " << lowercase << endl;
 
 return 0;
 }