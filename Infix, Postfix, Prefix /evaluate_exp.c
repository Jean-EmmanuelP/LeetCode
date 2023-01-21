/*
Note :

Postfix and Prefix are more readeable for machine while 
Infix expression are more readeable for humans.
infix expression : <operand><operator><operand>
In the infix expression, the operator is between operand.
postfix expression : <operand><operator> 
In postfix expression the operator is at the right position of its operand.
while the prefix expression is a the left position of its operand.


How to calculate the postfix expression using a program ?

1. Delimit the operands with a delimiter
2. Parse the string
If it's a number : store in the list;
else if it's an operator : merge the last two elements in the list with the operator.
Finally, done scanning all the expression, we have finally a final result. 
This is the result ! 

Concept :
Last in, first out ! 
"LIFO structure" 
*/

/*IMPLEMENT THE CODE TODAY*/

a+b*c*d infix
result = ab
st = 