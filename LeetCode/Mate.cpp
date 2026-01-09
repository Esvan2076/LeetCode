#include "Mate.h"
#include "ListNode.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <print>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <numeric>

//using namespace std;

void printNums(std::vector<int>& nums);
void printRow(std::vector<int>& nums);
void printStack(const std::vector<char>& stack);
bool isOpeningBracket(char c);
bool isMatchingPair(char open, char close);
ListNode* findNext(ListNode* node);
std::vector<std::string> listToLowerCase(std::vector<std::string>& list);
bool charInList(std::string& list, char& c);
std::string toNumericBase(int num, int base);
bool isPalindromic(std::string& s);

int Mate::sumNum(int num1, int num2) {
	return num1 + num2;
}

int Mate::addDigits(int num) {
	int res = 0;
	while (true) {
		res = 0;
		while (num > 0) {
			res += num % 10;
			num /= 10;
		}
		if (res >= 10) {
			num = res;
		}
		else {
			break;
		}
	}
	return res;
}

int Mate::firstUniqCharFail(std::string text) {
	int res = -1;
	bool unique = true;
	std::string ban = "";
	for (size_t i = 0; i < text.length(); ++i) {
		unique = true;
		res = i;
		std::cout << "I: " << i << "\t" << text[i] << "\n";
		for (char c : ban) {
			if (c == text[i]) {
				std::cout << "Saltando porque: " << c << " baneada" << "\n";
				res = -1;
				unique = false;
				break;
			}
		}
		if (unique) {
			for (size_t j = i + 1; j < text.length(); ++j) {
				std::cout << "J: " << j << "\t" << text[j] << "\n";
				if (text[i] == text[j]) {
					std::cout << "Ban: " << text[j] << ban << "\n";
					ban += text[i];
					unique = false;
					break;
				}
			}
		}
		if (unique) {
			break;
		}
	}
	return res;
}

std::vector<int> Mate::minimumNumberGame(std::vector<int>& nums) {
	int num = 0;
	std::sort(nums.begin(), nums.end()); //ordena en orden descendente
	for (int i = 0; i < nums.size(); i += 2) {
		num = nums[i];
		nums[i] = nums[i + 1];
		nums[i + 1] = num;
	}
	return nums;
}

bool Mate::pangramSentence(std::string text) {
	std::vector<bool> letterPresent(26, false); //inicializo los 25 espacios y le asigno false
	int position = 0;
	bool pangram = true;
	//for (bool isPresent : letterPresent) {
	//	std::cout << "Position: " << position << "\t" << isPresent << "\n";
	//	position++;
	//}
	//position = 0;
	for (char c : text) {
		//std::cout << "Position: " << position << "\t" << c << "\n";
		//std::cout << "Valor: " << "\t" << letterPresent[c - 'a'] << "\n";
		letterPresent[c - 'a'] = true;
		position++;
	}
	//position = 0;
	//for (bool isPresent : letterPresent) {
	//	std::cout << "Position: " << position << "\t" << isPresent << "\n";
	//	position++;
	//}
	//position = 0;
	for (bool isPresent : letterPresent) {
		if (!isPresent) {
			//std::cout << "FALTO: " << char(position+97) << "\n";
			pangram = false;
			break;
		}
		//position++;
	}
	return pangram;
}

int Mate::maximumNumberInSentences(std::vector<std::string>& sentences) {
	int top = 0;
	int count = 0;
	for (int i = 0; i < sentences.size(); ++i) {
		count = 0;
		for (char c : sentences[i]) {
			if (c == ' ') {
				count++;
			}
		}
		count++;
		if (count > top) top = count;
	}
	return top;
}

int Mate::countDivideDigits(int num) {
	int res = 0;
	int operation = num;
	int digit = 0;
	while (operation > 0) {
		digit = operation % 10;
		if (num % digit == 0) {
			res++;
		}
		operation /= 10;
	}
	return res;
}

int Mate::differenceOfSums(int n, int m) {
	int positive = 0;
	int negative = 0;
	for (int i = 1; i <= n; ++i) {
		std::cout << "I: " << i << "\n";
		if (i % m != 0) {
			positive = positive + i;
		}
		else {
			negative = negative + i;
		}
	}
	return positive - negative;
}

std::vector<int> Mate::findWordsContaining(std::vector<std::string>& words, char x) {
	std::vector<int> index;
	for (int i = 0; i < words.size(); ++i) {
		for (char c : words[i]) {
			if (c == x) {
				index.push_back(i);
				break;
			}
		}
	}
	return index;
}

int Mate::maximumWealth(std::vector<std::vector<int>>& accounts) {
	int num = 0;
	int top = 0;
	for (int i = 0; i < accounts.size(); ++i) {
		for (int j = 0; j < accounts[i].size(); ++j) {
			num += accounts[i][j];
		}
		if (num > top) {
			top = num;
		}
		num = 0;
	}
	return top;
}

std::string Mate::toLowerCase(std::string s) {
	int i = 0;
	for (char c : s) {
		if (c >= 65 and c <= 90) {
			s[i] = s[i] + 32;
		}
		i++;
	}
	return s;
}

int Mate::employeesWhoMetTarget(std::vector<int> hours, int target) {
	int count = 0;
	for (int num : hours) {
		if (num >= target) {
			count++;
		}
	}
	return count;
}

int Mate::xorOperation(int n, int start) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		std::cout << "Position: " << i  << "\n";
		res ^= start + 2 * i;
	}
	return res;
}

int Mate::subtractProductAndSum(int n) {
	int sum = 0;
	int mul = 1;
	while (n > 0) {
		sum = sum + (n % 10);
		mul = mul * (n % 10);
		n /= 10;
	}
	return mul - sum;
}

int Mate::sumOfMultiples(int n) {
	int res = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0 or i % 5 == 0 or i % 7 == 0) {
			std::cout << "ResultOp: " << res << "\n";
			res += i;
		}
	}
	return res;
}

