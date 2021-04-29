/*
Given an arbitrary ransom note string and another string containing letters from all the magazines, 
write a function that will return true if the ransom note can be constructed from the magazines ; 
otherwise, it will return false.
Each letter in the magazine string can only be used once in your ransom note.

Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true

*/

#include <stdio.h>
#include <stdlib.h>

bool canConstruct(char *ransomNote, char *magazine)
{
    int i, j;
    for (i = 0; i < strlen(ransomNote); i++)
    {
        bool isright = false;
        for (j = 0; j < strlen(magazine); j++)
        {
            if (ransomNote[i] == magazine[j])
            {
                isright = true;
                magazine[j] = '-';
                break;
            }
        }
        if (isright == false)
        {
            return false;
        }
    }
    return true;
}