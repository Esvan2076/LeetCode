#include "Menu.h"

#include <iostream>
#include <vector>
#include "Mate.h"
#include "MinStack.h"
#include "ParkingSystem.h"

void Menu::menuSumNum() {
    Mate m;
    int num1, num2 = 0;
    std::cout << "Sum Nums\n";
    std::cout << "Num1: ";
    std::cin >> num1;
    std::cout << "Num2: ";
    std::cin >> num2;
    int res = m.sumNum(num1, num2);
    std::cout << res;
}

void Menu::menuAddDigits() {
    Mate m;
    int num = 0;
    std::cout << "258. Add Digits\n";
    std::cout << "Num: ";
    std::cin >> num;
    int res = m.addDigits(num);
    std::cout << res;
}

void Menu::menuFirstUniqCharFail() {
    Mate m;
    std::string text;
    std::cout << "387. First Unique Character in a String\n";
    std::cout << "Num: ";
    std::cin >> text;
    int res = m.firstUniqCharFail(text);
    std::cout << res;
}

void Menu::menuMinimumNumberGame() {
    Mate m;
    int n = 0;
    std::cout << "2974. Minimum Number Game\n";
    std::cout << "Cuantos numeros seran?: ";
    std::cin >> n;
    std::vector<int> vec(n);
    std::cout << "Ingresa los " << n << " numeros: " << "\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Numero: " << i + 1 << "\n";
        std::cin >> vec[i];
    }
    std::vector<int> res = m.minimumNumberGame(vec);
    std::cout << "Vector: "<< "\n";
    for (int i = 0; i < n; ++i) {
        std::cout << vec[i] << "\t";
    }
}

void Menu::menuPangramSentence() {
    Mate m;
    std::string text = "";
    std::cout << "1832. Check if the Sentence Is Pangram\n";
    std::cout << "Write the sentence you want to check: ";
    std::cin >> text;
    std::cout << text;
    std::cout << "\n";
    bool res = m.pangramSentence(text);
}

void Menu::menuMaximumNumberInSentences() {
    Mate m;
    int num = 0;
    std::cout << "2114. Maximum Number of Words Found in Sentences\n";
    std::cout << "How many sentenses you want to check: ";
    std::cin >> num;
    std::cin.ignore();  // limpia el salto de línea
    std::vector<std::string> oraciones(num);
    for (int i = 0; i < num; ++i) {
        std::cout << "Introduce the sentences number " << i + 1 << ": ";
        getline(std::cin, oraciones[i]);
    }
    int res = m.maximumNumberInSentences(oraciones);
    std::cout << res;
}

void Menu::menuCountDivideDigits() {
    Mate m;
    int num = 0;
    std::cout << "2520. Count the Digits That Divide a Number\n";
    std::cout << "Give me a number: ";
    std::cin >> num;
    int res = m.countDivideDigits(num);
    std::cout << res;
}

void Menu::menuDifferenceOfSums() {
    Mate m;
    int num1 = 0;
    int num2 = 0;
    std::cout << "2894. Divisible and Non-divisible Sums Difference\n";
    std::cout << "Give me a number N: ";
    std::cin >> num1;
    std::cout << "Give me the second number M: ";
    std::cin >> num2;
    int res = m.differenceOfSums(num1, num2);
    std::cout << res;
}

void Menu::menuFindWordsContaining() {
    Mate m;
    int num1 = 0;
    char c = 0;
    std::cout << "2942. Find Words Containing Character\n";
    std::cout << "How many words you want to check: ";
    std::cin >> num1;
    std::vector<std::string> words(num1);
    for (int i = 0; i < num1; ++i) {
        std::cout << "Introduce the word number " << i + 1 << ": ";
        std::cin >> words[i];
    }
    std::cout << "Which caracter are you looking for? ";
    std::cin >> c;
    std::vector<int> res = m.findWordsContaining(words, c);
    for (int val : res) {
        std::cout << val << " ";
    }
}

void Menu::menuMaximumWealth() {
    Mate m;
    int num1 = 0;
    int num2 = 0;
    int value = 0;
    std::cout << "1672. Richest Customer Wealth\n";
    std::cout << "How many accounts you want to insert? ";
    std::cin >> num1;
    std::vector<std::vector<int>> accounts(num1);
    for (int i = 0; i < num1; ++i) {
        std::cout << "Account number " << i + 1 << ": ";
        std::cout << "How many digits does this account have? ";
        std::cin >> num2;
        for (int j = 0; j < num2; ++j) {
            value = 0;
            std::cout << "Insert number " << j + 1 << ": ";
            std::cin >> value;
            accounts[i].push_back(value);
        }
    }
    std::cout << "\nAccounts entered:\n";
    for (int i = 0; i < accounts.size(); ++i) {
        std::cout << "Account " << i + 1 << ": ";
        for (int num : accounts[i]) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
    int res = m.maximumWealth(accounts);
    std::cout << "Result: " << res;
}

void Menu::menuToLowerCase() {
    Mate m;
    std::string sentence;
    std::cout << "709. To Lower Case\n";
    std::cout << "Give a sentence you want to transform: " ;
    getline(std::cin, sentence);
    sentence = m.toLowerCase(sentence);
    std::cout << "Transform: " << sentence;
}

void Menu::menuEmployeesWhoMetTarget() {
    Mate m;
    int num1;
    int num2;
    std::vector<int> hours;
    std::cout << "2798. Number of Employees Who Met the Target\n";
    std::cout << "How many employes do you have?: ";
    std::cin >> num1;
    std::cout << "Enter the number of hours each employee worked. " << "\n";
    for (int j = 0; j < num1; ++j) {
        std::cout << "Enter the hours worked by employee " << j + 1 << ": ";
        std::cin >> num2;
        hours.push_back(num2);
    }
    std::cout << "What is the target: ";
    std::cin >> num1;
    int res = m.employeesWhoMetTarget(hours, num1);
    std::cout << "Result: " << res;
}

void Menu::menuXorOperation() {
    Mate m;
    int start;
    int num;
    std::vector<int> hours;
    std::cout << "1486. XOR Operation in an Array\n";
    std::cout << "Where is the start? ";
    std::cin >> start;
    std::cout << "Who many numbers: ";
    std::cin >> num;
    int res = m.xorOperation(num, start);
    std::cout << "Result: " << res;
}

void Menu::menuSubtractProductAndSum() {
    Mate m;
    int num;
    std::cout << "1281. Subtract the Product and Sum of Digits of an Integer\n";
    std::cout << "Give me a number: ";
    std::cin >> num;
    int res = m.subtractProductAndSum(num);
    std::cout << "Result: " << res;
}

void Menu::menuSumOfMultiples() {
    Mate m;
    int num;
    std::cout << "2652. Sum Multiples\n";
    std::cout << "Give me a number: ";
    std::cin >> num;
    int res = m.sumOfMultiples(num);
    std::cout << "Result: " << res;
}

void Menu::menuFirstPalindrome() {
    Mate m;
    int num1;
    std::cout << "2108. Find First Palindromic String in the Array\n";
    std::cout << "How many words you want to check: ";
    std::cin >> num1;
    std::vector<std::string> words(num1);
    for (int i = 0; i < num1; ++i) {
        std::cout << "Introduce the word number " << i + 1 << ": ";
        std::cin >> words[i];
    }
    std::string res = m.firstPalindrome(words);
    std::cout << "Result: " << res;
}

void Menu::menuDifferenceOfSum() {
    Mate m;
    int num1;
    int num2;
    std::cout << "2535. Difference Between Element Sum and Digit Sum of an Array\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    int res = m.differenceOfSum(nums);
    std::cout << "Result: " << res;
}

void Menu::menuFirstUniqChar() {
    Mate m;
    std::string sentence;
    std::cout << "387. First Unique Character in a String\n";
    std::cout << "Give a sentence you want to check: ";
    getline(std::cin, sentence);
    int res = m.firstUniqChar(sentence);
    std::cout << "Result: " << res;
}

void Menu::menuCanAliceWin() {
    Mate m;
    int num1;
    int num2;
    std::cout << "3232. Find if Digit Game Can Be Won\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    bool res = m.canAliceWin(nums);
    std::cout << "Result: " << res;
}

void Menu::menuJudgeCircle() {
    Mate m;
    std::string moves;
    std::cout << "657. Robot Return to Origin\n";
    std::cout << "Give me the moves the robot is going to do: ";
    std::cin >> moves;
    bool res = m.judgeCircle(moves);
    std::cout << "Result: " << res;
}

void Menu::menuCountKeyChanges() {
    Mate m;
    std::string text;
    std::cout << "3019. Number of Changing Keys\n";
    std::cout << "Give me your password: ";
    std::cin >> text;
    int res = m.countKeyChanges(text);
    std::cout << "Result: " << res;
}

void Menu::menuArraySign() {
    Mate m;
    int num1;
    int num2;
    std::cout << "1822. Sign of the Product of an Array\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> nums[j];
    }
    int res = m.arraySign(nums);
    std::cout << "Result: " << res;
}

