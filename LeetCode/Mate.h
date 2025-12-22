#pragma once
#include "ListNode.h"
#include <string>
#include <vector>

class Mate
{
public:
	int sumNum(int, int);
	int addDigits(int);
	int firstUniqCharFail(std::string);
	std::vector<int> minimumNumberGame(std::vector<int>&);
	bool pangramSentence(std::string);
	int maximumNumberInSentences(std::vector<std::string>&);
	int countDivideDigits(int);
	int differenceOfSums(int n, int m);
	std::vector<int> findWordsContaining(std::vector<std::string>&, char);
	int maximumWealth(std::vector<std::vector<int>>&);
	std::string toLowerCase(std::string s);
	int employeesWhoMetTarget(std::vector<int>, int);
	int xorOperation(int, int);
	int subtractProductAndSum(int);
	int sumOfMultiples(int);
	std::string firstPalindrome(std::vector<std::string>&);
	int differenceOfSum(std::vector<int>& nums);
	int firstUniqChar(std::string);
	bool canAliceWin(std::vector<int>& nums);
	bool judgeCircle(std::string moves);
	int countKeyChanges(std::string);
	int arraySign(std::vector<int>& nums);
	bool threeConsecutiveOdds(std::vector<int>& arr);
	std::vector<int> sortedSquares(std::vector<int>& nums);
	int calPoints(std::vector<std::string>& operations);
	std::string triangleType(std::vector<int>& nums);
	bool isValidParentheses(std::string);
	bool isValidParenthesesOp(const std::string&);
	int romanToInt(std::string s);
	std::string longestCommonPrefix(std::vector<std::string>& strs);
	std::vector<int> plusOne(std::vector<int>& digits);
	ListNode* deleteDuplicates(ListNode* head);
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
	std::string mergeAlternately(std::string word1, std::string word2);
	bool canPlaceFlowers(std::vector<int>& flowerbed, int n);
	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies);
	std::vector<int> productExceptSelf(std::vector<int>& nums);
	std::string reverseVowels(std::string s);
	int climbStairs(int n);
	std::string reverseWords(std::string s);
	bool isUgly(int n);
	std::vector<std::vector<int>> generate(int numRows);
	int majorityElement(std::vector<int>& nums);
	std::vector<int> majorityElementII(std::vector<int>& nums);
	int repeatedNTimes(std::vector<int>& nums);
	bool isPathCrossing(std::string path);
	int isPrefixOfWord(std::string sentence, std::string searchWord);
	std::vector<int> findEvenNumbers(std::vector<int>& digits);
	std::vector<std::string> findWords(std::vector<std::string>& words);
	void reverseString(std::vector<char>& s);
	std::vector<int> twoSum(std::vector<int>& numbers, int target);
	bool isSubsequence(std::string s, std::string t);
	std::vector<int> diStringMatch(std::string s);
	std::vector<int> sortArrayByParityII(std::vector<int>& nums);
	std::vector<int> sortArrayByParity(std::vector<int>& nums);
};