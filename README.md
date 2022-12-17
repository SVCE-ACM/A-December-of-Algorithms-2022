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

A list is provided with a sequence of characters  <img src="https://user-images.githubusercontent.com/105559815/206890030-28a45bf0-2bcd-4e50-b81d-1c81bc714ccb.jpg" width="250">. The character ‘_’ represents land and the character ‘~’ represents water. A monkey can move 1 step or 2 steps in a single jump. Another list provided here contains the step that the monkey took Eg[1,1,2,1,2]. Whenever the monkey touches the water. The game is over and the score must be returned. Calculate the jumps the monkey took before touching the water.

<p align="center"><img src="https://user-images.githubusercontent.com/119495356/206857020-3aefe633-ed69-4eef-a285-ef6ab27ac6ff.jpg" width="400" height="400"></p>


 #### Sample Input/Output
     
```    
Input 1:

[‘_’,’~’,’_’,’_’,’_’,’_’,’~’,’_’,’_’,’~’,’_’,’~’]

[2,1,1,1,2,1,2,1]

Output 1:

Score =7

Input 2:

[‘_’,’~’,’_’,’~’,’_’,’_’,’~’,’_’,’_’,’~’,’_’,’~’]

[2,2,1,1,1,1,2,1,1]

Output 2: 
Score =3

 ```
 
#### Explanation:

 ```

The first line of input is a combination of ‘_’ and ‘~’ representing land and water respectively.
The second line of input ia a combination of 2's and 1's, 2 steps indicate, for example, initially being on position 1 and ending up on position 3 without landing on position 2 in between.
 
Monkey takes two steps in a single jump as first move and three single steps as the next 3 moves/jumps, another 2 jumps, 1 jump and another 2 jumps.  
Given the jump sequence: [2,1,1,1,2,1,2,1]
Since in the 8th jump the monkey touches water, the total jump count before he touches the water is 7 and thus the score is 7.

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

path_taken={9,4,7,3,3,7,10}
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
