#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define contant 16

typedef struct people  //구조체 선언
{
    char ex[100];
    char s[10];
    double kg;  //몸무게
    double min;  //시간(분)
}person;

void calender();

void exercise_cal();
void place();
void sikdan();
void food();

float cal = 0; //칼로리 변수 선언 & 초기화

int menu_display(void); //전 메뉴 출력 & 번호 입력

int korean_display(void); //한식 메뉴 출력 & 번호 입력
int chinese_display(void); //중식 메뉴 출력 & 번호 입력
int japanese_display(void); //일식 메뉴 출력 & 번호 입력
int snack_display(void); //분식 메뉴 출력 & 번호 입력
int western_display(void); //양식 메뉴 출력 & 번호 입력
int fast_display(void); //패스트푸드 메뉴 출력 & 번호 입력
int dessert_display(void); //디저트 메뉴 출력 & 번호 입력

void koreanfood(void); //한식 메뉴 선택
void chinesefood(void); //중식 메뉴 선택
void japanesefood(void); //일식 메뉴 선택
void snackfood(void); //분식 메뉴 선택
void westernfood(void); //양식 메뉴 선택
void fastfood(void); //패스트푸드 메뉴 선택
void dessert(void); //디저트 메뉴 선택

void rice(void); //밥 종류 선택
void porridge(void); //죽 종류 선택
void noodle(void); //국수 종류 선택
void ksoup(void); //국&탕 종류 선택
void stew(void); //찌개 종류 선택
void roasted(void); //구이 종류 선택
void boiled(void); //조림 종류 선택
void stirfried(void); //볶음 종류 선택
void greens(void); //나물 종류 선택
void salted(void); //젓갈 종류 선택
void kimchi(void); //김치 종류 선택
void pickled(void); //장아찌 종류 선택
void steamed(void); //찜 종류 선택

void fried(void); //튀김 종류 선택
void dumpling(void); //만두 종류 선택

void soup(void); //스프 종류 선택
void pasta(void); //파스타 종류 선택
void pilaf(void); //필라프 종류 선택

void hamburger(void); //햄버거 종류 선택
void pizza(void); //피자 종류 선택
void chicken(void); //치킨 종류 선택
void soda(void); //탄산음료 종류 선택

void fruit(void); //과일 종류 선택
void cookie(void); //쿠키 종류 선택
void cake(void); //케이크 종류 선택

void press_any_key(void);  //아무 키나 누르면 이전 메뉴로 이동

void main()
{
    while (1)
    {
        printf("           [메뉴] \n");
        printf("===============================================\n\n");
        printf("1. 운동 탭\n");
        printf("2. 식단 탭\n");
        printf("3. 음식 탭\n");
        printf("4. 달력 탭\n");
        printf("5. 종료\n");
        int numsel, numsel2, c;
        printf("\n번호 선택 : "); scanf("%d", &numsel);
        if (numsel == 1) {
            printf("\n===============================================\n\n");
            printf("1. 학교 근처 운동 장소\n");
            printf("2. 운동 시 소모되는 칼로리 알아보기\n");
            printf("\n번호 선택 : "); scanf("%d", &numsel2);
            if (numsel2 == 1) {
                place();
            }
            else if (numsel2 == 2) {
                exercise_cal();
            }
            else
                printf("1~2 번호만 선택하실 수 있습니다! \n");

        }
        else if (numsel == 2)
            sikdan();
        else if (numsel == 3)
            food();
        else if (numsel == 4)
            calender();
        else if (numsel == 5)
            break;
        else
            printf("1~4 번호만 선택하실 수 있습니다! \n");
    }
}

