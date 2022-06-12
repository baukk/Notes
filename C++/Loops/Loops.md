A loop is a sequence of instructions which is repeated until certain condition is met.


            Two Types of Loops

1)   Entry controlled loops: For Loop and While loop

Here the test condition is tested before entering the loop

2)   Exit controlled loop : do-while loop

here, the test condition is tested at the end of the loop body. therefore loop body will execute atleast once whether the test condition is true or not.


                Loop type and descriptions

1)  while loop: First checks condition,then executes body

2)  for loop: First initializes, then condition check, then execute body, then update.

3)  do-while: Firstly, executes the body, then checks condition


                    for loop

A repetition control structure that allows us to write a loop that is executed a fixed number of times. The loop enables us to write n number of steps together in one line.

syntax:

for (intialization exp, condition expr, update exp){
    //body of loop
    //statements to execute
}

                while loop

here we are not sure about the number of times the loop body is needed to be executed beforehand.The loop body is terminated on the basis of the test conditions.

sytax:

intialization exp;
while(condition_exp){

    //statements

    update expression;
}



                do-while

In this loop also the loop execution is terminated on the basis of test conditioins.
The main difference being between a while and a do while loop is ,condition in  do-while loop is tested at the end of the loop body making it an exit controlled loop

The while and for loop have condition statements before the loop body making it a entry controlled loop.

**NOTE: In do-while loop, the loop body will execute atleast once regardless of the test condition.



Syntax:

initialization expression;
do {
    //loop statements

    update expressions;
}while (test expression);



IMPORTANT

USE FOR LOOP when the number of iterations are known beforehand,
USE WHILE LOOP when the no. of iterations are not known beforehand but the termination condition is known
USE DO-WHILE LOOPS whenn the loops is to be executed atleast once 