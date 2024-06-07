#include <iostream>
#include <string>

int main() {
    // Initialize the strings
    std::string S1 = "abcd";
    std::string S2 = "xyz";

    // 1. String Length (length() or size())
    std::cout << "Length of S1: " << S1.length() << std::endl;

    // 2. Accessing Characters (at())
    char ch = S1.at(2); // Access the character at index 2 (zero-based)
    std::cout << "Character at index 2 in S1: " << ch << std::endl;

    // 3. Replace
    S1.replace(1, 2, S2); // Replace substring starting at index 1 with S2
    std::cout << "After replacing a part of S1 with S2: " << S1 << std::endl;

    // 4. Insert
    S1.insert(2, "123"); // Insert "123" at index 2
    std::cout << "After inserting \"123\" into S1: " << S1 << std::endl;

    // 5. Substring (substr())
    std::string sub = S1.substr(1, 4); // Extract substring starting at index 1 with length 4
    std::cout << "Substring of S1: " << sub << std::endl;

    // 6. String Comparison
    int cmp = S1.compare(S2); // Compare S1 and S2
    if (cmp == 0)
        std::cout << "S1 and S2 are equal." << std::endl;
    else if (cmp < 0)
        std::cout << "S1 is less than S2." << std::endl;
    else
        std::cout << "S1 is greater than S2." << std::endl;

    // 7. String Copy
    std::string S3 = S1; // Copy S1 to S3
    std::cout << "Copied string S3: " << S3 << std::endl;

    // 8. String Swap
    S1.swap(S2); // Swap contents of S1 and S2
    std::cout << "After swapping S1 and S2:\nS1: " << S1 << "\nS2: " << S2 << std::endl;

    return 0;
}

