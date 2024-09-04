void printmonth(int year,int month,int weekend)
{
int j,d,mdays; 
printf("\n======= %d  月 =======\n",month);
printf(" 日 一 二 三 四 五 六\n");

//8利用变量j来循环打印出需要的空格数，三格为一个大格
for(j=1;j<weekend;j++)
{
printf("   "); 
} 
//9找出本年本月需要几天
mdays=monthdays(year,month); 
//10利用变量d循环打印出天数
for(d=1;d<=mdays;d++)
{
printf("%3d",d);
if(weekend%7==0)
printf("\n");
weekend++;
}
}
 
