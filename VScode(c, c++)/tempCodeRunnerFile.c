    int n;
    int d=0;
    scanf("%d",&n);
    for(int i = n; i>0;i--){
        if(n%i==0){
            d+=1;
        }
    }
    if(d==2){
        printf("Prime\n");
        }
    else{
        printf("No\n");
    }