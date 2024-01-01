// How to store 2 numbers in a single position

/*
Suppose we are given a number N between 0 and 99, and the input has occurred several times,
such that
    we want to store the number and its occurrence in a single position.

We can resolve this issue by storing the below value.

Value to be stored = number + (occurence * 100)

Here we chose 100 since this is the number next to the Range_max and we can fetch the values as below:
    Number = Value % 100
    Occurence = Value % 100
*/