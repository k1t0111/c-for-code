
//12����firstday
int firstdays(int year,int month)
{
int w;
 //13��ķ����ɭ��ʽ ����ÿ���µĵ�һ�������ڼ� 
if(month==1||month==2)
{
month+=12;
year--; 
}
w=(1+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
w++;
//14�൱�ڽ��ܼ�ת����һ�ֵڼ�λ 
return w; 
}
