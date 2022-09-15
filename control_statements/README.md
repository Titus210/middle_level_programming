##		FLOW CONTROOL
***
In most program execution, flow control and loop is important for a program.<br/>
`if` , `if-else` , `Nested if`, `if-else-if` are important in decision making to decide what execution to be carried next.They decide direction of flow of program.<br/>
****
1. ** if statement**:
	If a certain condition is true thena a block of code is executed otherwise not
	```
		if (condition)
		{
			//condition to execute when true
		}
	```
2. ** if-else **:
	Else condition executes when condition is false
	```
		if(condition)
			\\ executes when True
		else
			\\ excecutes otherwise
	```
3. ** if-else-if **:
	If-else-if ladder is used to execute code with decision among multiple options until condition is True else false on end of ladder
	```
		if(condition 1)
			\\ executes when true
		elseif (condition 2)
			\\ executes when true
		else
			if all are false
	```
4. ** Nested if **
	This is execution of if condition by executing the outer condition then followed by inner condition.
	It only executes when condition on outside the contol flow is true
	```
		if (condition)
		{
			if (condition)
				\\ conditon when nested is true
			else
				\\ statement when false
		}
	```
5. ** Break, continue and Goto  Jump statements **
-	Break:
		Terminates loop as soon as its encountered  and control returns to first loop immediately
	```
		for (i=0; i<=10; i++)
		{
			if ( i == 5)
				break;
		}
	```
-	Continue:
		Unlike break statement , instead of terminating the loop, it forces execution to next iteration of loop
		```
			for (i = 0; i<=10; i++)
			{
				if (i ==6 )
					continue;
			}
		```
-	goto:
		Used to jump from point to another within a function
***
#### Note
Cteating a variable within an if block is local to that block and can't be accessiible anywhere else unless its global.
## 		LOOPS
Loop is sequence of instructions that is repeated until certain condition s reached <br/>
Types of loops: <br/>
-	<u> Entry Loops </u>
These are loops tested before entering a condition. ie `for loop ` and `while loop `
-	<u> Exit contolled loops </u>
Loop executes at least once, whether condition is true or false. ie `do-while` loop.
1. 	**For loop**:
	This loop first initializes, then condition is checked, execute body and update.
	Used to execute for a number of times.
	```
		for (initializes expression; text condition; update expression)
		{
			//body while condition is true
			break;		// when needed
		}
	```
2.	**While loop**:
	It executes like > for loop but unlike for loop number of iterations is not known beforehand. Loop is terminated on basis of test condition
	```
		initialize expression;
		while (test expression)
			//code to execute;
	```
3. 	** do while **
	The  condition is tested on end of loop after execution. It executes once irrespective to test condition
	```
		initialize;
		do{
			// statement
		} while (test condition);
***
## Folder content
This folder contains programs executed in all the stated above control statements and loops 
#### Conclusion
This folder was written and coded by [Titus Kiplagat](https://ke.linkedin.com/in/titus-kiplagat-5146ba210)
