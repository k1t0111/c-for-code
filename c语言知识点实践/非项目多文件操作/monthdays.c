
//11��չ����monthdays 
int monthdays(int year,int month)
{
int z;
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:return 31; 
case 4:
case 6:
case 9:
case 11:return 30;
case 2:
//����ֵ��z���������귵��1ƽ�귵��2
{
z=isleapyear(year); 
if(z==1)
return 29;
else
return 28;
}	 
} 
} 
