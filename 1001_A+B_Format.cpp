#include<stdio.h>
#include<malloc.h>
#include<math.h>
int main(){
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int res=a+b;
    int dig=0;
    int temp=abs(res);
    do{
        temp/=10;
        dig++;
    }while(temp>=1);//计算数字位数
    if(dig<4){
        printf("%d",res);
        return 0;//小于4位就直接输出
    }
    int temp2=abs(res);
    int *num=(int *)malloc(dig*sizeof(int));
    for(int i=0;i<dig;i++){
        num[i]=temp2%10;
        temp2/=10;//否则存入数组
    }
    if(res<0)printf("-");
    int comma=dig;
    for(int j=dig-1;j>=0;j--){
        printf("%d",num[j]);
        comma--;//判断剩下的数字还有几个，如果是三的倍数，需要加逗号
        if(comma%3==0&&j!=0){
            printf(",");
            comma=0;
        }
    }
    /*
    注意输出格式
    如8080
    输出结果应该是8,080
    而不是808,0
    更直接的做法是转成字符
    直接在输出字符时计算剩下的字符个数，判断是否该加逗号
    */
    printf("\n");
    return 0;
}