# Table of Contents
* [Basics Of C Programming](#basics-of-c-programming)
    * [Variables](#variables)
        * [Rules of Variable Nomenclature](#rules-of-variable-nomenclature)
    * [Constants](#constants)
        * [Primary Constants](#primary-constants)
            * [Integer Constants](#integer-constants)
            * [Real Constants](#real-constants)
            * [Character Constants](#character-constants)

---



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

The primary constants in C are divided into following types

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

# Reserved Keywords

Now that we have learnt about variables and constants, we know that we can use meaning full names to create variables, but there are certain words that are reserved by the C language as part of its grammar. It simply means that these words have certain meaning and we can not use these names as the compiler already knows the meaning of these reserved keywords. In C there are only 32 reserved names. These are highlighted below
