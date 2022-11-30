#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define contant 16

typedef struct people  //����ü ����
{
    char ex[100];
    char s[10];
    double kg;  //������
    double min;  //�ð�(��)
}person;

void calender();

void exercise_cal();
void place();
void sikdan();
void food();

float cal = 0; //Į�θ� ���� ���� & �ʱ�ȭ

int menu_display(void); //�� �޴� ��� & ��ȣ �Է�

int korean_display(void); //�ѽ� �޴� ��� & ��ȣ �Է�
int chinese_display(void); //�߽� �޴� ��� & ��ȣ �Է�
int japanese_display(void); //�Ͻ� �޴� ��� & ��ȣ �Է�
int snack_display(void); //�н� �޴� ��� & ��ȣ �Է�
int western_display(void); //��� �޴� ��� & ��ȣ �Է�
int fast_display(void); //�н�ƮǪ�� �޴� ��� & ��ȣ �Է�
int dessert_display(void); //����Ʈ �޴� ��� & ��ȣ �Է�

void koreanfood(void); //�ѽ� �޴� ����
void chinesefood(void); //�߽� �޴� ����
void japanesefood(void); //�Ͻ� �޴� ����
void snackfood(void); //�н� �޴� ����
void westernfood(void); //��� �޴� ����
void fastfood(void); //�н�ƮǪ�� �޴� ����
void dessert(void); //����Ʈ �޴� ����

void rice(void); //�� ���� ����
void porridge(void); //�� ���� ����
void noodle(void); //���� ���� ����
void ksoup(void); //��&�� ���� ����
void stew(void); //� ���� ����
void roasted(void); //���� ���� ����
void boiled(void); //���� ���� ����
void stirfried(void); //���� ���� ����
void greens(void); //���� ���� ����
void salted(void); //���� ���� ����
void kimchi(void); //��ġ ���� ����
void pickled(void); //����� ���� ����
void steamed(void); //�� ���� ����

void fried(void); //Ƣ�� ���� ����
void dumpling(void); //���� ���� ����

void soup(void); //���� ���� ����
void pasta(void); //�Ľ�Ÿ ���� ����
void pilaf(void); //�ʶ��� ���� ����

void hamburger(void); //�ܹ��� ���� ����
void pizza(void); //���� ���� ����
void chicken(void); //ġŲ ���� ����
void soda(void); //ź������ ���� ����

void fruit(void); //���� ���� ����
void cookie(void); //��Ű ���� ����
void cake(void); //����ũ ���� ����

void press_any_key(void);  //�ƹ� Ű�� ������ ���� �޴��� �̵�

