#include "Menu.h"

#include <iostream>
#include <vector>
#include "Mate.h"

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