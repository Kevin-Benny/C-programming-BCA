#include<stdio.h>
#include<float.h>
void main()
{
	int eid,exp,bs,jid,hra,pt;
	float da,np;
	printf("enter the employee ID");
	scanf("%d",&eid);
	printf("enter the experience");
	scanf("%d",&exp);
	printf("enter the basic salary");
	scanf("%d",&bs);
	printf("enter the job ID");
	scanf("%d",&jid);
	switch(jid)
{
	case 1:
	hra=5500;
	da=(45*bs)/100;
	pt=100;
	break;
	case 2:
	hra=4500;
	da=(40*bs)/100;
	pt=100;
	break;
	default:
	hra=3500;
	da=(35*bs)/100;
	pt=0;
	break;
}
np=hra*da-pt;
np=np-(np*4)/100;
printf("\n net payment=%f",np);
getch();
}
}