void main()
{
    while (1)
    {
        printf("           [�޴�] \n");
        printf("===============================================\n\n");
        printf("1. � ��\n");
        printf("2. �Ĵ� ��\n");
        printf("3. ���� ��\n");
        printf("4. �޷� ��\n");
        printf("5. ����\n");
        int numsel, numsel2, c;
        printf("\n��ȣ ���� : "); scanf("%d", &numsel);
        if (numsel == 1) {
            printf("\n===============================================\n\n");
            printf("1. �б� ��ó � ���\n");
            printf("2. � �� �Ҹ�Ǵ� Į�θ� �˾ƺ���\n");
            printf("\n��ȣ ���� : "); scanf("%d", &numsel2);
            if (numsel2 == 1) {
                place();
            }
            else if (numsel2 == 2) {
                exercise_cal();
            }
            else
                printf("1~2 ��ȣ�� �����Ͻ� �� �ֽ��ϴ�! \n");

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
            printf("1~4 ��ȣ�� �����Ͻ� �� �ֽ��ϴ�! \n");
    }
}

void exercise_cal()  //� �� �Ҹ�Ǵ� Į�θ� �Լ� ����
{
    person user;
    char* data[] = { "�����԰ȱ�", "���߿", "����", "�߷�",
        "����", "��", "�౸", "����Ŭ", "����", "���", "��ܿ�����" }; //� ���
    double kcal = 0; //Į�θ�
    double a, b, c, d, e, f, g, h, i, j, k, l;

    printf("\n===============================================\n\n");
    printf("������ : ");
    scanf("%lg", &user.kg); //������ �Է� �ޱ�
    printf("�ð�(��) : ");
    scanf("%lg", &user.min);  //�ð� �Է� �ޱ�


    while (1) {
        printf("\n�(end �Է� �� ����)\n");
        printf(" # �����԰ȱ�\n # ���߿\n # ������\n # ����\n # ��ܿ�����\n ");
        printf("# �߷�\n # ����\n # ��\n # �౸\n # ����Ŭ\n # ����\n # ���\n");
        printf("����> ");
        scanf("%s", user.ex);  //� �Է� �ޱ�
        if (strcmp(user.ex, "end") == 0)  //end �ۼ� �� �ݺ� ����
            break;

        //�� � �� Į�θ� ���
        else if (strcmp(user.ex, "�����԰ȱ�") == 0) {
            a = 3.8 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += a;
        }
        else if (strcmp(user.ex, "���߿") == 0) {
            b = 4.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += b;
        }
        else if (strcmp(user.ex, "������") == 0) {
            c = 4.5 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += c;
        }
        else if (strcmp(user.ex, "����") == 0) {
            d = 4.5 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += d;
        }
        else if (strcmp(user.ex, "�߷�") == 0) {
            e = 4.8 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += e;
        }
        else if (strcmp(user.ex, "����") == 0) {
            f = 4.8 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += f;
        }
        else if (strcmp(user.ex, "��") == 0) {
            g = 6.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += g;
        }
        else if (strcmp(user.ex, "�౸") == 0) {
            h = 7.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += h;
        }
        else if (strcmp(user.ex, "����Ŭ") == 0) {
            i = 8.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += i;
        }
        else if (strcmp(user.ex, "����") == 0) {
            j = 7.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += j;
        }
        else if (strcmp(user.ex, "���") == 0) {
            k = 7.5 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += k;
        }
        else if (strcmp(user.ex, "��ܿ�����") == 0) {
            l = 15.0 * 3.5 * (user.kg) * (user.min) * 5 / 1000;
            kcal += l;
        }
    }
    printf("�� �Ҹ�� Į�θ��� %gkcal�Դϴ�.\n\n", kcal);  //�� �Ҹ�� Į�θ� ���
}

void place() {
    int num;
    printf("\n===============================================\n\n");
    printf("�˾ƺ��� ���� ��Ҹ� �����ϼ���.\n\n");
    printf("1. �����\n");
    printf("2. ����õ\n");
    printf("3. �߶�õ\n");
    printf("\n��� ��ȣ> ");
    scanf("%d", &num);  //��ȣ �Է¹ޱ�

    switch (num) {  //�� ��ȣ �� ��� ����
    case 1:
        printf("\n���� ��ũ��� ������ ��ȯ ��å�η�, ");
        printf("������, ��ü� �ٴ� �� �ִ� ����ֽ����̴�.\n\n");
        break;
    case 2:
        printf("\n����� ����� ���赿���� �������ڴ��б����� ����� ����õ �����ű��� �ִ�. \n");
        printf("������б��� �ſ� ����� ������ ��å�ϱ� ���� ����̴�.\n\n");
        break;
    case 3:
        printf("\n��å�θ� ���� �ȴٰ� ������û ������ ���� ���� ������� ���ϴ� ¡�˴ٸ��� ���´�. \n");
        printf("������ �ڽ��� �ɹ��� �� �� �ִ�.\n\n");
        break;
    }
}

void sikdan()  //�Ĵ� �Լ� ����
{
    int num, randn, check, sel;
    person user;

    printf("\n===============================================\n\n");
    printf("�ð��븦 �Է����ּ���!\n");   //�ð��� �Է�
    printf("(��ħ, ����, ����, ����)\n");
    printf("\n�Է�> ");
    scanf("%s", user.s);

    if (strcmp(user.s, "��ħ") == 0)  //��ħ�Ļ�
    {
        printf("===============================================\n\n");
        printf("��ħ�Ļ�� ��õ�ϴ� ���ĵ��� �Ұ��ϰڽ��ϴ�.\n");
        printf("��ħ�Ļ翡�� �ݵ�� �����ϸ� ���� ����Ҵ� �ܹ����ε���, \n");
        printf("��ħ�Ļ�� ��õ�Ҹ��� �ܹ��� ��ǰ���δ� \n");
        printf("�׸����Ʈ, �ް�, ����, ��Ƽ��ġ� �ֽ��ϴ�. \n");
        printf("\n===============================================\n\n");
        printf("������ ��õ�ϴ� ������ ��ħ �޴��Դϴ�!\n");  // �޴� ��õ
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("������ ��ħ �޴��� �ҹ�, ������, ���ⱸ��, ���ڹ�, ���Ĺ�ħ�� ��õ�մϴ�! \n");
            break;
        case 2:
            printf("������ ��ħ �޴��� �ҹ�, �ް���, �����ġ����, ��ȣ�ڳ���, ��α⸦ ��õ�մϴ�! \n");
            break;
        case 3:
            printf("������ ��ħ �޴��� ������, �ް���, ���߰�����, ��Ÿ������������ ��õ�մϴ�! \n");
            break;
        case 4:
            printf("������ ��ħ �޴��� ���̹�, ��ä��, ������, ���߱�ġ�� ��õ�մϴ�! \n");
            break;
        default:
            break;
        }
    }

    if (strcmp(user.s, "����") == 0)  //���ɽĻ�
    {
        printf("===============================================\n\n");
        printf("���ɽĻ�� ��õ�ϴ� ���ĵ��� �Ұ��ϰڽ��ϴ�.\n");
        printf("���Ŀ� �ʿ��� ���Ḧ �����ؾ� �ϴ� ���ɽĻ�� �ܹ���, ä��, ���� �� ������ ���� �Ĵ����� �����ϴ� ���� �����ϴ�.\n");
        printf("�پ��� ����Ҹ� �����ϴ� ���� �޴��δ� �����尡 �ִµ���, \n");
        printf("�����带 ������ �����ߴ� ä�ҿ� ������ ������ �� �ֽ��ϴ�! \n");
        printf("��� ���� �Ѹ�ä��, �ñ�ġ�� ���� ��ä��, ���� �� ����ä��, ���� �� ������ ä��, �� �� ���� ������ ä�Ҹ� �����ϴ� ���� ���� ���� ����Դϴ�. \n");
        printf("\n===============================================\n");
        printf("������ ��õ�ϴ� ������ ���� �޴��Դϴ�!\n");  // �޴� ��õ
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("������ ���� �޴��� �쵿, ��¡�������, ���߰�����, �ܹ�����ħ�� ��õ�մϴ�! \n");
            break;
        case 2:
            printf("������ ���� �޴��� ��ġ����, ȣ�ڵ��屹, ��¡��ä��ħ, ������Ŭ�� ��õ�մϴ�! \n");
            break;
        case 3:
            printf("������ ���� �޴��� ��ġ����, ������, �ñ�ġ����, ���������� ��õ�մϴ�! \n");
            break;
        case 4:
            printf("������ ���� �޴��� ������, ���̹������屹, �ҺҰ��, �ᳪ����ħ, ���̼ҹ��̸� ��õ�մϴ�! \n");
            break;
        default:
            break;
        }
    }
    if (strcmp(user.s, "����") == 0)  //����Ļ�
    {
        printf("===============================================\n\n");
        printf("����Ļ�� ��õ�ϴ� ���ĵ��� �Ұ��ϰڽ��ϴ�.\n");
        printf("���� �ð���� ������ �ٸ��� ���� �������� �ʿ����� �ʱ� ������ ������ ���� �ʴ� ���� �߿��ѵ���, \n");
        printf("Į�θ��� ���ߵ� �ǰ��� ����ҷ� �Ĵ��� �����ϴ� ���� ��õ�մϴ�. \n");
        printf("���̳� ���� ��, ������ ���� ǳ���� �ܹ����� ä���� �������� �Ĵ��� �����ϸ� �����ϴ�. \n");
        printf("���� ������ ���� ���� ��ü ���� ������ ���� ���� �Դ´ٸ� ������ ���� �� �ֽ��ϴ�! \n");
        printf("\n===============================================\n");
        printf("������ ��õ�ϴ� ������ ���� �޴��Դϴ�!\n");  // �޴� ��õ
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("������ ���� �޴��� ��ġī������, �ʸ����ߺ���, ������ ��õ�մϴ�! \n");
            break;
        case 2:
            printf("������ ���� �޴��� ����, �̿���, ����, ��ҽӰ� ����, ���߱�ġ�� ��õ�մϴ�! \n");
            break;
        case 3:
            printf("������ ���� �޴��� ������, ���κ��, ��縮������ ��õ�մϴ�! \n");
            break;
        case 4:
            printf("������ ���� �޴��� ����, �Ұ��̿���, ��������, ������ġ, ��ä�� ��õ�մϴ�! \n");
            break;
        default:
            break;
        }
    }
    if (strcmp(user.s, "����") == 0)  //����
    {
        printf("===============================================\n\n");
        printf("����, ����Ʈ�� ��õ�ϴ� ���ĵ��� �Ұ��ϰڽ��ϴ�.\n");
        printf("�ǰ��� ���� ������ ��Ʈ���� �ؼҴ� ���� ü�� ���� ȿ���� �ִµ���, \n");
        printf("��õ ������ �߰����Դϴ�! \n");
        printf("�߰����� ����ȭ �������� ������ȯ ���濡 ������ �ǰ�, ü�� ������ ���� ���� �����̶�� �� �� �ֽ��ϴ�. \n");
        printf("����Ʈ ���� ��Ÿ�ΰ� �̳׶��� ����� ����ִ� �ǰ� ����Ʈ�� �����ϴ� ���� ��������, \n");
        printf("���ݸ��̳� Į���� ǳ���� ������ ���Ʈ�� �����ϴ� ���� �����ϴ�! \n");
        printf("\n===============================================\n");
        printf("������ ��õ�ϴ� ������ �����Դϴ�!\n");    // �޴� ��õ
        sel = rand() % 4;
        switch (sel)
        {
        case 1:
            printf("������ �������� �� �Դ� �䱸��Ʈ, ����, ����� ��õ�մϴ�! \n");
            break;
        case 2:
            printf("������ �������� �ٳ���, ���̽�ũ���� ��õ�մϴ�! \n");
            break;
        case 3:
            printf("������ �������� �ø���� ������ ��õ�մϴ�! \n");
            break;
        case 4:
            printf("������ �������� �������� ������ ��õ�մϴ�! \n");
            break;
        default:
            break;
        }
    }

    printf("\n===============================================\n\n");
    printf("������ �ǰ��� �Ĵ��� �����ϴ� �� �˾ƾ� �� ���ǻ����Դϴ�!\n");
    printf("(���ǻ����� �������� ��µ˴ϴ�.)\n\n");
    printf("���ǻ����� ����ұ��?(���ϸ� 1, ������ ������ 2�� �������ּ���.) : ");
    scanf("%d", &check);
    while (1)
    {
        if (check == 1) {  //���ǻ��� ����� ���ϴ� ���
            randn = rand() % 5;  //�������� ���� ���ϱ�
            if (randn == 1)
                printf("\n��Ʈ���� ���� �����ϼ���. �����а� �索�� ���� ��ȯ�� ������ �������ϴ�.\n\n");
            else if (randn == 2)
                printf("\n���ο� ������ �õ��غ��°� ����? ���� ���� �����̶� �پ��ϰ� �Ծ����.\n\n");
            else if (randn == 3)
                printf("\n����, �˷����� ���� ����Ͽ� ������ ��Ȳ�� �°� �����ϰ� �Ĵ��� �����ϼ���. \n\n");
            else if (randn == 4)
                printf("\n���ɴ뿡 ���� ���� ������ �ٸ��� �ؾ� �մϴ�. ���̿� ���� ���� �ʿ��� ����Ұ� �ٸ��ϴ�. \n\n");
            else if (randn == 5)
                printf("\n�����Ĵ��� ��Ű�鼭 ����Ǫ�峪 �������� �����սô�.\n\n");
            break;
        }
        else if (check == 2)   //���ǻ��� ����� ������ �ʴ� ���
        {
            printf("�ǰ� �Ĵ� ���� �����մϴ�. \n\n");
            break;
        }
        else   //�� ���� ��ȣ�� ������ ���
        {
            printf("���� ��ȣ�Դϴ�! 1���� 2�� �߿��� ��ȣ�� �ٽ� �������ּ���!> ");
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
    printf("�����Ͻ� Į�θ��� %.1fkcal�Դϴ�\n", cal);
    return 0;
}

int menu_display(void)
{
    int select;
    system("cls");
    printf("1. �ѽ� \n");
    printf("2. �߽� \n");
    printf("3. �Ͻ� \n");
    printf("4. �н� \n");
    printf("5. ��� \n");
    printf("6. �н�ƮǪ�� \n");
    printf("7. ����Ʈ \n");
    printf("8. ���� �� ����\n\n");
    printf("�޴���ȣ �Է�> ");
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
    printf("�ѽ�\n\n");
    printf("1. ��\n");
    printf("2. ��\n");
    printf("3. ����\n");
    printf("4. ��&��\n");
    printf("5. �\n");
    printf("6. ����\n");
    printf("7. ����\n");
    printf("8. ����\n");
    printf("9. ����\n");
    printf("10. ����\n");
    printf("11. ��ġ\n");
    printf("12. �����\n");
    printf("13. ��\n");
    printf("14. ���� �޴��� �̵�\n\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &select);
    return select;
}

void rice(void)
{
    system("cls");
    printf("��\n\n");
    int c;
    printf("1.�ҹ� 2.���̹� 3.���� 4.������ 5.���\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 313.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 318.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 336.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 347.7; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 351.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void porridge(void)
{
    system("cls");
    printf("��\n\n");
    int c;
    printf("1.ȣ���� 2.���� 3.���� 4. ��ġ�� 5.������ 6.��ä�� 7.����\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 76.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 171.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 246.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 120.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 236.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 119.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 114.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void noodle(void)
{
    system("cls");
    printf("����\n\n");
    int c;
    printf("1.��ġ���� 2.������� 3.�̸� 4.Į���� 5.���ø� 6.����ø� 7.�޹б���\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 402.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 521.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 559.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 285.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 435.8; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 442.1; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 312.1; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void ksoup(void)
{
    system("cls");
    printf("��&��\n\n");
    int c;
    printf("1.������ 2.������ 3.����� 4.�ɰ��� 5.����\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 176.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 212.9; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 900.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 120.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 430.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void stew(void)
{
    system("cls");
    printf("�\n\n");
    int c;
    printf("1.û����� 2.����� 3.��ġ� 4.������� 5.���κ��\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 117.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 95.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 113.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 148.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 208.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void roasted(void)
{
    system("cls");
    printf("����\n\n");
    int c;
    printf("1.���� 2.�κ� 3.�Ұ�� 4.���� 5.�������ν� 6.������ 7.���� 8.��� 9.���� 10.��������\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 124.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 107.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 170.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 212.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 82.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 83.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 189.7; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 8:
        cal += 224.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 9:
        cal += 59.8; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 10:
        cal += 497.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void boiled(void)
{
    system("cls");
    printf("����\n\n");
    int c;
    printf("1.��ġ 2.���� 3.�ڴٸ� 4.�κ� 5.�� 6.���߸���������\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 140.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 234.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 117.2; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 133.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 18.4; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 96.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void stirfried(void)
{
    system("cls");
    printf("����\n\n");
    int c;
    printf("1.������ 2.���� 3.����ä 4.���� 5.� 6.���� 7.��ġ����\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 240.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 50.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 85.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 58.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 144.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 379.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 63.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void greens(void)
{
    system("cls");
    printf("��ħ\n\n");
    int c;
    printf("1.�ñ�ġ���� 2.�ᳪ�� 3.��縮���� 4.�������� 5.���������� 6.�̿��ٱ� 7.���ֳ��� 8.���̳���\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 53.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 39.4; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 73.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 35.9; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 58.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 55.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 13.7; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 8:
        cal += 21.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void salted(void)
{
    system("cls");
    printf("����\n\n");
    int c;
    printf("1.â���� 2.����� 3.��¡���� 4.����� 5.��ġ�� 6.�öѱ��� 7.������\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 17.4; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 18.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 11.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 12.9; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 17.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 13.2; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 21.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void kimchi(void)
{
    system("cls");
    printf("��ġ\n\n");
    int c;
    printf("1.���߱�ġ 2.��α� 3.������ġ 4.��ġ�� 5.����ġ 6.���̼ҹ��� 7.�Ѱ���ġ 8.���߰�����\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 10.8; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 16.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 11.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 11.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 24.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 21.3; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 15.5; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 8:
        cal += 47.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void pickled(void)
{
    system("cls");
    printf("�����\n\n");
    int c;
    printf("1.�Ž������ 2.��������� 3.���������\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 30.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 23.9; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 10.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void steamed(void)
{
    system("cls");
    printf("��\n\n");
    int c;
    printf("1.��� 2.�Ʊ��� 3.����� 4.�ع���\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 200.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 99.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 168.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 273.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
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
        printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal);
        press_any_key();
    }
}

int chinese_display(void)
{
    int select;
    system("cls");
    printf("�߽�\n\n");
    printf("1. ¥��� \n");
    printf("2. «�� \n");
    printf("3. ������ \n");
    printf("4. ������ \n");
    printf("5. ��ǳ�� \n");
    printf("6. ������ \n");
    printf("7. ������ä \n");
    printf("8. ���꽽 \n");
    printf("9. �Ⱥ�ä \n");
    printf("10. ���� �޴��� �̵�\n\n");
    printf("�޴���ȣ �Է�> ");
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
        printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal);
        press_any_key();
    }
}

int japanese_display(void)
{
    int select;
    system("cls");
    printf("�Ͻ�\n\n");
    printf("1. �쵿 \n");
    printf("2. ������ \n");
    printf("3. �Ե� \n");
    printf("4. ���� \n");
    printf("5. ��� \n");
    printf("6. ��� \n");
    printf("7. �ҹ� \n");
    printf("8. Ÿ�ھ߳� \n");
    printf("9. �������\n");
    printf("10. ���� �޴��� �̵�\n\n");
    printf("�޴���ȣ �Է�> ");
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
            printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal);
            press_any_key(); break;
        case 2:
            cal += 230.0;
            printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal);
            press_any_key(); break;
        case 3:
            cal += 241.0;
            printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal);
            press_any_key(); break;
        case 4:
            cal += 133.0;
            printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal);
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
    printf("�н�\n\n");
    printf("1. ���\n");
    printf("2. ������\n");
    printf("3. �\n");
    printf("4. ����\n");
    printf("5. Ƣ��\n");
    printf("6. ����\n");
    printf("7. ���� �޴��� �̵�\n\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &select);
    return select;
}

void fried(void)
{
    system("cls");
    printf("Ƣ��\n\n");
    int c;
    printf("1.����Ƣ�� 2.����Ƣ��(1��) 3.����Ƣ��(1��) 4.��¡��Ƣ��(1��)\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 156.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 39.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 36.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 12.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void dumpling(void)
{
    system("cls");
    printf("���� (1��)\n\n");
    int c;
    printf("1.��ġ���� 2.��ä���� 3.��⸸�� 4.���츸�� 5.������ä���� 6.������ 7.Ƣ�踸��\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 35.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 31.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 33.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 58.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 77.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 16.4; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 90.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
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
    printf("���\n\n");
    printf("1. ���� \n");
    printf("2. �Ľ�Ÿ \n");
    printf("3. �ʶ��� \n");
    printf("4. ���� �޴��� �̵�\n\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &select);
    return select;
}

void soup(void)
{
    system("cls");
    printf("����\n\n");
    int c;
    printf("1.ũ������ 2.����̽��� 3.���������� 4.��ä����\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 90.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 102.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 117.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 123.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void pasta(void)
{
    system("cls");
    printf("�Ľ�Ÿ\n\n");
    int c;
    printf("1.������� 2.�丶���Ľ�Ÿ 3.�����Ľ�Ÿ 4.�˸����ø���\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 384.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 390.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 435.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 395.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void pilaf(void)
{
    system("cls");
    printf("�ʶ���\n\n");
    int c;
    printf("1.���� 2.��� 3.���� 4.������\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 241.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 802.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 475.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 435.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
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
    printf("�н�ƮǪ��\n\n");
    printf("1. �ܹ��� \n");
    printf("2. ���� \n");
    printf("3. ġŲ \n");
    printf("4. ź������ \n");
    printf("5. ���� �޴��� �̵�\n\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &select);
    return select;
}

void hamburger(void)
{
    system("cls");
    printf("�ܹ��� (1��)\n\n");
    int c;
    printf("1.�Ƶ����� 2.������ġ 3.�Ե����� 4.����ŷ\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 263.6; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 594.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 476.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 619.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void pizza(void)
{
    system("cls");
    printf("���� (1����)\n\n");
    int c;
    printf("1.���̳� 2.��Ÿ 3.�̽��� 4.���ڽ��� 5.�ǳ�ġ��\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 321.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal);  break;
    case 2:
        cal += 298.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 259.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 260.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 301.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void chicken(void)
{
    system("cls");
    printf("ġŲ (1����)\n\n");
    int c;
    printf("1.����ġŲ 2.�׳�ġŲ 3.60��ġŲ 4.BHC 5.BBQ 6.����ġŲ\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 960.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 1930.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 2650.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 2350.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 2254.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 2233.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void soda(void)
{
    system("cls");
    printf("ź������ (250ml)\n\n");
    int c;
    printf("1.�ݶ� 2.���̴� 3.ȯŸ\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 108.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 110.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 136.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
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
    printf("����Ʈ\n\n");
    printf("1. ���� \n");
    printf("2. ��Ű \n");
    printf("3. ����ũ \n");
    printf("4. ���� �޴��� �̵�\n\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &select);
    return select;
}

void fruit(void)
{
    system("cls");
    printf("����\n\n");
    int c;
    printf("1.���(1��) 2.����(1��) 3.������(1��) 4.������(1��) 5.����(1��) 6.Ű��(1��)\n");
    printf("7.��(1��) 8.����(1��) 9.����(1��) 10.���(1��) 11.���ξ���(1��) 12.ü��(1��)\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 72.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 104.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 38.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 62.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 135.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 46.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 7:
        cal += 96.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 8:
        cal += 53.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 9:
        cal += 46.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 10:
        cal += 60.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 11:
        cal += 74.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 12:
        cal += 70.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void cookie(void)
{
    system("cls");
    printf("��Ű (1��)\n\n");
    int c;
    printf("1.���� 2.���� 3. ��ũ 4.�߰��� 5.ī��� 6.ġ��\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 98.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 84.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 50.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 340.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 206.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 6:
        cal += 109.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void cake(void)
{
    system("cls");
    printf("����ũ (1����)\n\n");
    int c;
    printf("1.ġ�� 2.ũ������ 3.��ũ�� 4.��纣�� 5.����\n");
    printf("�޴���ȣ �Է�> ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        cal += 520.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 2:
        cal += 524.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 3:
        cal += 174.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 4:
        cal += 348.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    case 5:
        cal += 235.0; printf("���ݱ��� ������ ������ Į�θ��� %.1fkcal�Դϴ�", cal); break;
    default: break;
    }
    press_any_key();
}

void press_any_key(void)
{
    printf("\n\n");
    printf("�ƹ� Ű�� ������ ���� �޴��� �̵�");
    _getch();
}

void calender() {
    int DAY[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    char memo[12][31][100];
    int year, lastyear, month, day, year2, month2, day2;
    int i, j, num, dayin, cnt = 0;
    char* ct;
    while (1) {
        printf("1. �޸� �Է��ϱ�\n");
        printf("2. �޸� Ȯ���ϱ�\n");
        printf("3. �޷� �� ����\n\n��ȣ> ");
        scanf("%d", &num);
        if (num == 1) {
            printf("\nã���� �ϴ� �޷��� ������ ���� �Է��ϼ���.\n������ ��> ");
            scanf("%d %d", &year, &month);
            lastyear = year - 1;
            if (year % 4 == 0 && month == 2)
                DAY[1] = 29;
            day = (lastyear + (lastyear / 4) - (lastyear / 100) + (lastyear / 400) + 1) % 7;

            for (i = 1; i < month; i++)
                day += DAY[i];
            day %= 7;
            printf("\n  ��  ��  ȭ  ��  ��  ��  ��");

            for (i = -day; i < DAY[month]; i++) {
                if ((i + day) % 7 == 0)
                    printf("\n"); //��� ���ʰ� �Ͽ����̸� ����
                if (i < 0)
                    printf("    "); //1�� ������ �������� ä���
                else
                    printf("%4d", i + 1); //��¥ ���
            }
            printf("\n\n������ �޸��� ��¥(��)�� �����ּ���> ");
            scanf("%d", &dayin);
            printf("\n�޸��� Į�θ��� �����ּ���> ");
            scanf("%s", memo[month][dayin]);
            printf("%s\n", memo[month][dayin]);
            printf("����Ǿ����ϴ�.\n\n");
            cnt += 1;
        }
        else if (num == 2) {
            printf("\n�� �� �� ���� �޸� Ȯ���ұ��?> ");
            scanf("%d %d", &year2, &month2);
            if (year2 == year && month2 == month) {
                printf("%d�� %d������ ������ ���� �޸� �ֽ��ϴ�.\n\n", year, month);
                for (i = 0; i < cnt; i++) {
                    printf("%d�� : %s\n", dayin, memo[month][dayin]);
                }
                printf("\n");
            }
            else
                printf("�޸� �����ϴ�. \n\n");
        }
        else if (num == 3) {
            break;
        }
        else
            printf("���� ��ȣ�Դϴ�. �ٽ� �Է����ּ���.\n\n");
    }
}