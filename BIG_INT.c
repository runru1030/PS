int isInvalid(const char* num){
// Insert source code for checking validity of num
        int i;
        int len=0;
        for(i=0;num[i]!='\0';i++)len++;
        if(len-1<100&&num[0]!='-'){
                for(i=0;i<=len-1;i++){
                        if('0'>num[i]||num[i]>'9')return 1;
                }
                return 0;
        }
        else if(len-1<=100&&num[0]=='-'){
                for(i=1;i<=len-1;i++){
                        if('0'>num[i]||num[i]>'9')return 1;
                }
                return 0;
        }
        else return 1;
}
BIGINT stringToBigInt(const char* num){
        BIGINT r = {{0}, 0};
// Insrt source code for converting a string to a variable with BIGINT type here....
        int i, len=0;
        for(i=0;i<=100;i++)r.d[i]= -1;
        for(i=0;num[i]!='\0';i++)len++;
        if(num[0]=='-'){
                r.sign= -1;
                for(i=0;i<=len-2;i++){
                        r.d[i]=num[i+1]-'0';
                }
        }
        else if(num[0]!='-'){
                r.sign= -2;
                for(i=0;i<=len-1;i++){
                        r.d[i]=num[i]-'0';
                }
        }
        return r;
}
void printBigInt(const BIGINT n){
// Insert source code for printing out n here....
        int i;
        if(n.sign==-1)printf("-");
        for(i=0;n.d[i]>=0&&i<100;i++)printf("%d", n.d[i]);
        return;
}