std::string Mate::firstPalindrome(std::vector<std::string>& words) {
	std::string res = "";
	int tam = 0;
	bool found;
	for (std::string word : words) {
		found = true;
		tam = word.size();
		for (int i = 0; i < (tam/2); i++) {
			if (word[i] != word[(tam - 1) - i]) {
				std::cout << "NO ES PALINDROM0" << "\n";
				found = false;
			}
			std::cout << "I: " << word[i] << "\n";
			std::cout << "F: " << word[(tam-1) - i] << "\n";
		}
		if (found) {
			std::cout << "W: " << word << "\n";
			res = word;
			break;
		}
	}
	return res;
}

int Mate::differenceOfSum(std::vector<int>& nums) {
	int elements = 0;
	int digits = 0;
	int res = 0;
	for (int n : nums) {
		elements += n;
		if (n >= 10) {
			while (n > 0) {
				std::cout << "NUM: " << n << "\n";
				res = (n % 10);
				n = (n / 10);
				std::cout << "RES: " << res << "\n";
				digits += res;
			}
		}
		else {
			digits += n;
		}
	}
	return abs(elements - digits);
}

int Mate::firstUniqChar(std::string sentence) {
	std::vector<int> letters(26, -1);
	std::vector<int> unique(26, 0);
	int check = 0;
	int top = -1;
	int i = 0;
	for (char c : sentence) {
		if (letters[c - 97] == -1) {
			unique[c - 97] = 1;
		}
		else {
			unique[c - 97] = 0;
		}
		letters[c - 97] = i;
		i++;
	}
	char c;
	for (int j = 0; j < 25; j++) {
		c = j + 97;
		std::cout << c << ": " << letters[j] << " " << unique[j] << "\n";
		if (letters[j] != -1) {
			if (unique[j]) {
				check = letters[j];
				if (top > check or top == -1){
					top = check;
				}
			}
		}
	}
	return top;
}

bool Mate::canAliceWin(std::vector<int>& nums) {
	int singleDigit = 0;
	int doubleDigit = 0;
	for (int n : nums) {
		if (n / 10 > 0) {
			doubleDigit += n;
		}
		else {
			singleDigit += n;
		}
	}
	if (doubleDigit == singleDigit) {
		return false;
	}
	else {
		return true;
	}
}

bool Mate::judgeCircle(std::string moves) {
	int x = 0;
	int y = 0;
	for (char &c : moves) {
		switch (c)
		{
		case('R'):
			x += 1;
			break;
		case('L'):
			x -= 1;
			break;
		case('U'):
			y += 1;
			break;
		case('D'):
			y -= 1;
			break;
		default:
			break;
		}
	}
	if (x == 0 and y == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int Mate::countKeyChanges(std::string s) {
	int changes = 0;
	int j = 0;
	for (char &c : s) {
		if (c >= 65 and c <= 90) {
			std::cout << "Cambio: " << s[j] << "\n";
			s[j] = s[j] + 32;
			std::cout << "Cambio: " << s[j] << "\n";
		}
		j++;
	}
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i - 1]) {
			std::cout << "DIFERENTE: " << "\n";
			changes++;
		}
		std::cout << "I: " << i << "\n";
	}
	return changes;
}

int Mate::arraySign(std::vector<int>& nums) {
	int res = 1;
	for (int& num : nums) {
		if (num == 0) {
			return 0;
		}
		else if (num < 0) {
			res *= -1;
		}
		res *= +1;
	}
	return res;
}

bool Mate::threeConsecutiveOdds(std::vector<int>& arr) {
	int res = 0;
	for (int& num : arr) {
		if (num % 2 != 0) {
			res++;
		}
		else {
			res = 0;
		}
		if (res == 3) {
			return 1;
		}
	}
	return 0;
}

std::vector<int> Mate::sortedSquares(std::vector<int>& nums) {
	int i = 0;
	for (int& num : nums) {
		nums[i] = num * num;
		i++;
	}
	std::sort(nums.begin(), nums.end());
	return nums;
}

int Mate::calPoints(std::vector<std::string>& operations) {
	int n = 0;
	std::vector<int> nums;
	for (std::string &s : operations) {
		std::cout << "Caracter: " << s << "\n";
		switch (s[0]) {
		case('+'):
			std::cout << "+: " << s << "\n";
			n = nums[nums.size() - 1] + nums[nums.size() - 2];
			nums.push_back(n);
			printNums(nums);
			break;
		case('D'):
			std::cout << "D: " << s << "\n";
			n = nums[nums.size() - 1] * 2;
			nums.push_back(n);
			printNums(nums);
			break;
		case('C'):
			std::cout << "C: " << s << "\n";
			nums.erase(nums.end() - 1);
			printNums(nums);
			break;
		case('-'):
			n = std::stoi(s);
			nums.push_back(n);
			std::cout << "NumN: " << n << "\n";
			printNums(nums);
			break;
		default:
			n = std::stoi(s);
			nums.push_back(n);
			std::cout << "NumN: " << n << "\n";
			printNums(nums);
			break;
		}
	}
	n = 0;
	for (int& res : nums) {
		n += res;
	}
	return n;
}

void printNums(std::vector<int>& nums) {
	for (int& res : nums) {
		std::cout << "Num: " << res << "\n";
	}
}

std::string Mate::triangleType(std::vector<int>& nums) {
	if (nums[0] == nums[1] and nums[1] == nums[2]) {
		return "equilateral";
	}
	int top = 0;
	for (int& num : nums) {
		if (num > top) {
			top = num;
		}
	}
	const int sum = ((nums[0] + nums[1] + nums[2]) - top);
	if (top >= sum) {
		return "none";
	}
	if ((nums[1] == nums[2]) or (nums[0] == nums[1]) or (nums[2] == nums[0])) {
		return "isosceles";
	}
	return "scalene";
}

