void swap(int *p1, int *p2){
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}
void sortColors(int* a, int n){
    int i=0,zi=0,ti=n-1;
    while(i <= ti)
    {
        if(a[i] == 0)swap(&a[i++], &a[zi++]);
        else if(a[i]==1)i++;
        else swap(&a[i], &a[ti--]);
    }
}
