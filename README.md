# Data Structure Programs Implemented Using C

The program in this repository are based on the 3rd sem subject Data Structure and Applications [21CSL32](https://vtu.ac.in/pdf/2021syll/cssyll.pdf).
## [Program 1](arrop.c) : 
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
## [Program 2](arrayadvop.c) :
This Program can be said to be a extension of the previous program.<br>
In this program we implement other operations of <i>1-D Array</i> like : <i>insertion and deletion </i>of an element to or from any 
position of the array along with the previous <i>creation and traversal </i>funtions,which can be later selected by the 
user using the switch based Menu.

<b>Outpit of the program 2: </b>

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
The elements in the array are : 0	10 20 3040	
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
The elements in the array are : 0	10	20	 90	30	 40	
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
The elements in the array are : 0	10 	20 	30 	40	
Enter your choice :
1.Create
2.display
3.insert
4.delete
5.exit
=>5
```