BIGINT add(const BIGINT A, const BIGINT B){
        BIGINT r = {{0}, 0};
// Insert source code here.....
        int a[100]={0};
        int b[100]={0};
        int i, j, lenA, lenB;
        for(i=0;i<=100;i++)r.d[i]= -1;
        for(i=0, lenA=0;A.d[i]>=0;i++)lenA++;
        for(i=0, lenB=0;B.d[i]>=0;i++)lenB++;
        if(lenA>lenB){
                for(i=0;lenB-1-i>=0;i++)b[lenA-1-i]=B.d[lenB-1-i];
                if(A.sign==B.sign){
                        r.sign=A.sign;
                        for(i=0;lenA-1-i>=0;i++){
                                 if(A.d[0]+b[0]>10||(A.d[0]+b[0]==9&&A.d[1]+b[1]>=10)){
                                        r.d[lenA-i]=A.d[lenA-1-i]+b[lenA-1-i];
                                        if(i>0&&r.d[lenA-i+1]>=10){
                                                r.d[lenA-i+1]-=10;
                                                r.d[lenA-i]+=1;
                                        }
                                 }
                                else{
                                        r.d[lenA-1-i]=A.d[lenA-1-i]+b[lenA-1-i];
                                        if(i>0&&r.d[lenA-i]>=10){
                                                r.d[lenA-i]-=10;
                                                r.d[lenA-1-i]+=1;
                                        }
                                }
                        }
                }
                if(A.sign!=B.sign){
                        r.sign=A.sign;
                        for(i=0;lenA-1-i>=0;i++){
                                        r.d[lenA-1-i]=A.d[lenA-1-i]-b[lenA-1-i];
                                        if(i>0&&r.d[lenA-i]<0){
                                                r.d[lenA-i]+=10;
                                                r.d[lenA-1-i]-=1;
                                        }
                        }
                        if(r.d[0]==0){
                                for(i=0, lenA=0;r.d[i]==0&&r.d[i+1]>=0;i++)lenA++;
                                for(i=0;0<=r.d[lenA+i];i++)r.d[i]=r.d[lenA+i];
                                for(j=0;j<=lenA;j++,i++)r.d[i]= -1;
                        }
                }


        }
        else if(lenB>lenA){
                for(i=0;lenA-1-i>=0;i++)a[lenB-1-i]=A.d[lenA-1-i];
                if(A.sign==B.sign){
                        r.sign=B.sign;
                        for(i=0;lenB-1-i>=0;i++){
                                 if(a[0]+B.d[0]>10||(a[0]+B.d[0]==9&&a[1]+B.d[1]>=10)){
                                        r.d[lenB-i]=a[lenB-1-i]+B.d[lenB-1-i];
                                        if(i>0&&r.d[lenB-i+1]>=10){
                                                r.d[lenB-i+1]-=10;
                                                r.d[lenB-i]+=1;
                                        }
                                 }
                                else{
                                        r.d[lenB-1-i]=a[lenB-1-i]+B.d[lenB-1-i];
                                                                                                                         if(i>0&&r.d[lenB-i]>=10){
                                                r.d[lenB-i]-=10;
                                                r.d[lenB-1-i]+=1;
                                        }
                                }
                        }
               }
                if(A.sign!=B.sign){
                        r.sign=B.sign;
                        for(i=0;lenB-1-i>=0;i++){
                                         r.d[lenB-1-i]=B.d[lenB-1-i]-a[lenB-1-i];
                                        if(i>0&&r.d[lenB-i]<0){
                                                r.d[lenB-i]+=10;
                                                r.d[lenB-1-i]-=1;
                                        }
                        }
                        if(r.d[0]==0){
                                for(i=0, lenA=0;r.d[i]==0&&r.d[i+1]>=0;i++)lenA++;
                                for(i=0;0<=r.d[lenA+i];i++)r.d[i]=r.d[lenA+i];
                                for(j=0;j<=lenA;j++,i++)r.d[i]= -1;
                        }

                }

        }
        else if(lenA==lenB){
                if(A.sign==B.sign){
                        r.sign=B.sign;
                        for(i=0;lenB-1-i>=0;i++){
                                 if(A.d[0]+B.d[0]>10||(A.d[0]+B.d[0]==9&&A.d[1]+B.d[1]>=10)){
                                        r.d[lenB-i]=A.d[lenB-1-i]+B.d[lenB-1-i];
                                        if(i>0&&r.d[lenB-i+1]>=10){
                                                r.d[lenB-i+1]-=10;
                                                r.d[lenB-i]+=1;
                                        }
                                 }
                                else{
                                        r.d[lenB-1-i]=A.d[lenB-1-i]+B.d[lenB-1-i];
                                        if(i>0&&r.d[lenB-i]>=10){
                                                r.d[lenB-i]-=10;
                                                r.d[lenB-1-i]+=1;
                                        }
                                }
                        }
                }
                if(A.sign!=B.sign){
                        for(i=0,j=0;i<=lenA-1&&j==0;i++)j=A.d[i]-B.d[i];
                        if(j>0){
                                for(i=0;lenB-1-i>=0;i++)b[lenB-1-i]=B.d[lenB-1-i];
                                for(i=0;lenA-1-i>=0;i++)a[lenA-1-i]=A.d[lenA-1-i];
                                r.sign=A.sign;
                        }
                        else if(j<0){
                                for(i=0;lenB-1-i>=0;i++)a[lenB-1-i]=B.d[lenB-1-i];
                                for(i=0;lenA-1-i>=0;i++)b[lenA-1-i]=A.d[lenA-1-i];
                                r.sign=B.sign;
                        }
                        else {
                                for(i=0;lenB-1-i>=0;i++)a[lenB-1-i]=B.d[lenB-1-i];
                                for(i=0;lenA-1-i>=0;i++)b[lenA-1-i]=A.d[lenA-1-i];
                                r.sign=-2;
                        }
                        for(i=0;lenB-1-i>=0;i++){
                                        r.d[lenB-1-i]=a[lenB-1-i]-b[lenB-1-i];
                                        if(i>0&&r.d[lenB-i]<0){
                                                r.d[lenB-i]+=10;
                                                r.d[lenB-1-i]-=1;
                                        }
                        }
                        if(r.d[0]==0){
                                for(i=0, lenA=0;r.d[i]==0&&r.d[i+1]>=0;i++)lenA++;
                                for(i=0;0<=r.d[lenA+i];i++)r.d[i]=r.d[lenA+i];
                                for(j=0;j<=lenA;j++,i++)r.d[i]= -1;
                        }

               }


        }
        return r;       // Here, r becomes A + B....
}
BIGINT sub(const BIGINT A, const BIGINT B){
        BIGINT r = {{0}, 0};
// Insert source code here.....
        int a[100]={0};
        int b[100]={0};
        int i, j, lenA, lenB;
        for(i=0;i<=100;i++)r.d[i]= -1;
        for(i=0, lenA=0;A.d[i]>=0;i++)lenA++;
        for(i=0, lenB=0;B.d[i]>=0;i++)lenB++;
        if(lenA>lenB){
                for(i=0;lenB-1-i>=0;i++)b[lenA-1-i]=B.d[lenB-1-i];
                if(A.sign!=B.sign){
                        r.sign=A.sign;
                        for(i=0;lenA-1-i>=0;i++){
                                 if(A.d[0]+b[0]>10||(A.d[0]+b[0]==9&&A.d[1]+b[1]>=10)){
                                        r.d[lenA-i]=A.d[lenA-1-i]+b[lenA-1-i];
                                        if(i>0&&r.d[lenA-i+1]>=10){
                                                r.d[lenA-i+1]-=10;
                                                r.d[lenA-i]+=1;
                                        }
                                 }
                                else{
                                        r.d[lenA-1-i]=A.d[lenA-1-i]+b[lenA-1-i];
                                        if(i>0&&r.d[lenA-i]>=10){
                                                r.d[lenA-i]-=10;
                                                r.d[lenA-1-i]+=1;
                                        }
                                }
                        }
                }
                if(A.sign==B.sign){
                        r.sign=A.sign;
                        for(i=0;lenA-1-i>=0;i++){
                                        r.d[lenA-1-i]=A.d[lenA-1-i]-b[lenA-1-i];
                                        if(i>0&&r.d[lenA-i]<0){
                                                r.d[lenA-i]+=10;
                                                r.d[lenA-1-i]-=1;
                                        }
                        }
                        if(r.d[0]==0){
                                for(i=0, lenA=0;r.d[i]==0&&r.d[i+1]>=0;i++)lenA++;
                                for(i=0;0<=r.d[lenA+i];i++)r.d[i]=r.d[lenA+i];
                                for(j=0;j<=lenA;j++,i++)r.d[i]= -1;
                        }

               }

        }
                                           else if(lenB>lenA){
                for(i=0;lenA-1-i>=0;i++)a[lenB-1-i]=A.d[lenA-1-i];
                if(A.sign!=B.sign){
                        r.sign=A.sign;
                        for(i=0;lenB-1-i>=0;i++){
                                 if(a[0]+B.d[0]>10||(a[0]+B.d[0]==9&&a[1]+B.d[1]>=10)){
                                        r.d[lenB-i]=a[lenB-1-i]+B.d[lenB-1-i];
                                        if(i>0&&r.d[lenB-i+1]>=10){
                                                r.d[lenB-i+1]-=10;
                                                r.d[lenB-i]+=1;
                                        }
                                 }
                                else{
                                        r.d[lenB-1-i]=a[lenB-1-i]+B.d[lenB-1-i];
                                        if(i>0&&r.d[lenB-i]>=10){
                                                r.d[lenB-i]-=10;
                                                r.d[lenB-1-i]+=1;
                                        }
                                }
                        }
               }
                if(A.sign==B.sign){
                        if(B.sign==-1)r.sign=-2;
                        else r.sign=-1;
                        for(i=0;lenB-1-i>=0;i++){
                                        r.d[lenB-1-i]=B.d[lenB-1-i]-a[lenB-1-i];
                                        if(i>0&&r.d[lenB-i]<0){
                                                r.d[lenB-i]+=10;
                                                r.d[lenB-1-i]-=1;
                                        }
                        }
                        if(r.d[0]==0){
                                for(i=0, lenA=0;r.d[i]==0&&r.d[i+1]>=0;i++)lenA++;
                                for(i=0;0<=r.d[lenA+i];i++)r.d[i]=r.d[lenA+i];
                                for(j=0;j<=lenA;j++,i++)r.d[i]= -1;
                        }

               }
        }
        else if(lenA==lenB){
                if(A.sign!=B.sign){
                        r.sign=A.sign;
                        for(i=0;lenB-1-i>=0;i++){
                                 if(A.d[0]+B.d[0]>10||(A.d[0]+B.d[0]==9&&A.d[1]+B.d[1]>=10)){
                                        r.d[lenB-i]=A.d[lenB-1-i]+B.d[lenB-1-i];
                                        if(i>0&&r.d[lenB-i+1]>=10){
                                                r.d[lenB-i+1]-=10;
                                                r.d[lenB-i]+=1;
                                        }
                                 }
                                else{
                                        r.d[lenB-1-i]=A.d[lenB-1-i]+B.d[lenB-1-i];
                                        if(i>0&&r.d[lenB-i]>=10){
                                                r.d[lenB-i]-=10;
                                                r.d[lenB-1-i]+=1;
                                        }
                                }
                        }
                }
                if(A.sign==B.sign){
                        for(i=0, j=0;i<=lenA-1&&j==0;i++)j=A.d[i]-B.d[i];
                        if(j>0){
                                for(i=0;lenB-1-i>=0;i++)b[lenB-1-i]=B.d[lenB-1-i];
                                for(i=0;lenA-1-i>=0;i++)a[lenA-1-i]=A.d[lenA-1-i];
                                r.sign=A.sign;

                        }
                        else if(j<0){
                                for(i=0;lenB-1-i>=0;i++)a[lenB-1-i]=B.d[lenB-1-i];
                                for(i=0;lenA-1-i>=0;i++)b[lenA-1-i]=A.d[lenA-1-i];
                                if(B.sign==-1)r.sign=-2;
                                else r.sign=-1;
                        }
                        else{
                                for(i=0;lenB-1-i>=0;i++)a[lenB-1-i]=B.d[lenB-1-i];
                                for(i=0;lenA-1-i>=0;i++)b[lenA-1-i]=A.d[lenA-1-i];
                                r.sign=-2;
                        }
                        for(i=0;lenB-1-i>=0;i++){
                                        r.d[lenB-1-i]=a[lenB-1-i]-b[lenB-1-i];
                                        if(i>0&&r.d[lenB-i]<0){
                                                r.d[lenB-i]+=10;
                                                r.d[lenB-1-i]-=1;
                                        }
                        }
                        if(r.d[0]==0){
                                                                                                            for(i=0, lenA=0;r.d[i]==0&&r.d[i+1]>=0;i++)lenA++;
                                for(i=0;0<=r.d[lenA+i];i++)r.d[i]=r.d[lenA+i];
                                for(j=0;j<=lenA;j++,i++)r.d[i]= -1;
                        }

               }


        }

        return r;       // Here, r becomes A - B....
}

                              