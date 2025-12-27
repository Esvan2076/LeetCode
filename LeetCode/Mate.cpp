#include "Mate.h"
#include "ListNode.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <print>
#include <map>
#include <unordered_map>

//using namespace std;

void printNums(std::vector<int>& nums);
void printRow(std::vector<int>& nums);
void printStack(const std::vector<char>& stack);
bool isOpeningBracket(char c);
bool isMatchingPair(char open, char close);
ListNode* findNext(ListNode* node);
std::vector<std::string> listToLowerCase(std::vector<std::string>& list);
bool charInList(std::string& list, char& c);

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
			std::cout << "Position: " << i << "\t" << s[i] << "\n";
			s[i] = s[i] + 32;
			std::cout << s[i] << "\n";
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