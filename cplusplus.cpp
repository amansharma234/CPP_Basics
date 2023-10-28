// Langugaes is a medium to communicate to the computer 
// The language is in a form  of special symbols and words and Keywords which is written in english language, then the english language is converted into machine language or assembly code and later that is converted to Binary code. 
// WHY BINARY CODE: Becoz the computer only understands binary language that is 0 and 1. 
// This below here is a sample code displaying ususal structure of a c++ program

// Program of adding to numbers
#include<iostream> // The header files
using namespace std;

int main(){  //The main function
    int a = 9;
    int b = 10;
    sum = a + b;
    cout<< "SUM of a and b \n" << sum ;
}


// NOTE: C++ is strongly typed languages.

// <<<-----------------------Types of Errors---------------------------------->>>

// Types of Errors 01: Compile time error and 02: Run time error
// The process: code is executed and run over a compiler which acts as a translator between user and computer
// 01: Compilation Error: This error takes place while the code is being exectued by the compiler and ready to run. 
// 02: Run Time Error: This error takes place while the code is running and produce undesirable result.




// <<<-----------------------Breakdown of structure of C++ Program---------------------------------->>>


// THE MAIN FUNCTION: C++ programs needs a main function to execute the code and there can only be one main function in an entire program.

// Include : it is used to include necessary libraries into the program call necessary header files.

// iostream : it is the input output library that is used to take inputs into the program and also to print output and messages.

// namespace : the namespace creates a way to access the tools from a particular library or package, Example in line "using namespace std;" we are using tools from std package and declaring it. the other way of using std package tool would be "std::cout<<" the operator in between is known as scope resolution operator".

// cout: prints the value it contains one at a time only and we need to use << to seperate the values to print.

// \n : is used to start a new line similarly we caan use "\t" for tab can also use endl: which means end line.

// " " : use to carry strings


// <<<-----------------------------Variables and Datatypess---------------------------------->>>

// Built in functions like sizeof and typeof can be used to get size and type of the data.

// Data types: 01 Integer, 02 Character, 03 Float, 04 Double. 05 Long, 06 Unsigned Int

// 01 Integer : represented by "int" keyword and contains all numbers -ve ; +ve and 0 too. size of int data type is 4 Byte.

// 02 characters : represetned by "char" keyword and there are total of 128 characters in c++. it contains A-Z ; 0-9 ; symbols special characters etc. size of char data is 1 Byte. the characters are not converted to the binary directly it is compared to a number value based on a table series called "THE ASCII TABLE", and then as per the number it is converted to binary code. With characters it is important to use single quotation i]or the compiler might consider your value as a string data type, or might cause and error.

// 03 Float : Known as FLoating point numbers it is used to display the decimal numbers in the programming language. represtend by "float" keyword. It is of the size 4 byte and represesnts only upto 2 decimal places.

// 04 Double : It is also used to display the decimal numbers in the programming language. represtend by "double" keyword. It is of the size 8 byte and represesnts larger value with really good precision and decimal places w.r.t float representation of numbers.


// 05 long : It is also used to display the integer numbers in the programming language. represtend by "long" keyword. It is of the size 8 byte and represesnts larger values w.r.t int representation of numbers.


// 06 unsigned Int : It is also used to display the integer numbers but only the positive ones in the programming language. represtend by "unsigned int" keyword. It can represent values from 0 to 2^31 - 1.



// Program showing how you can declare integers and characters
int main(){
    int b = 8;
    char a = 'x';

    cout<< a <<'\n a' <<"\n a"<< b;
}

// Output of the following program is going to be "x a a 8"

// program to show that characters are converted to values of ASCII chart

int main(){
    char ch = 'A';  //ch stores 65 not A
    int a = ch ;  // 65 s=is transfered to a
    cout << a;
}

// Output: 65
// This here is also an example of Implicit conversions in C++

// <<<-------------------------------------Notes---------------------------------------------------->>>

NOTE: //int operated with int operator will always result into an int data type.

NOTE: // ceil and floor are commonly used operators with float data types; the ceil operator rounds upto the result to the increased value like 3.8 will become 4; the floor operator rounds upto the result to the decreased value like 3.8 will become 3.

NOTE: // Garbage values are values that are generated in c++ when the variable decalred does not have any value stored. Example
int main(){
    int a;
    cout << a;
}
// The output of this value will be the garbage value; You must strictly avoid garbage value by not using the variable before which has not been asigned a value.

NOTE: // The decalration of variable and intialization of the variable can be done seperately. Example: 
int main(){
    int a;
    a = 90;
    cout << a;
}

NOTE: // cin is used to take inputs in c++ and it skips the _ , tab , enter and whitespaces. while you might have to avoid this and you can do this by using cin with "get()" a predefined function.Example: 
int main(){
    char a = cin.get(); // So when the user will enter any input it will be taken as ine character at a time and it will not skip  _ , tab , enter and whitespaces

}


// <<<-----------------------------Type Conversions---------------------------------->>>

// Type conversions are of two types 01 Implicit type ; 02 Explicit Type.

// 01 Implicit Conversion : In this the compiler automatically converts any data type into suitable data type to execute the code.
 
// Exaple of Implicit : 

int main(){
    char ch = 'D'; //69 is the D in ASCII value and is stored in ch
    int s = ch; //here ch is stored in s which is an integer 
    cout<< s; //so it automatically retutrns what is store in ch i.e. 69
}

// Output will be : 69 


// 01 Explicit Conversion : In this the user converts any data type into suitable data type forceful to execute the code.
 
// Exaple of Explicit : 

int main(){
    char ch = 'D'; //69 is the D in ASCII value and is stored in ch
    cout<< {int} ch; //so in this line the value of ch is converted into an integer and treated as an integer what is store in ch i.e. 69
}

// Output will be : 69 


// <<<------------------------Operators--------------------------------------->>>

// 01 Arithmetic, 02 Relational, 03 Logical, 04 Boolean, 05 Bitwise

// <<<------------------------Conditionals--------------------------------------->>>
// 01 If statement, 02 If-else statement, 03 If - else -if Statement


NOTE: // Scope................