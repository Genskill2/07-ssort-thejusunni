void swap_max(int a[], int len, int pos)
  {
  int max=a[pos],maxp=pos,t=0;
  for(int i=pos;i<len;i++)
  {
  if (a[i]>max){
  max=a[i];
  maxp=i;
  }
  }
  t=a[maxp];
  a[maxp]=a[pos];
  a[pos]=t;
  
  
  }
void ssort(int a[], int len)
{
for(int i=0;i< len;i++)
  swap_max(a,len,i);
}