bool Mate::isValidParentheses(std::string s) {
	std::vector<char> stack;
	int size = 0;
	for (char c : s) {
		stack.push_back(c);
		if (!isOpeningBracket(c)) {
			std::cout << "Closing bracket: " << c << "\n";
			size = stack.size();
			if (size >= 2 && isMatchingPair(stack[size - 2], stack[size - 1])) {
				stack.pop_back();
				stack.pop_back();
			}
			else {
				return false;
			}
		}
		printStack(stack);
	}
	return stack.empty();
}

bool Mate::isValidParenthesesOp(const std::string& s) {
	std::vector<char> stack;
	stack.reserve(s.size());

	for (char c : s) {
		if (isOpeningBracket(c)) {
			stack.push_back(c);
		}
		else {
			if (stack.empty() || !isMatchingPair(stack.back(), c)) {
				return false;
			}
			stack.pop_back();
		}
	}

	return stack.empty();
}

void printStack(const std::vector<char>& stack) {
	std::cout << "Stack:\n";
	for (char c : stack) {
		std::cout << c << "\t";
	}
	std::cout << "\n";
}

bool isOpeningBracket(char c) {
	return c == '{' || c == '[' || c == '(';
}

bool isMatchingPair(char open, char close) {
	switch (open) {
	case '(': return close == ')';
	case '[': return close == ']';
	case '{': return close == '}';
	default:  return false;
	}
}

int Mate::romanToInt(std::string s) {
	std::unordered_map<char, int> roman = {
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000}
	};
	int numberInInt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (roman[s[i]] < roman[s[i + 1]]) {
			numberInInt += roman[s[i + 1]] - roman[s[i]];
			i++;
		}
		else {
			numberInInt += roman[s[i]];
		}
	}
	return numberInInt;
}

std::string Mate::longestCommonPrefix(std::vector<std::string>& strs) {
	std::vector<std::string>::iterator it = min_element(
		strs.begin(),
		strs.end(),
		[](const std::string& a, const std::string& b) {
			return a.size() < b.size();
		}
	);

	std::string shortest = *it;

	std::string prefix = "";
	char c = 0;
	bool fail = false;
	for (int i = 0; i < shortest.size(); i++) {
		fail = false;
		for (int j = 0; j < strs.size(); j++) {
			if (shortest[i] != strs[j][i]) {
				fail = true;
				break;
			}
		}
		if (!fail) {
			prefix += shortest[i];
		}
		else {
			break;
		}
	}
	return prefix;
}

std::vector<int> Mate::plusOne(std::vector<int>& digits) {
	std::vector<int> res;
	int digSize = digits.size();
	int num = 0;
	int pivot = 1;
	for (int i = (digSize - 1); i >= 0; i--) {
		num = digits[i] + pivot;
		if (num >= 10) {
			pivot = 1;
			res.push_back(0);
		}
		else {
			pivot = 0;
			res.push_back(num);
		}
	}
	if (pivot) {
		res.push_back(1);
	}
	std::reverse(res.begin(), res.end());
	return res;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
ListNode* Mate::deleteDuplicates(ListNode* head) {
	// ListNode* result = new ListNode();
	ListNode* tail = head;
	while (true) {
		if (!tail) {
			return head;
		}
		tail->next = findNext(tail);
		tail = tail->next;
	}
}

ListNode* findNext(ListNode* node) {
	if (node->next == nullptr) {
		return nullptr;
	}
	else if (node->val != node->next->val) {
		return node->next;
	}
	return findNext(node->next);
}

ListNode* Mate::mergeTwoLists(ListNode* list1, ListNode* list2) {
	if (!list1) return list2;
	if (!list2) return list1;

	if (list1->val > list2->val) {
		std::swap(list1, list2);
	}

	ListNode* head = list1;
	ListNode* pivot = nullptr;
	while (list1 && list2) {

		while (list1 && list1->val <= list2->val) {
			pivot = list1;
			list1 = list1->next;
		}

		pivot->next = list2;

		std::swap(list1, list2);
	}
	return head;
}

std::string Mate::mergeAlternately(std::string word1, std::string word2) {
	int size1 = word1.size();
	int size2 = word2.size();
	int sizeMax = std::max(size1, size2);

	std::string merge = "";

	int i = 0;
	while (true) {
		if (i < size1) {
			merge += word1[i];
		}
		if (i < size2) {
			merge += word2[i];
		}
		if (i >= sizeMax) {
			break;
		}

		i++;
	}

	return merge;
}

bool Mate::canPlaceFlowers(std::vector<int>& flowerbed, int n) {
	int flowerbedSize = flowerbed.size();
	int placeFlowers = 0;
	if (flowerbedSize == 0) {
		return false;
	}
	if (flowerbedSize == 1) {
		if (flowerbed[flowerbedSize - 1] == 0) {
			placeFlowers++;
		}
		return placeFlowers >= n;
	}

	if (flowerbed[0] == 0 && flowerbed[1] == 0) {
		flowerbed[0] = 1;
		placeFlowers++;
	}
	for (int i = 2; i < flowerbedSize - 1; i++) {
		if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
			flowerbed[i] = 1;
			placeFlowers++;
		}

	}
	if (flowerbed[flowerbedSize - 1] == 0 && flowerbed[flowerbedSize - 2] == 0) {
		flowerbed[flowerbedSize - 1] = 1;
		placeFlowers++;
	}
	return placeFlowers >= n;
}

std::vector<bool> Mate::kidsWithCandies(std::vector<int>& candies, int extraCandies) {
	int max = 0;
	std::vector<bool> result;
	for (int num : candies) {
		if (num > max) {
			max = num;
		}
	}
	for (int num : candies) {
		if ((num + extraCandies) >= max) {
			result.push_back(true);
		}
		else {
			result.push_back(false);
		}
	}
	return result;

}

std::vector<int> Mate::productExceptSelf(std::vector<int>& nums) {
	int size = nums.size();
	std::vector<int> res(size, 1);
	int prefix = 1;
	int postfix = 1;
	for (int i = 0; i < size; i++) {
		res[i] = prefix;
		prefix *= nums[i];
	}
	for (int i = size - 1; i >= 0; i--) {
		res[i] *= postfix;
		postfix *= nums[i];
	}
	return res;
}

