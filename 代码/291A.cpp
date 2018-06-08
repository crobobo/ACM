#include <stdio.h>
int main()
{
  int i,j,k,n,marknum=0,count=0;
  scanf("%d",&n);
  int id[1000];
  for(i=0;i<n;i++){
    scanf("%d",&id[i]);
  }//for
  if(n==1){
    printf("0");
    return 0;
  }//if
  else{
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        if(id[i]==id[j]&&id[i]!=-1&&id[i]!=0){
          marknum++;
          id[j]=-1;
        }//if

        if(marknum>=2){
          printf("-1");
          return 0;
        }//if
      }//for
      id[i]=-1;
      if(marknum==1){
        count++;
        marknum=0;

      }//if

      }//for
  }//else
printf("%d",count);
}
