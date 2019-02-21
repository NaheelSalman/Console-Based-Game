int square(int x)
{
	int i, y;
	for (i = 0; i < x; i++)
	{
		y = x*x;
	}
	return y;
}
int power(int x, int y)
{
	int i, p = 1;
	for (i = 0; i < y; i++)
	{
		p = p*x;
	}
	return p;
}

int factorial(int y)
{
	int fact, i;
	fact = 1;
	for (i = y; i >= 1; i--)
		fact = fact*i;
	return(fact);
}
int leap(int x)
{
	if (x % 4 == 0)
	{
		printf("this is a leap year");
	}
	else if
		(x % 4 != 0) 
	{
		printf("NO leap");
	}
}
int roman(int x)
{
	 if (x >= 1000)
	{
		 printf("m");
		roman(x - 1000);
	}

	 else if (x >= 500)
	 {
		 printf("d");
		 roman(x - 500);
	 }
	else if (x >= 100)
	{
		printf("c");
		roman(x - 100);
	}
	else if (x >= 50)
	{
		printf("l");
		roman(x - 50);
	}

	else if (x >= 10)
	{
		printf("X");
		roman(x - 10);
	}
	else if (x >= 5)
	{
	printf("v");
	roman(x - 5);
	}
	else 
		 if (x >= 1)
	{
		printf("i");
	}
	
}
int Random(int max)
{
	return (rand() % max) + 1;
}
void Warmup()
{
	int ans, attempt = 0, score = 0;
	int i, n,c;
	printf("\nEnter Your favourite number between 3 to 6 = ");
	scanf_s("%d", &c);
	if (c >= 3 && c<=6) {
		for (i = 1; i <= 3; i++)
		{
			n = rand() % c;
			
			switch (n)
			{
			case 1:
				printf("\n\nQ#%d:-This is not a bird?\n", i);
				printf("\n\nOptions :");
				printf("\n         (1)Bat \t (2)Ostrich\n");
				printf("         (3)Hen  \t (4)Peacock");
				printf("\n\nAnswer = ");
				scanf_s("%d", &ans);
				if (ans == 1)
				{
					printf("Correct..!!");
					score++;
					attempt++;
				}
				else if (ans != 1)
				{
					printf("\nWrong Answer...!! \nRight Answer =Bat");
					attempt++;
				}
				else
				{
					printf("\nInvalid Choice");
					_getch();
				}
				break;
				//Question # 19
			case 2:
				printf("\n\nQ#%d:-World's fastest mammal?\n", i);
				printf("\n\nOptions :");
				printf("\n         (1)Leopard \t (2)Cheetah\n");
				printf("         (3)Lion     \t (4)Tiger");
				printf("\n\nAnswer = ");
				scanf_s("%d", &ans);
				if (ans == 2)
				{
					printf("Correct..!!");
					score++;
					attempt++;
				}
				else if (ans != 2)
				{
					printf("\nWrong Answer...!! \nRight Answer =Cheetah ");
					attempt++;
				}
				else
				{
					printf("\nInvalid Choice");
					_getch();
				}
				break;
			case 3:
				printf("\n\nQ#%d:-Speed Of light is approximately equals to ?\n", i);
				printf("\n\nOptions :");
				printf("\n         (1)Speed of a fast moving ship\n"
					"         (2)Speed of Electric Current\n");
				printf("         (3)Speed of Electromagnetic Waves\n"
					"         (4)Speed of revolution of sun.");
				printf("\n\nAnswer = ");
				scanf_s("%d", &ans);
				if (ans == 3)
				{
					printf("Correct..!!");
					score++;
					attempt++;
				}
				else if (ans != 3)
				{
					printf("\nWrong Answer...!! \nRight Answer =Speed of Electromagnetic Waves");
					attempt++;
				}
				else
				{
					printf("\nInvalid Choice");
					_getch();
				}
				break;
			case 4:
				printf("\n\nQ#%d Who was the founder of Pakistan ?\n", i);
				printf("\n\nOptions :");
				printf("\n         (1)Allama Iqbal     \t (2)Hafeez Jhalandri\n"
					"         (3)Quaid - e - Azam \t (4)Ameer uddin Khidwai.");
				printf("\n\nAnswer = ");
				scanf_s("%d", &ans);
				if (ans == 3)
				{
					printf("Correct..!!");
					score++;
					attempt++;
				}
				else if (ans != 3)
				{
					printf("\nWrong Answer...!! \nRight Answer =Speed of Electromagnetic Waves");
					attempt++;
				}
				else
				{
					printf("\nInvalid Choice");
					_getch();
				}
				break;
			case 5:
				printf("\n\nQ#%d NaCl reacts with Water to form", i);
				printf("\n\nOptions :");
				printf("\n         (1)4NaCl & 2HCl \t (2)NaOH & HCl\n"
					"          (3)H2O & Na2    \t (4)No reaction occurs.");
				printf("\n\nAnswer = ");
				scanf_s("%d", &ans);
				if (ans == 2)
				{
					printf("Correct..!!");
					score++;
					attempt++;
				}
				else if (ans != 2)
				{
					printf("\nWrong Answer...!! \nRight Answer =NaOH & HCl");
					attempt++;
				}
				else
				{
					printf("\nInvalid Choice");
					_getch();
				}
				break;
			case 6:
				printf("Q#%d Volt per meter is the unit of ?", i);
				printf("\n\nOptions :");
				printf("\n         (1)Electricity \t (2)Electric field Intensity"
					"           (3)Resistance  \t (4)Potential Difference.");
				printf("\n\nAnswer = ");
				scanf_s("%d", &ans);
				if (ans == 4)
				{
					printf("Correct..!!");
					score++;
					attempt++;
				}
				else if (ans != 4)
				{
					printf("\nWrong Answer...!! \nRight Answer =Potential Differnce");
					attempt++;
				}
				else
				{
					printf("\nInvalid Choice");
					_getch();
				}
				break;
			}

		}
	}
	else
	{
		printf("\nInvalid Number");
		Warmup();
	}
		
	if(score>=2)
			{
				quizgame();
			}
				else 
			{
				printf("\nBetter Luck Next Time.");
				game();
				_getch();
			}
		

}
double circleArea(double x)
{
	double pi = 3.14, c;
	c = pi*x*x;
	return c;
}
double rectangleArea(double x, double y)
{
	double c;
	c = x*y;
	return c;
}
double triangleArea(double x, double y)
{
	double c;
	c = x*y/2;
	return c;
}





