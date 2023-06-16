# Running-Sum-of-1d-Array

The code includes the necessary headers <iostream> and <vector> to use the standard input/output and vector functionalities in C++.

The using namespace std; line allows you to use the standard library components without explicitly specifying the namespace.

The code defines a class named Solution. This class contains a member function called runningSum that takes a reference to a vector of integers (nums) as input and returns a vector of integers.

Inside the runningSum function, a vector named results is created with the same size as the input vector nums. This vector will store the running sum values.

The first element of results is assigned the value of the first element of nums since there are no preceding elements to add.

A variable named sum is declared to store the running sum of the current iteration.

A for loop is used to iterate over the elements of nums starting from index 1.

In each iteration of the loop, the sum is calculated by adding the current element of nums with the previous element in results (i.e., results[i - 1]).

The calculated sum is then stored in the current index of results (results[i]).

After the loop finishes, the results vector, containing the running sum values, is returned.

In the main function, a vector named nums is created and initialized with the values 1, 2, 3, 4, and 5.

An instance of the Solution class is created using the statement Solution solution;.

The runningSum method is called on the solution instance, passing the nums vector as an argument, and the resulting vector is stored in a vector named result.

A for loop is used to iterate over the elements of the result vector, and each element is printed to the console using cout.

Finally, the main function returns 0, indicating successful program execution.

In summary, this code defines a class Solution with a member function runningSum that calculates the running sum of a given vector of integers. The main function creates an instance of the Solution class, calls the runningSum method, and prints the resulting vector.
