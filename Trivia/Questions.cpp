#include <iostream>

char display_question(int question_number) {
	char correct_answer;
	switch(question_number) {
		case 1:
			std::cout << "QUESTION 1\n" << std::endl;
			std:: cout << "What are the steps for compiling source code into machine code?\n" << std::endl;
			std::cout << "A. Preprocessing, compiling, assembling, linking" << std::endl;
			std::cout << "B. Writing, compiling, debugging, testing" << std::endl;
			std::cout << "C. Processing, creating, asserting, clang" << std::endl;
			std::cout << "D. Make" << std::endl;
			correct_answer = 'A';
			break;
		case 2:
			std::cout << "QUESTION 2\n" << std::endl;
			std:: cout << "What is the runtime of binary search?\n" << std::endl;
			std::cout << "A. O(1)" << std::endl;
			std::cout << "B. O(log n)" << std::endl;
			std::cout << "C. O(n)" << std::endl;
			std::cout << "D. O(n^2)" << std::endl;
			correct_answer = 'B';
			break;
		case 3:
			std::cout << "QUESTION 3\n" << std::endl;
			std:: cout << "Every time you malloc memory, you should also be sure to...\n" << std::endl;
			std::cout << "A. realloc" << std::endl;
			std::cout << "B. return" << std::endl;
			std::cout << "C. free" << std::endl;
			std::cout << "D. exit" << std::endl;
			correct_answer = 'C';
			break;
		case 4:
			std::cout << "QUESTION 4\n" << std::endl;
			std:: cout << "What is a race condition?\n" << std::endl;
			std::cout << "A. When conditions outside are nice for racing" << std::endl;
			std::cout << "B. When two things happen at the same time and produce an unexpected result" << std::endl;
			std::cout << "C. When a line of code is executed too quickly" << std::endl;
			std::cout << "D. When a line of code is executed too slowly" << std::endl;
			correct_answer = 'B';
			break;
		case 5:
			std::cout << "QUESTION 5\n" << std::endl;
			std:: cout << "Does zomming in on a photo let you 'enhance' it to generate more detail?\n" << std::endl;
			std::cout << "A. Yes, just like in CSI" << std::endl;
			std::cout << "B. No, a photo only has a certain amount of detail" << std::endl;
			correct_answer = 'B';
			break;
		case 6:
			std::cout << "QUESTION 6\n" << std::endl;
			std:: cout << "Which of the following is not a characteristic of a good hash function?\n" << std::endl;
			std::cout << "A. Deterministic output" << std::endl;
			std::cout << "B. Randomness" << std::endl;
			std::cout << "C. Uniform distribution" << std::endl;
			std::cout << "D. Efficiency" << std::endl;
			correct_answer = 'B';
			break;
		case 7:
			std::cout << "QUESTION 7\n" << std::endl;
			std:: cout << "What does FIFO stand for?\n" << std::endl;
			std::cout << "A. A common dog's name" << std::endl;
			std::cout << "B. Your credit score " << std::endl;
			std::cout << "C. First in, first out" << std::endl;
			std::cout << "D. Function input, file output" << std::endl;
			correct_answer = 'C';
			break;
		case 8:
			std::cout << "QUESTION 8\n" << std::endl;
			std:: cout << "Which of the following would represent pink in RGB values?\n" << std::endl;
			std::cout << "A. #0054e7" << std::endl;
			std::cout << "B. #9012a2" << std::endl;
			std::cout << "C. #e5d600" << std::endl;
			std::cout << "D. #ffd0e0" << std::endl;
			correct_answer = 'D';
			break;
		case 9:
			std::cout << "QUESTION 9\n" << std::endl;
			std:: cout << "In C, which of the following lines of code allocates enough memory for a copy of the string s?\n" << std::endl;
			std::cout << "A. malloc(s)" << std::endl;
			std::cout << "B. malloc(sizeof(s))" << std::endl;
			std::cout << "C. malloc(strlen(s))" << std::endl;
			std::cout << "D. malloc(strlen(s) + 1)" << std::endl;
			correct_answer = 'D';
			break;
		case 10:
			std::cout << "QUESTION 10\n" << std::endl;
			std:: cout << "How should you organize your clothes to be cool?\n" << std::endl;
			std::cout << "A. stack" << std::endl;
			std::cout << "B. queue" << std::endl;
			std::cout << "C. dictionary" << std::endl;
			std::cout << "D. binary tree" << std::endl;
			correct_answer = 'B';
			break;
		case 11:
			std::cout << "QUESTION 11\n" << std::endl;
			std:: cout << "What is a segmentation fault?\n" << std::endl;
			std::cout << "A. When a computer runs out of memory" << std::endl;
			std::cout << "B. When a program tries to read an empty file" << std::endl;
			std::cout << "C. When a program tries to access memory that it shoudn't" << std::endl;
			std::cout << "D. When an earthquake happens" << std::endl;
			correct_answer = 'C';
			break;
		case 12:
			std::cout << "QUESTION 12\n" << std::endl;
			std:: cout << "Which of the following types of overflow can result from recursion without a base case?\n" << std::endl;
			std::cout << "A. heap overflow" << std::endl;
			std::cout << "B. integer overflow" << std::endl;
			std::cout << "C. stack overflow" << std::endl;
			std::cout << "D. buffer overflow" << std::endl;
			correct_answer = 'C';
			break;
		case 13:
			std::cout << "QUESTION 13\n" << std::endl;
			std:: cout << "Which of these command-line programs checks your code for memory leaks?\n" << std::endl;
			std::cout << "A. valgrind" << std::endl;
			std::cout << "B. clang" << std::endl;
			std::cout << "C. mkdir" << std::endl;
			std::cout << "D. make" << std::endl;
			correct_answer = 'A';
			break;
		case 14:
			std::cout << "QUESTION 14\n" << std::endl;
			std:: cout << "Which of the following exists in C, but not Python?\n" << std::endl;
			std::cout << "A. Boolean expressions" << std::endl;
			std::cout << "B. do-while loops" << std::endl;
			std::cout << "C. recursive functions" << std::endl;
			std::cout << "D. floating-point numbers" << std::endl;
			correct_answer = 'B';
			break;
		case 15:
			std::cout << "QUESTION 15\n" << std::endl;
			std:: cout << "What HTTP request method should you use when sending private information, like a password?\n" << std::endl;
			std::cout << "A. GET" << std::endl;
			std::cout << "B. POST" << std::endl;
			std::cout << "C. SELECT" << std::endl;
			std::cout << "D. TEXT" << std::endl;
			correct_answer = 'B';
			break;
		case 16:
			std::cout << "QUESTION 16\n" << std::endl;
			std:: cout << "What data structure allows for constant-time lookup for words in a dictionary?\n" << std::endl;
			std::cout << "A. linked list" << std::endl;
			std::cout << "B. binary search tree" << std::endl;
			std::cout << "C. array" << std::endl;
			std::cout << "D. trie" << std::endl;
			correct_answer = 'D';
			break;
		case 17:
			std::cout << "QUESTION 17\n" << std::endl;
			std:: cout << "What is a cookie?\n" << std::endl;
			std::cout << "A. data used to identify your computer to websites" << std::endl;
			std::cout << "B. a delicious snack" << std::endl;
			std::cout << "C. both of the above" << std::endl;
			std::cout << "D. none of the above" << std::endl;
			correct_answer = 'C';
			break;
	}
	std::cout << "\n";
	return correct_answer;
}