# Push_swap

Push_swap algo allow you to sort a stack with minimum instruction possible
<p>
  The <strong>Push swap</strong> project is a very simple and a highly straightforward algorithm project:
data must be sorted.
You have at your disposal a set of integer values, 2 stacks, and a set of instructions
to manipulate both stacks.
Your goal? Write a program in C called push_swap which calculates and displays
on the standard output the smallest program, made of Push swap language instructions,
that sorts the integers received as arguments.
</p>
<h2>The rules</h2>
<p>
* You have 2 stacks named a and b.<br/>
* At the beginning:<br/>
* The stack a contains a random amount of negative and/or positive numbers
which cannot be duplicated.<br/>
* The stack b is empty.<br/>
* The goal is to sort in ascending order numbers into stack a. To do so you have the
    <h3>following operations to use:</h3><br/>
<strong>sa (swap a)</strong>: Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.<br/>
<strong>sb (swap b)</strong>: Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.<br/>
<strong>ss</strong> : sa and sb at the same time.<br/>
<strong>pa (push a)</strong>: Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.<br/>
<strong>pb (push b)</strong>: Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.<br/>
<strong>ra (rotate a)</strong>: Shift up all elements of stack a by 1.
The first element becomes the last one.<br/>
<strong>rb (rotate b)</strong>: Shift up all elements of stack b by 1.
The first element becomes the last one.<br/>
<strong>rr </strong>: ra and rb at the same time.<br/>
<strong>rra (reverse rotate a)</strong>: Shift down all elements of stack a by 1.<br/>
The last element becomes the first one.<br/>
<strong>rrb (reverse rotate b)</strong>: Shift down all elements of stack b by 1.<br/>
The last element becomes the first one.<br/>
<strong>rrr</strong> : rra and rrb at the same time.<br/>
  </strong>
 </p>
 <h2>Exemple</h2>
 ----------------------------------------------------------------------------------------------------------<br/>
Init a and b:<br/>
2<br/>
1<br/>
3<br/>
6<br/>
5<br/>
8<br/>
_ _<br/>
a b<br/>
----------------------------------------------------------------------------------------------------------<br/>
Exec sa:<br/>
1<br/>
2<br/>
3<br/>
6<br/>
5<br/>
8<br/>
_ _<br/>
a b<br/>
----------------------------------------------------------------------------------------------------------<br/>
Exec pb pb pb:<br/>
6 3<br/>
5 2<br/>
8 1<br/>
_ _<br/>
a b<br/>
----------------------------------------------------------------------------------------------------------<br/>
Exec ra rb (equiv. to rr):<br/>
5 2<br/>
8 1<br/>
6 3<br/>
_ _<br/>
a b<br/>
----------------------------------------------------------------------------------------------------------<br/>
Exec rra rrb (equiv. to rrr):<br/>
6 3<br/>
5 2<br/>
8 1<br/>
_ _<br/>
a b<br/>
----------------------------------------------------------------------------------------------------------<br/>
Exec sa:<br/>
5 3<br/>
6 2<br/>
8 1<br/>
_ _<br/>
a b<br/>
----------------------------------------------------------------------------------------------------------<br/>
Exec pa pa pa:<br/>
1<br/>
2<br/>
3<br/>
5<br/>
6<br/>
8<br/>
_ _<br/>
a b<br/>
----------------------------------------------------------------------------------------------------------<br/>
<h2>How to use</h2>

```
 Git Clone https://github.com/Asalek/Push_swap.git
 cd Push_swap
 make && make bonus
````

<h3>How to test The Program</h3>

- Generate a random 100 number from 1 to 100

```bash
ARG=$(ruby -e "puts (1..100).to_a.shuffle.join(' ')"); ./push_swap $ARG 
````
- Generate a random 500 number from 0 to 500

```
ARG=$(ruby -e "puts (0..500).to_a.shuffle.join(' ')"); ./push_swap $ARG 
````

- Random five numbers

```
./push_swap 5 6 9 1 -7
./push_swap 39467 -9876 46714 -444512 132545 | wc -l
````

<h3>How to test The Checker</h3>

- Checker will show OK or KO (sorted or not sorted)

```bash
ARG=$(ruby -e "puts (1..100).to_a.shuffle.join(' ')"); ./push_swap $ARG | ./checker $ARG
````

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