void Menu::menuThreeConsecutiveOdds() {
    Mate m;
    int num1;
    int num2;
    std::cout << "1550. Three Consecutive Odds\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> nums[j];
    }
    bool res = m.threeConsecutiveOdds(nums);
    std::cout << "Result: " << res;
}

void Menu::menuSortedSquares() {
    Mate m;
    int num1;
    int num2;
    std::cout << "977. Squares of a Sorted Array\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> nums[j];
    }
    std::vector<int> result = m.sortedSquares(nums);
    std::cout << "Result: \n";
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num" << j + 1 << ": ";
        std::cout << result[j] << "\n";
    }
}

void Menu::menuCalPoints() {
    Mate m;
    int num1;
    std::cout << "682. Baseball Game\n";
    std::cout << "How many operations: ";
    std::cin >> num1;
    std::vector<std::string> nums(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> nums[j];
    }
    int res = m.calPoints(nums);
    std::cout << "Result: " << res;
}

void Menu::menuTriangleType() {
    Mate m;
    int num1;
    std::cout << "3024. Type of Triangle\n";
    std::cout << "Give me a triangle:\n";
    std::vector<int> nums(3);
    for (int j = 0; j < 3; ++j) {
        std::cout << "Side " << j + 1 << ": ";
        std::cin >> nums[j];
    }
    std::string res = m.triangleType(nums);
    std::cout << "Result: " << res;
}

void Menu::menuIsValidParentheses() {
    Mate m;
    std::string s;
    std::cout << "20. Valid Parentheses\n";
    std::cout << "Give a sentence with parentheses: ";
    std::cin >> s;
    bool res = m.isValidParentheses(s);
    std::cout << "Result: " << res;
}

void Menu::menuRomanToInt() {
    Mate m;
    std::string s;
    std::cout << "13. Roman to Integer\n";
    std::cout << "Give a string of Roman numbers: ";
    std::cin >> s;
    int res = m.romanToInt(s);
    std::cout << "Result: " << res;
}

void Menu::menuLongestCommonPrefix() {
    Mate m;
    std::string s;
    int num = 0;
    std::cout << "14. Longest Common Prefix\n";
    std::cout << "How many words: ";
    std::cin >> num;
    std::vector < std::string > words(num);
    for (int i = 0; i < num; i++) {
        std::cout << "Word: " << i + 1 << ": ";
        std::cin >> words[i];
    }

    std::string res = m.longestCommonPrefix(words);
    std::cout << "Result: " << res;
}

void Menu::menuPlusOne() {
    Mate m;
    int num = 0;
    std::cout << "66. Plus One\n";
    std::cout << "How many numbers: ";
    std::cin >> num;
    std::vector<int> digits(num);
    for (int i = 0; i < num; i++) {
        std::cout << "Number: " << i + 1 << ": ";
        std::cin >> digits[i];
    }

    std::vector<int> res = m.plusOne(digits);
    std::cout << "Result: " << std::endl;
    for (int n : res) {
        std::cout << n;
    }
}

void Menu::menuDeleteDuplicatesListNode() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "83. Remove Duplicates from Sorted List\n";
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head) {            // // primer nodo
            head = tail = node;
        }
        else {                // // push-back
            tail->next = node;
            tail = node;
        }
    }

    ListNode* headResult = m.deleteDuplicates(head);

    std::cout << "Result: ";
    for (ListNode* p = headResult; p; p = p->next) {
        std::cout << p->val << '-';
    }
    std::cout << '\n';
}

void Menu::menuMergeTwoLists() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head1 = nullptr;
    ListNode* tail1 = nullptr;

    ListNode* head2 = nullptr;
    ListNode* tail2 = nullptr;

    std::cout << "21. Merge Two Sorted Lists\n";

    std::cout << "List 1: " << std::endl;
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head1) {            // // primer nodo
            head1 = tail1 = node;
        }
        else {                // // push-back
            tail1->next = node;
            tail1 = node;
        }
    }

    std::cout << "List 2: " << std::endl;
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head2) {            // // primer nodo
            head2 = tail2 = node;
        }
        else {                // // push-back
            tail2->next = node;
            tail2 = node;
        }
    }

    ListNode* headResult = m.mergeTwoLists(head1, head2);

    std::cout << "Result: ";
    for (ListNode* p = headResult; p; p = p->next) {
        std::cout << p->val << '-';
    }
    std::cout << '\n';
}

