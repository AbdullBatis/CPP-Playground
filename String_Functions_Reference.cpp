// C++ String Functions

// Length of the string
str1.length(); // Returns the number of characters in the string.
str1.size();   // Equivalent to str1.length(), returns the number of characters.

// Capacity of the string
str1.capacity(); // Returns the current capacity of the string (allocated storage size).

// Resizing the string
str1.resize(30); // Resizes the string to 30 characters. New size > current size: padded with null characters; New size < current size: truncated.

// Maximum size of the string
str1.max_size(); // Returns the maximum possible size of the string, determined by implementation and system.

// Clearing the string
str1.clear(); // Empties the string, setting its length to zero.

// Checking if the string is empty
str1.empty(); // Returns true if the string is empty; otherwise, returns false.

// Appending to the string
str1.append("text"); // Adds "text" to the end of the string.

// Inserting into the string
str1.insert(index, "text"); // Inserts "text" at the specified index.

// Replacing parts of the string
str1.replace(index1, num_deleted, "text"); // Replaces substring starting at index1, deleting num_deleted characters and inserting "text".

// Erasing parts of the string
str1.erase(); // Clears the entire string. Use str1.erase(index, num_characters) to remove specific characters starting from index.

// Adding a character to the end
str1.push_back('z'); // Appends the character 'z' to the end of the string.

// Removing the last character
str1.pop_back(); // Removes the last character from the string.

// Swapping two strings
str1.swap(str2); // Swaps the contents of str1 and str2.

// Copying the string
str1.copy(des, num_chars); // Copies 'num_chars' characters from str1 to the array 'des'. Ensure 'des' has enough space.

// Finding a substring or character
str1.find("str"); // Returns the index of the first occurrence of "str" in str1. Returns std::string::npos if not found.
str1.rfind("str"); // Returns the index of the last occurrence of "str", searching from the end towards the beginning.

// Finding the first occurrence of a character
str1.find_first_of('letter'); // Returns the index of the first occurrence of 'letter'. Optionally, provide a starting index.

// Finding the last occurrence of a character
str1.find_last_of('letter'); // Returns the index of the last occurrence of 'letter'.

// Substring extraction
str1.substr(index1, length); // Returns a substring starting at 'index1' with the specified 'length'.

// Comparing two strings
str.compare("str"); // Compares str1 with "str". Returns negative, zero, or positive based on comparison.

// Accessing characters
str1.substr(1, 3)//substring starting at index 1 with a length of 3.

// Safe character access
str.at(index); // Returns the character at the specified index; throws out_of_range exception if invalid.
str[index]; // Provides read/write access to the character at the specified index (e.g., str[4] = 'y').

// Accessing the first and last characters
str.front(); // Returns the first character of the string.
str.back();  // Returns the last character of the string.

// String iterator example
string str = "This is me"; // Change "This is me" to the desired string.
string::iterator it;
for (it = str.begin(); it != str.end(); it++) {
    cout << *it; // Outputs each character in the string.
}
