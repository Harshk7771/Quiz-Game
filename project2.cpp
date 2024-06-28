//Quiz Game On C++ (Project)

#include<iostream>
#include<string.h>

using namespace std;

char guess;
int total;

class Question
{
	public:
    void setValues(std::string,std::string,std::string,std::string,std::string,char,int); 
    void askQuestion(); 

	private:
    std::string Question_Text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
	std::string answer_4;

    char correct_answer;
    int Question_Score;
};
int main()
{
	int name;
	char choice[100],ch1;
	std::cout<<"\n\n\t\t------------------------------------";
	std::cout<<"\n\n\t\t------------------------------------";
	std::cout<<"\n\n\t\t---	    *Welcome to the*	 ---";
	std::cout<<"\n\n\t\t---	    *c++ Quiz Game*      ---";
	std::cout<<"\n\n\t\t------------------------------------";
	std::cout<<"\n\n\t\t------------------------------------";
	std::cout<<"\n\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
	std::cout<<"\n\n\t\t++++++++++++++++++++++++++++++++++++";
	std::cout<<"\n\n\t\t+++  	MADE By @HARSH KUMAR  	+++";
	std::cout<<"\n\n\t\t++++++++++++++++++++++++++++++++++++";
	std::cout<<"\n\n\t\t++++++++++++++++++++++++++++++++++++";
	std::cout<<"\n\n";
	std::cout<<"\n Please Enter Your Name : ";
	std::cin>>choice;
	std::cout<<"\n\n";
	std::cout<<"\n\n\t\t choice\n";
	std::cout<<"\n\n\t\t Loading Please wait........";
	std::cout<<"\n\n\t\t 1) Start Quiz";
	std::cout<<"\n\n\t\t 2) View Score";
	std::cout<<"\n\n\t\t 3) Exit Quiz";
	std::cout<<"\n\n Enter Your Choice :--> ";
	std::cout<<"\n";
   
    std::string respond;
	std::cout<<"Are you ready to start the quiz, " << name << "? Yes/No.\n";
    std::cin>>respond;
	
	 if (respond == "Yes" || respond == "yes")
	{
        std::cout<<"\n";
        std::cout<<"Good luck!\n";
        std::cout<<"\n";
        std::cout<<"Press enter to continue.";
       
    }
	
	else
	{
        cout<<"\n";
        cout<<"Goodbye!\n";
        
        return 0;
    }
	
	Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
    Question q11;
    Question q12;
    Question q13;
    Question q14;
    Question q15;
    Question q16;
    Question q17;
    Question q18;
    Question q19;
    Question q20;
    
    q1.setValues("1. What is the correct value to return to the operating system upon the successful completion of a program?",
		"A. -1", 
		"B. 1", 
		"C. 0", 
		"D. Programs do not return a value.",
		'C',	
		10);
    q2.setValues("2. What is the only function all C++ programs must contain?",
		"A. start()",
		"B. system()",
		"C. main()", 
		"D. program()",
		'C',
		10);
	q3.setValues("3. What punctuation is used to signal the beginning and end of code blocks?",
		"A. { }", 
		"B. -> and <-", 
		"C. BEGIN and END", 
		"D. ( and )",
		'A',
		10);
	q4.setValues("4. What punctuation ends most lines of C++ code?",
		"A. .", 
		"B. ;", 
		"C. :", 
		"D. '", 
		'B',
		10);
	q5.setValues("5. Which of the following is a correct comment?",
		"A. */ Comments */",
		"B. ** Comment **",
		"C. /* Comment */",
		"D. { Comment }",
		'C',
		10);
	q6.setValues("6. Which of the following is not a correct variable type?",
		"A. float",
		"B. real",
		"C. int",
		"D. double",
		'B',
		10);
	q7.setValues("7. Which of the following is the correct operator to compare two variables?",
		"A. :=",
		"B. =",
		"C. equal",
		"D. ==",
		'D',
		10);
	q8.setValues("8. What is the final value of x when the code int x; for(x=0; x<10; x++) {} is run?",
		"A. 10",
		"B. 9",
		"C. 0",
		"D. 1",	
		'A',	
		10);
	q9.setValues("9. When does the code block following while(x<100) execute?",
		"A. When x is less than one hundred",
		"B. When x is greater than one hundred",
		"C. When x is equal to one hundred",
		"D. While it wishes",
		'A', 
		10);
	q10.setValues("10. Which is not a loop structure?",
		"A. For",
		"B. Do while",
		"C. While",
		"D. Repeat Until",
		'D',		
		10);
	q11.setValues("11. How many times is a do while loop guaranteed to loop?",
		"A. 0",
		"B. Infinitely",
		"C. 1",
		"D. Variable",
		'C',
		10);
	q12.setValues("12.Which of the following correctly declares an array?",
		"A. int anarray[10];",
		"B. int anarray;",
		"C. anarray{10};",
		"D. array anarray[10];",
		'A',
		10);
	q13.setValues("13.What is the index number of the last element of an array with 29 elements?",
		"A. 29",
		"B. 28",
		"C. 0",
		"D. Programmer-defined",
		'B',
		10);
	q14.setValues("14.Which of the following is a two-dimensional array?",
		"A. array anarray[20][20];",
		"B. int anarray[20][20];",
		"C. int array[20, 20];",
		"D. char array[20];",
		'B',
		10);
	q15.setValues("15.Which of the following correctly accesses the seventh element stored in foo, an array with 100 elements?",
		"A. foo[6];",
		"B. foo[7];",
		"C. foo(7);",
		"D. foo;",
		'A',
		10);
	q16.setValues("16. Which of the following gives the memory address of the first element in array foo, an array with 100 elements?",
		"A. foo[0];",
		"B. foo;",
		"C. &foo;",
		"D. foo[1];",
		'A',
		10);
	q17.setValues("17. What is required to avoid falling through from one case to the next?",
		"A. end;",
		"B. break;",
		"C. Stop;",
		"D. A semicolon.",
		'B',
		10);
	q18.setValues("18. What character ends all strings?",
		"A. '.'",
		"B. ' '",
		"C. '\0'",
		"D. '\n'",
		'C',
		10);
	q19.setValues("19. Which of the following reads in a string named x with one hundred characters?",
		"A. cin.getline(x, 100, '\n');",
		"B. cin.getline(100, x, '\n');",
		"C. readline(x, 100, '\n');",
		"D. read(x);",
		'A',
		10);
	q20.setValues("20. Which of the following adds one string to the end of another?",
		"A. append();",
		"B. stringadd();",
		"C. strcat();",
		"D. stradd();",
        'C',
		10);
	
	q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
	q11.askQuestion();
	q12.askQuestion();
	q13.askQuestion();
	q14.askQuestion();
	q15.askQuestion();
	q16.askQuestion();
	q17.askQuestion();
	q18.askQuestion();
	q19.askQuestion();
	q20.askQuestion();
	
	std::cout << "Your Total Score is " << total << " out of 200!\n";
    std::cout << "\n";

	if (total>=100)
	{
	std::cout<<"\n\n\t\t************************************";
	std::cout<<"\n\n\t\t************************************";
	std::cout<<"\n\n\t\t***	     CONGRATULATION			 ***";
	std::cout<<"\n\n\t\t***      YOU HAVE PASSED         ***";
	std::cout<<"\n\n\t\t************************************";
	std::cout<<"\n\n\t\t************************************";
    std::cout<<"\n";
    
        std::cout << "\n";
        std::cin.get();
        std::cin.ignore();
        return 0;
    }    
	else
    {
        std::cout<<"You failed... Sorry, better luck next time.\n";
        std::cout<<"\n";
    }
    	std::cin.get();
    	std::cin.ignore();
    	return 0;
}
void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
{
	    Question_Text = q;
	    answer_1 = a1;
	    answer_2 = a2;
	    answer_3 = a3;
	    answer_4 = a4;
	    correct_answer = ca;
	    Question_Score = pa;
};
void Question::askQuestion()
{
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "a. " << answer_1 << "\n";
    std::cout << "b. " << answer_2 << "\n";
    std::cout << "c. " << answer_3 << "\n";
    std::cout << "d. " << answer_4 << "\n";
    std::cout << "\n";

 
    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;
   
    if (guess == correct_answer) {
        std::cout << "\n";
        std::cout << "Correct!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else 
    {
        std::cout << "\n";
        std::cout << "Sorry, you're wrong..." << "\n";
        std::cout << "The correct answer is " << correct_answer << "." << "\n";
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
};
