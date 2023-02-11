# Data Structure Programs Implemented Using C

The program in this repository are based on the 3rd sem subject Data Structure and Applications [21CSL32](https://vtu.ac.in/pdf/2021syll/cssyll.pdf).
## [Program 1 :](arrop.c)
A simple C program to implement <i>creation of an 1-D Array </i> and  <i>traversing through a 1-D- Array </i>.The program uses switch
construct of the C to provide a Menu to the user to choose among two options i.e, to create or to display the array .When either of the 
option is choosen the switch case calls the respective independent funtion to perform the choosen operation with the Array.<br>

<b>Output of the program 1:</b>

    Main Menu
    1.Create Array
    2.Display
    3.Exit
    1
    Enter the size of the array:5
    Enter the elements of the array:10 20 30 40 50
    Array Created
    Main Menu
    1.Create Array
    2.Display
    3.Exit
    2
    The elements in the array are : 10	20	30	40	50	
    Main Menu
    1.Create Array
    2.Display
    3.Exit
    3
## [Program 2 :](arrayadvop.c) 
This Program can be said to be a extension of the previous program.<br>
In this program we implement other operations of <i>1-D Array</i> like : <i>insertion and deletion </i>of an element to or from any 
position of the array along with the previous <i>creation and traversal </i>funtions,which can be later selected by the 
user using the switch based Menu.

<b>Example output of the program 2: </b>

```
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>1
Enter the size of the array:5
Enter the elements of the array:0 10 20 30 40 
Array Created
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>2
The elements in the array are : 0   10  20  30  40
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>3
Enter the position to be inserted at:3
Enter the element to be inserted : 90
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>2
The elements in the array are : 0   10  20  90  30  40	
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>4
Enter the the position of the element to be remmoved:3
The deleted element is 90
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>2
The elements in the array are : 0   10  20  30  40	
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>5
```

## [Program 3 :](arrstack.c)

In this program we see how to implement <i>Stack</i> using a one-dimensional array and how to perform various Stack operation 
such as :
    - Stack Empty
    - Stack Full
    - Push
    - Pop
    - Display
This is a switch based program that provides the user a Menu to choose among <i>push, pop and display </i>options to perform 
the above listed operations.

<b>Example output for program 3:</b>
```
Enter your choice :
1.push
2.pop
3.display
4.exit
=>2
STACK UDERFLOW!!!
The stack is empty,no items to display
Enter your choice :
1.push
2.pop
3.display
4.exit
=>1
Enter the item to be inserted : 20
20 was inserted into the stack
Enter your choice :
1.push
2.pop
3.display
4.exit
=>1
Enter the item to be inserted : 30
30 was inserted into the stack
Enter your choice :
1.push
2.pop
3.display
4.exit
=>1
Enter the item to be inserted : 40
40 was inserted into the stack
Enter your choice :
1.push
2.pop
3.display
4.exit
=>3
The items in the stack are :40  30  20  
Enter your choice :
1.push
2.pop
3.display
4.exit
=>2
The item popped is 40
The items in the stack are :30  20  
Enter your choice :
1.push
2.pop
3.display
4.exit
=>1
Enter the item to be inserted : 80
80 was inserted into the stack
Enter your choice :
1.push
2.pop
3.display
4.exit
=>1
Enter the item to be inserted : 10
10 was inserted into the stack
Enter your choice :
1.push
2.pop
3.display
4.exit
=>3
The items in the stack are :10  80  30  20  
Enter your choice :
1.push
2.pop
3.display
4.exit
=>1
Enter the item to be inserted : 100
100 was inserted into the stack
Enter your choice :
1.push
2.pop
3.display
4.exit
=>3
The items in the stack are :100  10  80  30  20  
Enter your choice :
1.push
2.pop
3.display
4.exit
=>1
Enter the item to be inserted : 150
STACK OVERFLOW!!
!Enter your choice :
1.push
2.pop
3.display
4.exit
=>3
The items in the stack are :100  10  80  30  20  
Enter your choice :
1.push
2.pop
3.display
4.exit
=>4
```
<i><b>*Note:</b>to demontrate the overflow condition of the stack, but we can change it to any required size by changing the following line..</i>
    #define size 5
to any required size like
    #define size 100