void Menu::menuCanPlaceFlowers() {
    Mate m;
    int num = 0;
    std::cout << "605. Can Place Flowers\n";
    std::cout << "How many positions: ";
    std::cin >> num;
    std::vector<int> flowerbed(num);
    for (int i = 0; i < num; i++) {
        std::cout << "Position: " << i + 1 << ": ";
        std::cin >> flowerbed[i];
    }
    std::cout << "How many flowers: ";
    std::cin >> num;
    bool res = m.canPlaceFlowers(flowerbed, num);
    std::cout << "Result: " << res << std::endl;
}

void Menu::menuKidsWithCandies() {
    Mate m;
    int num = 0;
    std::cout << "1431. Kids With the Greatest Number of Candies\n";
    std::cout << "How many kids: ";
    std::cin >> num;
    std::vector<int> candies(num);
    for (int i = 0; i < num; i++) {
        std::cout << "Position: " << i + 1 << ": ";
        std::cin >> candies[i];
    }
    std::cout << "How many extra candies: ";
    std::cin >> num;
    std::vector<bool> res = m.kidsWithCandies(candies, num);
    std::cout << "Result: " << std::endl;
    for (bool n : res) {
        std::cout << n << "-";
    }
}

void Menu::menuProductExceptSelf() {
    Mate m;
    int num = 0;
    std::cout << "238. Product of Array Except Self\n";
    std::cout << "How many numbers: ";
    std::cin >> num;
    std::vector<int> digits(num);
    for (int i = 0; i < num; i++) {
        std::cout << "Number: " << i + 1 << ": ";
        std::cin >> digits[i];
    }

    std::vector<int> res = m.productExceptSelf(digits);
    std::cout << "Result: " << std::endl;
    for (int n : res) {
        std::cout << n << "-";
    }
}

void Menu::menuReverseVowels() {
    Mate m;
    std::string text;
    std::cout << "345. Reverse Vowels of a String\n";
    std::cout << "Give me a word: ";
    std::cin >> text;
    std::string res = m.reverseVowels(text);
    std::cout << res;
}

void Menu::menuClimbStairs() {
    Mate m;
    int num = 0;
    std::cout << "70. Climbing Stairs\n";
    std::cout << "Give me the amount of steps: ";
    std::cin >> num;
    int res = m.climbStairs(num);
    std::cout << res;
}

void Menu::menuReverseWords() {
    Mate m;
    std::string text;
    std::cout << "151. Reverse Words in a String\n";
    std::cout << "Give me a sentence: ";
    getline(std::cin, text);
    std::string res = m.reverseWords(text);
    std::cout << res;
}

void Menu::menuIsUgly() {
    Mate m;
    int num = 0;
    std::cout << "263. Ugly Number\n";
    std::cout << "Give me a number: ";
    std::cin >> num;
    bool ans = m.isUgly(num);
    std::cout << ans;
}

void Menu::menuPascalsTriangle() {
    Mate m;
    int num = 0;
    std::cout << "118. Pascal's Triangle\n";
    std::cout << "Give me a number: ";
    std::cin >> num;
    std::vector<std::vector<int>> triangle = m.generate(num);
    std::cout << "Triangle: \n";
    for (std::vector <int> row : triangle) {
        std::cout << "[ ";
        for (int num : row) {
            std::cout << "[" << num << "]";
        }
        std::cout << " ]\n";
    }
}

void Menu::menuMajorityElement() {
    Mate m;
    int num1 = 0;
    int num2 = 0;
    std::cout << "169. Majority Element\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums;
    nums.reserve(num1);
    for (int j = 0; j < num1; j++) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    int res = m.majorityElement(nums);
    std::cout << "Result: " << res;
}

void Menu::menuMajorityElementII() {
    Mate m;
    int num1 = 0;
    int num2 = 0;
    std::cout << "229. Majority Element II\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums;
    nums.reserve(num1);
    for (int j = 0; j < num1; j++) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    std::vector<int> res = m.majorityElementII(nums);
    std::cout << "Result: " << std::endl;
    for (int n : res) {
        std::cout << n << " - ";
    }
}

void Menu::menuRepeatedNTimes() {
    Mate m;
    int num1 = 0;
    int num2 = 0;
    std::cout << "961. N-Repeated Element in Size 2N Array\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums;
    nums.reserve(num1);
    for (int j = 0; j < num1; j++) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    int res = m.repeatedNTimes(nums);
    std::cout << "Result: " << res << std::endl;
}

void Menu::menuIsPathCrossing() {
    Mate m;
    std::string text;
    std::cout << "1496. Path Crossing\n";
    std::cout << "Give me a path: [N][S][E][W]" << std::endl;
    std::cout << "> ";
    std::cin >> text;
    bool res = m.isPathCrossing(text);
    std::cout << res;
}

void Menu::menuIsPrefixOfWord() {
    Mate m;
    std::string sentence;
    std::string prefix;
    int num = 0;
    std::cout << "1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence\n";
    std::cout << "Give a sentence you want to check: ";
    getline(std::cin, sentence);
    std::cout << "Give the prefix you want to search: ";
    getline(std::cin, prefix);
    int res = m.isPrefixOfWord(sentence, prefix);
    std::cout << "Result: " << res;
}

