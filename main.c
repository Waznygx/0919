#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//struct MyStruct
//{
//	char c[20];
//	int i;
//	double d;
//};
//int main()
//{
//	struct MyStruct s = { "hello",20,3.14f };
//	struct MyStruct stmp = { 0 };
//	char tmp[100] = { 0 };
//	sprintf(tmp, "%s %d %lf\n",s.c,s.i,s.d);
//	printf("%s", tmp); 
//	sscanf(tmp, "%s %d %lf", stmp.c, &(stmp.i), &(stmp.d));
//	printf("%s %d %lf", stmp.c, stmp.i, stmp.d);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("M:\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, 3, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, 3, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("M:\\try.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("this is an apple", pf);
//	fseek(pf, 9, SEEK_SET);
//	fputs("sam", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("M:\\1.txt", "wb");
//	if (pf == NULL)
//	{
//		perror(pf);
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfread = fopen("M:\\try.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pfwrite = fopen("M:\\try1.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//	}
//
//	int ch = 0;
//	while (ch = fgetc(pfread) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//	if (feof(pfread))
//	{
//		printf("end");
//	}
//	else if(ferror(pfread))
//	{
//		printf("err");
//	}
//	fclose(pfwrite);
//	pfwrite = NULL;
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}

