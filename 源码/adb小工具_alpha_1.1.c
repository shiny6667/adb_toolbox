# include <stdio.h>
# include <stdlib.h>
int main(){
    int b=0,c=0;
    void help();        //帮助
    printf("---------------------------------------------------adb连接界面---------------------------------------------------------\n\n");
    system("adb devices");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    system("color b");
    printf("\n如果遇到\nList of devices attached\n那么请按1并回车\n");
    printf("\n如果遇到\n* daemon not running. starting it now on port 5037 *\n* daemon started successfully *\nList of devices attached\n那么请按2并回车\n\n");
    printf("如果一切顺利请按3并回车\n");
    scanf("%d",&b);
    do{
        switch (b)
        {
        case 1:
            printf("-----------------------------------------------------------------------------------------------------------------\n");
            printf("你可能：\n1.手机压根就没连\n2.连上了没有打开USB调试\nps:关于每个手机的差异请输入666查看具体原因\n3.换根数据线\n4.我也不会了，来群里问问\n");
            b=3;
            printf("-----------------------------------------------------------------------------------------------------------------\n");
            system("pause");
            break;
        case 2:
            printf("\n电脑端口占用，请保存好您电脑的数据，将会进行注销操作，您是否要继续？\n1.我已保存好数据，准备注销\n2.再等等\n");
            printf("请选择：");
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
    







