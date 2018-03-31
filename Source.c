#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int player[10],a, score[10], n,j, i,flag, x;
char ch[1],ch1;
int main()
{
	printf("ANKIT SAHA IT 510817079\n");
	printf("Enter number of players:\n");
	scanf("%d", &n);
	srand(time(NULL));
	j = n;
	while (1)
	{

		i = j % n;
		if (player[i] != 1)
		{ 
		printf("Player %d's turn\n", i + 1);
		printf("Press r to roll the dice...\n");
		scanf("%s", &ch);
		ch1 = ch[0];
		if (ch1 == 114)
		{
			x = rand() % 6 + 1;
			printf("The dice number is %d\n", x);
			if (x == 6)
			{
				player[i] = 1;
				score[i] = 1;
				printf("Congrats player %d got out of home\n", i + 1);
			}
			else
				printf("Try next time\n");
		}
		else
			printf("Press r please\n");
		}
		if (player[i] == 1)
		{
			a = 0;
			do
			{
				a += 1;
				printf("Player %d's turn\n", i + 1);
				printf("Press r to roll the dice...\n");
				scanf("%s", &ch);
				ch1 = ch[0];
				if (ch1 == 114)
				{
					x = rand() % 6 + 1;
					printf("The dice number is %d\n", x);
					score[i] += x;
				}
				else
					printf("Press r please\n");
			} while (x == 6);
			if (score[i] == 90)
				score[i] = 7;
			if (score[i] == 13)
				score[i] = 56;
			if (score[i] == 73)
				score[i] = 22;
			if (score[i] == 45)
				score[i] = 33;
			if (score[i] == 32)
				score[i] = 21;
			if (score[i] == 27)
				score[i] = 18;
			if (score[i] == 28)
				score[i] = 42;
			if (score[i] == 36)
				score[i] = 70;
			if (score[i] == 57)
				score[i] = 74;
			if (score[i] == 69)
				score[i] = 94;
			if (a == 3)
				score[i] -= (18 + x);
			printf("Your Score: %d\n", score[i]);
			if (score[i] == 100)
			{
				flag = i;
				break;
			}
			else if (score[i] > 100)
				score[i] -= x;
		}
		j++;
	}
			printf("Player %d wins!!\n", flag+1);
	
	return 0;
}
