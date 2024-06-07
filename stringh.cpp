#include <iostream>
#include <stdexcept> // Include the header for exception classes

int main() {
    try {
        // Attempt to divide by zero
        int numerator = 10;
        int denominator = 0;
        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        // Catch any exception (std::exception is the base class for all exceptions)
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        // Catch specific exception (e.g., std::runtime_error)
        std::cerr << "Runtime error caught: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        // Catch specific exception (e.g., std::logic_error)
        std::cerr << "Logic error caught: " << e.what() << std::endl;
    } catch (...) {
        // Catch any other exception (catch-all)
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}



/*#include <iostream>
#include <string> // Include this header for using string data type
using namespace std;
int main()
{
    string s1 = "ABCD"; // Use std::string for string variables
    string s2 = "xyz";
    string s3; // Declare s3 for copying

    // Length of s1
    cout << "Length of s1: " << s1.length() << std::endl;

    // Character at index 2 in s1
    cout << "Character at index 2 in s1: " << s1.at(2) << std::endl;

    // Replace substring in s1
    s1.replace(1, 2, s2);
    cout << "After replacing substring in s1: " << s1 << std::endl;

    // Insert s2 into s1
    s1.insert(2, s2);
    cout << "After inserting s2 into s1: " << s1 << std::endl;

    // Substring of s1 (from index 1, length 2)
    cout << "Substring of s1: " << s1.substr(1, 2) << std::endl;

    // Comparison between s1 and s2
    int comparison_result = s1.compare(s2);
    cout << "Comparison result between s1 and s2: " << comparison_result << std::endl;

    // Copy substring from s1 to s3
    s1.copy(s3, 1,3);
    s3[1] = '\0'; // Null-terminate the copied string
    cout << "Copied substring to s3: " << s3 << std::endl;

    // Swap s1 and s2
    swap(s1, s2);
    cout << "After swapping s1 and s2:" << std::endl;
    cout << "s1: " << s1 << std::endl;
    cout << "s2: " << s2 << std::endl;

    return 0;
	 }
*/
/*#include <iostream>
#include <string> // Include this header for using string data type
int main()
{
    std::string s1 = "ABCD"; // Use std::string for string variables
    std::string s2 = "xyz";
    std::string s3; // Declare s3 for copying

    // Length of s1
    std::cout << "Length of s1: " << s1.length() << std::endl;

    // Character at index 2 in s1
    std::cout << "Character at index 2 in s1: " << s1.at(2) << std::endl;

    // Replace substring in s1
    s1.replace(1, 2, s2);
    std::cout << "After replacing substring in s1: " << s1 << std::endl;

    // Insert s2 into s1
    s1.insert(2, s2);
    std::cout << "After inserting s2 into s1: " << s1 << std::endl;

    // Substring of s1 (from index 1, length 2)
    std::cout << "Substring of s1: " << s1.substr(1, 2) << std::endl;

    // Comparison between s1 and s2
    int comparison_result = s1.compare(s2);
    std::cout << "Comparison result between s1 and s2: " << comparison_result << std::endl;

    // Copy substring from s1 to s3
   /* s1.copy(s3);
    s3[1] = '\0'; // Null-terminate the copied string
    std::cout << "Copied substring to s3: " << s3 << std::endl;*/

    // Swap s1 and s2
    /*std::swap(s1, s2);
    std::cout << "After swapping s1 and s2:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    return 0;
}*/

