#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
int main()
{
    char str[100] = ""; // SecurityFirst
    printf("[>] ���ڿ� �Է�\n\n");
    printf("[<]");
    scanf("%s", str);
    int i;
    for (i = 0; *(str + i) != '\0'; i++); //printf("%#x", str + i)


    printf("[>] ���� ���� : %d\n", i);
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

    printf("�ִ� ���� %d�Դϴ�!",max);
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

//���� ī�� ã��
/*#include <stdio.h>
int main()
{
    int total = 0;
    
    do{
        printf("[>] ��ü ī�� : ");
        scanf("%d", &total);
    } while (total < 3 || total > 50);
    
    printf("\n[>] ī���Է� :\n");
    
    
        
    
}
*/

/*#include <stdio.h>
void input()

int main()
{
    char change = 0;
    char text[100] = "";

    printf("���ڿ��� �Է��ϼ���\n[>] ");
    scanf("%s", &text);

    input(text)

    
}
*/

//����ī�� ã��
/*
#include <stdio.h>

int main() {
    int str[100]; 
    int N, num = 0;
    int total = 0;
    printf("[>] ��ü ī�� : ");
    scanf("%d", &N);
    printf("\n");

    printf("[>] ī�� �Է� : \n");
    for (int i = 0; i < N - 1; i++) { // �迭�� ������ 0�̹Ƿ� N-1�� ������ ����
        scanf("%d", &str[i]); // �� ������ �Է¹��� ���ڸ� �Ҵ���
    }
    for (int j = 0; j < N - 1; j++) { // �迭�� ������ 0�̹Ƿ� N-1�� ������ ����
        
        num += str[j]; // num �Է¹��� ���� ��� ����
    }
    for (int m = 1; m <= N; m++) { //m�� 1���� �������鼭 N���� ���������� ����
        total += m; //total�� 1���� N������ ���ڸ� ����
    }
    printf("\n[<] ���� ī�� : %d\n", total - num);
}
*/    
    
    /*for (int i = 1; i < N; i++) { //i�� N���� ���������� �ݺ� ������ 1�߰�
        int card;
        scanf("%d", &card);
        sum += card; //�Է¹��� ������ ī�� ���� �� ���ؼ� sum�� ����
    }
    int total = 0;
    for (int j = 1; j <= N; j++) { //j�� N���� ���������� �ݺ� ������ 1�߰�
        total += j; //total�� 1���� N������ ���ڸ� ����
    }
    /*
    //int total = (N * (N + 1)) / 2; //���������� �հ������� ��ü�� ���� ���� ����
    printf("\n[<] ���� ī�� : %d\n", total - sum); //����ī�� ���

    return 0;
}


// ���ڿ� ġȯ�ϱ�

/*#include <stdio.h>

int main() {
    char str[100], *ptr, ch1, ch2;

    printf("���ڿ��� �Է��ϼ���\n[>] ");
    scanf("%s", str); // ���ڿ� �Է�

    printf("\n������ ���ڸ� �Է��ϼ���\n[>] ");
    scanf(" %c", &ch1); // ������ ���� �Է�
    printf("\nġȯ�� ���ڸ� �Է��ϼ���\n[>] ");
    scanf(" %c", &ch2); //ġȯ�� ���� �Է�

   for (ptr = str; *ptr != '\0'; ptr++) { // ���ڿ��� ���� �׻� null�̱� �����̴� for���� �ѹ� �������� ptr�� ���� ���ڸ� �˻���
        if (*ptr == ch1) { // ���� *ptr�� ch1�� ���ٸ� 
            *ptr = ch2; // ch2�� ����
        }
    }
   
    printf("\n[<] ġȯ�� ���ڴ� %s�Դϴ�", str);

    return 0;
}
*/

//ȯ������
/*#include <stdio.h>

void money(int* amount, int* choose) {//  amount�� choose�� �ٲٱ� ���ؼ� �����ͷ� ����
   
    printf("[>] ��ȭ�� �ٸ� ȭ��� ȯ���ϴ� ���� �Դϴ�.\n");
    printf(" ȯ���ϰ� ���� ȭ�� ����ּ���\n");
    printf("[>] 1. �޷�, 2. ����, 3. �Ŀ��, 4. ��, 5. ����\n[<] ");
    scanf("%d", choose); //�����ͷ� �޾ұ� ������ &�� ���ʿ� x

    printf("\n[>] �󸶸� ȯ���Ͻðڽ��ϱ�?\n");
    printf("[>] �Է� ���� 0 < x < 100000000 ���� ���ѵ˴ϴ�.\n[<] ");
    scanf("%d", amount);
}

void input(int amount, int choose) { //���� �ҷ����� ����
    
    switch (choose) { //choose���� �Է��Ѱ����� �ùٸ� �� ã�� ����
    case 1:


        printf("\n%d���� �޷��� ȯ���� %.5f�޷� �Դϴ�.", amount, (float)amount / 1300);
        break;

    case 2:

        printf("\n%d���� ���η� ȯ���� %.5f���� �Դϴ�.", amount, (float)amount / 1400);
        break;

    case 3:

        printf("\n%d���� �Ŀ��� ȯ���� %.5f�Ŀ�� �Դϴ�.", amount, (float)amount / 1600);
        break;

    case 4:

        printf("\n%d���� ������ ȯ���� %.1f�� �Դϴ�.", amount, (float)amount / 10);
        break;

    case 5:

        printf("\n%d���� �������� ȯ���� %.4f���� �Դϴ�.", amount, (float)amount / 190);
        break;
    }
}

int main() {
    int amount;
    int choose;

    
    money(&amount, &choose); //money �Լ� ȣ��
    if (0 >= amount || amount >= 100000000) { //0 ���� �۰ų� 1�ﺸ�� ũ�� ������
        printf("�ùٸ� ���� �Է����ּ���.\n");
    }
    else {
        input(amount, choose); //�ƴ϶�� input�Լ� ����
    }
    return 0;
}


//�ִ� ���ϱ�
/*#include <stdio.h>
int main()
{
    int max = 0;
    int str1[] = { 5,3,1,7,6,8,9,2,4,19,12,14,18,13,15,11,10,17,18,20,16 };


    for (int i = 0; i <= sizeof(str1) / 4; i++)
    {
        if (str1[i] > max) max = str1[i];
    }

    printf("�ִ� ���� %d�Դϴ�!", max);
    return 0;

}*/

// �ּڰ� ���ϱ�
/*#include <stdio.h>
int main()
{
     
    int str1[] = { 5,3,1,7,6,8,9,2,4,19,12,14,18,13,15,11,10,17,18,20,16 };
    
    int minimun = str1[0];
    for (int i = 0; i < sizeof(str1) / 4; i++) {
    
        if (str1[i] < minimun) minimun = str1[i];
    }
    printf("�ּڰ� : %d", minimun);
    return 0;
}
*/


//����Լ�

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

//����Լ� �ǽ�

/*#include <stdio.h>

void sum(int n,int current) {
    if (n == 0) {
        printf("1���� 10������ �� : %d\n", current);
    }
    else {
        current += n;
        sum(n - 1, current);
        
    }
}

void sum1(int m, int current) {
    if (m == 0) {
        printf("1���� 50������ �� : %d", current);
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

// 2���� �迭

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

// 2���� �迭 �ǽ�

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

// ���� ������

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

// ���������� �ǽ�

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
    printf("5���� �ڿ����� �Է����ּ��� : ");
    
    MAX(arr);

    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("�ִ� �� : %d", **ptr2);
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
    printf("5���� �ڿ����� �Է����ּ��� : ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    MAX(ptr2, arr);
    printf("�ִ� �� : %d", max);
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
    printf("5���� �ڿ����� �Է����ּ���: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    MAX(ptr2, arr);
    printf("�ִ� ��: %d", max);
    return 0;
    
}
*/


// ���۹���

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
    printf("�ڿ����� �Է����ּ��� : ");
    scanf("%d", &num);
    plus(num, ptr);
    printf("result : %d", result);
}*/

 