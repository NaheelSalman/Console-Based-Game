#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include "M_S.h"
#define pi 3.142
#define Enter 13
#define Backspace 8
#define Space 32
#define Tab 9 
void ask();
void game();
void exi();
void scorer();
void help();
void quizgame();
void calculator();
void conversion();
int score = 0,n=0;
int ans[20];
int correct[20] = { 3,2,1,3,4,5,2,2,4,1,1,4,1,3,2,4,3,1,2,3 };
char name[200];
char user[100];
char owner[100] = { "Muhammad Salman" };
char owner2[100] = { "Syed Ali Hamza Wasti" };
char password[100];
char session[100] = { "53360" };
char session2[100] = { "12345" };
int attempt = 0, Auth = 0;
void main()
// main bracket
{
	int  p, i = 0;
	char ch;
	system("cls");
	if (Auth == 0)
	{
		Auth++;
		printf("Enter Admin Name: ");
		fflush(stdin);
		scanf("%[^\n]s", user);
		printf("\nEnter Password:");
		fflush(stdin);
		//scanf("%[^\n]s",password);
		// Password Cryptor Scanner
		while (1)
		{
			ch = _getch();
			if (ch == 13)
			{
				password[i] = '\0';
				break;
			}
			else if (ch == 8)
			{
				if (i>0)
				{
					i--;
					printf("\b \b");
				}
			}
			else if (ch == 9 || ch == 32)
			{
				continue;// this will execute code again and again to not allow space and tab button
			}
			else
			{
				password[i] = ch;
				i++;
				printf("*");
			}
		}

	home: {
		if (strcmp(user, owner) == 0 && strcmp(password, session) == 0 || strcmp(user, owner2) == 0 && strcmp(password, session2) == 0)
		{
		printf("\n\nAccess Granted");
		sleep(1);
		system("cls");
		printf("Press 1 to Use Calculator");
		printf("\nPress 2 for Game");
		printf("\nPress 3 for Geometry");
		printf("\nPress 4 for Exit");
		printf("\nPress Number = ");
		scanf_s("%d", &p);
		if (p == 1)
		{
			calculator();
		}
		else if (p == 2)
		{
			game();
		}
		else if (p == 3)
		{
			displayArea();
		}
		else if (p == 4)
		{
			exi();
		}
		else
		{
			printf("wrong choice");
			goto home;
		}
	}
		  else
		  {
			  printf("\nAccess Denied!");
		  }
	}// home close
	}
	// auth if body close
	else {
		goto home;
	}

}
// main bracket close
void calculator()
{
	int a, b, c, t, i, x;
	float d;

	system("cls");
	printf("\ncalculator");
	printf("\nPress \"1\" for Addtition");
	printf("\nPress \"2\" for Subtraction");
	printf("\nPress \"3\"for Multiplication");
	printf("\nPress \"4\" for Division");
	printf("\nPress \"5\" for Table Generator");
	printf("\nPress \"6\" for Triangle Checker");
	printf("\nPress \"7\" for Squaring a number");
	printf("\nPress \"8\" for using Power");
	printf("\nPress \"9\" for Factorial ");
	printf("\nPress \"00\" to go back in previous option");
	printf("\nPress \"119\" for Exit ");
	printf("\nPress Number to do action =");
	scanf_s("%d", &c);
	switch (c)
	{
	case 1:
		printf("\nAddition");
		printf("\nEnter your First number =");
		scanf_s("%d", &a);
		printf("Enter your Second number =");
		scanf_s("%d", &b);
		printf("Result = %d", c = a + b);
		_getch();
		calculator();
		break;
	case 2:
		printf("\nSubtraction");
		printf("\nEnter your First number =");
		scanf_s("%d", &a);
		printf("Enter your Second number =");
		scanf_s("%d", &b);
		printf("Result = %d", c = a - b);
		_getch();
		calculator();
		break;

	case 3:
		printf("\ncalculator");
		printf("\nMultiplication");
		printf("\nEnter your First number =");
		scanf_s("%d", &a);
		printf("Enter your Second number =");
		scanf_s("%d", &b);
		printf("Result = %d", c = a * b);
		_getch();
		calculator();
		break;
	case 4:
		printf("\ncalculator");
		printf("\nDivision");
		printf("\nEnter your First number =");
		scanf_s("%d", &a);
		printf("Enter your Second number =");
		scanf_s("%d", &b);
		printf("Result = %.2f", d = a / b);
		_getch();
		calculator();
		break;
	case 5:
		printf("\ncalculator");
		printf("\nTable Generator");
		printf("Enter Number = ");
		scanf_s("%d", &a);
		for (i = 1; i <= 10; i++)
			printf("\n %d X %d = %d ", a, i, (a*i));
		_getch();
		calculator();
		break;
	case 6:
		printf("\ncalculator");
		printf("\nTriangle Checker");
		printf("Enter a,b and c values of triangle three sides.\n");
		printf("A=");
		scanf_s("%d", &a);
		printf("B=");
		scanf_s(" %d", &b);
		printf("C=");
		scanf_s("%d", &c);
		if (a + b > c && b + c > a && a + c > b)
		{
			printf("Triangle exist");
		}
		else
		{
			printf("not valid");
		}
		_getch();
		calculator();
		break;
	case 7:
		printf("\ncalculator");
		printf("\nSquare");
		printf("\nEnter Number  = ");
		scanf_s("%d", &a);
		printf("The %d *%d = %d ", a, a, square(a));
		_getch();
		calculator();
		break;
	case 8:
		printf("\ncalculator");
		printf("\nPOWER");
		printf("\nEnter Base Number = ");
		scanf_s("%d", &a);
		printf("Enter Exponential Number  = ");
		scanf_s("%d", &b);
		printf("Result of %d^%d = %d", a, b, power(a, b));
		_getch();
		calculator();
		break;
	case 9:
		printf("\ncalculator");
		printf("\nFactorial");
		printf("\nEnter Number = ");
		scanf_s("%d", &a);
		printf("The Factorial of %d! = %d", a, factorial(a));
		_getch();
		calculator();
		break;
	case 0:
		main();
		break;
	case 119:
		exi();
		break;
	default:
	{
		printf("Wrong value\nPress Enter");
		_getch();
		calculator();
	}

	}
}