std::string Mate::reverseVowels(std::string s) {
	std::vector<int> vowelsPositions;
	std::string vowels = "aeiouAEIOU";
	std::string vowelsInS = "";
	int i = 0;
	for (char c : s) {
		if (vowels.find(c) != std::string::npos) {
			vowelsInS += c;
			vowelsPositions.push_back(i);
		}
		i++;
	}
	std::reverse(vowelsInS.begin(), vowelsInS.end());
	for (int j = 0; j < vowelsInS.size(); j++) {
		s[vowelsPositions[j]] = vowelsInS[j];
	}
	return  s;
}

int Mate::climbStairs(int n) {
	if (n <= 3) return n;

	int first = 1;
	int second = 2;
	int third = 3;

	for (int i = 3; i < n + 1; i++) {	
		third = first + second;
		first = second;
		second = third;
	}
	return third;
}

std::string Mate::reverseWords(std::string s) {
	std::string res = "";
	int size = s.size();
	int helper = 0;
	for (int i = size - 1; i >= 0; i--) {

		if (s[i] == ' ') {
			while (i >= 0 && s[i] == ' ') {
				i--;
			}
			i++;
		}
		else {
			helper = i;

			while (i >= 0 && s[i] != ' ') {
				i--;
			}

			helper -= i;
			i++;

			res += s.substr(i, helper) + " ";
		}
	}

	if (res[res.size() - 1] == ' ') {
		return res.substr(0, res.size() - 1);
	}

	return res;
}

bool Mate::isUgly(int n) {
	int primes[3] = { 2,3,5 };
	int i = 0;
	if (n == 0) {
		return false;
	}
	while (i <= 2) {
		if (n == 1) {
			return true;
		}
		else {
			if (n % primes[i] == 0) {
				n /= primes[i];
			}
			else {
				i++;
			}
		}
	}
	return false;
}

void printRow(std::vector<int>& nums) {
	std::cout << "[ ";
	for (int& num : nums) {
		std::cout << "[" << num << "]";
	}
	std::cout << " ]" << "\n";
}

std::vector<std::vector<int>> Mate::generate(int numRows) {
	std::vector<std::vector<int>> triangle;
	triangle.reserve(numRows);
	triangle.push_back({ 1 });
	if (numRows == 1) {
		return triangle;
	}
	triangle.push_back({ 1,1 });

	std::vector<int> row;
	for (int i = 1; i < (numRows - 1); i++)
	{
		row = {};
		row.push_back(1);
		int limit = triangle[i].size() - 1;
		for (int j = 0; j < limit; j++) {
			int num = triangle[i][j] + triangle[i][j + 1];
			row.push_back(num);
		}
		row.push_back(1);
		triangle.push_back(row);
	}
	return triangle;
}

int Mate::majorityElement(std::vector<int>& nums) {
	std::unordered_map<int, int> map;
	int n = (nums.size() / 2);

	for (int num : nums) {
		map[num]++;
		if (map[num] > n) {
			return num;
		}
	}

	return -1;
}

std::vector<int> Mate::majorityElementII(std::vector<int>& nums) {
	//Primer Idea
	//std::vector<int> res;
	//res.reserve(2);
	//std::unordered_map<int, int> answer;
	//std::unordered_map<int, int> map;
	//int n = (nums.size() / 3);
	//int h = 0;

	//for (int num : nums) {
	//	map[num]++;
	//	if (map[num] > n) {
	//		answer[num]++;
	//		h++;
	//		if (h >= 2) {
	//			break;
	//		}
	//	}
	//}

	//for (const auto& pos : answer) {
	//	res.push_back(pos.first);
	//}

	//return res;

	//Segunda Idea
	//Undimos en lo más profundo para que no vuelva a salir :)
	std::vector<int> res;
	res.reserve(2);
	std::unordered_map<int, int> map;
	int n = (nums.size() / 3);
	int h = 0;

	for (int num : nums) {
		map[num]++;
		if (map[num] > n) {
			res.push_back(num);
			map[num] = std::numeric_limits<int>::min();
			h++;
			if (h >= 2) {
				break;
			}
		}
	}

	return res;
}

int Mate::repeatedNTimes(std::vector<int>& nums) {
	std::unordered_map<int, int> map;
	int helper = (nums.size() / 2);
	for (int i = 0; i < nums.size(); i++) {
		map[nums[i]]++;
		if (map[nums[i]] == helper) {
			return nums[i];
		}
	}
	return nums[0];
}

bool Mate::isPathCrossing(std::string path) {
	std::map<std::pair<int, int>, int> coord;
	std::pair<int, int> current = {0, 0};
	coord[current]++;
	for (char& c : path) {
		switch (c) {
		case 'N':
			current.second++;
			break;
		case 'S':
			current.second--;
			break;
		case 'E':
			current.first++;
			break;
		case 'W':
			current.first--;
			break;
		default:
			break;
		}
		coord[current]++;
		if (coord[current] > 1) {
			return true;
		}
	}
	return false;
}

int Mate::isPrefixOfWord(std::string sentence, std::string searchWord) {
	int j = 0;
	int numWord = 1;
	bool sub;
	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] == ' ') {
			//numWord++;
			//i++;
			//while (sentence[i] == ' ') {
			//	i++;
			//}
			//i--;
			numWord++;
			continue;
		}
		j = 0;
		sub = 1;
		while (j < searchWord.size()) {
			std::cout << "Entro 1" << std::endl;
			if (sentence[i + j] != searchWord[j]) {
				std::cout << "Entro 2" << std::endl;
				sub = 0;
				break;
			}
			j++;
		}
		i += j;
		if (sub) {
			return numWord;
		}
		while (sentence[i] != ' ' && i < sentence.size()) {
			i++;
		}
		i--;
		std::cout << sentence[i] << std::endl;
		std::cout << "NumWord: " << numWord << std::endl;
	}
	return -1;
}

