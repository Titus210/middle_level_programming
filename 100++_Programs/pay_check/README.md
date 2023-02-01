## Salesman Paycheck
THis is a c++ code to implement and algorithm that calculates monthly paycheck of a sales person based on some bonus conditions
***
## Objective
Every sales person has a base salary and receives bonus based on the following criteria:
- if salesperson has been in work for 5 years or less receives `$10` per year and `$20` per year if more than 5 years.
- if sales is more then `$5000` and less than `10000` he receives 3% commision if greater than that receives 6% comission.
## Algorithm
1. Get base salary
2. get years of working
3. Calculate year bonus
-	if yeasOfWorking is less than or equal to 5
-		year bonus = 10 * yearOfWorking
-	else 
-	 	yearBonus = 20 * yearOfWorking
4. if sales greater than 5000 and less than 10000
-	salesbonus = sales * 3/100
 -    else
     		salesbonus = sales * 6/100
5. Total paycheck = BaseSalary + salesBonus + tearBonus
***
