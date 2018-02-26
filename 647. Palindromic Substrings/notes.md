1. [problem description](https://leetcode.com/problems/palindromic-substrings/description/)
2. very tricky problem
3. PS:[others' brilliant ideas](https://leetcode.com/problems/palindromic-substrings/discuss/105688/Very-Simple-Java-Solution-with-Detail-Explanation)
```A very easy explanation with an example
Lets take a string “aabaa”

Step 1: Start a for loop to point at every single character from where we will trace the palindrome string.
checkPalindrome(s,i,i); //To check the palindrome of odd length palindromic sub-string
checkPalindrome(s,i,i+1); //To check the palindrome of even length palindromic sub-string

Step 2: From each character of the string, we will keep checking if the sub-string is a palindrome and increment the palindrome count. To check the palindrome, keep checking the left and right of the character if it is same or not.

First Loop:
0_1500788783696_300147d3-e98e-4977-83f1-9eb8213a485e-image.png
Palindrome: a (Count=1)
0_1500788808121_fec1dec5-ab5f-44cf-8dbd-eb2780e8d65f-image.png
Palindrome: aa (Count=2)

Second Loop:
0_1500788845582_881440b8-6dde-4b6f-a864-24fef277069b-image.png
Palindrome: a (Count=3)
0_1500788872920_61fc20cb-0cb2-4179-8f5a-529cbad7a2ec-image.png
Palindrome: No Palindrome

Third Loop:
0_1500788901120_bf12b13b-ff32-4703-86cf-0bcb54465428-image.png
Palindrome: b,aba,aabaa (Count=6)
0_1500788934388_5cc2c31d-404c-456a-a77d-1432bb0c679b-image.png
Palindrome: No Palindrome

Forth Loop:
0_1500788981884_a2d3f30e-0745-4a75-b2c0-940834bd6a84-image.png
Palindrome: a (Count=7)
0_1500789009429_f38aa5c2-17ac-47db-8fe9-b9bb4ceb1407-image.png
Palindrome: aa (Count=8)

Count = 9 (For the last character)

Answer = 9