std::vector<int> Mate::findEvenNumbers(std::vector<int>& digits) {
	std::vector<int> res;
	int num = 0;
	int digit = 0;
	bool allDigits = true;
	bool isInDigits = true;
	for (int i = 100; i <= 998; i += 2) {
		allDigits = true;
		num = i;
		std::vector<int> temp = digits;
		while (num > 0) {
			digit = num % 10;
			num /= 10;
			isInDigits = 0;
			for (int j = 0; j < temp.size(); j++) {
				if (digit == temp[j]) {
					isInDigits = true;
					temp.erase(temp.begin() + j);
					break;
				}
			}
			if (!isInDigits) {
				allDigits = false;
				break;
			}
		}
		if (allDigits) {
			res.push_back(i);
		}
	}
	return res;
}

std::vector<std::string> Mate::findWords(std::vector<std::string>& words) {
	std::vector<std::string> wordsCopy;
	wordsCopy = listToLowerCase(words);

	std::vector<std::string> rows;
	rows.reserve(3);
	rows.push_back("qwertyuiop");
	rows.push_back("asdfghjkl");
	rows.push_back("zxcvbnm");

	std::vector<int> res;
	std::vector<std::string> resList;

	bool inRow = false;
	for (int i = 0; i < wordsCopy.size(); i++) {
		std::string& word = wordsCopy[i];
		for (int j = 0; j < rows.size(); j++) {
			inRow = false;
			for (char& c : word) {
				if (charInList(rows[j], c)) {
					inRow = true;
				}
				else {
					inRow = false;
					break;
				}
			}
			if (inRow) {
				break;
			}
		}
		if (inRow) {
			res.push_back(i);
		}
	}

	wordsCopy = {};
	for (int& n : res) {
		wordsCopy.push_back(words[n]);
	}
	return wordsCopy;
}

std::vector<std::string> listToLowerCase(std::vector<std::string>& list) {
	std::vector<std::string> wordsCopy;

	for (std::string& temp : list) {
		std::string n = "";
		for (char c : temp) {
			int num = c;
			if (c >= 65 and c <= 90) {
				c += 32;
			}
			n += c;
		}
		wordsCopy.push_back(n);
	}

	return wordsCopy;
}

bool charInList(std::string& list, char& c) {
	for (char& v : list) {
		if (v == c) {
			return true;
		}
	}
	return false;
}

void Mate:: reverseString(std::vector<char>& s) {
	int left = 0;
	int right = (s.size() - 1);
	char helper = ' ';
	while (right > left) {
		//std::swap(s[left], s[right]);
		helper = s[right];
		s[right] = s[left];
		s[left] = helper;
		left++;
		right--;
	}
}

std::vector<int> Mate::twoSum(std::vector<int>& numbers, int target) {
	int left = 0;
	int right = numbers.size() - 1;
	int sum = 0;
	while (right > left) {
		sum = numbers[left] + numbers[right];
		if (target == sum) break;
		if (target > sum) {
			left++;
		}
		else {
			right--;
		}
	}
	return { ++left, ++right };
}

bool Mate::isSubsequence(std::string s, std::string t) {
	int pointS = 0;
	for (char& c : t) {
		if (s[pointS] == c) {
			pointS++;
		}
	}
	return pointS == s.size();
}

std::vector<int> Mate::diStringMatch(std::string s) {
	int max = s.size();
	int min = 0;
	int i = 0;
	std::vector<int> res;
	res.reserve(s.size() + 1);
	while (max >= min) {
		if (s[i] == 'I') {
			res.push_back(min);
			min++;
		}
		else {
			res.push_back(max);
			max--;
		}
		i++;
	}
	return res;
}

std::vector<int> Mate::sortArrayByParityII(std::vector<int>& nums) {
	int odd = 1;
	int even = 0;
	std::vector<int> res(nums.size());
	for (int i = 0; i < nums.size(); i++) {
		if ((nums[i] % 2) == 0) {
			res[even] = nums[i];
			even += 2;
		}
		else {
			res[odd] = nums[i];
			odd += 2;
		}
	}
	return res;
}

std::vector<int> Mate::sortArrayByParity(std::vector<int>& nums) {
	size_t size = nums.size();
	std::vector<int> res(size);
	int right = (size - 1), left = 0;
	for (int& ref : nums) {
		if ((ref % 2) == 0) {
			res[left] = ref;
			left++;
		}
		else {
			res[right] = ref;
			right--;
		}
	}
	return res;
}

std::vector<int> Mate::findIndices(std::vector<int>& nums, int indexDifference, int valueDifference) {
	int n = nums.size();

	for (int i = 0; i < n; i++) {
		for (int j = (i + indexDifference); j < n; j++) {
			int value = std::abs(nums[i] - nums[j]);
			if (value >= valueDifference) {
				return { i, j };
			}
		}
	}

	return { -1, -1 };
}

int Mate::countPairs(std::vector<int>& nums, int target) {
	int res = 0;
	size_t s = nums.size();
	for (size_t i = 0; i < s; ++i) {
		for (size_t j = (i + 1); j < s; ++j) {
			int value = nums[i] + nums[j];
			if (value < target) {
				res++;
			}
		}
	}
	return res;
}

std::string Mate::makeSmallestPalindrome(std::string s) {
	int left = 0, right = s.size() - 1;
	while (left < right) {
		if (s[left] > s[right]) {
			s[left] = s[right];
		}
		else if (s[left] < s[right]){
			s[right] = s[left];
		}
		++left;
		--right;
	}
	return s;
}

std::vector<std::vector<int>> Mate::mergeArrays(std::vector<std::vector<int>>& nums1, std::vector<std::vector<int>>& nums2) {
	std::vector<std::vector<int>> res;
	res.reserve(nums1.size() + nums2.size());
	std::map<int, int> map;
	for (std::vector<int>& num : nums1) {
		map[num[0]] += num[1];
	}
	for (std::vector<int>& num : nums2) {
		map[num[0]] += num[1];
	}

	for (const auto& num : map) {
		std::vector<int> temp(2);
		temp[0] = num.first;
		temp[1] = num.second;
		res.push_back(temp);
		//res.push_back({num.first, num.second});
	}
	return res;
}

