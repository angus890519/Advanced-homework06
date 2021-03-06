/* 計算機概論實務-進階練習作業-作業6 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/11 15:31 */
//條件一：第一個字元代表地區，轉換方式為：A轉換成1,0兩個字元，B轉換成1,1……
/* 
 A	 B	 C	 D	 E	 F	 G	 H	 I	 J	 K	 L	 M	 N	 O	 P	 Q	 R	 S	 T	 U	 V	 W 	 X	 Y	 Z
10	11	12	13	14	15	16	17	34	18	19	20	21	22	35	23	24	25	26	27	28	29	32	30	31	33   
*/ 
//條件二：第二個字元代表性別，1代表男性，2代表女性
//條件三：全部相加後之值除以模數 10 取其餘數
/* 
Z=10-(Y + x8 * 8 + x7 * 7 + x6 * 6 + x5 * 5 + x4 * 4 + x3 * 3 + x2 * 2 + x1 * 1)%10    
*/ 
/*
J168391774 為正確 
*/
#include <iostream> //函示庫 
#include <iostream> //函示庫 
#include <cstdlib>  //函示庫 
#include <string>   //函示庫 
using namespace std; 
int main(void){
    string num;  
    int id_change[26] = {10,11,12,13,14,15,16,17,34,18,19,20,
    21,22,35,23,24,25,26,27,28,29,32,30,31,33}; //條件一 
    int all[8] = {0,0,0,0,0,0,0,0}; //判斷條件三 
    int end_all = 0;
    int first = 0;
    printf("請輸入一個身分證號碼：");
    cin >> num;
    
    if((int)num[0] >= 97 && (int)num[0] <= 122){ //讀取第一碼英文字母 
          (int)num[0]-32;               
    }
    //條件三 
    first = ((id_change[(int)(num[0]-65)] % 10) * 9) + (((id_change[(int)(num[0]-65)]) - (id_change[(int)(num[0]-65)] % 10)) / 10); 
    all[7] = ((int)num[8] - 48);
    all[6] = ((int)num[7] - 48)* 2;
    all[5] = ((int)num[6] - 48)* 3;
    all[4] = ((int)num[5] - 48)* 4;
    all[3] = ((int)num[4] - 48)* 5;
    all[2] = ((int)num[3] - 48)* 6;
    all[1] = ((int)num[2] - 48)* 7;
    all[0] = ((int)num[1] - 48)* 8;

    end_all = (first + all[7] + all[6] + all[5] + all[4] + 
    all[3] + all[2] + all[1] + all[0]) % 10;
    //能被整除 
    if(end_all == 0){
               end_all = 0;
    }else{
               end_all = 10 - ((first + all[7] + all[6] + all[5] + all[4] + 
               all[3] + all[2] + all[1] + all[0]) % 10);
    }
    
    if(end_all == (int)num[9] - 48)
	{
       printf("身分證號碼判斷：正確\n");      
    }
	else
	{
       printf("身分證號碼判斷：不正確\n");        
    }
    system("pause");//暫停 
    return 0;//回傳值 0 
}
