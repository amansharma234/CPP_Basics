//! <<<----------------------ARRAY--------------------------------------------------------------------------->>>\

// Most used data structure. to store multiple values in form of a list. 
// can also be called asList of a variable

// ? Syntax to define an array in C++

/* data_type variable[ size of the array ] 
Example: int a[10] */

// Indexing an array: array is indexed starting from 0 and is used to locate; add; delete; update a position in an array.

// taking input in an array
// cin >> statement with the array name and the location as per index

// Program to showcase input method of an array on a particular position/index

int main(){
    int a[10];
    cin >> a[0] //? in this method we take input on a particular position of an array
    cin >> a[1]
    cin >> a[2]
    cout<< a[0] << " "<< a[1] << " "<< a[2] << " ";
}

// Program to take input in an array continously using loop

int main(){
    int a[20];

    for(int i = 0; i <20; i++){
        cin >> a[i];
    }
 
    for(int i = 0; i <= 19; i++){ // this is method to print array as an output 
        cout << a[i] <<" ";
    }
}

// ToDo : Perform basic searching and sorting in array to practice manipulation of an array.

// !<<<-------------------------------------Strings------------------------------------------------------>>>

// ? String is known as a character array its a way of storing characters using array.
// defined as same as array.

//? Syntax of declaring an string 


int main(){
    char s[] = "abc"; // Without declaring the size of string.
    char s[10] = "abcdefghi" //decalring the size of the string.
}


//! The size of string is defined 10 but we can only use 9 coz the last block is used to store the null character or ascii null value which is '\0' or ascii 0. If you happen to use all the places of character array the compiler will remove the last character automaticLly while printing it. and will say the character is too long for the array.

// The null character defines that the string has ended here.

// The string is character array but it is printed differently however 
// if we print //!  cout << a ; 
// while a being an array we might get garbage value.
// but if we print //! cout << s;
// the whole string will get printed till the compiler meets the null character.

// Similarly we can take string input directly //! cin >> s;

//? But to take an input of the whole line including spaces and tabs we use. 

cin.getline(s,100); // here 100 is the size of the character array s.


// Program to print length of the string.

int main(){
    char s[100] = "abcdefghij"
    int length = 0;
    for(int i = 0; s[i] != '\0'; i++ ){
        length++
    }
    cout<<length;
}

// OUTPUT : 10 

// TODO: check why we dont define the arrays with variable length and how we can achieve that. Practice the question reverse the string. Lots of string question must be solved.

// TODO: Learn about string functions predefined ones in c++. also about string library.

// ! <<<-----------------------------------2D ARRAY--------------------------------------------->>

// ? 2D ARRAY: these are used to decscribe complex mathmatical problems. Such as matrix, it is defined similarly like an arrray but since its 2D it has rows too.

// A simple array has only columns and only 1 row. but in 2D array it has mutlplie cols and rows.


// Syntax of declaring 2D array: 
//! Data_Type Array_name[Size of Rows][Size of Coulmns];

int a[10][10];

// Program to showcase how to take input and output in a 2D ARRAY

int main(){
    int a[10][10];

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>a[i][j]<<" ";
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<a[i][j]<<" ";
        }
    }
}

// TODO: print minimum and maximum numbers in rows and columns.


// 