int Mate::getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
	int res = -1;
	size_t pOne = 0, pTwo = 0;
	size_t sOne = nums1.size();
	size_t sTwo = nums2.size();
	while (true) {
		if (pOne >= sOne) {
			break;
		}
		if (pTwo >= sTwo) {
			break;
		}

		if (nums1[pOne] > nums2[pTwo]) {
			++pTwo;
		}
		else if (nums1[pOne] < nums2[pTwo]) {
			++pOne;
		}
		else {
			return nums1[pOne];
		}
	}
	return res;
}

bool Mate::containsNearbyDuplicate(std::vector<int>& nums, int k) {
	//std::unordered_map<int, int> window;

	//for (size_t i = 0; i < nums.size(); ++i) {
	//	int temp = (i - k);
	//	if (temp > 0) {
	//		temp--;
	//		window.erase(nums[temp]);
	//	}
	//	if (window.count(nums[i])) {
	//		return true;
	//	}
	//	window[nums[i]] = 1;
	//}

	//return false;
	std::unordered_set<int> window;

	for (size_t i = 0; i < nums.size(); ++i) {
		if (i > k) {
			window.erase(nums[i - k - 1]);
		}

		if (window.count(nums[i])) {
			return true;
		}

		window.insert(nums[i]);
	}
	return false;
}

int Mate::findLHS(std::vector<int>& nums) {
	std::unordered_map<int, int> map;

	int best = 0, sum = 0;

	for (const int& num : nums) {
		map[num]++;

		if (map.count(num + 1)) {
			sum = map[num] + map[num + 1];
			best = std::max(best, sum);
		}

		if (map.count(num - 1)) {
			sum = map[num] + map[num - 1];
			best = std::max(best, sum);
		}
	}

	return best;
}

double Mate::findMaxAverage(std::vector<int>& nums, int k) {
	double best = 0, cur = 0;

	for (size_t i = 0; i < k; ++i) {
		cur += nums[i];
	}
	best = cur;

    size_t j = 0;
    for (size_t i = k; i < nums.size(); ++i) {
        cur += nums[i];
        cur -= nums[j];

        best = std::max(best, cur);
        j++;
    }

	return best / k;
}

std::vector<int> Mate::decrypt(std::vector<int>& code, int k) {
	int n = code.size();
	std::vector<int> res(n, 0);

	if (k == 0) return res;

	for (int i = 0; i < n; ++i) {
		int sum = 0;

		for (int j = 1; j <= std::abs(k); ++j) {
			int idx = 0;
			if (k > 0) {
				idx = (i + j) % n;
			}
			else {
				idx = (i - j + n) % n;
			}
			sum += code[idx];
		}

		res[i] = sum;
	}

	return res;
}

void Mate::rotate(std::vector<int>& nums, int k) {
	int n = nums.size();

	std::vector<int> res;
	res.reserve(n);

	k = k % n;
	for (int i = 0; i < n; ++i) {
		int idx = (i + n - k) % n;
		res.push_back(nums[idx]);
	}
	nums = std::move(res);
}

std::string Mate::longestNiceSubstring(std::string s) {
	int n = s.size();
	int bestStart = 0;
	int bestLen = 0;

	for (int i = 0; i < n; ++i) {
		int lowerMask = 0;
		int upperMask = 0;

		for (int j = i; j < n; ++j) {
			char c = s[j];
			if (c >= 'a' && c <= 'z') {
				lowerMask |= (1 << (c - 'a'));
			}
			else {
				upperMask |= (1 << (c - 'A'));
			}

			if ((lowerMask ^ upperMask) == 0) {
				int len = j - i + 1;
				if (len > bestLen) {
					bestLen = len;
					bestStart = i;
				}
			}
		}
	}
	return s.substr(bestStart, bestLen);
}

int Mate::countGoodSubstrings(std::string s) {
	std::unordered_map<char, short> map;
	map.reserve(3);
	int res = 0;

	for (short i = 0; i < 3; ++i) {
		map[s[i]]++;
	}

	for (short i = 0; i + 3 < s.size(); ++i) {
		if (map.size() >= 3) res++;

		if (map[s[i]] == 1) {
			map.erase(s[i]);
		}
		else {
			map[s[i]]--;
		}
		map[s[i + 3]]++;
	}
	if (map.size() >= 3) {
		res++;
	}

	return res;
}

int Mate::maximumStrongPairXor(std::vector<int>& nums) {
	int idxY = 0, idxZ = 0;
	int n = nums.size();
	int best = 0;
	while (idxY < n) {

		std::cout << "Idx Y: " << idxY << " " << nums[idxY] << std::endl;
		std::cout << "Idx Z: " << idxZ << " " << nums[idxZ] << std::endl;

		if (std::abs(nums[idxY] - nums[idxZ]) <= std::min(nums[idxY], nums[idxZ])) {
			std::cout << "Xor: " << (nums[idxY] ^ nums[idxZ]) << std::endl;
			if (best != std::max(best, nums[idxY] ^ nums[idxZ])) {
				std::cout << "NUEVO BEST" << std::endl;
			}
			best = std::max(best, nums[idxY] ^ nums[idxZ]);
		}

		if (idxY > idxZ) {
			idxZ++;
		}
		else {
			idxY++;
		}
	}
	return best;
}

std::vector<int> Mate::buildArray(std::vector<int>& nums) {
	int n = nums.size();

	std::vector<int> ans;
	ans.reserve(n);

	for (size_t i = 0; i < n; ++i) {
		ans.push_back(nums[nums[i]]);
	}

	return ans;
}

int Mate::minimumOperations(std::vector<int>& nums) {
	int res = 0;
	for (int& num : nums) {
		if (num % 3 != 0) {
			res++;
		}
	}
	return res;
}

