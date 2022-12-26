# A-December-of-Algorithms-2022
<div align="left">
<h1>
    <p align="center"><img alt="header" src="https://user-images.githubusercontent.com/105559815/206869067-620c21f7-9ba1-48b1-b690-c010be416ad2.jpg" width="500"></img></p>


</h1>
Welcome to A December of Algorithms (2022). 

After overwhelming responses from previous years, we present you with a new collection of algorithms to implement this December. 

Each Day, Each Algorithm ;) 

Finish them all to get a certificate :)


**Send a pull request only after completing all 31 algorithms.**

**Please submit all PRs on or before January 15th 11:59 PM IST.**

## What Do I Do?
We have a small collection of algorithms, one for every day of the month. Scroll down to take a look at them. 

All you need to do is fork this repository, implement all 31  algorithms and send a pull request over to us. 

Check out our FAQ for more information.

## Index
  - [**December 1 - William Butcher's Mission**](#december-1---william-butchers-mission)
  - [**December 2 - The Secret Language**](#december-2---the-secret-language)
  - [**December 3 - Minesweeper**](#december-3---minesweeper)
  - [**December 4 - Industry**](#december-4---industry)
  - [**December 5 - Don’t let Mason misspend!**](#december-5---dont-let-mason-misspend)
  - [**December 6 - Swapped**](#december-6---swapped)
  - [**December 7 - Word Map**](#december-7---word-map)
  - [**December 8 - Aptitude Check!**](#december-8---aptitude-check)
  - [**December 9 - Kochouseph Konundrum!**](#december-9---kochouseph-konundrum)
  - [**December 10 - Play with words**](#december-10---play-with-words)
  - [**December 11 - Monkey jump**](#december-11---monkey-jump)
  - [**December 12 - Shez in a Maze!**](#december-12---shez-in-a-maze)
  - [**December 13 - The Labyrinth**](#december-13---the-labyrinth)
  - [**December 14 - Math Mystery**](#december-14---math-mystery)
  - [**December 15 - The Murderers Meet**](#december-15---the-murderers-meet)
  - [**December 16 - H2O Receptacle**](#december-16---h2o-receptacle)
  - [**December 17 - Zig Zag Conversion**](#december-17---zig-zag-conversion)
  - [**December 18 - Find the way**](#december-18---find-the-way)
  - [**December 19 - Hidden Anagram**](#december-19---hidden-anagram)
  - [**December 20 - Code a Subsequence**](#december-20---code-a-subsequence)
  - [**December 21 - The Devil Towers**](#december-21---the-devil-towers)
  - [**December 22 - The Markowitz Paradox**](#december-22---the-markowitz-paradox)
  - [**December 23 - Meeting Rooms**](#december-23---meeting-rooms)
  - [**December 24 - Cracking The Safe**](#december-24---cracking-the-safe)
  - [**December 25 - The Motorbike Race**](#december-25---the-motorbike-race)
  - [**December 26 - Circulate**](#december-26---circulate)
  - [**December 26 - Circulate**](#december-27---Mission to Earth: Re-Calibrated)
  - [**FAQ**](#faq)
  
  
## Algorithms

 ### December 1 - William Butcher's Mission

   #### Problem Statement
   The mission of William Butcher and his crew is to free the US from the control of Supes. The Supes are seeking to destabilize the country by infiltrating the military in an effort to influence the administration. 
   
  A refugee in the United States from Asia, a Supe, was able to get away from the concentration camps. A crew member who was originally from Spain had an unplanned encounter with them and sought to make up with her despite having trouble understanding her when she tried to speak with the crew. 
  
  After careful analysis, MM discovered that she had employed a string of Hexadecimal characters and digits. 
  
  Design an algorithm to help the crew fully comprehend her hints.


   <p align="center"><img src="https://tv-fanatic-res.cloudinary.com/iu/s--_6a9P6vj--/t_xlarge_l/cs_srgb,f_auto,fl_strip_profile.lossy,q_auto:420/v1598652323/the-boys-cast-from-the-boys-season-2.jpg" width="400"></p>
   
   #### Sample Input/Output
   ```
      Input: 
      1
      { 56, 6F, 75, 67, 68, 74}

      Output: Vought

   ```
   ```
      Input: 
      2
      { 49, 6E, 76, 61, 64, 65} 
      {4D, 69, 6C, 69, 74, 61, 72, 79}
      
      Output: 
      Invade 
      Military

   ``` 
   
   #### Explanation
   ```
     
        The first line of input will specify the number of words (n). The subsequent 'n' lines will specify the word to be translated.
        
   ```
    
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
    - [Hexadecimals and ASCII](https://circuitdigest.com/calculators/hex-to-ascii-calculator)
----

 ### December 2 - The Secret Language

   #### Problem Statement
   Leonard and Sheldon are the best of friends. They know each other so well that they even developed their own language to exchange secret messages. However, they have recently made a new friend, Raj, who has difficulty understanding the two when they communicate in their language.
   
Leonard and Sheldon’s language is similar to Pig Latin. Their unique language consists of usual English words transformed by shifting the first two letters in a word to the end and adding a suffix 'ae'.

Help Raj translate and decode his friends' secret messages.



   <p align="center"><img src="https://user-images.githubusercontent.com/119515193/205096868-e17042f7-379d-4e8f-95f9-7ad1ce84bc10.gif" width="400"></p>

   
   #### Sample Input/Output
   ```
      
      Input: kipediawiae

      Output: wikipedia

   ```
   ```
      
      Input: ammargrae
      
      Output: grammar

   ``` 
   
- **References**
    - [Pig Latin](https://en.wikipedia.org/wiki/Pig_Latin)
    - [Strings in C++](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)
    - [Strings in Java](https://www.tutorialspoint.com/java/java_strings.htm)
    - [String in Python](https://www.tutorialspoint.com/python/python_strings.htm)
    
----

 ### December 3 - Minesweeper

   #### Problem Statement
  Consider a minefield made up of # and -, where each hash (#) represents a mine and each dash (-) represents a mine-free spot. Display the minefield where each dash is replaced by the number of mines immediately adjacent to the spot (horizontally, vertically, and diagonally). 

   <p align="center"><img src="https://user-images.githubusercontent.com/119505502/205342027-d03a8be3-4032-44ca-a959-afbf55756d5b.jpeg" width="400"></p>
   

   
   #### Sample Input/Output
   ```
 Input:
    5
  ["-", "-", "-", "-", "-"],
  ["-", "-", "-", "-", "-"],
  ["-", "-", "#", "-", "-"],
  ["-", "-", "-", "-", "-"],
  ["-", "-", "-", "-", "-"]

 Output:
 
  ["0", "0", "0", "0", "0"],
  ["0", "1", "1", "1", "0"],
  ["0", "1", "#", "1", "0"],
  ["0", "1", "1", "1", "0"],
  ["0", "0", "0", "0", "0"],

  ```
  ```
 Input:
    5
  ["-", "#", "-", "-", "#"],
  ["-", "-", "-", "-", "-"],
  ["-", "-", "#", "-", "-"],
  ["-", "#", "-", "-", "#"],
  ["-", "#", "-", "-", "#"]

 Output:
 
  ["1", "#", "1", "1", "#"],
  ["1", "2", "2", "2", "1"],
  ["1", "2", "#", "2", "1"],
  ["2", "#", "3", "3", "#"],
  ["2", "#", "2", "2", "#"]

```

#### Explanation
```
 
    The first line of input shows the number of rows and columns of the minefield (2D array).
    The next line(s) of input show the minefield with the mines and the mine-free spots. 
    
    ["0", "0", "0", "0", "0"],
    ["0", "1", "1", "1", "0"],
    ["0", "1", "#", "1", "0"],
    ["0", "1", "1", "1", "0"],
    ["0", "0", "0", "0", "0"],
    
    The output should contain the arrays of digits showing number of mines immediately adjacent (horizontally, vertically and diagonally) to a given position in the array.
    
```

- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
    - [Minesweeper](https://en.wikipedia.org/wiki/Minesweeper_(video_game))
    
----

### December 4 - Industry

   #### Problem Statement
  Harper is a graduate at a bank called Pierpoint, the first assignment given to her by her boss, Eric, is to analyse the stock market rise and fall for a given set of stock market change values for n days. 
  She must submit a report to Eric highlighting the period of time when the company should sell to maximise their profit, she must also mention the profit value. 
  
  Given a set of values, help Harper gather the necessary data for her report. 

   <p align="center"><img src="https://user-images.githubusercontent.com/105559815/205451731-fa4f9219-8449-4f1e-a31f-0453b858bda3.gif" width="400"></p>
   
   
   #### Sample Input/Output
   ```
 Input:
 
    No. of days: 5

    Given stock market change values: { 5,4,-1,7,8}

  
 Output:
 
  Profit Value: 23
  Proposed days to sell: Day: 1 to Day: 5
  Stock market Change Values: {5,4,-1,7,8}


  ```
  ```
 Input:
 
    No. of Days:19
    Given stock market change values: { 5,-4,12,-2, -5, 6, -2,-3, 1, 5, -6,-11,7,-31,9,2,-3,8,-5 }


 Output:
 
  Profit Value: 16
  Proposed days to sell: Day: 15 to Day: 18
  Stock market Change Values: {9, 2, -3, 8}


```

#### Explanation
```
    
    The first line of input is the number of days Harper is going to consider for her analysis.
    The second line of input is the stock market change values for those given days.

    In order to find the best period of time to sell in order to maximise profit, 
    Harper must find the maximum sum of all the stock change values in every possible subset of days from the given set.

    In the given sample input, it is found that out of all the subsets obtained, the one having the maximum sum was the entire set as a whole. 
    And thus, the company will be able to make maximum profit if they sell on all the days in that given period of time.

    
```
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
    - [Maximum Sum Subarray](https://www.geeksforgeeks.org/maximum-subarray-sum-using-divide-and-conquer-algorithm/)
    - [Divide and Conquer](https://www.geeksforgeeks.org/introduction-to-divide-and-conquer-algorithm-data-structure-and-algorithm-tutorials/)
----

### December 5 - Don’t let Mason misspend!
#### Problem Statement
MASON is a motoring enthusiast and he owns a sports bike . With the price of petrol going up and down in a pattern , MASON is worried whether his salary would be sufficient to meet his needs apart from fueling his bike . So he decides to calculate how much he spends on fueling his bike per month. Help MASON calculate his fuel expenditure. If he spends more than 10 PERCENTAGE of his INCOME give him  a warning message reading “EXPENDITURE EXCEEDING LIMIT”

<p align="center"><img src="https://user-images.githubusercontent.com/113821083/205503831-d0cb042f-99ee-46e1-a55c-2570579ca947.jpeg" width="400"></p>

 #### Conditions
1. MASON fuels his bike twice a day .

2. The PRICE of the fuel is x/l initially.

3. Every third day the price goes up by 3 rupees .

4. Every fifth day the price goes down by 2 rupees .

5. On the other days the price of the fuel remains x/l.

6. Help him to calculate his expense for a period of one month
(31DAYS) .

7. Check whether the expenditure is more than 10 percent of his income .

8. His income is 50,000 rupees per month.

 #### Sample Input/Output
     
```    
 Input:
  fuel_price=75

Output:
Expenditure=4686

“EXPENDITURE WITHIN LIMIT”

```
    
```
Input:
fuel_price=97

Output:
Expenditure=6050

“EXPENDITURE EXCEEDING LIMIT”
    
```

 #### Explanation
 ```
 
         The input is the rate of the fuel in the beginning of the month.
        The output is the amount he must spend on fueling his bike. 
        If the expenditure exceeds 10% of the income (i.e greater than 5000), then an alert message must be displayed.
        
 ```

- **References**
    - [Looping in C](https://www.tutorialspoint.com/cprogramming/c_loops.htm)
    - [Looping in C++](https://www.programiz.com/cpp-programming/for-loop)
    - [Looping in Java](https://www.geeksforgeeks.org/loops-in-java/)
    - [Looping in Python](https://www.w3schools.com/python/python_for_loops.asp)

----

### December 6 - Swapped
#### Problem Statement
Bob and Tanika are best friends. They were bored so they decided to play a game. The game they chose to play involved a set of ‘n’ positive numbers. 
The player who goes first must choose a position ‘p’ and their turn ends with that. 
In the subsequent turns,  the player must first subtract the value in the first position by 1 and swap it with the value in position ‘p’. 
The players will take alternate turns and the game goes on till the value in the first position becomes 0. 
The player whose turn it is loses the game when the value in the first position becomes 0.
Determine the winner of the game if both players play optimally and display the winner's name.


<p align="center"><img src="https://user-images.githubusercontent.com/105559815/205705632-898b9a40-ae67-48e6-a496-abb07e90aa36.png" width="400"></p>

 #### Sample Input/Output
     
```    
 Input:
  Position=3
  Set of numbers: 5 4 4 
  Player going first: Tanika


Output:
   Tanika wins the game!
   Bob loses the game!


```

 #### Explanation
 ```
        1) 5 4 4 (initial)
        
            Tanika chooses position 3
            
        2) 4 4 4 (bob)
        
            5-1, swapping (5-1) with value in position 3 (4)
            
        3) 4 4 3 (tanika)
        4) 3 4 3 (bob)
        5) 3 4 2 (tanika)
        6) 2 4 2 (bob)
        7) 2 4 1 (tanika)
        8) 1 4 1 (bob)
        9) 1 4 0 (tanika)
        10) 0 4 0 (bob)
        
        Since, on bob's turn the initial value at the first position is 0, he loses the game.
 
 ```

- **References**
    - [Looping in C](https://www.tutorialspoint.com/cprogramming/c_loops.htm)
    - [Looping in C++](https://www.programiz.com/cpp-programming/for-loop)
    - [Looping in Java](https://www.geeksforgeeks.org/loops-in-java/)
    - [Looping in Python](https://www.w3schools.com/python/python_for_loops.asp)
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)

----

### December 7 - Word Map
#### Problem Statement

You are given a grid made up of random characters. 
Given a word, your task is to determine whether the word can be constructed from the given grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. 
The same letter cell may not be used more than once.


<p align="center"><img src="https://user-images.githubusercontent.com/105559815/205982685-c0637a1f-183d-449f-9e6f-4ef9dee62d3e.jpg" width="400"></p>

 #### Sample Input/Output
     
```    
 Input:
  COMMUNICATION

Output:
  Found
  
```

```    
 Input:
    DOCUMENT

Output:
  Not Found
  
```

```   
 Input:
    MEDIATION

Output:
  Found
  
```

 #### Explanation
 ```
     You are required to construct the given grid in the form of a 2D array of characters.
     
     All the characters must be either in uppercase.

     The dimensions of the grid are 15x15.
      
     The input is a single word.
      
     The output is "Found" if the input word is found in the grid else it is "Not Found".
 
 ```

- **References**
    - [Strings in C++](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)
    - [Strings in Java](https://www.tutorialspoint.com/java/java_strings.htm)
    - [String in Python](https://www.tutorialspoint.com/python/python_strings.htm)
    
----
    
### December 8 - Aptitude Check!
#### Problem Statement
Arshith is a pre-final year student preparing for his aptitude, technical and interview rounds as part of his placement training. 

He has come across a mind-boggling problem statement that integrates a coding problem with a logical question as specified below:

In a specific language, “DEMOCRACY” is coded as “EDOMRCCAY".

Help Arshith develop a way to translate any given word to that particular language. Compute it using any approach of programming.


<p align="center"><img src="https://user-images.githubusercontent.com/110989285/206233419-53af37a7-e675-4b59-b722-f67adfe0a5ae.png" width="400"></p>

 #### Sample Input/Output
     
```    
 Input:  UNCOPYRIGHTABLE
 Output: NUOCYPIRHGATLBE

```

```
 Input:  SPEEDRUNNER
 Output: PSEERDNUENR

```
- **References**
    - [Strings in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
    - [Strings in Python](https://www.geeksforgeeks.org/python-string/)
    - [String in Java](https://www.geeksforgeeks.org/strings-in-java/)

----

### December 9 - Kochouseph Konundrum!
#### Problem Statement
Kochouseph Chittilappilly went to Dhruv Zplanet , a gaming space, with his friends and played a game called “Guess the Word”.

Rules of the game are –

Computer displays some strings on the screen and the player should pick one string / word if this word matches with the random word that the computer picks then the player is declared as Winner.

Kochouseph Chittilappilly’s friends played the game and no one won the game. This is Kochouseph Chittilappilly’s turn to play and he decided to win the game.
What he observed from his friend’s game is that the computer is picking up the first string whose length is odd and is of maximum length. 

Due to system failures computers sometimes cannot generate odd length words. In such cases you will lose the game irrespective of whether you guess the right word or not and it displays “better luck next time”. 

Write a program to help Kochouseph win the game.


<p align="center"><img src="https://user-images.githubusercontent.com/110716198/206476505-7cc0c18c-4034-46e1-8cd4-7e2ef8f72801.png" width="400"></p>

 #### Sample Input/Output
     
```    
Input:
5
Hello Good Morning Welcome You

Output :
Morning

```

```    
Input:
3
Go to hell

Output :
Better luck next time

```

 #### Explanation
 
 ```
 The first line of input is the number of words in the given string.
 The second line of input is the string of words.
 
 The output is the word chosen by the computer.
 
 ```
 
- **References**
    - [Strings in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
    - [Strings in Python](https://www.geeksforgeeks.org/python-string/)
    - [String in Java](https://www.geeksforgeeks.org/strings-in-java/)

----

### December 10 - Play with words
#### Problem Statement
A group of students were playing a word game. They divided themselves into teams and had 4 rounds. 

One round was the pronunciation round. One team challenged the other team to pronounce “schtschurowskia”. It was difficult for both the teams to pronounce the word. They approached their teacher for help. He gave them a hint. 

Have a look at the hint!

Hint:
 A word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. 
 
For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.   After giving them an example, he asked them  to solve the following problem.
 
Given: A string S consisting of N lowercase Latin characters. 

To Determine:  Whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.
For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.
Help them solve the problem.

<p align="center"><img src="https://user-images.githubusercontent.com/105559815/206757545-341cbd7a-d12a-4af9-8d1f-a4da640343b4.jpg" width="400"></p>

 #### Sample Input/Output
     
```    
Input:
5
5
apple
15
schtschurowskia
6
polish
5
tryst
3
cry

Output:
YES
NO
YES
NO
YES
 
 ```
 
#### Explanation:

 ```

Input Format:

The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of string S.
The second line of each test case contains the string S.

Output Format:

For each test case, output on a new line the answer — YES if S is easy to pronounce, and NO otherwise.
Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

Constraints:

1≤T≤100

1≤N≤100

S contains only lowercase Latin characters, i.e, the characters {a,b,c…….z}

```

- **References**
    - [Strings in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
    - [Strings in Python](https://www.geeksforgeeks.org/python-string/)
    - [String in Java](https://www.geeksforgeeks.org/strings-in-java/)

----


### December 11 - Monkey jump
#### Problem Statement

A list is provided with a sequence of characters ‘_ _’    and ‘~’ in it Eg = [‘_’,’_’,’~’,’_’]. The character ‘_’ represents land and the character ‘~’ represents water. A monkey can move 1 step or 2 steps at a time. Another list is provided which contains the step that the monkey took Eg[1,1,2,1,2]. Whenever the monkey touches the water. The game is over and the score must be returned. Calculate the Jumps the monkey took before touching the water's surface.

<p align="center"><img src="https://user-images.githubusercontent.com/119495356/206857020-3aefe633-ed69-4eef-a285-ef6ab27ac6ff.jpg" width="400" height="400"></p>
 

 #### Sample Input/Output
     
```    
Input 1:

[‘_’,’~’,’_’,’_’,’_’,’_’,’~’,’_’,’_’,’~’,’_’,’~’]


Output 1:

Score =8

Input 2:

[‘_’,’~’,’_’,’~’,’_’,’_’,’~’,’_’,’_’,’~’,’_’,’~’]

Output 2: 

Score =2

 ```
 
#### Explanation:

 ```

The input is a combination of ‘_’ and ‘~’ representing land and water respectively.
2 jumps indicate, for example, initially being on position 1 and ending up on position 3 without landing on position 2 in between.
 
Monkey takes two jumps as first move and three single jumps as next moves. But after taking two jumps the monkey touches the water . 
The jump sequence: [2,1,1,1,2,1,1,1,1]
So the total jump count is 8.

```

- **References**
- [Looping in C](https://www.tutorialspoint.com/cprogramming/c_loops.htm)
- [Looping in C++](https://www.programiz.com/cpp-programming/for-loop)
- [Looping in Java](https://www.geeksforgeeks.org/loops-in-java/)
- [Looping in Python](https://www.w3schools.com/python/python_for_loops.asp)
- [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
- [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
- [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)


----
### December 12 - Shez in a Maze!
#### Problem Statement
Shez went to an interesting maze where she was given 500 coins. The rule of the maze is when you choose a path in a maze you need to drop the amount indicated on the path and successfully reach the end.

The winner is declared based on the amount you have spent. The person who has spent the least amount will be the winner.

Can you help her win the maze?

The cost of the path will be in a NxN matrix and the current path is indicated by path[i][j], from the current path you can either travel up, down, front or back.

Note that the start of the maze is the top most left corner and the destination is the bottom most right corner.

<p align="center"><img src="https://user-images.githubusercontent.com/113821083/206911442-4e4d9831-108d-4fcb-b46e-b08011205af5.png" width="400" height="400"></p>

#### Sample Input/Output
``` 
INPUT 1:

4
Path = { {9,4,9,9}, {6,7,6,4}, {8,3,3,7}, {7,4,9,10} }

OUTPUT 1:	

path_taken={9,4,3,3,7,10}
The minimum coins dropped is 43
``` 
``` 
INPUT 2:	

3
Path = { {8,3,9}, {2,6,4}, {8,3,1}}

OUTPUT 2:	

path_taken={8,2,6,3,1}
The minimum coins dropped is 20
``` 
#### Explanation:
```

The first line of input is the size of the NxN matrix.
The next line of input is an NxN matrix where each element represents the number of coins you need to drop at that position.

The output is a path_taken matrix and the minimum coins dropped amount. 

9  4  9  9
6  7  6  4
8  3  3  7
7  4  9  10
Minimum cost  = 9 + 4 + 7 + 3 + 3 + 7 + 10 = 43
So here we see that from the start point Shez can take 3 paths which are of costs 4,7,6 respectively. 

Of these 3 paths the one with cost 4 is the path with minimum cost.  

Now from 4 she can either take a path of cost 9 or 7 (Remember you can move only up, down, front, back and no diagonal movement is allowed) so she takes the path with cost 7.
From 7 she has 4 options; paths of costs 6,6,3,4 (Taking path 4 is not advisable since that is from where we came to path 7) so now she takes path with cost 3 and then from this position 3 she can either take paths 8,7,3,4; the minimum cost is 3 so she proceeds in the path with cost 3. Following this logic she finishes the maze with spending a minimum amount of 43 units.

```

----
### December 13 - The Labyrinth
#### Problem Statement
In Ancient Greek mythology, the Labyrinth was an intricate maze constructed by the master inventor Daedalus as per the orders of King Minos of Crete. 
Many heroes from afar contended to escape the maze and overpower the ferocious beast Minotaur, but none succeeded in their attempts except for one, the great Theseus of Athens.
Imagine a modern-world Labyrinth similar to an N*N binary matrix of blocks such that:
- The starting point is the upper leftmost block
- The endpoint is the lower rightmost block
- Dead ends are represented by 0
- A clear path is represented by 1

Help Theseus escape this Labyrinth if he can only move forward and backwards throughout his quest.


<p align="center"><img src="https://user-images.githubusercontent.com/103169831/207067128-5d025f1e-da9f-4caa-bbbe-6546b2398d2b.jpg" width="400"></p>




#### Sample Input/Output
``` 
INPUT:
4
{1,0,0,0}
{1,1,0,1}
{0,1,0,0}
{1,1,1,1}


OUTPUT:	
{1,0,0,0}
{1,1,0,0}
{0,1,0,0}
{0,1,1,1}

``` 
``` 
INPUT:	
4
{1,1,1,0}
{1,0,1,1}
{0,1,0,1}
{0,1,1,1}


OUTPUT:	
{1,1,1,0}
{0,0,1,1}
{0,0,0,1}
{0,0,0,1}

``` 
#### Explanation:
```
The first line of input is the size of the N*N matrix.
In the given samples, the input matrix specifies the structure of the maze in which 0's represent the dead ends, and 1's represent the clear blocks. 
After computing a path to the destination, the output matrix represents the path to the destination block using 1’s.

```

----
### December 14 - Math Mystery 
#### Problem Statement
Dr. Satheesh Kumar is an outstanding professor in Discrete Mathematics. However, he has been assigned to teach an unruly batch of students. The lesson he planned to cover in the upcoming class was of utmost importance for the students.

The lesson was none other than “Graph Theory”, which required a concise understanding of fundamental theoretical concepts and numerous theorems.

The professor decided to execute those theorems programmatically as the students belong to the Computer Science department. He prepared all the theorems as programs except one theorem, which discussed the topic of “Graph Bipartite”.

Bipartite Graph: It is a graph whose vertices can be divided into 2 independent sets U and V such that every edge (u,v), either connects a vertex from U to V or a vertex from V to U. (We can also say that there is no edge that connects vertices of the same set).

Help Dr. Satheesh Kumar come up with a program which obtains a graph as input and produces an output verifying its bipartite property.


<p align="center"><img src="https://user-images.githubusercontent.com/119515193/207395361-b94676d6-2675-446a-a59e-a1725de869f1.png" width="400"></p>





#### Sample Input/Output
``` 
INPUT:
6

0 1 0 0 0 1
1 0 1 0 0 0 
0 1 0 1 0 0 
0 0 1 0 1 0
0 0 0 1 0 1
1 0 0 0 1 0

OUTPUT:	
The graph is Bipartite!

``` 
``` 
INPUT:	
4

0 1 0 1
1 0 1 0 
0 1 0 1
1 0 1 0

OUTPUT:	
The graph is Bipartite!

``` 
#### Explanation:
```
The first line of the input is the number of vertices in the graph.The next part of the input is the adjacency matrix of the graph,
where every row/column is a vertex and the 1 represents an edge connecting two vertices. 
You are required to divide the given vertices into two sets such that:
          1. Every vertex in one set is connected to at least one vertex in the other set.
          2. There is no edge between the vertices of the same set.

```
- **References**
- [Bipartite graphs](https://www.tutorialspoint.com/bipartite-graphs)
- [Adjacency matrices](https://www.javatpoint.com/what-is-an-adjacency-matrix)
- [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
- [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
- [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)

----


### December 15 - THE MURDERERS MEET 

#### Problem Statement

The death of Sam Keating, Annalise Keating's husband, caused the entire city to be in suspense as to who killed him because of the city of Philadelphia's soaring murder rate. The best defense attorney in Philadelphia, Annalise Keating also teaches law undergrads in addition to turning heads in the courtroom. She chooses pupils from her class for Keating 5. Due to security concerns, the Keating 5 have been conducting confidential missions via virtual meetings since her husband's death. The tech lead is Oliver, a hacker who organizes their meetings in a covert manner. Oliver is quite skilled at doing this. The last meeting, however, was chaotic due to the traffic that broke out as a result of several inmates speaking at once while muted.

Help Oliver by creating an algorithm that uses mouse-based and timestamps to implement Queue in unmuting in order to get around this technical traffic.



<p align="center"><img src="https://user-images.githubusercontent.com/119505502/207613844-569c5777-6207-44c0-88e5-ed45afb92400.gif" width="400"></p>



#### Sample Input/Output
``` 
Input: {Wes, 12:00:30},{Michella, 12:03:40},{Asher, 12:00:01}

Output: Asher, Wes, Michella.

Input: {Annalise, 01:09:00},{ Frank, 01:02:30},{Laurel, 01:04:19}

Output: Frank, Laurel, Annalise.

``` 
#### Explanation:
```
When a meeting participant presses the unmute button, their name and the moment it was pressed are recorded. 

There are therefore three inputs, each with a timestamp and a name. {name, timestamp}.

The timestamp is in the format of hh:mm:ss.

They will now be organized into a queue based on when they pressed the microphone button, and once they are in a queue, the output is produced based on the time difference and the queue's arrangement. As a result, they will have quick access to unmute their mics.

```
- **References**
- [Queue data structure](https://www.javatpoint.com/data-structure-queue)
- [Queue in Java](https://www.geeksforgeeks.org/queue-interface-java/)
- [Queue in Python](https://www.geeksforgeeks.org/queue-interface-java/)

----


### December 16 - H2O Receptacle 

#### Problem Statement

John has an integer array height of n non-negative integers height [n], where each value represents a point at coordinate (i, height[i]). Now n vertical lines are drawn such that the two endpoints of line i are at (i, 0) and (i, height[i]). Here each pair of a line with the x-axis forms a container.

Determine two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.



<p align="center"><img src="https://user-images.githubusercontent.com/120033475/207920281-6c1e2392-e7e4-429b-9a65-86b871fa6381.JPG" width="400"></p>



#### Sample Input/Output
``` 
Input: height = [6,2,5,4,8]
Output: 24


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

```
#### Explanation:
```
The above vertical lines are represented by an array [1,8,6,2,5,4,8,3,7]. 

In this case,the area between lines 7 and 8 will be maximum. 

7 and 8 are 7 units in distance apart, so the size of the base is 7 . 

Height of the container is min(7,8)= 7. So the max area of water (blue section) the container can contain is 49.

```
- **References**
- [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
- [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
- [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)

----


### December 17 - Zig Zag Conversion 

#### Problem Statement

You are given a string ‘Str’ and an integer ‘Row’. You have to convert and print the row into a zig-
zag pattern with rows equal to ‘Row’ and display the output row-wise. You may refer to the given sample input/output.



#### Sample Input/Output
``` 
Input:

Str = “spaghettigood”
Row = 4

Output:
stdpetoahiogg

Input:

Str = “spritebetter”
Row = 3

Output:
sttpieetrrbe

```
#### Explanation:
```
Input Format :

The first line of each test case contains a string ‘Str’, denoting the input string.

Zig-zag pattern:
s        t      d
p     e  t    o
a   h    i  o
g        g

The second line of each test case contains a single integer ‘Row’, denoting the number of rows in the
zig-zag pattern to be created.

Output Format :

For each test case, print the new string after zig-zag conversion.
Output for each test case should be printed in a separate line.

```
- **References**
- [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
- [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
- [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)

----

### December 18 - Find the way

#### Problem Statement

Pooja and Ravi are two close friends that live in the city chosen by the user. The graph below shows the cities P, Q, R, S, T, U, V and W represented by the vertices and the rail connections between them represented by edges. The numbers on the edges are the times, in hours, it takes to travel by train between each of the cities. find the shortest time to travel by train between chosen city and W. Also find the time taken.


![find the way](https://user-images.githubusercontent.com/119495356/208252824-4486cb25-7557-411f-afa9-dc17f767e00a.png)



#### Sample Input/Output
``` 
Input:

City chosen: P

Output:

Shortest path: P – R – V – W
Shortest time: 7 hours



```
#### Explanation:
```
Input Format :

The argument given is the city that they choose

Output Format :

Return the shortest path between the chosen city and w. If chosen city is W then the shortest path is 0. Also return the time taken.

CONSTRAINT:
Time complexity is 0(V^2)


```
- **References**
- [Graphs](https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/)
- [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
- [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
- [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
- [Adjacency matrices](https://www.javatpoint.com/what-is-an-adjacency-matrix)

----

### December 19 - Hidden Anagram

#### Problem Statement

You are given two strings (String 1 and String 2). The first string contains a sentence containing the letters of the second string in a consecutive sequence but in a different order. 

Your task is to find the hidden anagram of the second string in the first string. 

The hidden anagram must contain all the letters, including duplicates, from the second string in any order and must not contain any other alphabetic characters.

Write a program to find the anagram of the second string embedded somewhere in the first string. 

You should ignore character case, any spaces, and punctuation marks and return the anagram as a lower case string with no spaces or punctuation marks.


<p align="center"><img src="https://user-images.githubusercontent.com/105559815/208308540-47a8606c-35a9-48a3-81d0-ffef185377c6.jpg" width="400"></p>



#### Sample Input/Output
``` 
Input:

String 1:
"My world evolves in a beautiful space called Tesh."

String 2:
"sworn love lived" 


Output:

"worldevolvesin"

```

``` 
Input:

String 1:
"Mr. Mojo Rising could be a song title"

String 2:
"Jim Morrison" 


Output:

"mrmojorisin"


```

#### Explanation:
```

The sequence "world evolves in" is a perfect anagram of "sworn love lived".

The sequence "Mr. Mojo Risin" ignoring the full stop, is a perfect
Anagram of "Jim Morrison".


```
- **References**
    - [Strings in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
    - [Strings in Python](https://www.geeksforgeeks.org/python-string/)
    - [String in Java](https://www.geeksforgeeks.org/strings-in-java/)


----

### December 20 - Code a Subsequence

#### Problem Statement

A subsequence of a sequence is a sequence which is obtained by deleting zero or more elements from the sequence. 

You are given a sequence A in which every element is a pair of integers  i.e  A = [(a1, w1), (a2, w2),..., (aN, wN)].

For a subsequence B = [(b1, v1), (b2, v2), ...., (bM, vM)] of the given sequence : 

We call it increasing if for every i (1 <= i < M ) , bi < bi+1.

Weight(B) = v1 + v2 + ... + vM.

Task:
Given a sequence, output the maximum weight formed by an increasing subsequence.

Input:

The first line of input contains a single integer T. T test-cases follow. The first line of each test-case contains an integer N. The next line contains a1, a2 ,... , aN separated by a single space. The next line contains w1, w2, ..., wN separated by a single space.

Output:

For each test-case output a single integer: The maximum weight of increasing subsequences of the given sequence.
Constraints:
1 <= T <= 5
1 <= N <= 150000
1 <= ai <= 109, where i ∈ [1..N]
1 <= wi <= 109, where i ∈ [1..N]

<p align="center"><img src="https://user-images.githubusercontent.com/105559815/208486892-82747ab6-bbbf-4e6c-a188-0049a3276987.PNG" width="400"></p>

#### Sample Input/Output
``` 
Input:

2  
4  
1 2 3 4  
10 20 30 40  
8  
1 2 3 4 1 2 3 4  
10 20 30 40 15 15 15 50


Output:

100  
110

Input:

2
5 6
2 4 3 5 1
7 15
6 3 12 4 5 1 2


Output:

1 1 2 2 3 1 
1 1 1 2 3 2 2 3 1 1 2 2 0 0 0

```

#### Explanation:

```

In the first Example,at the first sequence, the maximum size increasing subsequence is 4, and there's only one of them. We choose B = [(1, 10), (2, 20), (3, 30), (4, 40)], and we have Weight(B) = 100.
In the second sequence, the maximum size increasing subsequence is still 4, but there are now 5 possible subsequences:
1 2 3 4  
10 20 30 40

1 2 3 4  
10 20 30 50

1 2 3 4  
10 20 15 50

1 2 3 4  
10 15 15 50

1 2 3 4  
15 15 15 50

Of those, the one with the greatest weight is B = [(1, 10), (2, 20), (3, 30), (4, 50)], with Weight(B) = 110.
Please note that this is not the maximum weight generated from picking the highest value element of each index. That value, 115, comes from [(1, 15), (2, 20), (3, 30), (4, 50)], which is not a valid subsequence because it cannot be created by only deleting elements in the original sequence.


```
- **References**
    - [Strings in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
    - [Strings in Python](https://www.geeksforgeeks.org/python-string/)
    - [String in Java](https://www.geeksforgeeks.org/strings-in-java/)
    - [Dynamic Programming](https://www.geeksforgeeks.org/dynamic-programming/)


----



### December 21 - The Devil Towers

#### Problem Statement

Morpheus, the ruler of the Kingdom of Dreaming was summoned and robbed of his possessions and kept in confinement for 106 years. Upon his escape from the shackles of time, Morpheus now wishes to find his lost possessions, a scarlet ruby, a pouch of sand, and his helm, a ceremonial crown he must dorn to become King of Dreaming again.

To his utter shock, his helm resides in the hands of a Lesser Daemon in the depths of Hell. Morpheus descends into hell and is immediately in an audience with Pandaemonium’s ruler, Lucifer Morningstar. The Lesser Daemon challenges Morpheus to a tourney of brilliance, to a game known as the Devil Towers.

The Daemon gives Morpheus 3 towers. At the end of the game, all discs must be stacked on only a single tower, leaving the others empty.

The Daemon claims Lucifer as his champion, while Morpheus calls you in as his, and so you are tasked with moving all discs from the first to the third tower, heeding the Daemon’s rules:-

        - You can only move one disc at a time.
        
        - Only the disc at the top of the tower can be moved. 
        
        - Discs can only be moved by first moving discs above them.
        
        - No disc may be placed on top of a smaller disc.
        
        - You have only certain fixed moves:
        
                    left->right, left->middle
               
                    middle->left, middle->right
                    
                    right->left, right->middle
                    


<p align="center"><img src="https://user-images.githubusercontent.com/105559815/208724678-d03ae57c-2940-42ad-bbae-1721df372728.gif" width="400"></p>


#### Sample Input/Output
``` 
Input:

Number of discs: 3

Output:

The sequence of moves :
Move disk 1 from tower I to tower III
Move disk 2 from tower I to tower II
Move disk 1 from tower III to tower II
Move disk 3 from tower I to tower III
Move disk 1 from tower II to tower I
Move disk 2 from tower II to tower III
Move disk 1 from tower I to tower III

```

``` 
Input:

Number of discs: 2

Output:

The sequence of moves :
 Move disk 1 from tower I to tower II
 Move disk 2 from tower I to tower III
 Move disk 1 from tower II to tower III

```

#### Explanation:

```

Your input will be a number indicating the total number of disks on the first (left) tower.
Your output must be the sequence of moves for the given number of discs.

```
- **References**
    - [Recursive Algorithms](https://www.geeksforgeeks.org/introduction-to-recursion-data-structure-and-algorithm-tutorials/)


----

### December 22 - The Markowitz Paradox

#### Problem Statement

In the year 1977, Meyer Offerman, a rich Jewish businessman in New York and his covert associates called began hunting down all Nazi officials given asylum in the United States of America as a part of Operation Paperclip. 

On one of their missions they intercepted some messages hinting at a possible Third Reich in the works, but most of the message was encrypted into some code language meant only for the Reich. After spending weeks on trying to decode the messages and worried that the Third Reich of Nazi Germany may be inevitable, Murray Markowitz was finally able to interpret them and uncover one of the most sinister plots in American history. 

The Hunters devised a plan to send bogus messages to the other Nazis on behalf of their Colonel, altering their plan of action and in the process destabilising the Reich. However, before Murray was able to encrypt the bogus messages he was killed in a subway explosion leaving Jonah Heidlbaum, the responsibility of completing his task.

The only reference Jonah has in order to correctly translate the given text into the secret message is Murray’s old Caesar Cipher notes as the encryption algorithm he discovered was destroyed during the explosion. 

Upon studying them he discovered that the method of encryption, used a series of interwoven Caesar ciphers, that takes a codeword and given a plaintext repeats the codeword until it matches the length of the plaintext.

Help Jonah by writing a program to encrypt the bogus messages correctly.



<p align="center"><img src="https://user-images.githubusercontent.com/105559815/208968039-bfda545d-7a79-47c6-ab1d-caf7ff7b9cdc.jpg" width="400"></p>


#### Sample Input/Output
``` 
Input:

LEMON
ATTACKATDAWN

Output:

LXFOPVEFRNHR

```

``` 
Input:

HOTDOG
CONEYISLANDONFRI


Output:

JCGHMOZZTQRUUTKL

```

``` 
Input:

MUSTANG
THECOLNELWILLBEATCENTRALPARKWITHTHEDETONATORDONOTAPPROACHWITHOUTBACKUP

Output:

FBWVOYTQFOBLYHQULVEAZDUDIAEQICLATUKPYLHNNZALVHNBZMJHKONITQAMHBAFVSVKHV

```

#### Explanation:

```

The first line of input is the codeword in this case “LEMON” and the next line of input is the message to be encrypted. 
The message as well as the codeword do not have any spaces between the words.
 
L E M O N L E M O N L E
A T T A C K A T D A W N

The algorithm should encrypt every letter using a Caesar cipher shifted to the corresponding letter of the codeword. 

So, for example:

    - The first "A" is encrypted using a Caesar cipher of A → L (+11), so it becomes L.
    
    - The first "T" is encrypted using a Caesar cipher of A → E (+4), so it becomes X.
    
    - The second "T" is encrypted using a Caesar cipher of A → M (+12), so it becomes F.

    Subsequently, we get:
    LXFOPVEFRNHR

```
- **References**
    - [Strings in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
    - [Strings in Python](https://www.geeksforgeeks.org/python-string/)
    - [String in Java](https://www.geeksforgeeks.org/strings-in-java/)
    - [Caesar Cipher](https://www.geeksforgeeks.org/caesar-cipher-in-cryptography/)


----

### December 23 - Meeting Rooms

#### Problem Statement

You are given an integer n. There are n rooms numbered from 0 to n - 1.

You are given a 2D integer array meetings where meetings[i] = [starti, endi] means that a meeting will be held during the half-closed time interval [starti, endi). All the values of starti are unique.

Meetings are allocated to rooms in the following manner:

Each meeting will take place in the unused room with the lowest number.

If there are no available rooms, the meeting will be delayed until a room becomes free. The delayed meeting should have the same duration as the original meeting.

When a room becomes unused, meetings that have an earlier original start time should be given the room.

Return the number of the room that held the most meetings. If there are multiple rooms, return the room with the lowest number.

A half-closed interval [a, b) is the interval between a and b including a and not including b.



<p align="center"><img src="https://user-images.githubusercontent.com/105559815/209187411-30d43abd-04df-473d-9e81-ad9665b88ba2.jpg" width="400"></p>


#### Sample Input/Output
``` 
Input:

n = 2

meetings = [[0,10],[1,5],[2,7],[3,4]]


Output:

0

```

``` 
Input:

n = 3

meetings = [[1,20],[2,10],[3,5],[4,9],[6,8]]


Output:

1

```


#### Explanation:

```

For the first sample input the first line is the number of rooms and the second line of input is the meetings with the start and end time.

- At time 0, both rooms are not being used. The first meeting starts in room 0.

- At time 1, only room 1 is not being used. The second meeting starts in room 1.

- At time 2, both rooms are being used. The third meeting is delayed.

- At time 3, both rooms are being used. The fourth meeting is delayed.

- At time 5, the meeting in room 1 finishes. The third meeting starts in room 1 for the time period [5,10).

- At time 10, the meetings in both rooms finish. The fourth meeting starts in room 0 for the time period [10,11).
  
  Both rooms 0 and 1 held 2 meetings, so we return 0. 



```
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)


----

### December 24 - Cracking The Safe

#### Problem Statement

There is a safe protected by a password. The password is a sequence of n digits where each digit can be in the range [0, k - 1].

The safe has a peculiar way of checking the password. When you enter in a sequence, it checks the most recent n digits that were entered each time you type a digit.

For example, the correct password is "345" and you enter in "012345":

    - After typing 0, the most recent 3 digits is "0", which is incorrect.
    
    - After typing 1, the most recent 3 digits is "01", which is incorrect.
    
    - After typing 2, the most recent 3 digits is "012", which is incorrect.
    
    - After typing 3, the most recent 3 digits is "123", which is incorrect.
    
    - After typing 4, the most recent 3 digits is "234", which is incorrect.
    
    - After typing 5, the most recent 3 digits is "345", which is correct and the safe unlocks.
    
Return any string of minimum length that will unlock the safe at some point of entering it




<p align="center"><img src="https://user-images.githubusercontent.com/105559815/209376144-4c112416-46de-42bb-b93f-de62683ae156.jpg" width="400"></p>



#### Sample Input/Output
``` 
Input:

 n = 1
 k = 2


Output:

"10"

```

``` 
Input:

n = 2
k = 2


Output:

"01100"

```


#### Explanation:

```
Sample - 1

 The password is a single digit, so enter each digit. "01" would also unlock the safe.


Sample - 2

For each possible password:

- "00" is typed in starting from the 4th digit.

- "01" is typed in starting from the 1st digit.

- "10" is typed in starting from the 3rd digit.

- "11" is typed in starting from the 2nd digit.

Thus "01100" will unlock the safe. "01100", "10011", and "11001" would also unlock the safe.


```
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
    - [Strings in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
    - [Strings in Python](https://www.geeksforgeeks.org/python-string/)
    - [String in Java](https://www.geeksforgeeks.org/strings-in-java/)


----

### December 25 - The Motorbike Race

#### Problem Statement

It's time for the annual exciting Motorbike Race in Bangalore.

There are N motorcyclists taking part in the competition. George is watching the race. 

At the present moment (time 0),  he has taken note of the current velocity and position of each motorcyclist.

He wants to know at a given point of time, which motorcyclist is in a specific place in the rank list. 

Please help him!

If at any given time two motorcyclists are in same position, the motorcyclist with the smaller index will be placed before the one with the larger index.

To make the problem simple,  he  assumes that each motorcyclist is moving at a constant velocity.



<p align="center"><img src="https://user-images.githubusercontent.com/105559815/209445111-2485a080-c031-4688-b8a8-172ec6410654.jpg" width="400"></p>



#### Sample Input/Output
``` 
Input:

1
4
2 100
3 50
4 60
5 1
4
1 1
50 2
60 4
100 1



Output:

1
4
1
4


```


#### Explanation:

```
Input

The first line contains a number t (about 10) which is the number of test cases. 

Then t test cases follow. Each test case has the following form.

The first line of the test case contains a number N (1 <= N <= 2000), the number of motorcyclists.

The i-th line in the next N lines contains two numbers, v and x, which are the velocity and the current position of the i-th motorcyclist (1 <= v, x <= 100,000).

The next line contains a number Q (1 <= Q <= 2000), the number of time queries.

Each line in the next Q lines contains two numbers, t (1 <= t <= 1,000,000,000) and k (1 <= k <= n), representing the query: "at time t, which motorcyclist is positioned k-th in the rank list?"

Output:

For each test case, print Q lines, with each line containing the index of the motorcyclist for the corresponding query.

Remember to print a new line after each test case.

```
- **References**
    - [Looping in C](https://www.tutorialspoint.com/cprogramming/c_loops.htm)
    - [Looping in C++](https://www.programiz.com/cpp-programming/for-loop)
    - [Looping in Java](https://www.geeksforgeeks.org/loops-in-java/)
    - [Looping in Python](https://www.w3schools.com/python/python_for_loops.asp)

----

### December 26 - Circulate

#### Problem Statement

A group of n people are trying to spread a word among themselves. 

The word is initially only known by the first person in the group. 

The first person may share the word with a few people that he knows, and those people may share the word with the people they know, and so on. 

The task is to determine whether the word has been successfully spread to all n people in the group. 

If the word has been successfully spread to all n people, the program should print "Spread". 

If the word has not yet been successfully spread to all n people, the program should print "Nope".



<p align="center"><img src="https://user-images.githubusercontent.com/105559815/209476068-c5ec3edd-9da8-4ebc-b5cf-3b955fff9b81.jpg" width="400"></p>



#### Sample Input/Output
``` 
Input:

[[2], [3, 4], [2], [2]]


Output:

Spread


```

``` 
Input:

[[2], [5, 4, 6], [3], [4], [5], [6]]


Output: 

Nope


```


#### Explanation:

```

The first person said the word to the second person. 

The second person said the word to the third and fourth person.

Third person shares the word with the second person.

The list has four persons and everyone knows what the word is so the output is “Spread”.


```

<p align="center"><img src="https://user-images.githubusercontent.com/105559815/209476058-e08a4bc6-9a28-4846-99c0-e47333015739.png" width="400"></p>


### December 27 - Mission to Earth: Re-Calibrated

#### Problem Statement

AUTO, the autopilot helm of the starliner The Axiom lead a coup of robots and breached security, infiltrating the Boiler Room and Fuel Tank mechanics to steer the Axiom away from the Earth. 

WALL-E manages to follow the robots who joined AUTO’s cause in disguise to annihilate him and recalibrate the Fuel Tank mechanics so that humans can finally set foot on their home planet in 2805.

Fuel gauges indicate, often with fractions, just how much fuel is in a tank. For instance, 1/4 indicates that a tank is 25% full, 1/2 indicates that a tank is 50% full, and 3/4 indicates that a tank is 75% full.

You are the Fuel Engine Calibrator, FEC and WALL-E needs your help. 

The Fuel Tank’s capacity is 30,000 L. Implement a program that prompts the user for a fraction, formatted as X/Y, wherein each of X and Y is an integer, and then outputs, as a percentage rounded to the nearest integer, how much fuel is in the tank.

If 1% or less remains, output E instead indicates that the tank is essentially empty. And if 99% or more remains, output F instead to indicate that the tank is essentially full. Calculate the total fuel in the Fuel Tank.

If X or Y is not an integer, X is greater than Y, or Y is 0, prompt the user again. (It is optional for Y to be 4.) Be sure to catch any exceptions like ValueError or ZeroDivisionError.



<p align="center"><img src="https://user-images.githubusercontent.com/118124756/209569016-4948ca1e-21de-4f05-b758-70a9fb0edf20.jpg" width="400"></p>


#### Sample Input/Output
``` 
Input: 

Enter the Hydrogen fuel fraction:
5/7

Output:
Fuel calibration:
71.428%
Amount of fuel in tank:
21,428.4 L out of 30,000 L


Input: 
Enter the Hydrogen fuel fraction:
722/729

Output:
Fuel calibration:
99.039%
Amount of fuel in tank:
29,711.7 L out of 30,000 L
The tank is FULL!!!

Input: 
Enter the Hydrogen fuel fraction:
25/156

Output:

Fuel calibration:
0.160%
Amount of fuel in tank:
48 L out of 30,000 L
The tank is EMPTY!!!
Refill tank.

----

FAQ
======

#### Who can join the Challenge?
Anyone who is passionate about coding and can dedicate a little time a day for the challenge for the next 31 days.

#### When should I submit the pull request?
You don't need to submit it everyday. Just submit it once you're done with all 31 algorithms.

#### What if I'm not able to code every day?
Not a problem. While coding every day is nice, we understand that other commitments might interfere with it. 

Plus its holiday season. So you don't have to solve one problem every day. 

Go at your own pace. One per day or 7 a week or even all 30 in a day.

#### What language should I use to code?
Anything! New to GoLang? Best way to practice it. 

Wanna find out what all this hype about Python is? Use it! 

Any and all languages are welcome. 

Maybe you could try using a different language for every problem as a mini-challenge?

#### Fork? Pull request? What is all that? I don't know how to use GitHub!
If you are new to Git or GitHub, check out this out [GitHub](https://guides.github.com/activities/hello-world/)

#### Where are the rest of the problems?
Our code ninjas are hard at work preparing the rest of the problems. Don't worry, they'll be up soon.

#### How should I complete these programs?
We have a folder for each day of the month. Simply complete your code and move the file into that folder. 

Be sure to rename your file to the following format: `language_username` or `language_username_problemname`
Some examples:
`python3_exampleUser.py`
`c_exampleUser.c`

**Please do not modify any existing files in the repository.**

#### I forked the repository but some problems were added only after that. How do I access those problems?
Not to worry! Open your nearest terminal or command prompt and navigate over to your forked repository. 

Enter these commands:
```bash
git remote add upstream https://github.com/SVCE-ACM/A-December-of-Algorithms-2021.git
git fetch upstream
git merge upstream/main
```
If you're curious, the commands simply add a new remote called upstream that is linked to this repository. Then it 'fetches' or retrieves the contents of the repository and attempts to merge it with your progress.
Note that if you've already added the upstream repository, you don't need to re-add it in the future while fetching the newer questions.

#### I received a merge error. What do I do?
This shouldn't happen unless you modify an existing file in the repository. There's a lot of potential troubleshooting that might be needed, but the simplest thing to do is to make a copy of your code outside the repository and then clone it once again. Now repeat the steps from the answer above. Merge it and then add your code. Now proceed as usual. :)

#### I'm facing difficulties with/need help understanding a particular question.
Open up an [issue](https://github.com/SVCE-ACM/A-December-of-Algorithms-2021/issues) on this repository and we'll do our best to help you out.

###### [[Back to Top]](#----)

![wave](http://cdn.thekrishna.in/img/common/border.png)