void Menu::menuFindEvenNumbers() {
    Mate m;
    int num1 = 0;
    int num2 = 0;
    std::cout << "2094. Finding 3-Digit Even Numbers\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    std::vector<int> nums;
    nums.reserve(num1);
    for (int j = 0; j < num1; j++) {
        std::cout << "Num" << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    std::vector<int> res = m.findEvenNumbers(nums);
    std::cout << "Results: " << std::endl;
    for (int n : res) {
        std::cout << n << " - ";
    }
}

void Menu::menuFindWords() {
    Mate m;
    std::string s;
    int num = 0;
    std::cout << "500. Keyboard Row\n";
    std::cout << "How many words: ";
    std::cin >> num;
    std::vector <std::string> words;
    words.reserve(num);
    for (int i = 0; i < num; i++) {
        std::cout << "Word: " << i + 1 << ": ";
        std::cin >> s;
        words.push_back(s);
    }
    std::vector<std::string> res = m.findWords(words);
    std::cout << "Result: " << std::endl;
    for (std::string val : res) {
        std::cout << val << " ";
    }
}

void Menu::menuReverseString() {
    Mate m;
    std::string text;
    std::vector<char> s;
    std::cout << "344. Reverse String\n";
    std::cout << "Give me a string: ";
    getline(std::cin, text);
    s.reserve(text.size());
    for (char& c : text) {
        s.push_back(c);
    }
    m.reverseString(s);
    std::cout << "Results: ";
    for (char& c : s) {
        std::cout << c;
    }
}

void Menu::menuTwoSum() {
    Mate m;
    int num1;
    int num2;
    std::vector<int> numbers;
    std::cout << "167. Two Sum II - Input Array Is Sorted\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "What is the target: ";
    std::cin >> num1;
    std::vector<int> res = m.twoSum(numbers, num1);
    std::cout << "Result: \n\t";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuIsSubsequence() {
    Mate m;
    std::string s;
    std::string t;
    std::cout << "392. Is Subsequence\n";
    std::cout << "Give me a string: ";
    getline(std::cin, s);
    std::cout << "Give me another string: ";
    getline(std::cin, t);
    bool res = m.isSubsequence(s, t);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuDiStringMatch() {
    Mate m;
    std::string s;
    std::cout << "942. DI String Match\n";
    std::cout << "Give me a string: ";
    getline(std::cin, s);
    std::vector<int> res = m.diStringMatch(s);
    std::cout << "Result: \n\t";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuSortArrayByParityII() {
    Mate m;
    int num1;
    int num2;
    std::vector<int> numbers;
    std::cout << "922. Sort Array By Parity II\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::vector<int> res = m.sortArrayByParityII(numbers);
    std::cout << "Result: \n\t";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuSortArrayByParity() {
    Mate m;
    int num1;
    int num2;
    std::vector<int> numbers;
    std::cout << "905. Sort Array By Parity\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::vector<int> res = m.sortArrayByParity(numbers);
    std::cout << "Result: \n\t";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuFindIndices() {
    Mate m;
    int num1;
    int num2;
    std::vector<int> numbers;
    std::cout << "2903. Find Indices With Index and Value Difference I\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "Give me the Index Difference: ";
    std::cin >> num1;
    std::cout << "Give me the Value Difference: ";
    std::cin >> num2;
    std::vector<int> res = m.findIndices(numbers, num1, num2);
    std::cout << "Result: \n";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuCountPairs() {
    Mate m;
    int num1;
    int num2;
    std::vector<int> numbers;
    std::cout << "2824. Count Pairs Whose Sum is Less than Target\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "What is the target: ";
    std::cin >> num1;
    int res = m.countPairs(numbers, num1);
    std::cout << "Result: \n";
    std::cout << res << "\t";
}

void Menu::menuMakeSmallestPalindrome() {
    Mate m;
    std::string text;
    std::cout << "2697. Lexicographically Smallest Palindrome\n";
    std::cout << "Give me a word: ";
    std::cin >> text;
    std::string res = m.makeSmallestPalindrome(text);
    std::cout << res;
}

void Menu::menuMergeArrays() {
    Mate m;
    int count, id, val;

    std::vector<std::vector<int>> nums1, nums2;

    std::cout << "2570. Merge Two 2D Arrays by Summing Values\n";

    std::cout << "How many pairs in nums1: ";
    std::cin >> count;
    for (size_t i = 0; i < count; ++i) {
        std::cout << "Pair " << i + 1 << std::endl;
        std::cout << "Id: " << std::endl;
        std::cin >> id;
        std::cout << "Value: " << std::endl;
        std::cin >> val;
        nums1.push_back({ id, val });
    }

    std::cout << "How many pairs in nums2: ";
    std::cin >> count;
    for (size_t i = 0; i < count; ++i) {
        std::cout << "Pair " << i + 1 << std::endl;
        std::cout << "Id: " << std::endl;
        std::cin >> id;
        std::cout << "Value: " << std::endl;
        std::cin >> val;
        nums2.push_back({ id, val });
    }

    std::vector<std::vector<int>> res = m.mergeArrays(nums1, nums2);

    std::cout << "Result:\n";
    for (const auto& pair : res) {
        std::cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }
}

void Menu::menuGetCommon() {
    Mate m;
    int count, num;
    std::vector<int> nums1, nums2;

    std::cout << "2540. Minimum Common Value\n";

    std::cout << "How many numbers in nums1: ";
    std::cin >> count;
    nums1.reserve(count);
    for (int i = 0; i < count; ++i) {
        std::cout << "Num1[" << i << "]: ";
        std::cin >> num;
        nums1.push_back(num);
    }

    std::cout << "How many numbers in nums2: ";
    std::cin >> count;
    nums2.reserve(count);
    for (int i = 0; i < count; ++i) {
        std::cout << "Num2[" << i << "]: ";
        std::cin >> num;
        nums2.push_back(num);
    }

    int res = m.getCommon(nums1, nums2);
    std::cout << "Result: " << res << "\n";
}

void Menu::menuContainsNearbyDuplicate() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "219. Contains Duplicate II\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "What is K: ";
    std::cin >> num1;
    int res = m.containsNearbyDuplicate(numbers, num1);
    std::cout << "Result: \n";
    std::cout << res << "\t";
}

void Menu::menuFindLHS() {
    Mate m;
    int num1;
    int num2;
    std::vector<int> numbers;
    std::cout << "594. Longest Harmonious Subsequence\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (int j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    int res = m.findLHS(numbers);
    std::cout << "Result: \n";
    std::cout << res;
}

void Menu::menuFindMaxAverage() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "643. Maximum Average Subarray I\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "What is K: ";
    std::cin >> num1;
    double res = m.findMaxAverage(numbers, num1);
    std::cout << "Result: \n";
    std::cout << res << "\t";
}

void Menu::menuDecrypt() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "1652. Defuse the Bomb\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "What is K: ";
    std::cin >> num1;
    std::vector<int> res = m.decrypt(numbers, num1);
    std::cout << "Result: \n";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuRotate() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "189. Rotate Array\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "What is K: ";
    std::cin >> num1;
    m.rotate(numbers, num1);
    std::cout << "Result: \n";
    for (int& num : numbers) {
        std::cout << num << "\t";
    }
}

void Menu::menuLongestNiceSubstring() {
    Mate m;
    std::string s;
    std::cout << "1763. Longest Nice Substring\n";
    std::cout << "Give me a string: ";
    getline(std::cin, s);
    std::string res = m.longestNiceSubstring(s);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuCountGoodSubstrings() {
    Mate m;
    std::string s;
    std::cout << "1876. Substrings of Size Three with Distinct Characters\n";
    std::cout << "Give me a string: ";
    getline(std::cin, s);
    int res = m.countGoodSubstrings(s);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuMaximumStrongPairXor() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "2932. Maximum Strong Pair XOR I\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    int res = m.maximumStrongPairXor(numbers);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuBuildArray() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "1920. Build Array from Permutation\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::vector<int> res = m.buildArray(numbers);
    std::cout << "Result: \n";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuMinimumOperations() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "3190. Find Minimum Operations to Make All Elements Divisible by Three\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    int res = m.minimumOperations(numbers);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuRecoverOrder() {
    Mate m;
    int num1, num2;
    std::vector<int> nums1, nums2;
    std::cout << "3668. Restore Finishing Order\n";
    std::cout << "How many numbers in Nums1: ";
    std::cin >> num1;
    nums1.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        nums1.push_back(num2);
    }
    std::cout << "How many numbers in Nums2: ";
    std::cin >> num1;
    nums2.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        nums2.push_back(num2);
    }
    std::vector<int> res = m.recoverOrder(nums1, nums2);
    std::cout << "Result: \n";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuGetConcatenation() {
    Mate m;
    int num1, num2;
    std::vector<int> nums;
    std::cout << "1929. Concatenation of Array\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    nums.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    std::vector<int> res = m.getConcatenation(nums);
    std::cout << "Result: \n";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuFinalValueAfterOperations() {
    Mate m;
    int num1;
    std::string s;
    std::vector<std::string> ins;
    std::cout << "2011. Final Value of Variable After Performing Operations\n";
    std::cout << "How many Operations: ";
    std::cin >> num1;
    ins.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Operation " << j + 1 << ": ";
        getline(std::cin, s);
        ins.push_back(s);
    }
    int res = m.finalValueAfterOperations(ins);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuConvertTemperature() {
    Mate m;
    double num1;
    std::cout << "2469. Convert the Temperature\n";
    std::cout << "Give me a temperatura in Celsius: ";
    std::cin >> num1;
    std::vector<double> res = m.convertTemperature(num1);
    std::cout << "Result: " << std::endl;
    std::cout << "Kelvin: " << res[0];
    std::cout << " Fahrenheit: " << res[1];
}

void Menu::menuMinOperations() {
    Mate m;
    std::string s;
    std::cout << "1769. Minimum Number of Operations to Move All Balls to Each Box\n";
    std::cout << "Give me a string: ";
    std::cout << "Example 001001 ";
    getline(std::cin, s);
    std::vector<int> res = m.minOperations(s);
    std::cout << "Result: \n";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuDefangIPaddr() {
    Mate m;
    std::string s;
    std::cout << "1108. Defanging an IP Address\n";
    std::cout << "Give me an IP: ";
    std::cout << "Example: 255.100.50.0\n";
    getline(std::cin, s);
    std::string res = m.defangIPaddr(s);
    std::cout << "Result: \n";
    std::cout << res;
}

void Menu::menuGetSneakyNumbers() {
    Mate m;
    int num1, num2;
    std::vector<int> nums;
    std::cout << "3289. The Two Sneaky Numbers of Digitville\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    nums.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        nums.push_back(num2);
    }
    std::vector<int> res = m.getSneakyNumbers(nums);
    std::cout << "Result: \n";
    for (int& num : res) {
        std::cout << num << "\t";
    }
}

void Menu::menuIsStrictlyPalindromic() {
    Mate m;
    int num;
    std::cout << "2396. Strictly Palindromic Number\n";
    std::cout << "Give me a number: ";
    std::cin >> num;
    bool res = m.isStrictlyPalindromic(num);
    std::cout << res;
}

void Menu::menuPivotArray() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "2161. Partition Array According to Given Pivot\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    std::cout << "What is Pivot: ";
    std::cin >> num1;
    m.pivotArray(numbers, num1);
    std::cout << "Result: \n";
    for (int& num : numbers) {
        std::cout << num << "\t";
    }
}

void Menu::menuNumIdenticalPairs() {
    Mate m;
    int num1, num2;
    std::vector<int> numbers;
    std::cout << "1512. Number of Good Pairs\n";
    std::cout << "How many numbers: ";
    std::cin >> num1;
    numbers.reserve(num1);
    for (size_t j = 0; j < num1; ++j) {
        std::cout << "Num " << j + 1 << ": ";
        std::cin >> num2;
        numbers.push_back(num2);
    }
    int res = m.numIdenticalPairs(numbers);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuMergeNodes() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "2181. Merge Nodes in Between Zeros\n";
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head) {            // // primer nodo
            head = tail = node;
        }
        else {                // // push-back
            tail->next = node;
            tail = node;
        }
    }

    ListNode* headResult = m.mergeNodes(head);

    std::cout << "Result: ";
    for (ListNode* p = headResult; p; p = p->next) {
        std::cout << p->val << '-';
    }
    std::cout << '\n';
}

void Menu::menuInsertGreatestCommonDivisors() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "2807. Insert Greatest Common Divisors in Linked List\n";
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head) {            // // primer nodo
            head = tail = node;
        }
        else {                // // push-back
            tail->next = node;
            tail = node;
        }
    }

    ListNode* headResult = m.insertGreatestCommonDivisors(head);

    std::cout << "Result: ";
    for (ListNode* p = headResult; p; p = p->next) {
        std::cout << p->val << '-';
    }
    std::cout << '\n';
}