std::vector<int> Mate::recoverOrder(std::vector<int>& order, std::vector<int>& friends) {
	//int sizeF = friends.size();
	//std::vector<int> ans;
	//ans.reserve(sizeF);

	//for (size_t i = 0; i < order.size(); ++i) {
	//	for (size_t j = i; j < sizeF; ++j) {
	//		if (order[i] == friends[j]) {
	//			ans.push_back(order[i]);
	//		}
	//	}
	//}
	//return ans;
	std::unordered_set<int> set(friends.begin(), friends.end());
	std::vector<int> res;
	res.reserve(friends.size());

	for (int& n : order) {
		if (set.count(n)) {
			res.push_back(n);
		}
	}

	return res;
}

std::vector<int> Mate::getConcatenation(std::vector<int>& nums) {
	std::vector<int> res;
	int n = nums.size() * 2;
	res.reserve(n);

	for (int& num : nums) {
		res.push_back(num);
	}

	for (int& num : nums) {
		res.push_back(num);
	}

	return res;
}

int Mate::finalValueAfterOperations(std::vector<std::string>& operations) {
	//std::unordered_map<std::string, short> map;
	//map.reserve(4);

	//map["++X"] = 1, map["X++"] = 1;
	//map["--X"] = -1, map["X--"] = -1;

	int res = 0;
	//for (std::string& s : operations) {
	//	res += map[s];
	//}

	for (std::string& s : operations) {
		res += (s == "X++" or s == "++X") ? 1 : -1;
	}

	return res;
}

std::vector<double> Mate::convertTemperature(double celsius) {
	//std::vector<double> res;
	//res.reserve(2);

	//res.push_back(celsius + 273.15);
	//res.push_back(celsius * 1.80 + 32.00);

	//return res;
	return { (celsius + 273.15), (celsius * 1.80 + 32.00) };
}

std::vector<int> Mate::minOperations(std::string boxes) {
	size_t n = boxes.size();
	std::vector<int> ans;
	ans.reserve(n);

	//for (size_t i = 0; i < n; ++i) {
	//	int temp = 0;
	//	for (size_t j = i + 1; j < n; ++j) {
	//		if (boxes[j] == '1') {
	//			temp += i - j;
	//		}
	//	}
	//	for (size_t j = 0; j < i; ++i) {
	//		if (boxes[j] == '1') {
	//			temp += i;
	//		}
	//	}
	//	ans.push_back(temp);
	//}

	for (int i = 0; i < n; ++i) {
		int temp = 0;
		for (int j = 0; j < n; ++j) {
			temp += std::abs(i - j);
		}
		ans.push_back(temp);
	}

	return ans;
}

std::string Mate::defangIPaddr(std::string address) {
	std::string res;
	for (char c : address) {
		if (c == '.') {
			res += "[.]";
		}
		else
		{
			res += c;
		}
	}
	return res;
}

std::vector<int> Mate::getSneakyNumbers(std::vector<int>& nums) {
	std::unordered_set<int> set;
	std::vector<int> res;
	res.reserve(2);

	for (int num : nums) {
		if (set.count(num)) {
			res.push_back(num);
			continue;
		}
		set.insert(num);
	}
	return res;
}

std::string toNumericBase(int num, int base) {
	std::string s;

	while (num > 0) {
		s += num % base;
		num /= base;
	}
	
	return s;
}

bool isPalindromic(std::string& s) {
	int n = s.size() - 1;
	for (size_t i = 0; i <= n; ++i) {
		if (s[i] == s[n - i]) {
			continue;
		}
		return false;
	}
	return true;
}

bool Mate::isStrictlyPalindromic(int n) {
	std::string helper;
	for (int i = 2; i + 2 <= n; i++) {
		helper = toNumericBase(n, i);
		if (isPalindromic(helper)) {
			continue;
		}
		return false;
	}
	return true;
}

std::vector<int> Mate::pivotArray(std::vector<int>& nums, int pivot) {
	size_t n = nums.size();
	std::vector<int> left, right, middle;
	left.reserve(n);
	right.reserve(n);
	middle.reserve(n);

	for (int num : nums) {
		if (num == pivot) {
			middle.push_back(num);
		}
		else if (num > pivot) {
			right.push_back(num);
		}
		else
		{
			left.push_back(num);
		}
	}

	left.insert(left.end(), middle.begin(), middle.end());
	left.insert(left.end(), right.begin(), right.end());

	return left;
}

int Mate::numIdenticalPairs(std::vector<int>& nums) {
	size_t n = nums.size();
	std::sort(nums.begin(), nums.end());
	int res = 0;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = i + 1; j < n; ++j) {
			if (nums[i] != nums[j]) {
				break;
			}
			res++;
		}
	}

	return res;
}

ListNode* Mate::mergeNodes(ListNode* head) {
	ListNode* newHead = nullptr;
	ListNode* newTail = nullptr;

	ListNode* tail = head->next;
	int sum = 0;
	std::cout << std::endl;
	while (tail) {
		sum = 0;
		std::cout << "Valor: " << tail->val << std::endl;
		do {
			sum += tail->val;
			tail = tail->next;
		} while (tail->val != 0);

		ListNode* node = new ListNode(sum);
		if (newHead) {
			newTail->next = node;
			newTail = newTail->next;
		}
		else {
			newHead = newTail = node;
		}

		tail = tail->next;
	}
	return newHead;
}

ListNode* Mate::insertGreatestCommonDivisors(ListNode* head) {
	ListNode* tail = head;

	while (tail->next) {
		ListNode* next = tail->next;
		int num = std::gcd(next->val, tail->val);

		ListNode* nodo = new ListNode(num);

		tail->next = nodo;
		nodo->next = next;

		tail = next;
	}
	return head;
}

ListNode* Mate::mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
	int i = 1;
	ListNode* p1 = nullptr;
	ListNode* p2 = nullptr;
	for (ListNode* tail = list1; tail; tail = tail->next) {
		if (i == a) {
			p1 = tail;
		}
		if (i == b) {
			p2 = tail->next->next;
		}
		i++;
	}

	p1->next = list2;

	ListNode* tail2 = list2;
	while (tail2->next) {
		tail2 = tail2->next;
	}
	tail2->next = p2;

	return list1;
}

