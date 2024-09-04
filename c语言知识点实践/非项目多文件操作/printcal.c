//3扩展printcal
void printcal(int year)
{
int month,weekend;
printf("=======%d年年历=======\n",year);
//4循环输出十二个月的月份天数
for(month=1;month<=12;month++)
{
//5用firstdays找出每个月的第一天是第几位  
weekend=firstdays(year,month);
//6printmonth打印出每个月	
printmonth(year,month,weekend);
} 
}