void Menu::menuMergeInBetween() {
    Mate m;
    int num = 0, option = 0;

    // ---- list1 ----
    ListNode* list1 = nullptr;
    ListNode* tail1 = nullptr;

    std::cout << "1669. Merge In Between Linked Lists\n";
    std::cout << "Create list1:\n";
    while (true) {
        std::cout << "-----MENU list1-----\n";
        std::cout << "1. Add Node\n";
        std::cout << "2. Done\n";
        std::cout << "--------------------\n";
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        ListNode* node = new ListNode(num);
        if (!list1) {
            list1 = tail1 = node;
        }
        else {
            tail1->next = node;
            tail1 = node;
        }
    }

    int a = 0, b = 0;
    std::cout << "Give me a: ";
    std::cin >> a;
    std::cout << "Give me b: ";
    std::cin >> b;

    // ---- list2 ----
    ListNode* list2 = nullptr;
    ListNode* tail2 = nullptr;

    std::cout << "Create list2:\n";
    while (true) {
        std::cout << "-----MENU list2-----\n";
        std::cout << "1. Add Node\n";
        std::cout << "2. Done\n";
        std::cout << "--------------------\n";
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        ListNode* node = new ListNode(num);
        if (!list2) {
            list2 = tail2 = node;
        }
        else {
            tail2->next = node;
            tail2 = node;
        }
    }

    ListNode* result = m.mergeInBetween(list1, a, b, list2);

    std::cout << "Result: ";
    for (ListNode* p = result; p; p = p->next) {
        std::cout << p->val << '-';
    }
    std::cout << '\n';
}

