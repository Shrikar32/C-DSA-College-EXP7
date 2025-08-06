 Strings in C++
A string is a sequence of characters used to store words, sentences, or any textual data. In C++, there are two main ways to work with strings:

1. C++ string class (recommended)
The string class from the <string> header is versatile and user-friendly. It allows easy operations like concatenation (+), comparison (==), length checking (.length()), substring operations, and reversal.

Examples:

Initializing strings in multiple ways (direct, constructor, assignment, repetition).

Concatenating two strings using + or +=.

Printing a string in reverse using a loop or reverse() from <algorithm>.

Checking for a palindrome (e.g., "madam") using a loop.

2. C-style strings (char[])
These are character arrays ending with a null character \0. Though traditional, they require careful memory management and are harder to manipulate compared to string.

 Arrays in C++
An array is a fixed-size collection of elements of the same type. Arrays are commonly used for storing and processing data such as numbers, grades, or sensor values.

Examples:

Declaring and initializing arrays with known values.

Printing elements directly or using a loop.

Calculating the sum and average of elements using a for loop.

Finding the minimum and maximum values in an array.

Searching for a specific number in the array and reporting whether it was found.

Arrays are index-based (0 to size-1), and require careful bounds management. While fixed in size, arrays offer fast access and are simple to use for small data tasks.