void exercise_cal()  //운동 시 소모되는 칼로리 함수 정의
{
    person user;
    char* data[] = { "빠르게걷기", "수중운동", "골프", "발레",
        "재즈", "농구", "축구", "사이클", "조깅", "등산", "계단오르기" }; //운동 목록
    double kcal = 0; //칼로리
    double a, b, c, d, e, f, g, h, i, j, k, l;

    printf("\n===============================================\n\n");
    printf("몸무게 : ");
    scanf("%lg", &user.kg); //몸무게 입력 받기
    printf("시간(분) : ");
    scanf("%lg", &user.min);  //시간 입력 받기


    while (1) {
        printf("\n운동(end 입력 시 종료)\n");
        printf(" # 빠르게걷기\n # 수중운동\n # 배드민턴\n # 골프\n # 계단오르기\n ");
        printf("# 발레\n # 재즈\n # 농구\n # 축구\n # 사이클\n # 조깅\n # 등산\n");
        printf("선택> ");
        scanf("%s", user.ex);  //운동 입력 받기
        if (strcmp(user.ex, "end") == 0)  //end 작성 시 반복 종료
            break;

        //각 운동 별 칼로리 계산
        else if (strcmp(user.ex, "빠르게걷기") == 0) {
            a = 3.8 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += a;
        }
        else if (strcmp(user.ex, "수중운동") == 0) {
            b = 4.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += b;
        }
        else if (strcmp(user.ex, "배드민턴") == 0) {
            c = 4.5 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += c;
        }
        else if (strcmp(user.ex, "골프") == 0) {
            d = 4.5 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += d;
        }
        else if (strcmp(user.ex, "발레") == 0) {
            e = 4.8 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += e;
        }
        else if (strcmp(user.ex, "재즈") == 0) {
            f = 4.8 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += f;
        }
        else if (strcmp(user.ex, "농구") == 0) {
            g = 6.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += g;
        }
        else if (strcmp(user.ex, "축구") == 0) {
            h = 7.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += h;
        }
        else if (strcmp(user.ex, "사이클") == 0) {
            i = 8.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += i;
        }
        else if (strcmp(user.ex, "조깅") == 0) {
            j = 7.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += j;
        }
        else if (strcmp(user.ex, "등산") == 0) {
            k = 7.5 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += k;
        }
        else if (strcmp(user.ex, "계단오르기") == 0) {
            l = 15.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += l;
        }
    }
    printf("총 소모된 칼로리는 %gkcal입니다.\n\n", kcal);  //총 소모된 칼로리 출력
}

void place() {
    int num;
    printf("\n===============================================\n\n");
    printf("알아보고 싶은 장소를 선택하세요.\n\n");
    printf("1. 영축산\n");
    printf("2. 우이천\n");
    printf("3. 중랑천\n");
    printf("\n장소 번호> ");
    scanf("%d", &num);  //번호 입력받기

    switch (num) {  //각 번호 별 출력 문구
    case 1:
        printf("\n나무 데크길로 조성한 순환 산책로로, ");
        printf("유모차, 휠체어도 다닐 수 있는 무장애숲길이다.\n\n");
        break;
    case 2:
        printf("\n서울시 노원구 월계동에서 덕성여자대학교까지 연결된 우이천 자전거길이 있다. \n");
        printf("광운대학교와 매우 가까워 가볍게 산책하기 좋은 장소이다.\n\n");
        break;
    case 3:
        printf("\n산책로를 따라 걷다가 도봉구청 쪽으로 가다 보면 노원구로 향하는 징검다리가 나온다. \n");
        printf("봄에는 코스모스 꽃밭을 볼 수 있다.\n\n");
        break;
    }
}

