# A-December-of-Algorithms-2022
<div align="left">
<h1>
    <p align="center"><img alt="header" src="https://user-images.githubusercontent.com/105559815/204576737-21be2ad2-1b86-477d-9af6-33eb562c6f1c.jpeg" width="500"></img></p>
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

5. Help him to calculate his expense for a period of one month
(31DAYS) .

6. Check whether the expenditure is more than 10 percent of his income .

7. His income is 50,000 rupees per month.

 #### Sample Input/Output
     
```    
 Input:
  fuel_price=75

Output:
Expenditure=4686

```
    
```
Input:
fuel_price=97

Output:
Expenditure=6050

“EXPENDITURE WITHIN LIMIT”
    
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
