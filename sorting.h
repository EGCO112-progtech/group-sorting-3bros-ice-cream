// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void selectionSort(int data[], int length) { 
  int i, j, mi; 
  for(int i = 0; i < length - 1; i++) {
    mi = i;
    for(int j = i+1; j < length; j++) {
      if(data[mi] < data[j]) mi = j;
    }
    swap(&data[i], &data[mi]);
    display(data, length);
    printf("\n");
  }
  printf("\n");
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
  printf("\n");
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
  printf("\n");
  if(sorted==0) break;
 }
  
}