void sikdan()  //식단 함수 정의
{
    int num, randn, check, sel;
    person user;

    printf("\n===============================================\n\n");
    printf("시간대를 입력해주세요!\n");   //시간대 입력
    printf("(아침, 점심, 저녁, 간식)\n");
    printf("\n입력> ");
    scanf("%s", user.s);

    if (strcmp(user.s, "아침") == 0)  //아침식사
    {
        printf("===============================================\n\n");
        printf("아침식사로 추천하는 음식들을 소개하겠습니다.\n");
        printf("아침식사에서 반드시 보충하면 좋은 영양소는 단백질인데요, \n");
        printf("아침식사로 추천할만한 단백질 식품으로는 \n");
        printf("그릭요거트, 달걀, 우유, 코티지치즈가 있습니다. \n");
        printf("\n===============================================\n\n");
        printf("다음은 추천하는 오늘의 아침 메뉴입니다!\n");  // 메뉴 추천
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("오늘의 아침 메뉴로 쌀밥, 육개장, 조기구이, 콩자반, 실파무침을 추천합니다! \n");
            break;
        case 2:
            printf("오늘의 아침 메뉴로 쌀밥, 달걀국, 땅콩멸치볶음, 애호박나물, 깍두기를 추천합니다! \n");
            break;
        case 3:
            printf("오늘의 아침 메뉴로 누룽지, 달걀찜, 배추겉절이, 느타리버섯볶음을 추천합니다! \n");
            break;
        case 4:
            printf("오늘의 아침 메뉴로 현미밥, 무채국, 장조림, 배추김치를 추천합니다! \n");
            break;
        default:
            break;
        }
    }

    if (strcmp(user.s, "점심") == 0)  //점심식사
    {
        printf("===============================================\n\n");
        printf("점심식사로 추천하는 음식들을 소개하겠습니다.\n");
        printf("오후에 필요한 연료를 보충해야 하는 점심식사는 단백질, 채소, 전곡 등 균형을 맞춘 식단으로 구성하는 것이 좋습니다.\n");
        printf("다양한 영양소를 구성하는 좋은 메뉴로는 샐러드가 있는데요, \n");
        printf("샐러드를 먹으면 부족했던 채소와 과일을 보충할 수 있습니다! \n");
        printf("당근 등의 뿌리채소, 시금치와 같은 잎채소, 오이 등 열매채소, 고추 등 가지과 채소, 콩 등 여러 종류의 채소를 섭취하는 것이 가장 좋은 방법입니다. \n");
        printf("\n===============================================\n");
        printf("다음은 추천하는 오늘의 점심 메뉴입니다!\n");  // 메뉴 추천
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("오늘의 점심 메뉴로 우동, 오징어부추전, 배추겉절이, 단무지무침을 추천합니다! \n");
            break;
        case 2:
            printf("오늘의 점심 메뉴로 참치덮밥, 호박된장국, 오징어채무침, 오이피클을 추천합니다! \n");
            break;
        case 3:
            printf("오늘의 점심 메뉴로 잔치국수, 동태전, 시금치나물, 가지나물을 추천합니다! \n");
            break;
        case 4:
            printf("오늘의 점심 메뉴로 보리밥, 팽이버섯된장국, 소불고기, 콩나물무침, 오이소박이를 추천합니다! \n");
            break;
        default:
            break;
        }
    }
    if (strcmp(user.s, "저녁") == 0)  //저녁식사
    {
        printf("===============================================\n\n");
        printf("저녁식사로 추천하는 음식들을 소개하겠습니다.\n");
        printf("저녁 시간대는 낮과는 다르게 많은 에너지가 필요하지 않기 때문에 과식을 하지 않는 것이 중요한데요, \n");
        printf("칼로리를 낮추되 건강한 영양소로 식단을 구성하는 것을 추천합니다. \n");
        printf("콩이나 구운 닭, 생선과 같은 풍부한 단백질과 채소의 구성으로 식단을 구성하면 좋습니다. \n");
        printf("또한 수프나 국과 같은 액체 형태 음식을 본식 전에 먹는다면 과식을 막을 수 있습니다! \n");
        printf("\n===============================================\n");
        printf("다음은 추천하는 오늘의 저녁 메뉴입니다!\n");  // 메뉴 추천
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("오늘의 저녁 메뉴로 갈치카레구이, 꽈리고추볶음, 떡국을 추천합니다! \n");
            break;
        case 2:
            printf("오늘의 저녁 메뉴로 잡곡밥, 미역국, 수육, 모둠쌈과 쌈장, 배추김치를 추천합니다! \n");
            break;
        case 3:
            printf("오늘의 저녁 메뉴로 보리밥, 순두부찌개, 고사리나물을 추천합니다! \n");
            break;
        case 4:
            printf("오늘의 저녁 메뉴로 잡곡밥, 소고기미역국, 제육볶음, 열무김치, 잡채를 추천합니다! \n");
            break;
        default:
            break;
        }
    }
    if (strcmp(user.s, "간식") == 0)  //간식
    {
        printf("===============================================\n\n");
        printf("간식, 디저트로 추천하는 음식들을 소개하겠습니다.\n");
        printf("건강에 좋은 간식은 스트레스 해소는 물론 체중 감량 효과도 있는데요, \n");
        printf("추천 간식은 견과류입니다! \n");
        printf("견과류는 불포화 지방으로 심장질환 예방에 도움이 되고, 체중 증가를 막는 좋은 간식이라고 할 수 있습니다. \n");
        printf("디저트 역시 비타민과 미네랄이 충분히 들어있는 건강 디저트를 섭취하는 것이 좋은데요, \n");
        printf("초콜릿이나 칼슘이 풍부한 저지방 요거트를 선택하는 것이 좋습니다! \n");
        printf("\n===============================================\n");
        printf("다음은 추천하는 오늘의 간식입니다!\n");    // 메뉴 추천
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("오늘의 간식으로 떠 먹는 요구르트, 우유, 사과를 추천합니다! \n");
            break;
        case 2:
            printf("오늘의 간식으로 바나나, 아이스크림을 추천합니다! \n");
            break;
        case 3:
            printf("오늘의 간식으로 시리얼과 우유를 추천합니다! \n");
            break;
        case 4:
            printf("오늘의 간식으로 군고구마와 우유를 추천합니다! \n");
            break;
        default:
            break;
        }
    }

    printf("\n===============================================\n\n");
    printf("다음은 건강한 식단을 구성하는 데 알아야 할 유의사항입니다!\n");
    printf("(유의사항은 랜덤으로 출력됩니다.)\n\n");
    printf("유의사항을 출력할까요?(원하면 1, 원하지 않으면 2를 선택해주세요.) : ");
    scanf("%d", &check);
    while (1)
    {
        if (check == 1) {  //유의사항 출력을 원하는 경우
            randn = rand() % 5;  //랜덤으로 숫자 정하기
            if (randn == 1)
                printf("\n나트륨과 당을 주의하세요. 고혈압과 당뇨와 같은 질환의 위험이 높아집니다.\n\n");
            else if (randn == 2)
                printf("\n새로운 음식을 시도해보는건 어떨까요? 같은 군의 음식이라도 다양하게 먹어보세요.\n\n");
            else if (randn == 3)
                printf("\n질병, 알레르기 등을 고려하여 본인의 상황에 맞게 유연하게 식단을 구성하세요. \n\n");
            else if (randn == 4)
                printf("\n연령대에 따라 음식 구성을 다르게 해야 합니다. 나이에 따라 많이 필요한 영양소가 다릅니다. \n\n");
            else if (randn == 5)
                printf("\n균형식단을 지키면서 슈퍼푸드나 영양제를 보충합시다.\n\n");
            break;
        }
        else if (check == 2)   //유의사항 출력을 원하지 않는 경우
        {
            printf("건강 식단 탭을 종료합니다. \n\n");
            break;
        }
        else   //그 외의 번호를 선택한 경우
        {
            printf("없는 번호입니다! 1번과 2번 중에서 번호를 다시 선택해주세요!> ");
            scanf("%d", &check);
        }
    }
}

