# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(){
   int a=0;    //检测输入的数字
    void icebox();      //冰箱一键激活
    void black_place(); //黑域一键激活
    void island();      //一键激活岛
    void dog();         //激活权限狗
    void help();        //帮助
    
    printf("\n温馨提示：请确保您的手机保持 USB 调试始终打开，设置 USB 连接设置为「仅充电」(MIUI 需开启「USB 调试（安全设置）」)\n");          //主界面
    printf("\n                                                   欢迎来到寻千百度的工具箱\n\n");
    printf("***********************************************************************************************************************\n");
    printf("*                                                                                                                     *\n");
    printf("*                                                        作者:寻千百度                                                *\n");
    printf("*                                                        版本:v1.0.1                                                  *\n");
    printf("*                                                        介绍:简易adb一键工具                                         *\n");
    printf("*                                                                                                                     *\n");
    printf("***********************************************************************************************************************\n");
    printf("------------------------------------------------------------功能列表-----------------------------------------------------\n");
    printf("1.一键激活冰箱\n\n");
    printf("2.一键激活黑域\n\n");
    printf("3.一键激活island（岛）\n\n");
    printf("4.一键激活权限狗\n\n");
    printf("更多功能正在开发中...\n\n");
    printf("666.帮助\n");
    printf("999.退出\n");
    printf("请输入您需要的功能：");
    system("color f");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        icebox();             //激活冰箱
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 2:
        black_place();       //激活黑域
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 3:
        island();            //激活岛
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 4:
        dog();               //激活权限狗
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 666:
        help();             //提供帮助
        system("pause");
        system("cls");
        system("main.exe");
        system("exit");
        break;
    case 999:
        system("exit");
    default:
        printf("大哥大姐您输错了=_=，为了让您长记性，本次程序运行结束，");
        system("pause");    //按任意键退出
        system("exit");     //退出
        break;
    }
}




void icebox()               //激活冰箱
{   
    system("icebox.bat");
}

void black_place()          //激活黑域
{   
    system("黑域.bat");
}

void island()               //激活岛
{
    system("island.bat");
}

void dog()                  //激活权限狗
{
    system("权限狗.bat");
}

void help()                 //使用帮助
{
    printf("帮助：\n1、MIUI（小米）\n您需要在“开发者选项”中启用“USB 调试（安全选项）”。\n对于 MIUI 11 及更高版本，您必须向软件中的用户应用授予权限。\n另外，请勿在 MIUI 的“安全”应用中使用扫描功能，因为它会禁用“开发者选项”。\n2、ColorOS (OPPO) & OxygenOS (一加)\n您需要在“开发者选项”中禁用“权限监控”。\n3、Flyme（魅族）\n您需要在“开发者选项”中禁用“Flyme 支付保护”。\n4、EMUI（华为）\n您需要在“开发者选项”中启用“在“仅收费”模式下允许 ADB 调试选项”。\n5、OriginOS (vivo)\nOriginOS的系统设置不支持分屏，需要在“开发者选项”中开启“强制活动可调整大小”，使用它。\n");
}
