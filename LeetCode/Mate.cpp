#include "Mate.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

void printNums(std::vector<int>& nums);
void printStack(const std::vector<char>& stack);
bool isOpeningBracket(char c);
bool isMatchingPair(char open, char close);

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