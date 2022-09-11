#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,n,ans,p,loop=1,array[100],c,d,pos,t,y;
	do
	{
	printf("\nMENU\n1.Read\n2.Selection Sort\n3.Display Sorted Array\n4.exit::");
	printf("\nEnter your choice\n");
	scanf("%d",&ans);
	switch(ans)
	{
  case 1:
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
  scanf("%d", &array[c]);
  break;
  case 2:
    for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
  {
    pos = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[pos] > array[d])
        pos = d;
    }
    if (pos != c)
    {
      t = array[c];
      array[c] = array[pos];
      array[pos] = t;
    }
    for(y=0;y<n;y++)
    {
    	printf("%d\t",array[y]);
	}
	printf("\n\n");
  }
    printf("\nArray Sorted!!!\n");
		break;
		case 3:
    printf("Sorted list in ascending order:\n");
    for (c = 0; c < n; c++)
    printf("%d\n", array[c]);
    break;
		case 4:{
		loop=0;
        }break;
		default: printf("Invalid choice\n");
	}
	    }while(loop==1);

	}
