# include <stdio.h>
# include <stdlib.h>
int main(){
    int b=0,c=0;
    void help();        //����
    printf("---------------------------------------------------adb���ӽ���---------------------------------------------------------\n\n");
    system("adb devices");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    system("color b");
    printf("\n�������\nList of devices attached\n��ô�밴1���س�\n");
    printf("\n�������\n* daemon not running. starting it now on port 5037 *\n* daemon started successfully *\nList of devices attached\n��ô�밴2���س�\n\n");
    printf("���һ��˳���밴3���س�\n");
    scanf("%d",&b);
    do{
        switch (b)
        {
        case 1:
            printf("-----------------------------------------------------------------------------------------------------------------\n");
            printf("����ܣ�\n1.�ֻ�ѹ����û��\n2.������û�д�USB����\nps:����ÿ���ֻ��Ĳ���������666�鿴����ԭ��\n3.����������\n4.��Ҳ�����ˣ���Ⱥ������\n");
            b=3;
            printf("-----------------------------------------------------------------------------------------------------------------\n");
            system("pause");
            break;
        case 2:
            printf("\n���Զ˿�ռ�ã��뱣��������Ե����ݣ��������ע�����������Ƿ�Ҫ������\n1.���ѱ�������ݣ�׼��ע��\n2.�ٵȵ�\n");
            printf("��ѡ��");
            scanf("%d",&c);
            if(c==1)
            {
                system("shutdown -l");
            }
            else
            {   
                b=3;
                exit(0);
            }
            break;
        }
    }while(b<=2);
    system("cls");
    system("main.exe");
    system("exit");
    return 0;
}
    







