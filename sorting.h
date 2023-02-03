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
      if(data[mi] > data[j]) mi = j;
    }
    swap(&data[i], &data[mi]);
    display(data, length);
    printf("\n");
  }
} 



void insertion(int a[],int n){


}



void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




