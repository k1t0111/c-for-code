//3��չprintcal
void printcal(int year)
{
int month,weekend;
printf("=======%d������=======\n",year);
//4ѭ�����ʮ�����µ��·�����
for(month=1;month<=12;month++)
{
//5��firstdays�ҳ�ÿ���µĵ�һ���ǵڼ�λ  
weekend=firstdays(year,month);
//6printmonth��ӡ��ÿ����	
printmonth(year,month,weekend);
} 
}
