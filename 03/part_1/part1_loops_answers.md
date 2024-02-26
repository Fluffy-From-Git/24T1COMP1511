Code A

prints even numbers from 0 to < 32
    
    0
    2
    4
    [...]
    28
    30

Code B

prints numbers from 5 to and including 0

    5
    4
    3
    2
    1
    0

Code C

notice how the sentinal value is only changed in the loop once i is greater than 3 (i.e 4), then after it is changed, the loop will continue to execute the rest of the body until the sentinal value condition is checked.

Therefore the program will print

    5

Code D

i is uninitialized, so the program will encounter an error when trying to check the condition of the loop.

    Error: Accessing Uninitialized Variable

Code E

Counter is not incremented, so the loop will continue to execute indefinitely printing 0's

    0
    0
    0
    [...]
    Heat Death of the Universe

Code F

The initial condition to enter the loop is incorrect, so the loop will not execute at all.

    0

