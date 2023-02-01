#	SALES TAX
This C++ program is to calculate the sales tax and price sold at a particular state.
***
## Objective
We need to calculate total sales tax of a person from his/her selling price and determinr his total amount to pay. <br/>
The sales taxt is determinrd by the persons location, state and if the item is luxury or not. <br/>
The constants of the values are as follows:
> city tax is 1.5% of selling price
> state tax is 4% of selling price
> If item is luxury and above $50000 the tax is 10%  of sales price
## Algorithm
1. Get Selling Price of the item: salePrice
2. Determine if item is luxury or not
3. Find state tax
	stateTax = salePrice * 4%
4. Find City tax
	cityTax = salePrice * 1.5%
5. Find Luxury
	if Luxury and greater than 50000: luxurytax = salePrice * 0.1
6. Find Sales Tax: salesTax 
	`salesTax = cityTax + stateTax + luxuryTax`
7. Find Total amount: amountDue
	`amountDue = salesPrice + salesTax`