void food() {
    int c;
    while ((c = menu_display()) != 8)
    {
        switch (c)
        {
        case 1: koreanfood();
            break;
        case 2: chinesefood();
            break;
        case 3: japanesefood();
            break;
        case 4: snackfood();
            break;
        case 5: westernfood();
            break;
        case 6: fastfood();
            break;
        case 7: dessert();
        default: break;
        }
    }
    printf("섭취하신 칼로리는 %.1fkcal입니다\n", cal);
    return 0;
}

int menu_display(void)
{
    int select;
    system("cls");
    printf("1. 한식 \n");
    printf("2. 중식 \n");
    printf("3. 일식 \n");
    printf("4. 분식 \n");
    printf("5. 양식 \n");
    printf("6. 패스트푸드 \n");
    printf("7. 디저트 \n");
    printf("8. 음식 탭 종료\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}
void koreanfood(void)
{
    int c;
    while ((c = korean_display()) != 14)
    {
        switch (c)
        {
        case 1: rice();
            break;
        case 2: porridge();
            break;
        case 3: noodle();
            break;
        case 4: ksoup();
            break;
        case 5: stew();
            break;
        case 6: roasted();
            break;
        case 7: boiled();
            break;
        case 8: stirfried();
            break;
        case 9: greens();
            break;
        case 10: salted();
            break;
        case 11: kimchi();
            break;
        case 12: pickled();
            break;
        case 13: steamed();
            break;
        default: break;
        }
    }
}

int korean_display(void)
{
    int select;
    system("cls");
    printf("한식\n\n");
    printf("1. 밥\n");
    printf("2. 죽\n");
    printf("3. 국수\n");
    printf("4. 국&탕\n");
    printf("5. 찌개\n");
    printf("6. 구이\n");
    printf("7. 조림\n");
    printf("8. 볶음\n");
    printf("9. 나물\n");
    printf("10. 젓갈\n");
    printf("11. 김치\n");
    printf("12. 장아찌\n");
    printf("13. 찜\n");
    printf("14. 메인 메뉴로 이동\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}

void rice(void)
{
    system("cls");
    printf("밥\n\n");
    int c;
    printf("1.쌀밥 2.현미밥 3.찰밥 4.보리밥 5.콩밥\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 313.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 318.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 336.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 347.7; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 351.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void porridge(void)
{
    system("cls");
    printf("죽\n\n");
    int c;
    printf("1.호박죽 2.팥죽 3.닭죽 4. 김치죽 5.전복죽 6.야채죽 7.흰죽\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 76.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 171.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 246.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 120.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 236.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 119.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 114.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void noodle(void)
{
    system("cls");
    printf("국수\n\n");
    int c;
    printf("1.잔치국수 2.비빔국수 3.쫄면 4.칼국수 5.물냉면 6.비빔냉면 7.메밀국수\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 402.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 521.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 559.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 285.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 435.8; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 442.1; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 312.1; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void ksoup(void)
{
    system("cls");
    printf("국&탕\n\n");
    int c;
    printf("1.감자탕 2.육개장 3.삼계탕 4.꽃게탕 5.떡국\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 176.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 212.9; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 900.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 120.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 430.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void stew(void)
{
    system("cls");
    printf("찌개\n\n");
    int c;
    printf("1.청국장찌개 2.된장찌개 3.김치찌개 4.고추장찌개 5.순두부찌개\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 117.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 95.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 113.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 148.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 208.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void roasted(void)
{
    system("cls");
    printf("구이\n\n");
    int c;
    printf("1.굴비 2.두부 3.불고기 4.연어 5.오리고기로스 6.가리비 7.고등어 8.장어 9.쥐포 10.돼지갈비\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 124.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 107.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 170.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 212.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 82.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 83.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 189.7; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 8:
        cal += 224.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 9:
        cal += 59.8; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 10:
        cal += 497.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void boiled(void)
{
    system("cls");
    printf("조림\n\n");
    int c;
    printf("1.갈치 2.고등어 3.코다리 4.두부 5.무 6.메추리알장조림\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 140.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 234.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 117.2; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 133.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 18.4; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 96.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void stirfried(void)
{
    system("cls");
    printf("볶음\n\n");
    int c;
    printf("1.낙곱새 2.가지 3.감자채 4.버섯 5.어묵 6.제육 7.김치볶음\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 240.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 50.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 85.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 58.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 144.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 379.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 63.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void greens(void)
{
    system("cls");
    printf("무침\n\n");
    int c;
    printf("1.시금치나물 2.콩나물 3.고사리나물 4.가지나물 5.도라지나물 6.미역줄기 7.숙주나물 8.명이나물\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 53.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 39.4; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 73.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 35.9; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 58.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 55.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 13.7; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 8:
        cal += 21.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void salted(void)
{
    system("cls");
    printf("젓갈\n\n");
    int c;
    printf("1.창란젓 2.명란젓 3.오징어젓 4.어리굴젓 5.멸치젓 6.꼴뚜기젓 7.연어젓\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 17.4; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 18.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 11.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 12.9; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 17.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 13.2; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 21.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void kimchi(void)
{
    system("cls");
    printf("김치\n\n");
    int c;
    printf("1.배추김치 2.깍두기 3.열무김치 4.동치미 5.갓김치 6.오이소박이 7.총각김치 8.배추겉절이\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 10.8; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 16.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 11.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 11.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 24.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 21.3; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 15.5; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 8:
        cal += 47.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void pickled(void)
{
    system("cls");
    printf("장아찌\n\n");
    int c;
    printf("1.매실장아찌 2.깻잎장아찌 3.마늘장아찌\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 30.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 23.9; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 10.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void steamed(void)
{
    system("cls");
    printf("찜\n\n");
    int c;
    printf("1.찜닭 2.아구찜 3.계란찜 4.해물찜\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 200.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 99.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 168.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 273.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void chinesefood(void)
{
    int c;
    while ((c = chinese_display()) != 10)
    {
        switch (c)
        {
        case 1:
            cal += 608.0; break;
        case 2:
            cal += 571.7; break;
        case 3:
            cal += 335.2; break;
        case 4:
            cal += 469.0; break;
        case 5:
            cal += 294.0; break;
        case 6:
            cal += 205.0; break;
        case 7:
            cal += 205.7; break;
        case 8:
            cal += 322.6; break;
        case 9:
            cal += 290.0; break;
        default: break;
        }
        printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal);
        press_any_key();
    }
}

int chinese_display(void)
{
    int select;
    system("cls");
    printf("중식\n\n");
    printf("1. 짜장면 \n");
    printf("2. 짬뽕 \n");
    printf("3. 탕수육 \n");
    printf("4. 군만두 \n");
    printf("5. 깐풍기 \n");
    printf("6. 양장피 \n");
    printf("7. 고추잡채 \n");
    printf("8. 유산슬 \n");
    printf("9. 팔보채 \n");
    printf("10. 메인 메뉴로 이동\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}

void japanesefood(void)
{
    int c;
    while ((c = japanese_display()) != 10)
    {
        switch (c)
        {
        case 1:
            cal += 364.0;  break;
        case 2:
            cal += 650.0; break;
        case 3:
            cal += 526.0; break;
        case 4:
            cal += 179.0; break;
        case 5:
            cal += 623.0; break;
        case 6:
            cal += 499.0; break;
        case 7:
            cal += 500.0; break;
        case 8:
            cal += 171.0; break;
        case 9:
            cal += 405.0;  break;
        default: break;
        }
        printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal);
        press_any_key();
    }
}

int japanese_display(void)
{
    int select;
    system("cls");
    printf("일식\n\n");
    printf("1. 우동 \n");
    printf("2. 가츠동 \n");
    printf("3. 규동 \n");
    printf("4. 스시 \n");
    printf("5. 돈까스 \n");
    printf("6. 라멘 \n");
    printf("7. 소바 \n");
    printf("8. 타코야끼 \n");
    printf("9. 샤브샤브\n");
    printf("10. 메인 메뉴로 이동\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}

void snackfood(void)
{
    int c;
    while ((c = snack_display()) != 7)
    {
        switch (c)
        {
        case 1:
            cal += 525.0;
            printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal);
            press_any_key(); break;
        case 2:
            cal += 230.0;
            printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal);
            press_any_key(); break;
        case 3:
            cal += 241.0;
            printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal);
            press_any_key(); break;
        case 4:
            cal += 133.0;
            printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal);
            press_any_key(); break;
        case 5: fried();
            break;
        case 6: dumpling();
            break;
        default: break;
        }
    }
}

int snack_display(void)
{
    int select;
    system("cls");
    printf("분식\n\n");
    printf("1. 라면\n");
    printf("2. 떡볶이\n");
    printf("3. 어묵\n");
    printf("4. 순대\n");
    printf("5. 튀김\n");
    printf("6. 만두\n");
    printf("7. 메인 메뉴로 이동\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}

void fried(void)
{
    system("cls");
    printf("튀김\n\n");
    int c;
    printf("1.감자튀김 2.고구마튀김(1개) 3.새우튀김(1개) 4.오징어튀김(1개)\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 156.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 39.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 36.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 12.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void dumpling(void)
{
    system("cls");
    printf("만두 (1개)\n\n");
    int c;
    printf("1.김치만두 2.야채만두 3.고기만두 4.새우만두 5.부추잡채만두 6.물만두 7.튀김만두\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 35.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 31.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 33.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 58.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 77.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 16.4; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 90.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void westernfood(void)
{
    int c;
    while ((c = western_display()) != 4)
    {
        switch (c)
        {
        case 1: soup();
            break;
        case 2: pasta();
            break;
        case 3: pilaf();
            break;
        default: break;
        }
    }
}

int western_display(void)
{
    int select;
    system("cls");
    printf("양식\n\n");
    printf("1. 스프 \n");
    printf("2. 파스타 \n");
    printf("3. 필라프 \n");
    printf("4. 메인 메뉴로 이동\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}

void soup(void)
{
    system("cls");
    printf("스프\n\n");
    int c;
    printf("1.크림스프 2.양송이스프 3.옥수수스프 4.야채스프\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 90.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 102.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 117.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 123.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void pasta(void)
{
    system("cls");
    printf("파스타\n\n");
    int c;
    printf("1.까르보나라 2.토마토파스타 3.로제파스타 4.알리오올리오\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 384.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 390.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 435.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 395.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void pilaf(void)
{
    system("cls");
    printf("필라프\n\n");
    int c;
    printf("1.새우 2.목살 3.우삼겹 4.베이컨\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 241.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 802.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 475.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 435.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void fastfood(void)
{
    int c;
    while ((c = fast_display()) != 5)
    {
        switch (c)
        {
        case 1: hamburger();
            break;
        case 2: pizza();
            break;
        case 3: chicken();
            break;
        case 4: soda();
            break;
        default: break;
        }
    }
}

int fast_display(void)
{
    int select;
    system("cls");
    printf("패스트푸드\n\n");
    printf("1. 햄버거 \n");
    printf("2. 피자 \n");
    printf("3. 치킨 \n");
    printf("4. 탄산음료 \n");
    printf("5. 메인 메뉴로 이동\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}

void hamburger(void)
{
    system("cls");
    printf("햄버거 (1개)\n\n");
    int c;
    printf("1.맥도날드 2.맘스터치 3.롯데리아 4.버거킹\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 263.6; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 594.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 476.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 619.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void pizza(void)
{
    system("cls");
    printf("피자 (1조각)\n\n");
    int c;
    printf("1.도미노 2.빅스타 3.미스터 4.피자스쿨 5.피나치공\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 321.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal);  break;
    case 2:
        cal += 298.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 259.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 260.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 301.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void chicken(void)
{
    system("cls");
    printf("치킨 (1마리)\n\n");
    int c;
    printf("1.굽네치킨 2.네네치킨 3.60계치킨 4.BHC 5.BBQ 6.교촌치킨\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 960.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 1930.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 2650.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 2350.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 2254.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 2233.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void soda(void)
{
    system("cls");
    printf("탄산음료 (250ml)\n\n");
    int c;
    printf("1.콜라 2.사이다 3.환타\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 108.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 110.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 136.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void dessert(void)
{
    int c;
    while ((c = dessert_display()) != 4)
    {
        switch (c)
        {
        case 1: fruit();
            break;
        case 2: cookie();
            break;
        case 3: cake();
            break;
        default: break;
        }
    }
}

int dessert_display(void)
{
    int select;
    system("cls");
    printf("디저트\n\n");
    printf("1. 과일 \n");
    printf("2. 쿠키 \n");
    printf("3. 케이크 \n");
    printf("4. 메인 메뉴로 이동\n\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &select);
    return select;
}

void fruit(void)
{
    system("cls");
    printf("과일\n\n");
    int c;
    printf("1.사과(1개) 2.포도(1컵) 3.복숭아(1개) 4.오렌지(1개) 5.망고(1개) 6.키위(1개)\n");
    printf("7.배(1개) 8.딸기(1컵) 9.수박(1컵) 10.멜론(1컵) 11.파인애플(1컵) 12.체리(1컵)\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 72.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 104.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 38.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 62.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 135.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 46.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 7:
        cal += 96.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 8:
        cal += 53.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 9:
        cal += 46.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 10:
        cal += 60.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 11:
        cal += 74.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 12:
        cal += 70.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void cookie(void)
{
    system("cls");
    printf("쿠키 (1개)\n\n");
    int c;
    printf("1.초코 2.버터 3. 밀크 4.견과류 5.카라멜 6.치즈\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 98.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 84.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 50.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 340.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 206.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 6:
        cal += 109.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void cake(void)
{
    system("cls");
    printf("케이크 (1조각)\n\n");
    int c;
    printf("1.치즈 2.크레이프 3.생크림 4.블루베리 5.초코\n");
    printf("메뉴번호 입력> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 520.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 2:
        cal += 524.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 3:
        cal += 174.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 4:
        cal += 348.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    case 5:
        cal += 235.0; printf("지금까지 선택한 음식의 칼로리는 %.1fkcal입니다", cal); break;
    default: break;
    }
    press_any_key();
}

void press_any_key(void)
{
    printf("\n\n");
    printf("아무 키나 누르면 이전 메뉴로 이동");
    _getch();
}

void calender() {
    int DAY[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    char memo[12][31][100];
    int year, lastyear, month, day, year2, month2, day2;
    int i, j, num, dayin, cnt = 0;
    char* ct;
    while (1) {
        printf("1. 메모 입력하기\n");
        printf("2. 메모 확인하기\n");
        printf("3. 달력 탭 종료\n\n번호> ");
        scanf("%d", &num);
        if (num == 1) {
            printf("\n찾고자 하는 달력의 연도와 월을 입력하세요.\n연도와 월> ");
            scanf("%d %d", &year, &month);
            lastyear = year - 1;
            if (year % 4 == 0 && month == 2)
                DAY[1] = 29;
            day = (lastyear + (lastyear / 4) - (lastyear / 100) + (lastyear / 400) + 1) % 7;

            for (i = 1; i < month; i++)
                day += DAY[i];
            day %= 7;
            printf("\n  일  월  화  수  목  금  토");

            for (i = -day; i < DAY[month]; i++) {
                if ((i + day) % 7 == 0)
                    printf("\n"); //출력 차례가 일요일이면 개행
                if (i < 0)
                    printf("    "); //1일 이전을 공백으로 채우기
                else
                    printf("%4d", i + 1); //날짜 출력
            }
            printf("\n\n일정을 메모할 날짜(일)를 적어주세요> ");
            scanf("%d", &dayin);
            printf("\n메모할 칼로리를 적어주세요> ");
            scanf("%s", memo[month][dayin]);
            printf("%s\n", memo[month][dayin]);
            printf("저장되었습니다.\n\n");
            cnt += 1;
        }
        else if (num == 2) {
            printf("\n몇 년 몇 월의 메모를 확인할까요?> ");
            scanf("%d %d", &year2, &month2);
            if (year2 == year && month2 == month) {
                printf("%d년 %d월에는 다음과 같은 메모가 있습니다.\n\n", year, month);
                for (i = 0; i < cnt; i++) {
                    printf("%d일 : %s\n", dayin, memo[month][dayin]);
                }
                printf("\n");
            }
            else
                printf("메모가 없습니다. \n\n");
        }
        else if (num == 3) {
            break;
        }
        else
            printf("없는 번호입니다. 다시 입력해주세요.\n\n");
    }
}