
// Scope is area declared using { } brackets symbols. some key points to remember is that variable declared inside the scope area can only be accessed inside the scope and can not be used outside the scope; while a variable declared outside the scope can be used inside the scope easily.

// Program to show the following statement
using namespace std;
int main(){
    int a = 10;
    if(a == 10){
        int a = 100;
        cout << a << endl;
    }
    cout << a << endl;
}
// Output: 
// 100
// 10


// There are two types of scope 01 GLOBAL and 02 LOCAL SCOPE;
// 01 GLOBAL SCOPE: The global scope is the scope of the whole function or program i.e in most cases is your main function.
// 02 LOCAL SCOPE: The local scope is the scope of the conditional or functions declared between the program.

// <<<------------------------------------LOOPS----------------------------------------------------------->>>
 
// There are total of 3 loops in c++ 01 WHILE; 02 FOR; 03 -WHILE 
 
// NOTE: //The airthmetic with the relational symbol like " = " are known as relational operators. Example :
// if you have to write {i = i * 4} you can write { i *= 4} and both will give the same result.

// TODO: Write a program of factorial series, sum of n numbers, sum of n even and n odd numbers, practice some baisc 20 patterns.

// ! make this pattern
//     1
//    121
//   12321
//   12321
//    121
//     1

//? while writing loops you have three steps work for 01 INITIALIZING (i = 1); 02 CONDITION (i <= N);  03 UPDATING (i++).

NOTE: //Learn about break and continue

// !<<<--------------------------------------FUNCTIONS--------------------------------------------------->>>
//? Function is used to reuse set of code and performs repeated tasks when called.
// ? In C++ a function needs to keep three things in mind that are what output it will be giving; function name and The input parameters. which are passed between the functions in form of arguments.
// ? In c++ a function must return something

// ! Syntax of a Function :

// ! Return-Type Funtion_Name (Input-Parameters){ "Scope of the function in which code is written"
}

// Example of a function:
int sum (a,b){
    int r = a + b;
    return r;
}

// Program to take sum of n numbers 

int main(){
    int sum = 0 , n;
    cin >> n;
    for(int i = 0 ; i <= n ; i++){
        sum += i;
    }
    cout << sum;
} 
//? No doubt this code will work but it will execute only one time what if we need to enter more numbers for taking the sum. For that purpose and increased code reuseability we use functions.

// Program to take sum of n numbers by creating a function.


/* return-type function-name(input-parameters)*/
int sumOfNumbers(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
} 
// Main Function
int main(){
    int a = sumOfNumbers(10);
    int b= sumOfNumbers(23); /* thats how we manage to write the code and use it many times.*/
}


//! Return types can be of all the type of data types plus there is one more.
//? Void return type: This return type does not returns any value and is used when the function does not have to return any value.

// Program/Function to calculate fibonacci series till n number

void fibonacci(int n){
    int i = 0, j = 1;
    cout << i << " " <<j ;
    for(int a = 2; a < = n ; a++){
        int fib = i + j;
        cout << fib ;
        i = j;
        j = fib ;        
    }
    return; //? when the compiler sees a return statement in a function it immediately stops executing the statement.
}

int main(){
    int n;
    cin >> n ;
    fibonacci(n);
}


/* Now if we compile this code we will be able to get fibonacci number till n
INPUT: 10
OUTPUT: 0 1 1 2 3 5 8 13 21 34*/

//! Optional Arguments or Default parameter in a function
// Program to print a range of numbers
void range( int start; int end){ //Simple Argument
    for( int i = start; i <= end ; i++){
        cout << i <<" ";
    }
}

int main(){
    range(10,20);
}

/* OUTPUT: 10 11 12 13 14 15 16 17 18 19 20*/

//?Simple argument is that when one of the parameters are not provided the program will result into an error.

/* writing the same program using optional arguments*/

void range( int start = 1 ; int end){ //Optional Argument or Default parameter
    for( int i = start; i <= end ; i++){
        cout << i <<" ";
    }
    cout<<endl;
}

int main(){
    range(10,20);
    range(10);
}


/* OUTPUT: 
10 11 12 13 14 15 16 17 18 19 20
1 2 3 4 5 6 7 8 9 10*/

// Now here we have stated start variable with 1 i.e when start value will not be provided it will be automatically set to 1.

NOTE: //C++ has a executable call stack which takes care eof the order off execution of code i.e. main function and other functions are executed inside a call stack where last added function is execctued first. bcoz it is a stack LIFO.

