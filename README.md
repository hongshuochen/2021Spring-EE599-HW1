
# HW1 EE599 - Computing Principles for Electrical Engineers

- Plesae clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding quesitions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc), [q5_student_test.cc](tests/q5_student_test.cc), [q6_student_test.cc](tests/q6_student_test.cc), [q7_student_test.cc](tests/q7_student_test.cc) for question  5, 6, 7.
- For submission, please push your answers to Github before the deadline.
- Deadline: Friday, September 4th by 6:30 pm
- Total: 120 points. 100 points is considered full credit.

## Question 1 (10 Points. Medium)

Use proof by contradiction to prove that the FindAverage function always finds the average value of input vector.

```cpp
float FindAverage(std::vector<float> &inputs) {
  float sum = 0.0f;
  for (auto i : inputs) {
    sum += i;
  }
  return sum / inputs.size();
}
```

Answer:

## Question 2 (20 Points. Medium)

Compute the time complexity of the below functions. Please provide both computation process and final result for full credit.

```cpp
void Example3(int n) {
   int count = 0;
   for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= n; j = j * 2) {
           for (int k = 1; k <= n; k = k * 2) {
               count++;
           }
       }
   }
}
```

Answer:

```cpp
int Example1(int n) {
   int count = 0;
   for (int i = n; i > 0; i /= 3) {
       for (int j = 0; j < i; j++) {
           count += 1;
       }
   }
   return count;
}
```

Hint: Nested loops do not always mean O(n^2). Note the ```i /= 3 ``` in the outer loop and compute the geometrical sequence to get the final result.

Answer:

```cpp
void Example2(int a = 0, int n) {
   int i = 1;
   while (i < n) {
       a += i;
       i *= 2;
   }
}
```
Hint: How many iteration will this ```while``` loop run?

Answer:


## Question 3 (10 Points. Easy)

What does it mean when we say that the Merge Sort (MS) algorithm is asymptotically more efficient than the Bubble Sort (BS) algorithm? Support your choice with an explanation.

1. MS will always be a better choice for small inputs
2. MS will always be a better choice for large inputs
3. BS will always be a better choice for small inputs
4. MS will always be a better choice for all inputs

Answer:

## Question 4 (10 Points. Easy)

Create an account on GitHub and Stack Overflow and paste the link to your profile.

Answer:

GitHub profile link:

Stack Overflow profile link:

## Question 5 (15 Points. Easy)

Write a simple function ```std::string CPPLib::PrintIntro()``` in [cpplib.cc](src/lib/cpplib.cc) to print your name, email, and any information about you that you want (e.g. your major, your expertise, your interests, etc) and write a test using GTest for your finction in [tests/q5_student_test.cc](tests/q5_student_test.cc).
We will run your code and see your printout!

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q5_student_test
```

## Question 6 (25 Points. Medium)

 Write a function ```std::vector<int> CPPLib::ChooseOddElement(const std::vector<int> &input)``` in [cpplib.cc](src/lib/cpplib.cc) to select all the odd elements in input vector into another vector.(Get familiar with functions of vector)

Example:\
Input: inputs = [1, 2, 3, 4, 5, 6, 7, 8].\
Output: result = [1, 3, 5, 7].

Write several tests using GTest for your function in [tests/q6_student_test.cc](tests/q6_student_test.cc).\
(Hint: inculde cases with empty vectors)

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q6_student_test
```

## Question 7 (30 Points. Medium)

Write a function ```int CPPLib::climbStairs(int n)``` in [cpplib.cc](src/lib/cpplib.cc) using recursion to find how many distinct ways can you climb to the top. Your function should accept positive numbers less than 45 and return the number of ways. Further, write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q7_student_test.cc) and compute the time complexity of your implementation.

*Rules of the climb stairs*\
You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps.

If there is 0 stair, there is 0 way to the top. For negative input, please return -1.

For example, if the stairs number is 4(n = 4), it should have 5 ways to the top.\
1 + 1 + 1 + 1\
1 + 1 + 2\
1 + 2 + 1\
2 + 1 + 1\
2 + 2

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q7_student_test
```

For question 5, 6, 7, if you want to run all the tests at the same time , you could run
```
bazel test tests:tests
```

Answer:

