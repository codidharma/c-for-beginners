# Table of Contents
* [First C Program](#first-c-program)
* [Basics Of C Programming](#basics-of-c-programming)
    * [Variables](#variables)
        * [Rules of Variable Nomenclature](#rules-of-variable-nomenclature)
    * [Constants](#constants)
        * [Primary Constants](#primary-constants)
            * [Integer Constants](#integer-constants)
            * [Real Constants](#real-constants)
            * [Character Constants](#character-constants)

---

# First C Program

The very first program that we can write in C is the hello world. As the name suggests, this program does nothing but prints the hellow world on the terminal. The hellow world program can be written as follows

```C
#include<stdio.h>

int main()
{
    printf("Hello world\n");
    return 0;
}
```

Lets talk about the program a little bit and understand the anatomy of the program.
1. A C program despite its complexity can be boiled down to a mixture of declarations, variables and functions
2. A function as the name suggests contains some lines of code which when combined together will serve a purpose
3. In secnario above, the `main` is the function which conatins the logic which will be executed.
4. The `main` function has some lines in it and returns an integer as indicated by the `int` placed before the function name.
5. The `#include` is used to add references to certain libraries files where there are pieces of code defined. In our case we are referencing the `stdio.h` library which contains standard input output functions
6. The function `printf` if part of the `stdio` library and is available to us only because we included the library at the start of the program.
7. The `pintf` function allows us to print anything on the screen, we can print characters, sentences, numbers etc.
8. The `return 0` means that we are returning 0 when the program executes successfuly. A non zero result means the program executin failed
9. The `()` in  `main()` denotes the list of inputs the function can accept. In this case it does not accept any inputs
10. The statements in the function are grouped between `{}`. Each statement needs to be terminated using the `;`

The actual program is available at [helloworld.c](/Ch1-Introduction/src/helloworld.c)



# Basics of C Programming
 In this chapter we will discuss the basics of the C programming before diving into concepts. Lets look at some fundamental concepts which are commons across most of the programming languages.

 ## Variables

 Whenever we are executing a program, we are working on some type of data(e.g. integrers, characters etc.) and we are performing some sort of operations on it to get the desired result. The data that we are accessing or the result that we are computing, needs to be stored some where in the computers memory. The Progamming language generally allows developers to define variables which act as the names for the memory locations where the values used in the program are stored. The variable names can then be used in the program instead of the memory and we can perform the necessary actions.

 ### Rules of Variable Nomenclature

 Following rules have been laid down by the developers of the C language while naming a variable

 1. The first character of the variable name needs to be a letter or an underscore(_)
 `numberOfFlowers`, `initialValue`, `_employeeName` are all examples of valid variable names. `123Employee`, `#employeeName` are examples of invalid variable names
 2. No commas or blanks allowed. `employee,name` `employee name` are examples of invalid names
 3. No special character other than underscore(_) is allowed. `_employeeName` is an valid example while `!employeeName` is valid.
 4. Variable names are case sensitive. `employeeName` and `EmployeeName` are actually two different variable names

> Note from th field. Variable names play important roles in the readability of the programs. Experienced developers all agree on a point that code and not the comments or documentation should be the first thing a developer reads. For this purpose, it is very important to choose meaningful variable names. The name should make sense in the context of the program, that way it will help the reader to grasp the code quickly.

## Constants

Constants in C are broadly divided into two main categories.
* Primary Constants
* Secondary Constants

Primary Constants are further divided into `Integer Constants`, `Real Constants`, `Character Constants`

Secondary Constants include `Arrays`, `Pointers`, `Structure`, `Enums` etc.

Lets consider Primary constants for now. Other constants will be covered in the due course of time

### Primary Constants

The primary constants in C are divided into following types. Each of the constant needs to be defined using a  const key word. This will tell the compiler to mark that constant as readonly during compilation and then the value of the constant can not be changed.

```C
const int = 123434;
```

#### Integer Constants

As the name suggests, these constants are the unchanging values which are of type integer. C inventors have set some rules for creating the integer constants
1. An integer constant must have atleast one digit
2. It can be positive or negative
3. It needs to be a whole number. `1`, `2342`, `-345` are examples of valid integer constants, while `-1.2`, `234.232` are examples of invalid integer constants
4. If no sign preceeds the constant value, it is assumed to be positive
5. No commas or blankspaces allowed in the integer constants

#### Real Constants
These constants are also called floating point constants. These can be written in two forms fractional(e.g. `123.456`) form or exponential form (`3.42e2` which is equivalent to `0.0342`)

Following rules have been laid down for the construction of the real constants
1. A real constant must have atleast one digit
2. It can be positive or negative
3. It must have a decimal point. `1.0` is a real constant while `1` is treated as a integer constant
4. No commas or blankspaces allowed in the constant

> Note on the Exponential form
The exponential form is used to denote very large or very small real constants. The exponential form if generally expressed as `mantissa`e`exponent`. The interpretation of this in the normal form is as `mantissa` * 10 ^ `exponent`

#### Character Constants

Following are the rules for constructing character constants
1. The character constant needs to be a single digit or special character or a letter from the alphabet. The character needs to be in single quotes
`'A', '1', '$'` are examples of valid character constants while `'12'`, `'$$'` are examples of invalid character constants


>The constants which are to be used in the code can be defined and externalized to the main function. These constants can then be referred in different functions using their names.
For example
>
```C
#include<stdio.h>;

#define float PI = 3.1413

int main()
{
    printf("Value of Pi is %f\n", PI);

}
```


# Reserved Keywords

Now that we have learnt about variables and constants, we know that we can use meaning full names to create variables, but there are certain words that are reserved by the C language as part of its grammar. It simply means that these words have certain meaning and we can not use these names as the compiler already knows the meaning of these reserved keywords. In C there are only 32 reserved names. These are highlighted below

|Column1|Column2|Column3|Column4|
|----|----|----|-----|
|auto|double|int|struct|
|break|else|long|switch|
|case|enum|register|typedef|
|char|extern|return|union|
|const|float|short|unsigned|
|continue|for|signed|void|
|default|goto|sideof|volatile|
|do|if|static|while|