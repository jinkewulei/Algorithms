#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include "MD5.H"  
  
int main(int argc, char* argv[])  
{  
	using namespace std;
    int i;  
    MD5_CTX md5;  
    MD5Init(&md5);							    //��ʼ������md5���ܵĽṹ  
  
    unsigned char encrypt[1024];			  //����ڼ��ܵ���Ϣ  
    unsigned char decrypt[17];				  //��ż��ܺ�Ľ��  
	cout<<"������������ַ���"<<endl;
    scanf("%s",encrypt);					  //������ܵ��ַ�  
  
    MD5Update(&md5,encrypt,strlen((char *)encrypt));   //�������ܵ��ַ����м���  
    MD5Final(decrypt,&md5);                                             //������ս��  
  
    printf("����ǰ:%s\n���ܺ�:",encrypt);  
    for(i=0; i<16; i++)  
    {  
        printf("%02x ",decrypt[i]);  
    }  
  
    printf("\n\n\n���ܽ���!\n");  
  
	getchar();getchar();
    return 0;  
}  