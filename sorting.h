// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int x[],int n){
  int j,i;
  for(int i = 1; i<n; i++){
    int value = x[i];
    for(j=i-1; j>=0; j--){
      if(value < x[j]) break;
      else x[j+1] = x[j];
      display(x,n);
    }
    x[j+1] = value;
    display(x,n);
    printf("\n");
  }
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
  
for(i=0;i<n-1;i++){
  sorted=0;
  for(j=0;j<n-1-i;j++){
    if(a[j+1]>a[j]){
      swap(&a[j+1],&a[j]);
      sorted=1;
      
    }
    display(a,n);
  
  }
  
  if(sorted==0) break;
  printf("\n");
 }
  
}




