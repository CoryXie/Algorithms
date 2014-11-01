/* 1.1 Implement an algorithm to determine if a string has all unique characters. What if you 
can not use additional data structures? */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool checkStringMine(const char *strToCheck)
	{
	/* NULL string considered to be with all unique chars */
	
	if (strToCheck == NULL)
		return true; 
		
	int strLen = strlen(strToCheck);
	char firstChar;
	int i;
	int j;
	
	for (i = 0, firstChar = strToCheck[0];  i < (strLen - 1); i++)
		{
		for (j = i + 1; j < strLen; j++)
			if ((strToCheck[j] - firstChar) == 0) 
				return false;
				
		firstChar = strToCheck[i + 1];
		}
		
	return true;
	}

bool checkStringBook(const char *strToCheck)
	{	
	/* NULL string considered to be with all unique chars */
	
	if (strToCheck == NULL)
		return true; 
		
	bool allChars[256] = {false};	
	int strLen = strlen(strToCheck);
	int i;
	
	for (i = 0;  i < strLen; i++)
		{
		if (allChars[(int)strToCheck[i]] == true) 
			return false;	
			
		allChars[(int)strToCheck[i]] = true;
		}
		
	return true;
	}

int main(int argc, char **argv)
	{
	const char * test1 = "123456789abc";
	const char * test2 = "12a3456789abc";
	bool pass = true;
	
	if (checkStringMine(test1) == false) 
		{
		printf("You fail 1!\n");
		pass = false;
		}
		
	if (checkStringMine(test2) == true) 
		{
		printf("You fail 2!\n");
		pass = false;
		}
		
	if (pass == true)
		printf("You passed all tests!\n");
		
	if (checkStringBook(test1) == false) 
		{
		printf("You fail 1!\n");
		pass = false;
		}
		
	if (checkStringBook(test2) == true) 
		{
		printf("You fail 2!\n");
		pass = false;
		}
		
	if (pass == true)
		printf("You passed all tests!\n");
		
	return 0;
	}