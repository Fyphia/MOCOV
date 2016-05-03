#ifndef _DATASET_H_
#define _DATASET_H_


#include<iostream>
#include<stdio.h>
#include<time.h>
#include<fstream>
#include<string>
//#include"main.h"
using namespace std;

/*
#define len_genome 1000000     //�����鳤��Ϊ10000000
#define num_read 5000           //���������Ϊ1000
#define len_read 1000            //read �ĳ��� 1K-10K
#define short_k 7               //����ƥ��Ķ�k-mer����
#define long_k 20                // ����ƥ��ĳ�k-mer����
#define len_index 3              //����ƥ��ʱ����������
#define len_index_error 3        //ƥ��k-merʱ�����еĴ���ƥ����
#define len_array_k_mer 64         //k-mer�洢����ĳ���
#define len_k_mer_error 3        //ƥ��ʱ����k-mer����
#define invalid_value  3            //��Чƥ��
#define valid_value  3            //��Чƥ��
*/

#define len_genome 4000000     //�����鳤��Ϊ10000000
#define num_read 1000         //���������Ϊ1000
#define len_read 10000            //read �ĳ��� 10-20
#define short_k 10              //����ƥ��Ķ�k-mer���ȣ�
#define long_k 6               // ����ƥ��ĳ�k-mer����
#define len_index 3              //����ƥ��ʱ����������
#define len_index_error 3        //ƥ��k-merʱ�����еĴ���ƥ����
#define len_array_k_mer 64         //k-mer�洢����ĳ���
#define len_k_mer_error 1        //ƥ��ʱ����k-mer����
#define invalid_value  2            //��Чƥ��
#define valid_value  5//��Чƥ��

/*
#define len_genome 1000  //�����鳤��Ϊ10000000
#define num_read 50         //���������Ϊ1000
#define len_read 100            //read �ĳ��� 10-20
#define short_k 6              //����ƥ��Ķ�k-mer����
#define long_k 6               // ����ƥ��ĳ�k-mer����
#define len_index 3              //����ƥ��ʱ����������
#define len_index_error 3        //ƥ��k-merʱ�����еĴ���ƥ����
#define len_array_k_mer 64         //k-mer�洢����ĳ���
#define len_k_mer_error 0        //ƥ��ʱ����k-mer����
#define invalid_value  2            //��Чƥ��
#define valid_value  2//��Чƥ��

*/
typedef struct k_mer
{
	//char* ch ;
	string ch;                   //short_k����k-mer
	int count_ch;                //��k-mer���ִ���
}k_mer;

extern char genome[len_genome+1];//�������ַ���
extern int position[num_read];//��read��ʼλ������
extern int length[num_read];//1000��read��������ȡ�1K-10K
extern char sample[num_read][int(len_read*2)];//��ų�read����������Ϊ1.1����������ż���������
extern int total_num_of_bases;//���ɵĳ�read�����м������
extern k_mer array_k_mer[len_array_k_mer];
extern int num_short_k_mer; //��Ƕ�k-mer���г��ֵ�k-mer������


extern void dataset();

#endif