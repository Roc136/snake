#pragma once
class Snake
{
private:
	//��Ϸ��Ϣ
	int statu[20][20];                 //20x20��ͼλ�õ�״̬��0��ʾ�ޣ�1��ʾ����2��ʾ��ͷ��3��ʾʳ�4��ʾ����ʳ�5��ʾ�ϰ���
	int snake[2][400];                 //��¼��������꣬2��ʾ�������꣬400��ʾ����ڵ�
	int food_x, food_y;                //ʳ�������
	int food_num;                      //�ѳ�ʳ������
	int special_food_x, special_food_y;//����ʳ�������
	int special_food_left_time;        //����ʳ��ʣ��ʱ��
	int special_food_exist;            //����ʳ���Ƿ����
	int head_x, head_y;                //��ͷ������
	int head, tail;                    //ͷ��β��snake�е��±�

	//��Ϸ״̬
	int direction;                     //���� 72�� 80�� 75�� 77��
	int length;                        //�ߵĳ���
	int speed;                         //���ƶ����ٶȣ�1-10���ӳ�ʱ��300 - (int)(sqrt(speed) * 90)�����ζ�Ӧ210��173��145��120��99��80��62��46��30��16
	int barrier_num;                   //�ϰ�����,0-5
	int if_fence;                      //�Ƿ���Χǽ
	int if_game_over;                  //�Ƿ���Ϸ����

	//�����Ϣ
	char* name;                        //����
	int score;                         //�÷� ÿ��һ��ʳ�+ (speed + barrier_num + 2) * 10������ʳ�� + (speed + barrier_num2) * 20
	int ranking;                       //����

	//����
	int operation;                     //����   224:72��   224:80��   224:75��   224:77��   112(p)��ͣ/����  27(Esc)�˳� 
public:
	//���캯��
	Snake();
	//��������
	~Snake();
	//��ʼ��
	void init();
	//�޸��ٶ�
	void change_speed();
	//�޸��ϰ�������
	void change_barrier_num();
	//�޸�Χǽ����
	void change_fence();
	//��ʼ��Ϸ
	void begin();
	//����ʳ��
	void create_food();
	//��������ʳ��
	void create_special_food();
	//��������ʳ��
	void destory_special_food();
	//�����ϰ���
	void set_barrier();
	//�ı䷽��,72�� 78�� 75�� 77��
	void change_direation(int a);
	//�ƶ���ͷ���ӣ�β����
	void move();
	//�Ƿ�Ե�ʳ��Ե��ӷּӳ��ȣ�δ�Ե�ɾ��β
	void eat();
	//��ͣ/����
	void pause();
	//������Ϸ
	int game_over();
	//��ӡ����
	void draw();
	void draw_snake(int fence);
	//��ȡ����
	int get_ranking() const;
	//��ȡ�÷�
	int get_score() const;
	//��ȡ�û���
	const char* get_name() const;
	//����÷�
	void save_score();
};

