/*18장 파일 입출력
파일을 읽을때    
1. 열기
2. 읽기
3. 닫기

터미널에서 txt 만들기 echo "hi">"a.txt"

*/

#include <stdio.h>
// int main()
// {
//     FILE *fp; //파일 포인터

//     fp = fopen("a.txt", "r"); //읽기 fopen
//     if (fp == NULL)
//     {
//         printf("파일이 열리지 않았습니다.\n");
//         return 1;

//     }

//     printf("파일이 열렸습니다.\n");
//     fclose(fp);

//     return 0;

// }


//문자 입력 함수 : fgetc
// int main()
// {
//     FILE *fp;
//     int ch;

//     fp = fopen("a.txt", "r");
//     if (fp ==NULL)
//     {
//         printf("파일이 열리지 않습니다.\n");
//         return 1;
//     }
//     while(1)
//     {
//         ch = fgetc(fp); //fgetc문자를 입력에 반환한다. 
//         if (ch == EOF) //파일의 데이터를 다 읽어 오면 fgetc함수는 EOF를 반환함
//         {
//             break;
//         }
//         putchar(ch); //입력한 문자 화면에 출력
//     }
//     fclose(fp); 
//     return 0;
// }

//문자 출력 함수 fputc
// int main()
// {
//     FILE *fp;
//     char str[] = "banana";
//     int i;

//     fp = fopen("b.txt", "w"); //쓰기 모드를 하면 알아서 파일이 만들어진다. 
//     if (fp ==NULL)
//     {
//         printf("파일을 읽지 못했습니다.\n");
//         return 1;
//     }
//     i = 0;
//     while (str[i] != '\0')
//     {
//         fputc(str[i], fp);
//         i++;
//     }
//     fputc('\n', fp);
//     fclose(fp);

//     return 0;
// }

// int main()
// {
//     FILE *fp;
//     char str[] = "apple"; //banana를 지우고 apple을 쓴다. 뒤에있는것만 남음 
//     int i;

//     fp = fopen("b.txt", "w"); //쓰기 모드를 하면 알아서 파일이 만들어진다. 
//     if (fp ==NULL)
//     {
//         printf("파일을 읽지 못했습니다.\n");
//         return 1;
//     }
//     i = 0;
//     while (str[i] != '\0')
//     {
//         fputc(str[i], fp);
//         i++;
//     }
//     fputc('\n', fp);
//     fclose(fp);

//     return 0;
// }


// int main()
// {
//     FILE *fp;
//     char str[] = "apple"; 
//     int i;

//     fp = fopen("b.txt", "a"); //add
//     if (fp ==NULL)
//     {
//         printf("파일을 읽지 못했습니다.\n");
//         return 1;
//     }
//     i = 0;
//     while (str[i] != '\0')
//     {
//         fputc(str[i], fp);
//         i++;
//     }
//     fputc('\n', fp);
//     fclose(fp);

//     return 0;
// }


/*예제 : */

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *fp;
//     int ch;
//     int count = 0;
//     char log[1024];


//     fp = fopen("log.txt", "r");
//     if (fp ==NULL)
//     {
//         printf("파일이 열리지 않습니다.\n");
//         return 1;
//     }
//     while(1)
//     {
//         ch = fgetc(fp);  
//         if (ch == EOF) 
//         {
//             break;
//         }
//         putchar(ch); 
//     }
//     fclose(fp); 
    
//     while(1)
//     {    if (strstr(log, "ERROR")) 
//         {
//             count += 1;
//         }
//         printf("ERROR : %d", count);

//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int count = 0;
    char line[1024]; // 한 줄을 읽어올 버퍼
    char *ptr;       // 문자열을 탐색할 포인터

    // 1. 파일 열기
    fp = fopen("log.txt", "r");
    if (fp == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }

    // 2. 파일 끝까지 한 줄씩 읽기
    while (fgets(line, sizeof(line), fp) != NULL) {
        // 3. 읽어온 한 줄(line)에서 "ERROR" 검색 시작
        ptr = line; // 검색 시작 위치를 현재 줄의 처음으로 설정

        // strstr가 NULL을 반환할 때까지 (즉, "ERROR"를 더 이상 찾지 못할 때까지) 반복
        while ((ptr = strstr(ptr, "ERROR")) != NULL) {
            count++; // "ERROR"를 찾았으므로 카운트 증가
            ptr += strlen("ERROR"); // 찾은 "ERROR" 문자열 바로 다음 위치부터 
                                    // 다시 검색하기 위해 포인터 이동
                                    // (이걸 안 하면 "ERROR"의 'E'에서 무한 루프)
        }
    }

    // 4. 파일 닫기
    fclose(fp);

    // 5. 루프가 모두 끝난 후, 최종 결과 한 번만 출력
    printf("ERROR: %d번", count);

    return 0;
}



