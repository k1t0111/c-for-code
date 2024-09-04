
//12函数firstday
int firstdays(int year,int month)
{
int w;
 //13基姆拉尔森公式 计算每个月的第一天是星期几 
if(month==1||month==2)
{
month+=12;
year--; 
}
w=(1+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
w++;
//14相当于将周几转换成一种第几位 
return w; 
}
