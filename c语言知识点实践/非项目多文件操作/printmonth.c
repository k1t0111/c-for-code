void printmonth(int year,int month,int weekend)
{
int j,d,mdays; 
printf("\n======= %d  �� =======\n",month);
printf(" �� һ �� �� �� �� ��\n");

//8���ñ���j��ѭ����ӡ����Ҫ�Ŀո���������Ϊһ�����
for(j=1;j<weekend;j++)
{
printf("   "); 
} 
//9�ҳ����걾����Ҫ����
mdays=monthdays(year,month); 
//10���ñ���dѭ����ӡ������
for(d=1;d<=mdays;d++)
{
printf("%3d",d);
if(weekend%7==0)
printf("\n");
weekend++;
}
}
 
