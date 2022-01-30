// Sequence of characters stored ina character array is called String.
// in C, C++ the end of a string is known by a 
// string delimiter or string terminator '\0'
// In Java, end of string is known by finding the length of the string. 
// To convert a character array to string, the last
// element should be typed as '\0'.

char name[10] = {'J', 'O', 'H', 'N', '\0'};
// for 4 chars we need 5 bits of memory. 
char name[] = {'J', 'O', 'H', 'N', '\0'};

char name[] = "John";
// we can directly write the characters within 
//doubke quotes and compiler will automatically 
// add '/0' at the end. 

// printf("%s", name); 
// directly prints the entire array bcoz it knows the ending point. 
