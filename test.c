//소스 수정
#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
int main()
{
    char str[100] = ""; // SecurityFirst
    printf("[>] 문자열 입력\n\n");
    printf("[<]");
    scanf("%s", str);
    int i;
    for (i = 0; *(str + i) != '\0'; i++); //printf("%#x", str + i)


    printf("[>] 문자 개수 : %d\n", i);
}
*/
/*#include <stdio.h>
int main()
{
    int max = 0;
    int str1[] = { 5,3,1,7,6,8,9,2,4,19,12,14,18,13,15,11,10,17,18,20,16};

    
    for (int i = 0; i <= sizeof(str1) / 4; i++)
    {
        if (str1[i] > max) max = str1[i];
    }

    printf("최대 값은 %d입니다!",max);
    return 0;

}
*/
/*#include <stdio.h>

void input(int* a, int* b, char str[])
{
    

    printf("[<] input num1, num2 : ");
    scanf("%d %d", a, b);

    printf("[<] input stirng :");
    scanf(" %s", str);
}


void output(int v1, int v2, char *str[])
{
    printf("%d, %d, %s", v1, v2, str);

}
int main()
{
    int val1 = 0;
    int val2 = 0;
    char str[100] = { 0, };

    input(&val1, &val2, str);
    output(val1, val2, str);

}
*/

//빠진 카드 찾기
/*#include <stdio.h>
int main()
{
    int total = 0;
    
    do{
        printf("[>] 전체 카드 : ");
        scanf("%d", &total);
    } while (total < 3 || total > 50);
    
    printf("\n[>] 카드입력 :\n");
    
    
        
    
}
*/

/*#include <stdio.h>
void input()

int main()
{
    char change = 0;
    char text[100] = "";

    printf("문자열을 입력하세요\n[>] ");
    scanf("%s", &text);

    input(text)

    
}
*/

//빠진카드 찾기
/*
#include <stdio.h>

int main() {
    int str[100]; 
    int N, num = 0;
    int total = 0;
    printf("[>] 전체 카드 : ");
    scanf("%d", &N);
    printf("\n");

    printf("[>] 카드 입력 : \n");
    for (int i = 0; i < N - 1; i++) { // 배열의 시작은 0이므로 N-1로 조건을 만듬
        scanf("%d", &str[i]); // 각 베열에 입력받은 숫자를 할당함
    }
    for (int j = 0; j < N - 1; j++) { // 배열의 시작은 0이므로 N-1로 조건을 만듬
        
        num += str[j]; // num 입력받은 수를 계속 더함
    }
    for (int m = 1; m <= N; m++) { //m이 1부터 더해지면서 N보다 작을때까지 더함
        total += m; //total에 1부터 N까지의 숫자를 더함
    }
    printf("\n[<] 빠진 카드 : %d\n", total - num);
}
*/    
    
    /*for (int i = 1; i < N; i++) { //i가 N보다 작을때까지 반복 끝나고 1추가
        int card;
        scanf("%d", &card);
        sum += card; //입력받은 숫자의 카드 값을 다 더해서 sum에 저장
    }
    int total = 0;
    for (int j = 1; j <= N; j++) { //j가 N보다 작을때까지 반복 끝나고 1추가
        total += j; //total에 1부터 N까지의 숫자를 더함
    }
    /*
    //int total = (N * (N + 1)) / 2; //등차수열의 합공식으로 전체의 수의 합을 구함
    printf("\n[<] 빠진 카드 : %d\n", total - sum); //빠진카드 계산

    return 0;
}


// 문자열 치환하기

/*#include <stdio.h>

int main() {
    char str[100], *ptr, ch1, ch2;

    printf("문자열을 입력하세요\n[>] ");
    scanf("%s", str); // 문자열 입력

    printf("\n변경할 문자를 입력하세요\n[>] ");
    scanf(" %c", &ch1); // 변경할 문자 입력
    printf("\n치환할 문자를 입력하세요\n[>] ");
    scanf(" %c", &ch2); //치환할 문자 입력

   for (ptr = str; *ptr != '\0'; ptr++) { // 문자열의 끝은 항상 null이기 문이다 for문이 한번 돌마다 ptr의 다음 문자를 검사함
        if (*ptr == ch1) { // 만약 *ptr이 ch1과 같다면 
            *ptr = ch2; // ch2로 변경
        }
    }
   
    printf("\n[<] 치환된 문자는 %s입니다", str);

    return 0;
}
*/

