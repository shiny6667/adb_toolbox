# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(){
   int a=0;    //������������
    void icebox();      //����һ������
    void black_place(); //����һ������
    void island();      //һ�����
    void dog();         //����Ȩ�޹�
    void help();        //����
    
    printf("\n��ܰ��ʾ����ȷ�������ֻ����� USB ����ʼ�մ򿪣����� USB ��������Ϊ������硹(MIUI �迪����USB ���ԣ���ȫ���ã���)\n");          //������
    printf("\n                                                   ��ӭ����Ѱǧ�ٶȵĹ�����\n\n");
    printf("***********************************************************************************************************************\n");
    printf("*                                                                                                                     *\n");
    printf("*                                                        ����:Ѱǧ�ٶ�                                                *\n");
    printf("*                                                        �汾:v1.0.1                                                  *\n");
    printf("*                                                        ����:����adbһ������                                         *\n");
    printf("*                                                                                                                     *\n");
    printf("***********************************************************************************************************************\n");
    printf("------------------------------------------------------------�����б�-----------------------------------------------------\n");
    printf("1.һ���������\n\n");
    printf("2.һ���������\n\n");
    printf("3.һ������island������\n\n");
    printf("4.һ������Ȩ�޹�\n\n");
    printf("���๦�����ڿ�����...\n\n");
    printf("666.����\n");
    printf("999.�˳�\n");
    printf("����������Ҫ�Ĺ��ܣ�");
    system("color f");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        icebox();             //�������
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 2:
        black_place();       //�������
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 3:
        island();            //���
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 4:
        dog();               //����Ȩ�޹�
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 666:
        help();             //�ṩ����
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 999:
        system("exit");
    default:
        printf("������������=_=��Ϊ�����������ԣ����γ������н�����");
        system("pause");    //��������˳�
        system("exit");     //�˳�
        break;
    }
}




void icebox()               //�������
{   
    system("icebox.bat");
}

void black_place()          //�������
{   
    system("����.bat");
}

void island()               //���
{
    system("island.bat");
}

void dog()                  //����Ȩ�޹�
{
    system("Ȩ�޹�.bat");
}

void help()                 //ʹ�ð���
{
    printf("������\n1��MIUI��С�ף�\n����Ҫ�ڡ�������ѡ������á�USB ���ԣ���ȫѡ�����\n���� MIUI 11 �����߰汾��������������е��û�Ӧ������Ȩ�ޡ�\n���⣬������ MIUI �ġ���ȫ��Ӧ����ʹ��ɨ�蹦�ܣ���Ϊ������á�������ѡ���\n2��ColorOS (OPPO) & OxygenOS (һ��)\n����Ҫ�ڡ�������ѡ��н��á�Ȩ�޼�ء���\n3��Flyme�����壩\n����Ҫ�ڡ�������ѡ��н��á�Flyme ֧����������\n4��EMUI����Ϊ��\n����Ҫ�ڡ�������ѡ������á��ڡ����շѡ�ģʽ������ ADB ����ѡ���\n5��OriginOS (vivo)\nOriginOS��ϵͳ���ò�֧�ַ�������Ҫ�ڡ�������ѡ��п�����ǿ�ƻ�ɵ�����С����ʹ������\n");
}