int Mate::getDecimalValue(ListNode* head) {
	ListNode* tail = head;
	std::string s;
	while (tail) {
		s += tail->val;
		tail = tail->next;
	}
	std::cout << s << std::endl;

	size_t n = s.size() - 1;
	int res = 0;
	for (size_t i = 0, e = n; i <= n; ++i, --e) {
		std::cout << s[i] << " " << e << " " << std::pow(2, e) << std::endl;

		int pow = std::pow(2, e);
		res += s[i] * pow;
	}
	return res;
}

std::vector<std::vector<int>> Mate::spiralMatrix(int rows, int cols, ListNode* head) {
	std::vector<std::vector<int>> matrix(rows);

	for (std::vector<int>& col : matrix) {
		col.resize(cols, -1);
	}

	int left = 0, top = 0;
	int bottom = rows - 1;
	int right = cols - 1;

	ListNode* tail = head;
	bool end = false;
	while (right >= left and bottom >= top) {
		for (int j = left; j <= right; ++j) {
			if (!tail) {
				end = true;
				break;
			}
			matrix[top][j] = tail->val;
			tail = tail->next;
		}
		if (end) break;
		++top;

		for (int j = top; j <= bottom; ++j) {
			if (!tail) {
				end = true;
				break;
			}
			matrix[j][right] = tail->val;
			tail = tail->next;
		}
		if (end) break;
		--right;

		if (top > bottom) break;
		for (int j = right; j >= left; --j) {
			if (!tail) {
				end = true;
				break;
			}
			matrix[bottom][j] = tail->val;
			tail = tail->next;
		}
		if (end) break;
		--bottom;

		if (left > right) break;
		for (int j = bottom; j >= top; --j) {
			if (!tail) {
				end = true;
				break;
			}
			matrix[j][left] = tail->val;
			tail = tail->next;
		}
		if (end) break;
		++left;
	}

	return matrix;
}

int Mate::pairSum(ListNode* head) {
	int best = 0, n = 0;

	for (ListNode* tail = head; tail; tail = tail->next) n++;

	ListNode* tail = head;
	int size = n / 2;

	std::unordered_map<int, int> map;
	for (int i = 0; i < size; ++i) {
		map[i] += tail->val;
		tail = tail->next;
	}

	for (int i = size - 1; i >= 0; --i) {
		map[i] += tail->val;
		best = std::max(best, map[i]);
		tail = tail->next;
	}

	return best;
}

ListNode* Mate::middleNode(ListNode* head) {
	int n = 0;
	for (ListNode* tail = head; tail; tail = tail->next) ++n;

	n = n / 2;

	ListNode* tail = head;
	for (size_t i = 0; i < n; ++i) {
		tail = tail->next;
	}
	
	return tail;
}

int Mate::minOperations(std::vector<int>& nums, int k) {
	int total = 0;
	for (size_t i = 0; i < nums.size(); ++i) {
		total += nums[i];
	}

	return total % k;
}

int Mate::scoreOfString(std::string s) {
	int res = 0;
	for (size_t i = 1; i < s.size(); ++i) {
		res += std::abs(s[i - 1] - s[i]);
	}
	return res;
}

int Mate::maxDistinct(std::string s) {
	std::unordered_set<int> set;
	set.reserve(s.size());

	for (char c : s) {
		set.insert(c);
	}
	return set.size();
}

std::vector<int> Mate::transformArray(std::vector<int>& nums) {
	int evens = 0, odds = 0;
	for (size_t i = 0; i < nums.size(); ++i) {
		if (nums[i] % 2 == 0) {
			evens++;
			continue;
		}
		odds++;
	}

	std::vector<int> res(evens, 0);
	res.reserve(odds + evens);

	for (int n = 0; n < odds; ++n) {
		res.push_back(1);
	}

	return res;
}

int Mate::numJewelsInStones(std::string jewels, std::string stones) {
	int res = 0;
	std::unordered_map<char, int> mapStones;

	for (char& c : stones) {
		mapStones[c]++;
	}

	for (char& c : jewels) {
		res += mapStones[c];
	}

	return res;
}

int Mate::alternatingSum(std::vector<int>& nums) {
	int res = 0;
	for (size_t i = 0; i < nums.size(); i += 2) {
		res += nums[i];
	}
	for (size_t i = 1; i < nums.size(); i += 2) {
		res -= nums[i];
	}
	return res;
}

std::string Mate::reversePrefix(std::string s, int k) {
	std::string res;
	--k;
	for (int i = k; i >= 0; --i) {
		res += s[i];
	}

	for (int i = k + 1; i < s.size(); ++i) {
		res += s[i];
	}

	return res;
}

std::vector<int> Mate::shuffle(std::vector<int>& nums, int n) {
	std::vector<int> res(n * 2);

	for (int i = 0; i < n; ++i) {
		res[i * 2] = nums[i];
	}

	for (int i = n, j = 1; i < nums.size(); ++i, j += 2) {
		res[j] = nums[i];
	}

	return res;
}

int Mate::findClosest(int x, int y, int z) {
	int u = std::abs(z - x);
	int i = std::abs(z - y);

	if (i > u) {
		return 1;
	}
	else if (i < u) {
		return 2;
	}
	return 0;
}

int Mate::maxFreqSum(std::string s) {
	std::unordered_map<char, int> vows;
	vows['a'] = 1;
	vows['e'] = 1;
	vows['i'] = 1;
	vows['o'] = 1;
	vows['u'] = 1;

	std::unordered_map<char, int> cons;

	int bestVow = 0, bestCon = 0;
	for (char& c : s) {
		if (vows.count(c)) {
			vows[c]++;
			bestVow = std::max(bestVow, vows[c]);
		}
		else {
			cons[c]++;
			bestCon = std::max(bestCon, cons[c]);
		}
	}
	if (bestVow) bestVow--;

	return bestCon + bestVow;
}
