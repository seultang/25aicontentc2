// Lecture08_Struct.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<Windows.h>
#include <time.h>

struct Fish
{
	char* name;
	
	char* talk;		//물고기가 퀴즈를 냄(문제 + 보기(객관식))
	int answer;		//답

	char* talk_O;	//맞았을때 대사
	char* talk_X;	//틀렸을때 대사		
};


//물고기 5개 만들기 Fish 배열로.
int main()
{
	int a = 0;
	struct Fish fishes[5] =
	{
		{"후무후무누쿠누쿠아푸아아", "후무후무누쿠누쿠아푸아아의 서식지는?\n1) 부산  2) 삿포로  3) 하와이", 3, "정답이야~!", "이정도는 기본상식인데.."},
		{"붕어", "붕어빵에는 붕어가 들어가나?\n1) 네  2) 아니오", 1, "니가 옳아", "그건 좀 아닌데?"},
		{"상어", "죠스바의 겉면은 무슨 맛일까?\n1) 맛있는맛  2) 오렌지맛  3) 딸기맛", 2, "상당히 뛰어난 미각을 가졌군", "혀 대신 수세미를 달고다니는건 어떄?"},
		{"고등어", "고등학생은 청소년인가?\n1) 네  2) 아니오", 1, "청소년 요금 내는거 많이 봤지?", "아니라고..?"},
		{"라우윌리윌리누쿠누쿠오이오이", "내 이름은 어느 지역 말일까?\n1) 하와이  2) 산티아고  3) 전라북도", 1, "오.. 아는게 많군", "이것도 모르다니.."}
	};
	int total_games = 0, total_correct = 0;
	FILE* fp;
	errno_t err = fopen_s(&fp, "gay.txt", "r");

	if (err == 0 && fp != NULL) {
		if (fscanf(fp, "%d %d", &total_games, &total_correct) != 2) {
			total_games = 0;
			total_correct = 0;
		}
		fclose(fp);
	}


	double accuracy = (total_games > 0) ? (100.0 * total_correct / total_games) : 0.0;
	printf("=== 낚시 퀴즈 게임 ===\n");
	printf("지금까지 %d회 플레이 했습니다.\n", total_games);
	printf("현재까지의 정답률: %.1f%%\n\n", accuracy);
	while (a < 1)
	{
		printf("찌를 던진다 (Y/N) >");
		char yn;
		yn = _getch();
		printf("%c\n", yn); //(500ms마다 .하나 찍히게)
		if (yn == 'Y' || yn == 'y')
		{
			for (int i = 0; i < 5; i++)
			{
				printf(".\n");
				Sleep(500);
			}
			printf("\033[0;32m");
			printf("\n낚였다!\n\n");
			printf("\033[0m");

			srand((unsigned int)time(NULL));
			int idx = rand() % 5;
			struct Fish f = fishes[idx];

			printf("%s : %s\n", f.name, f.talk);

			int user;
			printf("정답 입력 (숫자만) > ");
			scanf_s("%d", &user);
			total_games++;

			if (user == f.answer)
			{
				printf("%s\n", f.talk_O);
				total_correct++;
			}
			else
			{
				printf("%s\n", f.talk_X);
			}
			a++;
		}
		else if (yn == 'N' || yn == 'n')
		{
			printf("어쩔티비 안할거면 가세요라\n");
			a++;
		}
		else
		{
			printf("Y 또는 N만 입력하세요!\n");
		}
		fp = fopen("gay.txt", "w");
		if (fp != NULL) {
			fprintf(fp, "%d %d", total_games, total_correct);
			fclose(fp);
		}
	}
	return 0;

}
