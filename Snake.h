#pragma once
class Snake
{
private:
	//游戏信息
	int statu[20][20];                 //20x20地图位置的状态，0表示无，1表示蛇身，2表示蛇头，3表示食物，4表示特殊食物，5表示障碍物
	int snake[2][400];                 //记录蛇身的坐标，2表示横纵坐标，400表示蛇身节点
	int food_x, food_y;                //食物的坐标
	int food_num;                      //已吃食物数量
	int special_food_x, special_food_y;//特殊食物的坐标
	int special_food_left_time;        //特殊食物剩余时间
	int special_food_exist;            //特殊食物是否存在
	int head_x, head_y;                //蛇头的坐标
	int head, tail;                    //头和尾在snake中的下标

	//游戏状态
	int direction;                     //方向 72上 80下 75左 77右
	int length;                        //蛇的长度
	int speed;                         //蛇移动的速度，1-10，延迟时间300 - (int)(sqrt(speed) * 90)，依次对应210，173，145，120，99，80，62，46，30，16
	int barrier_num;                   //障碍数量,0-5
	int if_fence;                      //是否有围墙
	int if_game_over;                  //是否游戏结束

	//玩家信息
	char* name;                        //名字
	int score;                         //得分 每吃一个食物，+ (speed + barrier_num + 2) * 10，特殊食物 + (speed + barrier_num2) * 20
	int ranking;                       //排名

	//操作
	int operation;                     //操作   224:72上   224:80下   224:75左   224:77右   112(p)暂停/继续  27(Esc)退出 
public:
	//构造函数
	Snake();
	//析构函数
	~Snake();
	//初始化
	void init();
	//修改速度
	void change_speed();
	//修改障碍物数量
	void change_barrier_num();
	//修改围墙设置
	void change_fence();
	//开始游戏
	void begin();
	//产生食物
	void create_food();
	//产生特殊食物
	void create_special_food();
	//销毁特殊食物
	void destory_special_food();
	//产生障碍物
	void set_barrier();
	//改变方向,72上 78下 75左 77右
	void change_direation(int a);
	//移动，头增加，尾不动
	void move();
	//是否吃到食物，吃到加分加长度，未吃到删除尾
	void eat();
	//暂停/继续
	void pause();
	//结束游戏
	int game_over();
	//打印界面
	void draw();
	void draw_snake(int fence);
	//获取排名
	int get_ranking() const;
	//获取得分
	int get_score() const;
	//获取用户名
	const char* get_name() const;
	//保存得分
	void save_score();
};

