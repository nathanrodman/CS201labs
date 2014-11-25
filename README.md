CS201labs
=========

The lab assignments for CS201 at PCC.

---Lab 2---

Write code that uses scanf() to read in two floating point numbers (data type double) and 
then uses printf() to print out the sum.
The interaction should go like this:

Lab 2
first number: 38.81
second number: 2.5
 38.81
+ 2.50
-----------
 41.31
 
All numbers should be printed with 2 digits to the right of the decimal point. Everything 
should line up as shown above.

---Lab 3---

Write an app that reads in two integers (data type int) and an arithmetic operation from 
the bash command line. The app will then perform the specified operation on the two 
integers and print out the result.
If you invoke the app with no command line arguments, it will print out information 
explaining the required command line arguments.
Note that you need to catch all user input errors including:
  • Missing command line arguments.
  • Badly formed numbers (e.g. 12d8, xyz).
    Use sscanf() to parse the numeric command line arguments.
  • Invalid arithmetic operation (the valid ones are: +, – , *, and /).
    The operation argument is required to be 1 character long.

---Lab 4---

Write an app that reads in a hex integer (data type int) from the bash command line.
For each of the 4 bytes (i.e. each char) in the integer, the app will:
  • Extract bits 4-3 from the byte. (Bits in a byte are numbered from the right starting 
    with 0, going up to 7.)
  • Shift the extracted bits to the right so that they can be used as a number. The value 
    of this number will be 0, 1, 2, or 3.
The app will add up these four numbers and print out the sum.

---Lab 6---

Write a makefile so that you can use the Linux utility make to build lab06 from
lab06.c and printmsg.c.
