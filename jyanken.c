#include <stdio.h>
#include <time.h>
int main(void){
    srand((unsigned int)time(NULL));
    for(int i=0;i<3;i++){
        printf("%d回目:\n",i+1); 
        int a = rand() % 3; //0から2までの乱数を発生
        int b = rand() % 3;
            if(a == 0){     //Aの手を出力
                printf("Aの出す手はグーです\n");
                }
                else if(a == 1){
                    printf("Aの出す手はチョキです\n");
            
                }
                else{
                    printf("Aの出す手はパーです\n");
            
                }
            if(b == 0){     //Bの出す手を出力
                    printf("Bの出す手はグーです\n");
                }
                else if(b == 1){
                    printf("Bの出す手はチョキです\n");
                    
                }
                else{
                    printf("Bの出す手はパーです\n");
                    
                }
            if(a-b==0){
                printf("あいこです\n");//あいこ
                
            }
                else if(a-b == 2 || b-a == 1){　//A:Bがパー:グー、グー:チョキ、チョキ:パーのいずれか
                    printf("Aの勝ちです。\n");
                }
                else{
                    printf("Bの勝ちです。\n"); //それ以外
                    
                }

    }
    return 0;
    // Your code here!
    
}