void Menu::menuGetDecimalValue() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "1290. Convert Binary Number in a Linked List to Integer\n";
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head) {            // // primer nodo
            head = tail = node;
        }
        else {                // // push-back
            tail->next = node;
            tail = node;
        }
    }

    int res = m.getDecimalValue(head);
    std::cout << "Result: ";
    std::cout << res;
}

#include <iomanip> // setw

void Menu::menuSpiralMatrixIV() {
    Mate m;
    int rows = 0, cols = 0;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "2326. Spiral Matrix IV\n";
    std::cout << "Give me m (rows): ";
    std::cin >> rows;
    std::cout << "Give me n (cols): ";
    std::cin >> cols;

    std::cout << "Create linked list (values for head):\n";
    while (true) {
        std::cout << "-----MENU-----\n";
        std::cout << "1. Add Node\n";
        std::cout << "2. Done\n";
        std::cout << "--------------\n";
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        ListNode* node = new ListNode(num);
        if (!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }

    std::vector<std::vector<int>> ans = m.spiralMatrix(rows, cols, head);

    std::cout << "\nResult matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << std::setw(5) << ans[i][j];
        }
        std::cout << '\n';
    }
}

void Menu::menuPairSum() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "2130. Maximum Twin Sum of a Linked List\n";
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head) {            // // primer nodo
            head = tail = node;
        }
        else {                // // push-back
            tail->next = node;
            tail = node;
        }
    }

    int res = m.pairSum(head);
    std::cout << "Result: ";
    std::cout << res;
}

void Menu::menuMiddleNode() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "876. Middle of the Linked List\n";
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head) {            // // primer nodo
            head = tail = node;
        }
        else {                // // push-back
            tail->next = node;
            tail = node;
        }
    }

    ListNode* result = m.middleNode(head);

    std::cout << "Result: ";
    for (ListNode* p = result; p; p = p->next) {
        std::cout << p->val << '-';
    }
    std::cout << '\n';
}