//환율계산기
/*#include <stdio.h>

void money(int* amount, int* choose) {//  amount와 choose를 바꾸기 위해서 포인터로 받음
   
    printf("[>] 원화를 다른 화폐로 환전하는 계산기 입니다.\n");
    printf(" 환전하고 싶은 화폐를 골라주세요\n");
    printf("[>] 1. 달러, 2. 유로, 3. 파운드, 4. 엔, 5. 위안\n[<] ");
    scanf("%d", choose); //포인터로 받았기 때문에 &를 쓸필요 x

    printf("\n[>] 얼마를 환전하시겠습니까?\n");
    printf("[>] 입력 값은 0 < x < 100000000 으로 제한됩니다.\n[<] ");
    scanf("%d", amount);
}

void input(int amount, int choose) { //값을 불러오기 위해
    
    switch (choose) { //choose에서 입력한값에서 올바른 걸 찾아 실행
    case 1:


        printf("\n%d원은 달러로 환전시 %.5f달러 입니다.", amount, (float)amount / 1300);
        break;

    case 2:

        printf("\n%d원은 유로로 환전시 %.5f유로 입니다.", amount, (float)amount / 1400);
        break;

    case 3:

        printf("\n%d원은 파운드로 환전시 %.5f파운드 입니다.", amount, (float)amount / 1600);
        break;

    case 4:

        printf("\n%d원은 엔으로 환전시 %.1f엔 입니다.", amount, (float)amount / 10);
        break;

    case 5:

        printf("\n%d원은 위안으로 환전시 %.4f위안 입니다.", amount, (float)amount / 190);
        break;
    }
}

int main() {
    int amount;
    int choose;

    
    money(&amount, &choose); //money 함수 호출
    if (0 >= amount || amount >= 100000000) { //0 보다 작거나 1억보다 크면 재질문
        printf("올바른 값을 입력해주세요.\n");
    }
    else {
        input(amount, choose); //아니라면 input함수 실행
    }
    return 0;
}


//최댓값 구하기
/*#include <stdio.h>
int main()
{
    int max = 0;
    int str1[] = { 5,3,1,7,6,8,9,2,4,19,12,14,18,13,15,11,10,17,18,20,16 };


    for (int i = 0; i <= sizeof(str1) / 4; i++)
    {
        if (str1[i] > max) max = str1[i];
    }

    printf("최대 값은 %d입니다!", max);
    return 0;

}*/

// 최솟값 구하기
/*#include <stdio.h>
int main()
{
     
    int str1[] = { 5,3,1,7,6,8,9,2,4,19,12,14,18,13,15,11,10,17,18,20,16 };
    
    int minimun = str1[0];
    for (int i = 0; i < sizeof(str1) / 4; i++) {
    
        if (str1[i] < minimun) minimun = str1[i];
    }
    printf("최솟값 : %d", minimun);
    return 0;
}
*/


//재귀함수

/*
#include <stdio.h>

void hello() {
    printf("hello\n");
    hello();
}

int main() {
    hello();
    return 0;
}
*/

/*#include <stdio.h>


void hello(int Count) {
    if (Count >= 0) {
        printf("Hello %d \n", Count);
        hello(Count - 1);
    }
    return;
}

int main() {
    hello(4);

    return 0;
}
*/

//재귀함수 실습

/*#include <stdio.h>

void sum(int n,int current) {
    if (n == 0) {
        printf("1에서 10까지의 합 : %d\n", current);
    }
    else {
        current += n;
        sum(n - 1, current);
        
    }
}

void sum1(int m, int current) {
    if (m == 0) {
        printf("1에서 50까지의 합 : %d", current);
    }
    else {
        current += m;
        sum1(m - 1, current);
    }
}

int main() {
    int n = 10;
    sum(n, 0);

    int m = 50;
    sum1(m, 0);
        return 0;

}
*/

// 2차원 배열

/*#include <stdio.h>
int main() {
    int arr[2][4] = {
        {10,20,30,40},
        {50,60,70,80}
    };
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 4; x++) {
            printf("[>] arr[%d][%d] : %d\t", y, x, arr[y][x]);
        }
        printf("\n");
    }
    return 0;
}
*/

// 2차월 배열 실습

/*#include <stdio.h>

void set(int arr[4][4]) {
    
    for (int j = 0; j < 4; j++) {
        printf("\n");
        for (int i = 0; i < 4; i++) {
            printf("\t[%d][%d] : ", j, i);
            scanf("%d", &arr[j][i]);
        }
    }
}

void aver(int arr[4][4]) {
    int total = 0;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            total += arr[j][i];
        }
    }
    int average = 0;
    average = total / 16;
    printf("average : %d", average);
}

int main() {
    int arr[4][4];
    set(arr);
    aver(arr);
    return 0;
}
*/

// 이중 포인터

/*#include <stdio.h>

int main() {
    int num = 10;
    int *pnum1 = &num;
    int **pnum2 = &pnum1;

    printf("%d\n", *pnum1);
    printf("%d\n", **pnum2);
    return 0;
}
*/

// 이중포인터 실습

/*#include <stdio.h>

void MAX(int arr[5]) {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

}

int main() {
    int arr[5] = { 0 };
    int max = 0;
    int* ptr1= &max;
    int** ptr2= &ptr1;
    printf("5개의 자연수를 입력해주세요 : ");
    
    MAX(arr);

    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("최대 값 : %d", **ptr2);
    return 0;
}*/
/*
#include <stdio.h>

void MAX(int **ptr, int arr[5]) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] > *ptr) {
            *ptr = arr[i];
        }
}

int main() {
    int arr[5] = { 0 };
    int max = 0;
    int* ptr1 = &max;
    int** ptr2 = &ptr1;
    printf("5개의 자연수를 입력해주세요 : ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    MAX(ptr2, arr);
    printf("최대 값 : %d", max);
    return 0;
}
*/

/*#include <stdio.h>

void MAX(int** ptr2, int arr[5]) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] > **ptr2) {
            **ptr2 = arr[i];
        }
    }
}

int main() {
    int arr[5] = { 0 };
    int max = 0;
    int* ptr1 = &max;
    int** ptr2 = &ptr1;
    printf("5개의 자연수를 입력해주세요: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    MAX(ptr2, arr);
    printf("최대 값: %d", max);
    return 0;
    
}
*/


// 시작문제

/*
int plus(int num, int* ptr) {
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            *ptr += i;
        }
    }
}

int main() {
    int num;
    int result = 0;
    int* ptr;
    ptr = &result;
    printf("자연수를 입력해주세요 : ");
    scanf("%d", &num);
    plus(num, ptr);
    printf("result : %d", result);
}*/

 
