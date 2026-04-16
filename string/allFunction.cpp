#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {

    string s = "Hello";
    string s2 = "World";

    // 1. length() / size()
    cout << "Length: " << s.length() << endl;
    cout << "Size: " << s.size() << endl;

    // 2. push_back()
    s.push_back('!');
    cout << "After push_back: " << s << endl;

    // 3. pop_back()
    s.pop_back();
    cout << "After pop_back: " << s << endl;

    // 4. append()
    s.append(" World");
    cout << "After append: " << s << endl;

    // 5. insert()
    s.insert(5, " ");
    cout << "After insert: " << s << endl;

    // 6. erase()
    s.erase(5, 1);
    cout << "After erase: " << s << endl;

    // 7. replace()
    s.replace(0, 5, "Hi");
    cout << "After replace: " << s << endl;

    // 8. substr()
    cout << "Substring: " << s.substr(0, 2) << endl;

    // 9. find()
    cout << "Find 'World': " << s.find("World") << endl;

    // 10. compare()
    cout << "Compare s and s2: " << s.compare(s2) << endl;

    // 11. at()
    cout << "Character at index 1: " << s.at(1) << endl;

    // 12. empty()
    cout << "Is string empty? " << s.empty() << endl;

    // 13. clear()
    s.clear();
    cout << "After clear, is empty? " << s.empty() << endl;

    // 14. swap()
    string a = "Apple";
    string b = "Banana";
    a.swap(b);
    cout << "After swap a: " << a << endl;
    cout << "After swap b: " << b << endl;

    // 15. toupper()
    string s3 = "coding";
    for (char &c : s3) {
        c = toupper(c);
    }
    cout << "Uppercase: " << s3 << endl;

    // 16. tolower()
    for (char &c : s3) {
        c = tolower(c);
    }
    cout << "Lowercase: " << s3 << endl;

    // 17. isdigit()
    char ch = '5';
    cout << "Is digit? " << isdigit(ch) << endl;

    // 18. isalpha()
    char ch2 = 'A';
    cout << "Is alphabet? " << isalpha(ch2) << endl;

    // 19. stoi()
    string numStr = "1234";
    int num = stoi(numStr);
    cout << "String to int: " << num << endl;

    // 20. to_string()
    int x = 567;
    string str = to_string(x);
    cout << "Int to string: " << str << endl;

    // 21. reverse()
    string s4 = "abc";
    reverse(s4.begin(), s4.end());
    cout << "Reversed string: " << s4 << endl;

    // 22. sort()
    string s5 = "zxy";
    sort(s5.begin(), s5.end());
    cout << "Sorted string: " << s5 << endl;

    return 0;
}