void game()
{
	int a, b;
	system("cls");
	system("color 07");
	printf("Programmed By:\n"
		"Muhammad Salman [M.S]");
		if (n==0)
		{
			ask();
			n++;
		}
	printf("\nWelcome 2 you %s\n", name);
	printf("\n\n\n");
	printf("#####============== Quiz Time  =============#####\n"
		"!================= I.Q TESTER ==================!\n"
		"|-----------------------------------------------|\n"
		"|_______________________________________________|\n"
		"!Press 1 to \"Start Game\"                        !\n"
		"!Press 2 to \"Help\"                              !\n"
		"!Press 3 to \"Score\"                             !\n"
		"!Press 4 to \"Previous Menu\"                     !\n"
		"!Press 5 to \"Play Again\"                        !\n"
		
		"!Press 6 to \"Exit\"                              !\n"
		"!_______________________________________________!\n"
		"Enter number = ");
	scanf_s("%d", &a);
	if (a == 1)
	{
		char w;
		printf("Are You ready for Warmup Match?");
		printf("\nPress key \'y\'");
		printf("\nEnter = ");
		fflush(stdin);
		scanf_s("%c", &w);
		if (w == 'y')
		{
			Warmup();
		}

		else {
			printf("\nTake Your time ");
		}
	}
	else if (a == 2)
	{
		help();
	}
	else if (a == 3)
	{
		scorer();
	}
	else if (a == 4)
	{
		main();
	}
	else if (a==6){
		exi();
	}
	else if (a == 5)
	{
		n=0;
		game();
	}
	else
	{
		printf("\nWrong Choice");
		printf("\nPress any key");
		_getch();
		game();

	}
}





