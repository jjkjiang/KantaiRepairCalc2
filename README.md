# KantaiRepairCalc2
Please don't read the first one's code. Dear god.

This is my attempt to show my first C++ program some justice after about a year more of regular coding and classes.
Currently does not take in input, will write parser later.

Involves solving the Multiprocessor Scheduling problem. The solution I implemented was a greedy algorithm that sorts the ships by time, inserts starting from the largest into the next largest container that doesn't exceed the largest value, and then inserts into the smallest container if there is none.

My initial solution was inserting the largest into the smallest, which would often yield non-optimal results and required very expensive analysis to change the structure to being optimal.