void Menu::menuMinOperationsII() {
    Mate m;
    int n, k, x;
    std::vector<int> nums;

    std::cout << "3512. Minimum Operations to Make Array Sum Divisible by K\n";
    std::cout << "How many numbers: ";
    std::cin >> n;

    nums.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Num " << i + 1 << ": ";
        std::cin >> x;
        nums.push_back(x);
    }

    std::cout << "Give me k: ";
    std::cin >> k;

    int res = m.minOperationsII(nums, k);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuScoreOfString() {
    Mate m;
    std::string s;

    std::cout << "3110. Score of a String\n";
    std::cout << "Give me a string: ";
    std::cin >> s;

    int res = m.scoreOfString(s);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuMaxDistinct() {
    Mate m;
    std::string s;

    std::cout << "3760. Maximum Substrings With Distinct Start\n";
    std::cout << "Give me a string: ";
    std::cin >> s;

    int res = m.maxDistinct(s);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuTransformArray() {
    Mate m;
    int n, x;
    std::vector<int> nums;

    std::cout << "3467. Transform Array by Parity\n";
    std::cout << "How many numbers: ";
    std::cin >> n;

    nums.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Num " << i + 1 << ": ";
        std::cin >> x;
        nums.push_back(x);
    }

    std::vector<int> res = m.transformArray(nums);
    std::cout << "Result: \n";
    for (int v : res) {
        std::cout << v << '\t';
    }
    std::cout << '\n';
}

void Menu::menuNumJewelsInStones() {
    Mate m;
    std::string jewels, stones;

    std::cout << "771. Jewels and Stones\n";
    std::cout << "Give me jewels: ";
    std::cin >> jewels;
    std::cout << "Give me stones: ";
    std::cin >> stones;

    int res = m.numJewelsInStones(jewels, stones);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuAlternatingSum() {
    Mate m;
    int n, x;
    std::vector<int> nums;

    std::cout << "3701. Compute Alternating Sum\n";
    std::cout << "How many numbers: ";
    std::cin >> n;

    nums.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Num " << i + 1 << ": ";
        std::cin >> x;
        nums.push_back(x);
    }

    int res = m.alternatingSum(nums);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuReversePrefix() {
    Mate m;
    std::string s;
    int k;

    std::cout << "3794. Reverse String Prefix\n";
    std::cout << "Give me a string: ";
    std::cin >> s;
    std::cout << "Give me k: ";
    std::cin >> k;

    std::string res = m.reversePrefix(s, k);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuShuffleArray() {
    Mate m;
    int n, x;
    std::vector<int> nums;

    std::cout << "1470. Shuffle the Array\n";
    std::cout << "Give me n: ";
    std::cin >> n;

    nums.reserve(n * 2);
    for (int i = 0; i < n * 2; ++i) {
        std::cout << "Num " << i + 1 << ": ";
        std::cin >> x;
        nums.push_back(x);
    }

    std::vector<int> res = m.shuffle(nums, n);
    std::cout << "Result: \n";
    for (int v : res) {
        std::cout << v << '\t';
    }
    std::cout << '\n';
}

void Menu::menuFindClosestPerson() {
    Mate m;
    int x, y, z;

    std::cout << "3516. Find Closest Person\n";
    std::cout << "Give me x: ";
    std::cin >> x;
    std::cout << "Give me y: ";
    std::cin >> y;
    std::cout << "Give me z: ";
    std::cin >> z;

    int res = m.findClosest(x, y, z);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuMaxFreqSum() {
    Mate m;
    std::string s;

    std::cout << "3541. Find Most Frequent Vowel and Consonant\n";
    std::cout << "Give me a string: ";
    std::cin >> s;

    int res = m.maxFreqSum(s);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuMinBitFlips() {
    Mate m;
    int start = 0, goal = 0;
    std::cout << "2220. Minimum Bit Flips to Convert Number\n";
    std::cout << "Give me start: ";
    std::cin >> start;
    std::cout << "Give me goal: ";
    std::cin >> goal;
    int res = m.minBitFlips(start, goal);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuLeftRightDifference() {
    Mate m;
    int num = 0, option = 0;

    std::vector<int> nums;
    std::cout << "2574. Left and Right Sum Differences\n";

    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Number" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the number: ";
        std::cin >> num;
        nums.push_back(num);
    }

    std::vector<int> res = m.leftRightDifference(nums);

    std::cout << "Result: ";
    for (int x : res) {
        std::cout << x << '-';
    }
    std::cout << '\n';
}

void Menu::menuSum() {
    Mate m;
    int num1 = 0, num2 = 0;
    std::cout << "2235. Add Two Integers\n";
    std::cout << "Give me num1: ";
    std::cin >> num1;
    std::cout << "Give me num2: ";
    std::cin >> num2;
    int res = m.sum(num1, num2);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuInterpret() {
    Mate m;
    std::string command;
    std::cout << "1678. Goal Parser Interpretation\n";
    std::cout << "Give me the command: ";
    std::cin >> command;
    std::string res = m.interpret(command);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuValidStrings() {
    Mate m;
    int n = 0;
    std::cout << "3211. Generate Binary Strings Without Adjacent Zeros\n";
    std::cout << "Give me n: ";
    std::cin >> n;
    std::vector<std::string> res = m.validStrings(n);
    std::cout << "Result: " << std::endl;
    for (std::string& s : res) {
        std::cout << s << std::endl;
    }
}

void Menu::menuSmallestEvenMultiple() {
    Mate m;
    int n = 0;
    std::cout << "2413. Smallest Even Multiple\n";
    std::cout << "Give me n: ";
    std::cin >> n;
    int res = m.smallestEvenMultiple(n);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuReverseDegree() {
    Mate m;
    std::string s;
    std::cout << "3498. Reverse Degree of a String\n";
    std::cout << "Give me the string: ";
    std::cin >> s;
    int res = m.reverseDegree(s);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuCountConsistentStrings() {
    Mate m;
    std::string allowed;
    int option = 0;
    std::string word;

    std::vector<std::string> words;

    std::cout << "1684. Count the Number of Consistent Strings\n";
    std::cout << "Give me allowed: ";
    std::cin >> allowed;

    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Word" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the word: ";
        std::cin >> word;
        words.push_back(word);
    }

    int res = m.countConsistentStrings(allowed, words);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuConvertDateToBinary() {
    Mate m;
    std::string date;
    std::cout << "3280. Convert Date to Binary\n";
    std::cout << "Give me the date (yyyy-mm-dd): ";
    std::cin >> date;
    std::string res = m.convertDateToBinary(date);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuFindPermutationDifference() {
    Mate m;
    std::string s, t;

    std::cout << "3146. Permutation Difference between Two Strings\n";
    std::cout << "Give me s: ";
    std::cin >> s;
    std::cout << "Give me t: ";
    std::cin >> t;

    int res = m.findPermutationDifference(s, t);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuGroupThePeople() {
    Mate m;
    int n, x;
    std::vector<int> groupSizes;

    std::cout << "1282. Group the People Given the Group Size They Belong To\n";
    std::cout << "How many numbers: ";
    std::cin >> n;

    groupSizes.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Num " << i + 1 << ": ";
        std::cin >> x;
        groupSizes.push_back(x);
    }

    std::vector<std::vector<int>> res = m.groupThePeople(groupSizes);
    std::cout << "Result: \n";
    for (std::vector<int>& g : res) {
        for (int id : g) {
            std::cout << id << '-';
        }
        std::cout << '\n';
    }
}

void Menu::menuSmallerNumbersThanCurrent() {
    Mate m;
    int n, x;
    std::vector<int> nums;

    std::cout << "1365. How Many Numbers Are Smaller Than the Current Number\n";
    std::cout << "How many numbers: ";
    std::cin >> n;

    nums.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Num " << i + 1 << ": ";
        std::cin >> x;
        nums.push_back(x);
    }

    std::vector<int> res = m.smallerNumbersThanCurrent(nums);
    std::cout << "Result: \n";
    for (int v : res) {
        std::cout << v << '\t';
    }
    std::cout << '\n';
}

void Menu::menuMinMovesToSeat() {
    Mate m;
    int n, x;
    std::vector<int> seats, students;

    std::cout << "2037. Minimum Number of Moves to Seat Everyone\n";
    std::cout << "How many seats/students: ";
    std::cin >> n;

    seats.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Seat " << i + 1 << ": ";
        std::cin >> x;
        seats.push_back(x);
    }

    students.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Student " << i + 1 << ": ";
        std::cin >> x;
        students.push_back(x);
    }

    int res = m.minMovesToSeat(seats, students);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuBalancedStringSplit() {
    Mate m;
    std::string s;

    std::cout << "1221. Split a String in Balanced Strings\n";
    std::cout << "Give me a string: ";
    std::cin >> s;

    int res = m.balancedStringSplit(s);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuMinPartitions() {
    Mate m;
    std::string n;
    std::cout << "1689. Partitioning Into Minimum Number Of Deci-Binary Numbers\n";
    std::cout << "Introduce el numero: ";
    std::cin >> n;
    std::cout << "Resultado: " << m.minPartitions(n) << std::endl;
}

void Menu::menuCountMaxOrSubsets() {
    Mate m;
    int size, val;
    std::cout << "2044. Count Number of Maximum Bitwise-OR Subsets\n";
    std::cout << "Cantidad de elementos: ";
    std::cin >> size;
    std::vector<int> nums;
    for (int i = 0; i < size; i++) {
        std::cin >> val;
        nums.push_back(val);
    }
    std::cout << "Resultado: " << m.countMaxOrSubsets(nums) << std::endl;
}

void Menu::menuFindArray() {
    Mate m;
    int size, val;
    std::cout << "2433. Find The Original Array of Prefix Xor\n";
    std::cout << "Cantidad de elementos: ";
    std::cin >> size;
    std::vector<int> pref;
    for (int i = 0; i < size; i++) {
        std::cin >> val;
        pref.push_back(val);
    }
    std::vector<int> res = m.findArray(pref);
    std::cout << "Resultado: ";
    for (int x : res) std::cout << x << " ";
    std::cout << std::endl;
}

void Menu::menuDecode() {
    Mate m;
    int size, first, val;
    std::cout << "1720. Decode XORed Array\n";
    std::cout << "Primer elemento: ";
    std::cin >> first;
    std::cout << "Cantidad de elementos en encoded: ";
    std::cin >> size;
    std::vector<int> encoded;
    for (int i = 0; i < size; i++) {
        std::cin >> val;
        encoded.push_back(val);
    }
    std::vector<int> res = m.decode(encoded, first);
    std::cout << "Resultado: ";
    for (int x : res) std::cout << x << " ";
    std::cout << std::endl;
}

void Menu::menuCountNegatives() {
    Mate m;
    int rows, cols;
    std::cout << "1351. Count Negative Numbers in a Sorted Matrix\n";
    std::cout << "Rows: "; std::cin >> rows;
    std::cout << "Cols: "; std::cin >> cols;
    std::vector<std::vector<int>> grid(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            std::cin >> grid[i][j];
    std::cout << "Result: " << m.countNegatives(grid) << std::endl;
}

void Menu::menuRangeSumBST() {
    Mate m;
    int low, high;
    // Simplificación: Árbol del ejemplo 1
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5, new TreeNode(3), new TreeNode(7));
    root->right = new TreeNode(15, nullptr, new TreeNode(18));

    std::cout << "938. Range Sum of BST\n";
    std::cout << "Low: "; std::cin >> low;
    std::cout << "High: "; std::cin >> high;
    std::cout << "Result: " << m.rangeSumBST(root, low, high) << std::endl;
}

void Menu::menuMirrorDistance() {
    Mate m;
    int n;
    std::cout << "3783. Mirror Distance of an Integer\n";
    std::cout << "Give me n: "; std::cin >> n;
    std::cout << "Result: " << m.mirrorDistance(n) << std::endl;
}

void Menu::menuFindThePrefixCommonArray() {
    Mate m;
    int n;
    std::cout << "2657. Find the Prefix Common Array\n";
    std::cout << "Size: "; std::cin >> n;
    std::vector<int> A(n), B(n);
    std::cout << "Array A: "; for (int i = 0; i < n; ++i) std::cin >> A[i];
    std::cout << "Array B: "; for (int i = 0; i < n; ++i) std::cin >> B[i];
    std::vector<int> res = m.findThePrefixCommonArray(A, B);
    std::cout << "Result: ";
    for (int x : res) std::cout << x << " ";
    std::cout << std::endl;
}

void Menu::menuLargestLocal() {
    Mate m;
    int n;
    std::cout << "2373. Largest Local Values in a Matrix\n";
    std::cout << "Size (n x n): "; std::cin >> n;
    std::vector<std::vector<int>> grid(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            std::cin >> grid[i][j];
    }
    std::vector<std::vector<int>> res = m.largestLocal(grid);
    std::cout << "Result:\n";
    for (auto row : res) {
        for (int val : row) std::cout << val << " ";
        std::cout << std::endl;
    }
}

void Menu::menuTruncateSentence() {
    Mate m;
    std::string s;
    int k = 0;

    std::cout << "1816. Truncate Sentence\n";
    std::cout << "Give me a sentence: ";
    getline(std::cin, s);

    std::cout << "Give me the K: ";
    std::cin >> k;

    std::string res = m.truncateSentence(s, k);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuDecodeMessage() {
    Mate m;
    std::string key, message;

    std::cout << "2325. Decode the Message\n";
    std::cout << "Give me a key: ";
    getline(std::cin, key);

    std::cout << "Give me a message: ";
    std::cin >> message;

    std::string res = m.decodeMessage(key, message);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuBstToGst() {
    Mate m;
    std::cout << "1038. Binary Search Tree to Greater Sum Tree\n";

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(1, new TreeNode(0), new TreeNode(2, nullptr, new TreeNode(3)));
    root->right = new TreeNode(6, new TreeNode(5), new TreeNode(7, nullptr, new TreeNode(8)));

    m.bstToGst(root);
    std::cout << "Tree converted to GST (Root value): " << root->val << std::endl;
}

void Menu::menuParkingSystem() {
    int b, med, s;
    std::cout << "1603. Design Parking System\n";
    std::cout << "Enter big, medium, small slots: ";
    std::cin >> b >> med >> s;

    ParkingSystem ps(b, med, s);

    int type;
    std::cout << "Enter car type (1, 2, 3) or 0 to exit: ";
    while (std::cin >> type && type != 0) {
        if (ps.addCar(type)) std::cout << "True\n";
        else std::cout << "False\n";
    }
}

void Menu::menuMaxWidthOfVerticalArea() {
    Mate m;
    std::cout << "1637. Widest Vertical Area Between Two Points Containing No Points\n";
    std::vector<std::vector<int>> points = { {8, 7}, {9, 9}, {7, 4}, {9, 7} };
    std::cout << "Result: " << m.maxWidthOfVerticalArea(points) << std::endl;
}

void Menu::menuConvertToTitle() {
    Mate m;
    int num = 0;
    std::cout << "168. Excel Sheet Column Title\n";
    std::cout << "Give me a number: ";
    std::cin >> num;

    std::string res = m.convertToTitle(num);
    std::cout << "Result: " << res << '\n';
}

void Menu::menuMinStack() {
    MinStack ms;
    std::cout << "155. Min Stack\n";
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    std::cout << "Min: " << ms.getMin() << std::endl;
    ms.pop();
    std::cout << "Top: " << ms.top() << std::endl;
    std::cout << "Min: " << ms.getMin() << std::endl;
}

void Menu::menuRemoveOuterParentheses() {
    Mate m;
    std::string s;
    std::cout << "1021. Remove Outermost Parentheses\n";
    std::cout << "Give me the string: ";
    std::cin >> s;
    std::cout << "Result: " << m.removeOuterParentheses(s) << std::endl;
}

void Menu::menuReversePrefixII() {
    Mate m;
    std::string word;
    char ch;
    std::cout << "2000. Reverse Prefix of Word\n";
    std::cout << "Give me the word: ";
    std::cin >> word;
    std::cout << "Give me the character: ";
    std::cin >> ch;
    std::cout << "Result: " << m.reversePrefixII(word, ch) << std::endl;
}

void Menu::menuReverseList() {
    Mate m;
    int num = 0, option = 0;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "206. Reverse Linked List\n";
    while (true) {
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "--------------" << std::endl;
        std::cin >> option;
        if (option == 2) break;

        std::cout << "Give the node: ";
        std::cin >> num;

        // // crear nodo nuevo con el valor ingresado
        ListNode* node = new ListNode(num);

        if (!head) {            // // primer nodo
            head = tail = node;
        }
        else {                // // push-back
            tail->next = node;
            tail = node;
        }
    }

    ListNode* result = m.reverseList(head);

    std::cout << "Result: ";
    for (ListNode* p = result; p; p = p->next) {
        std::cout << p->val << '-';
    }
    std::cout << '\n';
}