void quizgame()
{
	char w;
	//introduction with name  and starting warmup game with timer
	system("cls");
	//Choosed Answer list:
	int i;
	//Question # 1
	printf("\\**********Welcome**********\\");
	sleep(1);
	printf("\nPlease Wait While game is Loading...\n");
	for (i = 5; i >= 0; i--)
	{
		printf("\rRemaining time %d sec ...", i);
		sleep(1);
	}

	printf("\n\nQ#1:-A boy has a box which he stacks over 2 boxes"
		" He stacks a singles box in 2 mins."
		"What will be the count of stacked boxes after 10 mins?");
	printf("\n\nOptions :");
	printf("\n       (1)20 \t (2)10\n");
	printf("       (3)7  \t (4)12");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[0]);
	if (ans[0] != 3)
	{
		printf("\nWrong Answer...!! \nRight Answer = 7");
		attempt++;
	}
	else if (ans[0] == 3)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
	}
	//Question # 2
	printf("\n\nQ#2:-A boy tried to keep something between page 151 and 152 in a book "
		"\nBut he couldn't Why?");
	printf("\n\nOptions :");
	printf("\n        (1)Book's pages are too hard\n"
		"        (2)The page 151 and 152 are on the same sheet\n");
	printf("        (3)The book is too small in size\n"
		"        (4)Book Only consist of two pages");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[1]);
	if (ans[1] != 2)
	{
		printf("\nWrong Answer...!! \nRight Answer = ");
		attempt++;
	}
	else if (ans[1] == 2)
	{
		printf("Correct.!");
		score++;
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
	}
	//Question # 3
	printf("\n\nQ#3:-Aslam has some money in his pocket.If its 12% is equal to 132 rupees.\n"
		"How Much money aslam have?");
	printf("\n\nOptions :");
	printf("\n        (1)1100 \t (2)2000\n");
	printf("        (3)3000 \t (4)5000");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[2]);
	if (ans[2] == 1)
	{
		printf("\nCorrect");
		score++;
		attempt++;
	}
	else if (ans[2] != 1)
	{
		printf("\nWrong Answer...!! \nRight Answer =1100");
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}
	//Question # 4
	printf("\n\nQ#4:-Which number should come next in the pattern?\n"
		"\t\t37, 34, 31, 28 ....");
	printf("\n\nOptions :");
	printf("\n         (1)20 \t (2)10\n");
	printf("         (3)25 \t (4)12");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[3]);
	if (ans[3] == 3)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[3] != 3)
	{
		printf("\nWrong Answer...!! \nRight Answer =25, the numbers are decreasing by 3");
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}
	//Question # 5
	printf("\n\nQ#5:-Find the answer that best completes the analogy: \n"
		"Book is to Reading : As Fork is to ?");
	printf("\n\nOptions :");
	printf("\n          (1)Hitting \t (2)Cutting\n");
	printf("          (3)Drawing \t (4)Eating");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[4]);
	if (ans[4] == 4)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[4] != 4)
	{
		printf("\nWrong Answer...!! \nRight Answer =Eating");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}
	//Question # 6
	printf("\n\nQ#6:-Which one of the five is least like the other four?\n");
	printf("\n\nOptions :");
	printf("\n          (1)Dog   \t (2)Cat\n");
	printf("          (3)Mouse \t (4)Snake");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[5]);
	if (ans[5] == 4)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[5] != 4)
	{
		printf("\nWrong Answer...!! \nRight Answer =Snake is a reptile");
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}
	//Question # 7
	printf("\n\nQ#7:-Which one of the five choices makes the best comparison? \n"
		"PEACH is to HCAEP : as 46251 is to ___ ?");
	printf("\n\nOptions :");
	printf("\n          (1)15642 \t (2)15264\n");
	printf("          (3)54621 \t (4)12345");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[6]);
	if (ans[6] == 2)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[6] != 2)
	{
		printf("\nWrong Answer...!! \nRight Answer =15264");
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}//Question # 8
	printf("\n\nQ#8:-Which one of the numbers does not belong in the following series? \n"
		"2 - 6 -7 - 8 - 14 - 30 \n");
	printf("\n\nOptions :");
	printf("\n          (1)Two   \t (2)Seven\n");
	printf("          (3)Three \t (4)Eight");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[7]);
	if (ans[7] == 2)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[7] != 2)
	{
		printf("\nWrong Answer...!! \nRight Answer =seven is an not a even num");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}//Question # 9
	printf("\n\nQ#9:-If you rearrange the letters \"CIFAIPC\" you would have the name of a(n): \n");
	printf("\n\nOptions :");
	printf("\n          (1)Certificate \t (2)Country\n");
	printf("          (3)Chemical    \t (4)Ocean");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[8]);
	if (ans[8] == 4)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[8] != 4)
	{
		printf("\nWrong Answer...!! \nRight Answer = PACCIFIC OCEAN");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}//Question # 10
	printf("\n\nQ#10:-The word NATO stands for? \n");
	printf("\n\nOptions :");
	printf("\n         (1)National Atlantic Treaty Orginization\n"
		"         (2)National American Transport Orginization\n");
	printf("         (3)National Atlantic Transport Orginization\n"
		"         (4)No American Transfer Oil.");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[9]);
	if (ans[9] == 1)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[9] != 1)
	{
		printf("\nWrong Answer...!! \nRight Answer =National Atlantic Treaty Orginization");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	} //Question # 11
	printf("\n\nQ#11:-National Tree of Pakistan?\n");
	printf("\n\nOptions :");
	printf("\n          (1)Himaliyan Deoder \t (2)Red wood tree\n");
	printf("          (3)Mango Tree       \t (4)Neem tree.");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[10]);
	if (ans[10] == 1)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[10] != 1)
	{
		printf("\nWrong Answer...!! \nRight Answer =Himaliyan Deoder");
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}	 //Question # 12
	printf("\n\nQ#12:-Find force if mass of a body is 98 gram and \n"
		"accelaration of body is 1 meter per second square. \n");
	printf("\n\nOptions :");
	printf("\n         (1)980 newtons \t (2)98 newtons\n");
	printf("         (3)98 kg/m.s-2  \t (4)0.098 newtons.");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[11]);
	if (ans[11] == 4)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[11] != 4)
	{
		printf("\nWrong Answer...!! \nRight Answer =");
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}	 //Question # 13
	printf("\n\nQ#13:-Gravitaional Constant was dicovered by ? \n");
	printf("\n\nOptions :");
	printf("\n         (1)Cavindish \t (2)Lord Rutherford\n");
	printf("         (3)Newton    \t (4)Einstien.");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[12]);
	if (ans[12] == 1)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[12] != 1)
	{
		printf("\nWrong Answer...!! \nRight Answer =");
		attempt++;
	}

	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	} //Question # 14
	printf("\n\nQ#14:-Salman is a 20 years boy But he could\n"
		"celebrate his Birthdy only 4 times.Why?");
	printf("\n\nOptions :");
	printf("\n         (1)Because he is not interested in activities\n"
		"         (2)He don't have money\n");
	printf("         (3)Because his birthday comes on 29 feb\n"
		"         (4)He is a traveller ");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[13]);
	if (ans[13] == 3)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[13] != 3)
	{
		printf("\nWrong Answer...!! \nRight Answer =Because his birthday comes on 29 feb");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	} //Question # 15
	printf("\n\nQ#15:-If a school has 1250 students having 72%% of boys .\n"
		"Find out the number of girls?\n");
	printf("\n\nOptions :");
	printf("\n         (1)250 \t (2)350\n");
	printf("         (3)550  \t (4)400");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[14]);
	if (ans[14] == 2)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[14] != 2)
	{
		printf("\nWrong Answer...!! \nRight Answer =350 girls and 900 boys");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	} //Question # 16
	printf("\n\nQ#16:-Who Wrote the national anthem of Pakistan?\n");
	printf("\n\nOptions :");
	printf("\n         (1)Allama Iqbal         \t (2)Quaid-e-Azam\n");
	printf("         (3)Ameer ud deen khidwai \t (4)Hafeez Jhalandri");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[15]);
	if (ans[15] == 4)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[15] != 4)
	{
		printf("\nWrong Answer...!! \nRight Answer =Hafeez Jhalandri");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}//Question # 17
	printf("\n\nQ#17:-World's largest mammal? \n");
	printf("\n\nOptions :");
	printf("\n         (1)Dinosours  \t (2)Great White Shark\n");
	printf("         (3)Blue Whale \t (4)Elephant");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[16]);
	if (ans[16] == 3)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[16] != 3)
	{
		printf("\nWrong Answer...!! \nRight Answer =Blue Whale because dinosours is an ancient reptile");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}	 //Question # 18
	printf("\n\nQ#18:-This is not a bird?\n");
	printf("\n\nOptions :");
	printf("\n         (1)Bat \t (2)Ostrich\n");
	printf("         (3)Hen  \t (4)Peacock");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[17]);
	if (ans[17] == 1)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[17] != 1)
	{
		printf("\nWrong Answer...!! \nRight Answer =Hen");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}//Question # 19
	printf("\n\nQ#19:-World's fastest mammal?\n");
	printf("\n\nOptions :");
	printf("\n         (1)Leopard \t (2)Cheetah\n");
	printf("         (3)Lion     \t (4)Tiger");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[18]);
	if (ans[18] == 2)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[18] != 2)
	{
		printf("\nWrong Answer...!! \nRight Answer =Cheetah ");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}//Question # 20
	printf("\n\nQ#20:-Speed Of light is approximately equals to ?\n");
	printf("\n\nOptions :");
	printf("\n         (1)Speed of a fast moving ship\n"
		"         (2)Speed of Electric Current\n");
	printf("         (3)Speed of Electromagnetic Waves\n"
		"         (4)Speed of revolution of sun.");
	printf("\n\nAnswer = ");
	scanf_s("%d", &ans[19]);
	if (ans[19] == 3)
	{
		printf("Correct..!!");
		score++;
		attempt++;
	}
	else if (ans[19] != 3)
	{
		printf("\nWrong Answer...!! \nRight Answer =Speed of Electromagnetic Waves");
		attempt++;
	}
	else
	{
		printf("\nInvalid Choice");
		_getch();
		game();
	}
	_getch();
	scorer();

}
void help()
{
	system("cls");
	system("color 0a");
	printf("||  || .---- ||   |***)\n");
	printf("||==|| ||==  ||   |___))\n"
		"||  || ||___ |=== ||\n\n\n");
	printf("[?]To play this game\n"
		"[?]Simply you have to answer three questions\n"
		"[?]If you passed that then you can continue\n"
		"[?]Other wise you can't play any more\n");
	printf("[?]This is an Intelligence checker game it will tell you\n"
		"[?]About your I.Q Level at the end of this session\n");
	_getch();
	game();
}
void scorer()
{
	int a, j = 1;
	int i;
	system("cls");
	printf("|``````````````||`````````||`````````|`````````|\n");
	printf("|\"%s\" your Score  =  %d out of %d       \n", name, score, attempt);
	printf("|==============||=========||=========|=========|\n"
		"|For Check List||For Exit ||To replay|Main Menu|\n"
		"|Enter=1       ||Enter=119||Enter=4  |Enter=00 |\n"
		"|______________||_________||_________|_________|");
	printf("\nEnter Num = ");
	scanf_s("%d", &a);
	if (a == 1)
	{
		printf("\nAnswer List\n");
		for (i = 0; i < 9; i++)
		{
			printf("Q#%d:-   Your Chosen Options:(%d) v/s Correct Options(%d)\n", j, ans[i], correct[i]);
			j++;
		}
		for (i = 9; i < 20; i++)
		{
			printf("Q#%d:-  Your Chosen Options:(%d) v/s Correct Options(%d)\n", j, ans[i], correct[i]);
			j++;
		}
		_getch();
	game();
	}
	else if (a == 119)
	{
		exi();
		_getch();
	}
	else if (a == 4)
	{
		quizgame();

	}
	else if (a == 0)
	{
		main();

	}
	else
	{
		printf("\nOk Thanks");
	}
}
void displayArea()
{
	system("cls");
	double r, w, l, b, h;
	char choice;
	printf("Press c to calculate the Area of a circle\n");
	printf("Press r to calculate the Area of a rectangle\n");
	printf("Press t to calculate the Area of a triangle\n");
	printf("Press b to go to main menu\n");
	printf("Press x to go to main menu\n");
	printf("Enter Choice = ");
	fflush(stdin);
	scanf_s("%c", &choice);
	if (choice == 'c')
	{
		printf("Radius = ");
		scanf_s("%lf", &r);
		printf("Area of circle = %lf", circleArea(r));
		displayArea();
	}
	else if (choice == 'r')
	{
		printf("Enter Width = ");
		scanf_s("%lf", &w);
		printf("Enter length = ");
		scanf_s("%lf", &l);

		printf("Area of Rectangle = %lf", rectangleArea(w, l));
		displayArea();
	}
	else if (choice == 't')
	{
		printf("Enter hieght = ");
		scanf_s("%lf", &h);
		printf("Enter Base = ");
		scanf_s("%lf", &b);

		printf("Area of Triangle = %lf", triangleArea(h, b));
		displayArea();
	}
	else if (choice == 'b')
	{
		main();
	}
	else if (choice == 'x')
	{
		exi();
	}
	else
	{
		printf("Invalid Entry");
		_getch();
		displayArea();
	}
}
void exi()
{

	system("cls");
	system("color 03");
	printf("Bye");
	exit;
}
void ask()
{
		printf("\nEnter Your Name = ");
	fflush(stdin);
	scanf("%[^\n]s", name);

}

