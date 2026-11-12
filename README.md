Name: Trishi Singh     
CIS-165-W099    
LAB 3

This lab contains two separate C++ programs:

* diamond.cpp prints a seven-line diamond made from asterisks.  
* game\_time.cpp converts video-game level times from minutes into hours and remaining minutes, then calculates the difference between the two levels.

Both programs use their own main() function and must be compiled and run separately.

Program Plans

Program 1: Diamond Pattern

I will use cout statements to print each of the seven lines of the diamond. I will add spaces before the asterisks so that the pattern is centered. The first and last lines will contain one asterisk, the next lines will contain three and five asterisks, and the middle line will contain seven. I will not use loops, arrays, or additional functions.

* Seven separate cout statements.  
* Correct spacing to center the diamond.  
* Asterisk sequence: 1, 3, 5, 7, 5, 3, 1\.  
* Check all seven lines against the assignment.

Program 2: Video Game Level Times

I will store the assigned times, 78 minutes for Level 1 and 144 minutes for Level 2, in named variables. I will use integer division by 60 to calculate the hours and the remainder operator (%) to calculate the remaining minutes. I will subtract the Level 1 time from the Level 2 time, store that difference, and convert it into hours and remaining minutes. I will store each calculated result in a variable before displaying it with a clear label.

* Level 1 \= 78 minutes.  
* Level 2 \= 144 minutes.  
* Use integer division and remainder (%).  
* Calculate and display both times and their difference.

Test:

1\. Diamond pattern test

* **Program:** diamond.cpp  
* **Expected output:** All seven required lines, including the spaces before each row and the number of asterisks.  
* **Actual output:**All seven required lines, including the spaces before each row and the number of asterisks.  
* Passed with no corrections


2\. Game-time test — assigned values 

* Values: Level 1 \= 78 minutes; Level 2 \= 144 minutes.  
* Expected output:  
  Level 1 time: 1 hour(s) and 18 minute(s).  
  Level 2 time: 2 hour(s) and 24 minute(s).  
  Difference: 1 hour(s) and 6 minute(s)  
* Actual output:   
  Level 1 time: 1 hour(s) and 18 minute(s).  
  Level 2 time: 2 hour(s) and 24 minute(s).  
  Difference: 1 hour(s) and 6 minute(s)  
* Passed with no corrections

Game-time test — changed positive values 

* Values:  Level 1 \= 90 minutes, Level 2 \= 155 minutes  
* Expected output:  
  Level 1 time: 1 hour(s) and 30 minute(s).  
  Level 2 time: 2 hour(s) and 35 minute(s).  
  Difference: 1 hour(s) and 5 minute(s)  
* Actual output:   
  Level 1 time: 1 hour(s) and 30 minute(s).  
  Level 2 time: 2 hour(s) and 35 minute(s).  
  Difference: 1 hour(s) and 5 minute(s)  
* Passed with no corrections

 Explain my code:

1\. For diamond.cpp, explain how your output statements create the required shape. How did you check spaces that are difficult to see?

The program uses seven separate cout statements to print each line of the diamond. Each statement prints a specific number of spaces followed by asterisks. The asterisk pattern increases from 1 to 3, 5, and 7, then decreases to 5, 3, and 1\. I checked the spacing by comparing the output with the required pattern and counting the spaces before each row to make sure the diamond was centered.

2\. For game\_time.cpp, explain how integer division and the remainder operator convert total minutes into hours and remaining minutes.

The program uses integer division (/) to calculate the number of complete hours in a given number of minutes. The remainder operator (%) calculates the minutes left over after removing the complete hours. Since there are 60 minutes in an hour, dividing by 60 gives the hours, while using % 60 gives the remaining minutes.

3\. Trace the assigned Level 1 and Level 2 values through your variables, including the calculation of the difference.

The program starts with Level 1 set to 78 minutes and Level 2 set to 144 minutes.

* Level 1: 78 / 60 \= 1 hour, and 78 % 60 \= 18 remaining minutes.  
* Level 2: 144 / 60 \= 2 hours, and 144 % 60 \= 24 remaining minutes.  
* Difference: 144 \- 78 \= 66 minutes. Then, 66 / 60 \= 1 hour, and 66 % 60 \= 6 remaining minutes.

The program stores these calculations in separate variables before displaying the results.

4\. Explain why the assignment asks you to store calculations in variables before using cout.

Storing calculations in variables makes the program easier to read, understand, and maintain. It also allows each calculation to be checked separately before displaying the results. Using variables avoids placing complicated calculations directly inside cout statements and makes it easier to find and correct errors.

