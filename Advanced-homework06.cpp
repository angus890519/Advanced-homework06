/* �p������׹��-�i���m�ߧ@�~-�@�~6 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/11 15:31 */
//����@�G�Ĥ@�Ӧr���N��a�ϡA�ഫ�覡���GA�ഫ��1,0��Ӧr���AB�ഫ��1,1�K�K
/* 
 A	 B	 C	 D	 E	 F	 G	 H	 I	 J	 K	 L	 M	 N	 O	 P	 Q	 R	 S	 T	 U	 V	 W 	 X	 Y	 Z
10	11	12	13	14	15	16	17	34	18	19	20	21	22	35	23	24	25	26	27	28	29	32	30	31	33   
*/ 
//����G�G�ĤG�Ӧr���N��ʧO�A1�N��k�ʡA2�N��k��
//����T�G�����ۥ[�ᤧ�Ȱ��H�Ҽ� 10 ����l��
/* 
Z=10-(Y + x8 * 8 + x7 * 7 + x6 * 6 + x5 * 5 + x4 * 4 + x3 * 3 + x2 * 2 + x1 * 1)%10    
*/ 
/*
J168391774 �����T 
*/
#include <iostream> //��ܮw 
#include <iostream> //��ܮw 
#include <cstdlib>  //��ܮw 
#include <string>   //��ܮw 
using namespace std; 
int main(void){
    string num;  
    int id_change[26] = {10,11,12,13,14,15,16,17,34,18,19,20,
    21,22,35,23,24,25,26,27,28,29,32,30,31,33}; //����@ 
    int all[8] = {0,0,0,0,0,0,0,0}; //�P�_����T 
    int end_all = 0;
    int first = 0;
    printf("�п�J�@�Ө����Ҹ��X�G");
    cin >> num;
    
    if((int)num[0] >= 97 && (int)num[0] <= 122){ //Ū���Ĥ@�X�^��r�� 
          (int)num[0]-32;               
    }
    //����T 
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
    //��Q�㰣 
    if(end_all == 0){
               end_all = 0;
    }else{
               end_all = 10 - ((first + all[7] + all[6] + all[5] + all[4] + 
               all[3] + all[2] + all[1] + all[0]) % 10);
    }
    
    if(end_all == (int)num[9] - 48)
	{
       printf("�����Ҹ��X�P�_�G���T\n");      
    }
	else
	{
       printf("�����Ҹ��X�P�_�G�����T\n");        
    }
    system("pause");//�Ȱ� 
    return 0;//�^�ǭ� 0 
}
