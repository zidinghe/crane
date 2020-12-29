#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#pragma optimize(2)
#define cls system("cls")
#define pause system("pause")
#define random(a,b) rand()%(b-a+1)+a
using namespace std;
const int max_world=4096,nether_max_world=512,end_max_world=512;//我的世界三维度地图大小 
const int max_warld=512;//warld地图大小 
bool chushihua_setted=false;//总初始化 
class music{//音乐 
	public:
		short int pai,ban;//拍，半拍 
		short int C1=131,C2=262,C3=523,C4=1046,C5=2093,C6=4186;
		short int D1=147,D2=294,D3=587,D4=1175,D5=2349,D6=4698;
		short int E1=165,E2=330,E3=659,E4=1318,E5=2637,E6=5274;
		short int F1=175,F2=349,F3=698,F4=1397,F5=2794,F6=5588;
		short int G1=196,G2=392,G3=784,G4=1568,G5=3136;
		short int A1=220,A2=440,A3=880,A4=1760,A5=3520;
		short int B1=297,B2=494,B3=988,B4=1976,B5=3951;//音符 
		void puqu(){
			char write_music[1001]={0};
			while(1){
				cls;
				memset(write_music,0,sizeof(write_music));
				cout<<"请输入乐谱(在乐谱中输入\"/\"退出)："<<endl;
				scanf("%s",write_music);
				int i=strlen(write_music);
				bool exit_puqu=false;
				for(int j=0;j<=i;j++){
					if(write_music[j]=='/'){
						exit_puqu=true;
						break;
					}
					if(write_music[j]=='q') Beep(C2,ban);
					if(write_music[j]=='w') Beep(D2,ban);
					if(write_music[j]=='e') Beep(E2,ban);
					if(write_music[j]=='r') Beep(F2,ban);
					if(write_music[j]=='t') Beep(G2,ban);
					if(write_music[j]=='y') Beep(A2,ban);
					if(write_music[j]=='u') Beep(B2,ban);
					if(write_music[j]=='i') Beep(C3,ban);
					if(write_music[j]=='o') Beep(D3,ban);
					if(write_music[j]=='p') Beep(E3,ban);
					if(write_music[j]=='[') Beep(F3,ban);
					if(write_music[j]==']') Beep(G3,ban);
					if(write_music[j]=='{') Beep(F4,ban);
					if(write_music[j]=='}') Beep(G4,ban);
					if(write_music[j]=='|') Beep(A4,ban);
					if(write_music[j]=='\\') Beep(0,ban);
					if(write_music[j]=='1') Beep(C3,ban);
					if(write_music[j]=='2') Beep(D3,ban);
					if(write_music[j]=='3') Beep(E3,ban);
					if(write_music[j]=='4') Beep(F3,ban);
					if(write_music[j]=='5') Beep(G3,ban);
					if(write_music[j]=='6') Beep(A3,ban);
					if(write_music[j]=='7') Beep(B3,ban);
					if(write_music[j]=='8') Beep(C4,ban);
					if(write_music[j]=='9') Beep(D4,ban);
					if(write_music[j]=='0') Beep(E4,ban);
					if(write_music[j]=='-') Beep(F4,ban);
					if(write_music[j]=='=') Beep(G4,ban);
					if(write_music[j]==' ') Beep(0,ban);
					if(write_music[j]=='a') Beep(C4,ban);
					if(write_music[j]=='s') Beep(D4,ban);
					if(write_music[j]=='d') Beep(E4,ban);
					if(write_music[j]=='f') Beep(F4,ban);
					if(write_music[j]=='g') Beep(G4,ban);
					if(write_music[j]=='h') Beep(A4,ban);
					if(write_music[j]=='j') Beep(B4,ban);
					if(write_music[j]=='k') Beep(C5,ban);
					if(write_music[j]=='l') Beep(D5,ban);
					if(write_music[j]==';') Beep(E5,ban);
					if(write_music[j]=='\'') Beep(0,ban);
					if(write_music[j]=='_') Beep(F5,ban);
					if(write_music[j]=='+') Beep(G5,ban);
					if(write_music[j]==':') Beep(E6,ban);
					if(write_music[j]=='\"') Beep(F6,ban);
					if(write_music[j]=='z') Beep(C1,ban);
					if(write_music[j]=='x') Beep(D1,ban);
					if(write_music[j]=='c') Beep(E1,ban);
					if(write_music[j]=='v') Beep(F1,ban);
					if(write_music[j]=='b') Beep(G1,ban);
					if(write_music[j]=='n') Beep(A1,ban);
					if(write_music[j]=='m') Beep(B1,ban);
					if(write_music[j]==',') Beep(C2,ban);
					if(write_music[j]=='.') Beep(0,ban);
				}
				if(exit_puqu) break;
				pause;
			}
			return;
		}
		void faded(){
			cls;
			cout<<"请欣赏《Faded》"<<endl;
			pai=666;
			ban=333;
			Beep(C3,pai);
			Beep(C3,pai);
			Beep(C3,pai);
			Beep(E3,pai);
			Beep(A3,pai);
			Beep(A3,pai);
			Beep(A3,pai);
			Beep(G3,pai);
			Beep(E3,pai);
			Beep(E3,pai);
			Beep(E3,pai);
			Beep(E3,pai);
			Beep(B2,pai);
			Beep(B2,pai);
			Beep(B2,pai);
			Beep(A2,pai);//1
			cout<<"You were the shadow to my life"<<endl;
			Beep(0,ban);
			Beep(C3,ban);
			Beep(C3,ban);
			Beep(A2,ban);
			Beep(C3,ban);
			Beep(A2,ban);
			Beep(C3,ban);
			Beep(D3,ban);
			Beep(E3,pai);
			cout<<"Did you feel us?"<<endl;
			Beep(C3,ban);
			Beep(C3,ban);
			Beep(G2,ban);
			Beep(E3,ban*3);
			Beep(0,ban*5);
			cout<<"Another start"<<endl;
			Beep(C3,ban);
			Beep(C3,ban);
			Beep(C3,ban);
			Beep(B2,ban*3);
			cout<<"You fade away"<<endl;
			Beep(B2,ban);
			Beep(B2,ban);
			Beep(A2,ban);
			Beep(C3,pai);//2
			cout<<"Afraid our aim is out of sight"<<endl;
			Beep(0,ban);
			Beep(C3,ban);
			Beep(C3,ban);
			Beep(A2,ban);
			Beep(C3,ban);
			Beep(A2,ban);
			Beep(C3,ban);
			Beep(D3,ban);
			Beep(E3,pai);
			cout<<"Wanna see us"<<endl;
			Beep(C3,ban);
			Beep(C3,ban);
			Beep(G3,ban);
			Beep(E3,ban*3);
			cout<<"Alive"<<endl;
			Beep(0,ban*5);
			Beep(C3,ban);
			Beep(C3,ban);
			Beep(D3,ban);
			Beep(D3,pai*2);//3
			cout<<"Where are you now"<<endl;
			Beep(0,ban);
			Beep(E3,ban);
			Beep(E3,ban);
			Beep(E3,ban);
			Beep(E3,pai);
			Beep(C3,ban);
			Beep(0,ban);
			Beep(C3,ban);
			Beep(0,ban);
			Beep(E3,ban);
			Beep(0,ban);
			Beep(A3,ban);
			Beep(0,ban);
			Beep(A3,ban);
			Beep(0,ban);
			Beep(A3,ban);//4
			cout<<"Where are you now"<<endl;
			Beep(E3,ban);
			Beep(E3,ban);
			Beep(E3,ban);
			Beep(E3,pai);
			Beep(E3,ban);
			Beep(0,ban);
			Beep(E3,ban);
			Beep(0,ban);
			Beep(E3,ban);
			Beep(0,ban);
			Beep(B2,ban);
			Beep(0,ban);
			Beep(B2,ban);
			Beep(0,ban);
			Beep(B2,ban);//5
			cout<<"Where are you now"<<endl;
			Beep(E3,ban);
			Beep(E3,ban);
			Beep(E3,ban);
			
			pause;
			return;
		}
		void sound_of_snow(){
			cls;
			cout<<"请欣赏《雪落下的声音》"<<endl;
			pai=600;
			ban=300;
			cout<<"轻轻"; 
			Beep(G3,pai);
			Beep(E3,ban*5);
			Beep(0,pai*2);
			cout<<"，落在我掌心"<<endl;
			Beep(D3,ban);
			Beep(E3,ban);
			Beep(G3,ban*3);
			Beep(G2,ban);
			Beep(A2,pai*3);
			Beep(0,ban*9);
			cout<<"静静";
			Beep(D3,ban);
			Beep(E3,ban/2.0);
			Beep(D3,ban/2.0);
			Beep(D3,ban*5);
			Beep(0,pai*2);
			cout<<"，在掌中结冰"<<endl;
			Beep(D3,ban);
			Beep(E3,ban);
			Beep(G3,ban*3);
			Beep(C3,ban);
			Beep(D3,pai*3);
			Beep(0,ban*9);
			
			pause;
			return;
		}
		void choose_listen(){
			while(1){
				cls;
				cout<<"请问您想听什么音乐？"<<endl;
				cout<<"1.Faded(Alan Walker) 5min"<<endl;
				cout<<"2.雪落下的声音（陆虎） 5min"<<endl;
				
				cout<<"q.退出"<<endl; 
				char choose_music=getch();
				if(choose_music=='1'){
					faded();
				}
				if(choose_music=='2'){
					sound_of_snow();
				}
				
				if(choose_music=='q'){
					break;
				}
			}
			return;
		}
		void main_page(){
			cls;
			while(1){
				COORD pos;
				pos.X=0;
				pos.Y=0;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				cout<<"请问是要欣赏音乐还是自编音乐？"<<endl;
				cout<<"1.欣赏 2.自编 q.退出"<<endl;
				char choose_music_mode=getch();
				if(choose_music_mode=='1'){
					choose_listen();
				}
				if(choose_music_mode=='2'){
					puqu();
				}
				if(choose_music_mode=='q'){
					break;
				}	
			}
			return;		
		}	
}musics;
class clock{//时钟 
	public:
		void current_time(){
			cls;
			while(1){
				COORD pos;
				pos.X=0;
				pos.Y=0;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				cout<<"现在时间："<<endl; 
				time_t curtime;
				time(&curtime);
				printf("%s",ctime(&curtime));
				cout<<"1.刷新 q.退出"<<endl;
				char choose_curtime=getch();
				if(choose_curtime=='1') ;
				if(choose_curtime=='q') break; 
			}
			cls;
			return;
		}
		void jishi(){
			cls;
			cout<<"请输入要计时的分钟数和秒数："<<endl;
			int jishi_min,jishi_sec;//计时minutes,seconds
			cin>>jishi_min>>jishi_sec;
			int last_click=GetTickCount();
			do{
				if(GetTickCount()-last_click<=1000){
					continue;
				}
				last_click=GetTickCount();
				COORD pos;
				pos.X=0;
				pos.Y=0;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				jishi_sec--;
				if(jishi_min<=9) cout<<"0";
				cout<<jishi_min<<":";
				if(jishi_sec<=9) cout<<"0";
				cout<<jishi_sec;
				if(jishi_sec<=0){
					jishi_sec+=60;
					jishi_min--;
				} 
			}
			while(jishi_min>=0&&jishi_sec>=0);
			cout<<"时间到了！"<<endl;
			Beep(musics.C5,800);
			Beep(musics.C5,800);
			Beep(musics.C5,800); 
			pause;
			cls;
			return;
		}
		void main_page(){
			cls;
			while(1){
				COORD pos;
				pos.X=0;
				pos.Y=0;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				cout<<"时钟"<<endl; 
				cout<<"请选择模式："<<endl;
				cout<<"1.现在时间 2.计时器 q.退出 "<<endl;
				char choose_clock=getch();
				if(choose_clock=='1') current_time();
				if(choose_clock=='2') jishi();
				if(choose_clock=='q') break;
			}
			cls;
			return;
		}
}clocks;
class calc{//计算 
	public:
		struct big_number{
			short a[1000001]={0};
			int len=0;
		};
	public:
		void gjdpower(long long r,long long n){
			const int max_length=500000; 
			short a[max_length+1]={0};
			long long nn=1;
			a[1]=1;
			cout<<r<<"^"<<n<<"=";
			while(nn<=n){
				for(int i=1;i<=max_length;i++) a[i]*=r;
				for(int i=1;i<=max_length;i++){
					if(a[i]>9){
						a[i+1]+=a[i]/10;
						a[i]=a[i]%10;
					}
				}
				nn++;
			}
			for(int i=max_length;i>=1;i--){
				if(a[i]==0) continue;
				else{
					for(int j=i+1;j<=max_length;j++){
						a[j]=-1;
					}
					break;
				}
			}
			for(int i=10000;i>=1;i--){
				if(a[i]>=0) cout<<a[i];
			}
			cout<<endl;
			return;
		}
		void jisuan(){
			cls;
			cout<<"请输入要计算的数"<<endl;
			long long a,c;
			char b;
			cin>>a>>b>>c;
			if(b=='+') cout<<a<<"+"<<c<<"="<<a+c<<endl; 
			if(b=='-') cout<<a<<"-"<<c<<"="<<a-c<<endl;
			if(b=='*') cout<<a<<"*"<<c<<"="<<a*c<<endl;
			if(b=='/') cout<<a<<"/"<<c<<"="<<a/c<<endl;
			if(b=='%') cout<<a<<"%"<<c<<"="<<a%c<<endl;
			if(b=='^') gjdpower(a,c);
			pause;
			cls; 
			return;
		}
		void jinzhi(long long a,long long r){
			long long b;
			if(a>=0) b=a;
			else b=0-a;
			long long c[10001],i=0;
			do{
				i++;
				c[i]=b%r;
				b=b/r;
			}
			while(b>0);
			if(a<0) cout<<"-";
			for(int j=i;j>=1;j--){
				if(c[j]<=9) cout<<c[j];
				else if(c[j]<=9+26){
					long long temp=c[j]-1-9;
					cout<<char(c[j]-9-1+'A');
				}
				else if(c[j]<=9+26+26*26){
					cout<<"(";
					long long temp=c[j]-1-9-26;
					cout<<char(temp/26+'A');
					cout<<char(temp%26+'A');
					cout<<")";
				}
				else if(c[j]<=9+26+pow(26,2)+pow(26,3)){
					cout<<"(";
					long long temp=c[j]-1-9-26-pow(26,2);
					cout<<char(temp/pow(26,2)+'A');
					cout<<char((temp%int(pow(26,2)))/26+'A');
					cout<<char(temp%26+'A');
					cout<<")";
				}
				else if(c[j]<=9+26+pow(26,2)+pow(26,3)+pow(26,4)){
					cout<<"(";
					long long temp=c[j]-1-9-26-pow(26,2)-pow(26,3);
					cout<<char(temp/pow(26,3)+'A');
					cout<<char((temp%int(pow(26,3)))/pow(26,2)+'A');
					cout<<char((temp%int(pow(26,2)))/pow(26,1)+'A');
					cout<<char(temp%int(pow(26,1))+'A');
					cout<<")";
				}
				else if(c[j]<=9+26+pow(26,2)+pow(26,3)+pow(26,4)+pow(26,5)){
					cout<<"(";
					long long temp=c[j]-1-9-26-pow(26,2)-pow(26,3)-pow(26,4);
					cout<<char(temp/pow(26,4)+'A');
					cout<<char((temp%int(pow(26,4)))/pow(26,3)+'A');
					cout<<char((temp%int(pow(26,3)))/pow(26,2)+'A');
					cout<<char((temp%int(pow(26,2)))/pow(26,1)+'A');
					cout<<char(temp%int(pow(26,1))+'A');
					cout<<")";
				}
			}
			cout<<endl;
			pause;
			cls;
			return;
		}
		void main_page(){
			cls;
			while(1){
				COORD pos;
				pos.X=0;
				pos.Y=0;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				cout<<"请选择计算模式："<<endl;
				cout<<"1.计算 ";
				cout<<"2.进制转换(10转R) ";
				cout<<"q.退出 ";
				cout<<endl;
				char choose_jsmode=getch();
				if(choose_jsmode=='1') jisuan();
				if(choose_jsmode=='2'){
					cls;
					cout<<"请输入原数(目前只支持10进制)与需转换的进制(支持2~12356640进制)"<<endl;
					long long aa,rr;
					cin>>aa>>rr;
					if(rr<=1){
						cout<<"没有该进制！"<<endl;
						pause;
					}
					else{
						jinzhi(aa,rr);
					}
				}
				if(choose_jsmode=='q'){
					break;
				}
			}
			cls; 
			return;	
		}
}calculator;
class game{//游戏 
	public:
		class fried{
			public:
				long long total_fried_chicken=0; 
				long long total_eaten_fried_chicken=0;
				long long total_cooked_fried_chicken=0;
				void eat_fried_chicken(){
					int eating_fried_chicken=0;
					cls;
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<"你吃了"<<eating_fried_chicken<<"只炸鸡。"<<endl;
						cout<<"共吃了"<<total_eaten_fried_chicken<<"只炸鸡。"<<endl;
						cout<<"是否继续吃炸鸡？"<<endl;
						cout<<"1.是 2.否"<<endl;
						char continue_eating_fried_chicken=getch();
						if(continue_eating_fried_chicken=='1'){
							eating_fried_chicken=random(1,5);
							total_eaten_fried_chicken+=eating_fried_chicken;
							total_fried_chicken=total_cooked_fried_chicken-total_eaten_fried_chicken;
						}
						else{
							break;
						}
					}
					cls;
					return;
				}
				void cook_fried_chicken(){
					int cooking_fried_chicken=0;
					cls;
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<"你炸了"<<cooking_fried_chicken<<"只炸鸡。"<<endl;
						cout<<"共炸了"<<total_cooked_fried_chicken<<"只炸鸡。"<<endl;
						cout<<"是否继续炸炸鸡？"<<endl;
						cout<<"1.是 2.否"<<endl;
						char continue_cooking_fried_chicken=getch();
						if(continue_cooking_fried_chicken=='1'){
							cooking_fried_chicken=random(1,5);
							total_cooked_fried_chicken+=cooking_fried_chicken;
							total_fried_chicken=total_cooked_fried_chicken-total_eaten_fried_chicken;
						}
						else{
							break;
						}
					}
					cls;
					return;
				}
				void main_page(){
					cls;
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<"请选择要玩的炸鸡游戏："<<endl;
						cout<<"1.吃炸鸡 2.炸炸鸡 q.退出"<<endl;
						char choose_fried_chicken=getch();
						if(choose_fried_chicken=='1') eat_fried_chicken();
						if(choose_fried_chicken=='2') cook_fried_chicken();
						if(choose_fried_chicken=='q') break;
					}
					cls;
					return;
				}	
		}fried_chicken;
		class minecraft{
			public:
				struct gamerule{
					bool minecraft_keep_inventory=true;//死亡不掉落 
					bool minecraft_output_map=true;//输出地图 
					bool minecraft_output_block_type=false;//输出方块种类
					bool minecraft_can_walk_on_water=false;//水上行走 
					short int minecraft_output_width=12;//输出宽 
					short int minecraft_output_length=8;//输出长 
					short int minecraft_max_output_width=95;
					short int minecraft_max_output_length=41;
				}minecraft_gamerule;
				struct single_mob{//每一个生物 
					int posx,posy;//位置 
					long long blood=0;//血量 
					bool can_move_this_round=false;//这一轮是否能够移动 
					bool alive=false;
					bool xunhua=false;
				};
				struct enchantability{//附魔 
					short int level=0;//附魔等级 
				};
				struct effect{
					short int run_speed_level=0;//行走速度 
					short int swim_speed_level=0;//游泳速度 
					short int mine_speed_level=0;//挖掘速度 
					short int heal_level=0;//治愈速度 
					short int jump_level=0;//跳跃高度 
					short int attack_level=0;//攻击伤害 
					short int see_underwater_level=0;//水下视觉 
					bool can_breate_underwater=false;//水下呼吸 
				}effection;
				struct item{
					string cname="",ename="";
					long long quantity=0;//数量 
					long long max_damage=0;//最大耐久 
					long long damage=0;//现在耐久 
					long long satiation_amount=0;//可恢复饱食度 
					long long heal_amount=0;//可恢复血量 
					int color_type=0;//颜色 
					int armor_hardness=0;//盔甲硬度 
					int tool_hardness=0;//工具硬度 
					int hardness=0;/*硬度:
					空手=0
					木头=1
					石头=2
					铁=金=3
					钻石=绿宝石=4
					下界合金=5
					黑曜石=6
					铁魂石=7
					基岩=8
					*/
					bool is_stone=false;//是否石头及其变种 
					bool is_mineral=false;//是否矿物 
					bool is_fuel=false;//是否可以作为燃料 
					bool is_mine=false;//我是否拥有 
					enchantability fengli;//锋利 
					enchantability jiezhishashou;//节肢杀手 
					enchantability wanglingshashou;//亡灵杀手 
					enchantability jingzhuncaiji;//精准采集 
					enchantability shiyun;//时运 
					enchantability underwater_breath;//水下呼吸 
					enchantability protection;//保护 
					enchantability qiangduo;//抢夺 
					enchantability xiaolv;//效率 
					item()=default;
					item(string _cname,string _ename,int toolh,int armorh,int sa,int ha,long long _quantity){
						cname=_cname;
						ename=_ename;
						tool_hardness=toolh;
						armor_hardness=armorh;
						satiation_amount=sa;
						heal_amount=ha;
						quantity=_quantity;
					}
				};
				struct block{
					string cname="",ename="";
					unsigned short int type=0;//方块种类 
					unsigned short int light_level=0;//发光强度
					unsigned short int redstone_power_level=0;//红石强度，0~15 
					unsigned short int hardness=0;/*采掘等级:
					空手=0
					木头=1
					石头=2
					铁=金=3
					钻石=绿宝石=4
					下界合金=5
					黑曜石=6
					铁魂石=7 
					基岩=8
					*/
					bool is_stone=false;//是否石头及其变种 
					bool is_mineral=false;//是否矿物 
					bool can_be_burned=false;//是否可燃烧
					bool can_be_burned_out=false;//是否可燃尽 
					block()=default;
					block(string _cname,string _ename,int _type,int _hardness){
						cname=_cname;
						ename=_ename;
						type=_type;
						hardness=_hardness;
					}
				};
				struct mob{
					unsigned short int color_type=0;//颜色
					long long quantity=0;//数量 
					long long max_hurt=0;//最大伤害 
					long long min_hurt=0;//最小伤害 
					single_mob pos[101];//每个的位置 
					bool attack_player=false;
					bool attack_other_mob=false;
					bool can_boom=false;
					item diaoluowu[101][101];
				};
				struct NBT_lable{
					item things_in_chest[3][9];
					block can_place_on;
					block can_destroy;
				};
				struct inventory{//每一个格子
					int sym,num;//物品代号与数量 
				};
				struct recipe{//合成配方 
					int cnt=0;
					inventory lt[101],rt;
					recipe()=default;
					recipe(int _cnt,inventory _lt[],inventory _rt){
						cnt=_cnt;
						for(int i=1;i<=_cnt;i++){
							lt[i]=_lt[i];
							rt=_rt;
						}
					}
				};
				struct melting{
					int from,to;
					melting()=default;
					melting(int f,int t){
						from=f;
						to=t;
					}
				};
				struct advan{
					bool already_got=false;
					string cname;
					string sub;
					advan()=default;
					advan(string _cname,string _sub){
						cname=_cname;
						sub=_sub;
					}
				};
				
			public:
				short int language=0;//游戏语言，中文=0，英文=1 
				short int dimension=0;//维度，主世界=0，下界=1，末地=2
				short int world_map[max_world][max_world];//主世界地图
				short int pz[max_world][max_world];//主世界高度图
				short int nether_world_map[nether_max_world][nether_max_world];//下界地图 
				short int nether_pz[nether_max_world][nether_max_world];//下界高度图 
				short int end_world_map[end_max_world][end_max_world];//末地地图 
				short int end_pz[end_max_world][end_max_world];//末地高度图 
				
				int px,py,npx,npy,epx,epy,bornx,borny;//位置、出生位置
				int kindness=0,kill_mob=0,player_total_die=0;
				int drown_count=0,max_swim=5;
				int max_spawning=25;//单种怪物刷怪上限 
				long long world_tick=0,world_tick_change=0,world_tick_get=0;
				long long huncheck=0;//饥饿度检查 
				bool huixiecheck=0;//回血检查 
				int maxlife=20,life=20,hungry=50,hujiazhi=0;
				int house=0,house_total_area=0;
				int gao_level=0,fu_level=0,jian_level=0,chan_level=0,chu_level=0;
				int toukui_level=0,xiongjia_level=0,hutui_level=0,xuezi_level=0;
				int bow_level=0;
				int kuaijielan_state=0;
				
				block water,grass,stone;
				block glass,sand,cobblestone;
				block torch;
				block nether_stone,end_stone;
				block base_stone;
				block iron_block,gold_block,diamond_block,emerald_block;
				
				item items[1001];
				
				melting melts[1001];
				
				item cooked_miao,leaf,wheat_seed,wheat,watermelon,pumpkin,nitu,heiyaoshi;
				item carotte,gold_carotte,gold_watermelon;
				item coal_ore,diamond_ore,yuanguyiji,xinbiao;
				item wood_yaliban,stone_yaliban,tie_yaliban,jin_yaliban;
				item redstone_continuer,redstone_comparator,redstone_torch;
				item huosai,nianxinghuosai,mumen,tiemen;
				item bread,pumpkin_pie,pumpkin_lanttern,cake; 
				item huoyao,zhizhuyan,fajiaozhizhuyan,yanjianggao,nianyeqiu,bow; 
				item yanjiangkuai,nianyekuai,diaolingzhishou,xiajiezhixing;
				item jiyan,end_crystal,end_dragon_egg,end_dragon_head;
				item xiajieshiying,xuanwuyan,shanchangyan,huagangyan,anshanyan;
				item gangding,yinding,xiding,tongding,taiding,eding;//钢,银,锡,铜,钛,锇
				
				item gongzuotai,ronglu;
				 
				item qiaochi,firework,boat,minecart;
				
				item toukui,xiongjia,hutui,xuezi;
				item jian,gao;
				
				mob zombie,kulou,spider,ender_man,lieyanren;
				mob creeper,electric_creeper,yanjiangguai;
				mob diaolingkulou,cave_spider,duchong,ehun,slime;
				mob piglin,zombie_piglin,youzhushou;
				mob guardian,ancient_guardian;
				mob diaoling,tiekuilei,xuekuilei,ender_dragon;
				mob pig,sheep,cow,panda,cat,dog,chicken;
				mob bee,polar_bear,rabbit,fox,horse,llama;
				mob kangaroo,koala,emu,duck,peacock;
				mob elephant,giraffe,camel,tiger,lion;
				
				inventory ivt[101][101];
				recipe rcp[101];
				
				advan chengjiu[101];
				
				int find(string s){
					for(int i=1;i<=100;i++){
						if(items[i].cname==s||items[i].ename==s){
							return i;
						}
					}
					return 0;
				}
				int jianxie(int n){//玩家减血 
					int p;
					p=10000-min(10000,hujiazhi*400);
					
					return int(n*p/10000.0+0.5);
				} 
				int creature_jianxie(){
					double base_hurt,increase_hurt;
					int final_hurt=0;
					if(jian_level==0) return 2;
					if(jian_level==items[find("木板")].tool_hardness) base_hurt=4.0;
					if(jian_level==items[find("圆石")].tool_hardness) base_hurt=5.0;
					if(jian_level==items[find("铁锭")].tool_hardness) base_hurt=6.0;
					if(jian_level==items[find("钻石")].tool_hardness) base_hurt=8.0;
					if(jian_level==items[find("下界合金")].tool_hardness) base_hurt=9.0;
					
					increase_hurt=double(jian.fengli.level)*1.0*0.15+1.0;
					final_hurt=int(base_hurt*increase_hurt*1.0+0.5);
					if(final_hurt<2) return 2;
					else return final_hurt;
				}
				int count_hujiazhi(){
					int p=0;
					
					if(toukui_level==0) ;
					else if(toukui_level==items[find("铁锭")].armor_hardness) p+=2;
					else if(toukui_level==items[find("金锭")].armor_hardness) p+=3;
					else if(toukui_level==items[find("钻石")].armor_hardness) p+=4;
					else if(toukui_level==items[find("下界合金锭")].armor_hardness) p+=4;
					
					if(xiongjia_level==0) ;
					else if(xiongjia_level==items[find("铁锭")].armor_hardness) p+=4;
					else if(xiongjia_level==items[find("金锭")].armor_hardness) p+=5;
					else if(xiongjia_level==items[find("钻石")].armor_hardness) p+=7;
					else if(xiongjia_level==items[find("下界合金锭")].armor_hardness) p+=8;
					
					if(hutui_level==0) ;
					else if(hutui_level==items[find("铁锭")].armor_hardness) p+=3;
					else if(hutui_level==items[find("金锭")].armor_hardness) p+=4;
					else if(hutui_level==items[find("钻石")].armor_hardness) p+=6;
					else if(hutui_level==items[find("下界合金锭")].armor_hardness) p+=7;
					
					if(xuezi_level==0) ;
					else if(xuezi_level==items[find("铁锭")].armor_hardness) p+=2;
					else if(xuezi_level==items[find("金锭")].armor_hardness) p+=3;
					else if(xuezi_level==items[find("钻石")].armor_hardness) p+=3;
					else if(xuezi_level==items[find("下界合金锭")].armor_hardness) p+=4;
					
					return p;
				}
				void roman_number(int n){//罗马数字 
					while(n>0){
						if(n/1000>=1){
							cout<<"M";
							n-=1000;
						}
						else if(n%500>=400){
							cout<<"C";
							n+=100;
						}
						else if(n/500>=1){
							cout<<"D";
							n-=500;
						}
						else if(n/100>=1){
							cout<<"C";
							n-=100;
						}
						else if(n%50>=40){
							cout<<"X";
							n+=10;
						}
						else if(n/50>=1){
							cout<<"L";
							n-=50;
						}
						else if(n/10>=1){
							cout<<"X";
							n-=10;
						}
						else if(n%5>=4){
							cout<<"I";
							n+=1;
						}
						else if(n/5>=1){
							cout<<"V";
							n-=5;
						}
						else if(n/1>=1){
							cout<<"I";
							n-=1;
						}
					}
					return;
				}
				void wupinlan(){
					if(language==0) cout<<"物品栏："<<endl;
					else if(language==1) cout<<"Item List: "<<endl;
					for(int i=1;i<=100;i++){
						if((items[i].cname!=""||items[i].ename!="")&&//游戏有此物品，即此物品拥有名字 
							items[i].quantity>0){//且玩家有此物品 
							if(language==0) cout<<items[i].cname;
							else if(language==1){
								for(int j=0;j<items[i].ename.length();j++){
									if(j==0||items[i].ename[j-1]=='_') cout<<char(items[i].ename[j]-32);
									else if(items[i].ename[j]!='_') cout<<items[i].ename[j];
									else cout<<" ";
								}
							}
							cout<<"*"<<items[i].quantity<<"  ";
						}
					}
					cout<<endl;
					return;
				}
				void item_list(){
					cls;
					wupinlan();
					pause;
					cls;
					return;
				}
				void kuaijielan(){//快捷栏 
					cls;
					if(language==0) cout<<"请选择当前快捷栏中的物品："<<endl;
					else if(language==1) cout<<"Please choose the item of your hotbar: "<<endl;
					if(items[find("圆石")].quantity>0){
						cout<<"1.圆石 ";
					}
					if(items[find("下界岩")].quantity>0){
						cout<<"2.下界岩 ";
					}
					if(items[find("末地石")].quantity>0){
						cout<<"3.末地石 ";
					}
					cout<<endl;
					char choose_kuaijielan_state=getch();
					if(choose_kuaijielan_state=='1') kuaijielan_state=find("圆石");
					if(choose_kuaijielan_state=='2') kuaijielan_state=find("下界岩");
					if(choose_kuaijielan_state=='3') kuaijielan_state=find("末地石");
					cls;
					return;
				}
				void shengcheng_map(){ 
					for(int i=0;i<max_world;i++){
						for(int j=0;j<max_world;j++){
							world_map[i][j]=grass.type;
						}
					}
					for(int i=2;i<max_world-2;i++){
						for(int j=2;j<max_world-2;j++){
							int r=random(1,60);
							if(r>=60&&r<=60){
								for(int ii=i-2;ii<=i+2;ii++){
									for(int jj=j-2;jj<=j+2;jj++){
										int rr=random(1,20);
										if(ii>=0&&jj>=0&&ii<max_world&&
											jj<max_world&&rr>=1&&rr<=15){
											world_map[ii][jj]=water.type;//水
										}	 
									}
								}
							}	
						}
					}
					for(int i=0;i<max_world;i++){
						for(int j=0;j<max_world;j++){
							if(world_map[i][j]!=grass.type){
								continue;
							}
							if((world_map[i-1][j]==water.type&&i-1>=0)||
								(world_map[i+1][j]==water.type&&i+1<max_world)||
								(world_map[i][j-1]==water.type&&j-1>=0)||
								(world_map[i][j+1]==water.type&&j+1<max_world)){
								int r=random(1,10);
								if(r>=1&&r<=8){
									world_map[i][j]=sand.type;//沙子
								}			
							}
						}
					}
					for(int i=0;i<max_world;i++){
						for(int j=0;j<max_world;j++){
							if(world_map[i][j]!=grass.type){
								continue;
							}
							if((world_map[i-1][j]==sand.type&&i-1>=0)||
								(world_map[i+1][j]==sand.type&&i+1<max_world)||
								(world_map[i][j-1]==sand.type&&j-1>=0)||
								(world_map[i][j+1]==sand.type&&j+1<max_world)){
								int r=random(1,10);
								if(r>=1&&r<=4&&world_map[i][j]==grass.type){
									world_map[i][j]=sand.type;//沙子
								}			
							}
						}
					}
					for(int i=0;i<max_world;i++){
						for(int j=0;j<max_world;j++){
							if(world_map[i][j]==water.type){
								pz[i][j]=50;
							}
							if(world_map[i][j]==grass.type){
								pz[i][j]=random(50,80);
							}
							if(world_map[i][j]==sand.type){
								pz[i][j]=random(50,55);
							}
							if(world_map[i][j]==gold_block.type){
								pz[i][j]=random(60,70);
							}
						}
					}
					
					for(int i=0;i<nether_max_world;i++){
						for(int j=0;j<nether_max_world;j++){
							nether_world_map[i][j]=nether_stone.type;
							nether_pz[i][j]=50;
						}
					}
					
					for(int i=0;i<end_max_world;i++){
						for(int j=0;j<end_max_world;j++){
							double e=end_max_world/2.0*1.0;
							double val=(i-e)*(i-e)+(j-e)*(j-e);
							if(val<=8000){
								end_world_map[i][j]=end_stone.type;
								end_pz[i][j]=50;
							}
							else{
								end_world_map[i][j]=0;
								end_pz[i][j]=0;
							}
							
						}
						cout<<endl;
					}
					return;
				}
				void treasure(int treasure_level);//宝藏
				void advancements(){
					
					if(kindness>=200&&chengjiu[1].already_got==false){
						chengjiu[1].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[1].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[1].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					if(kill_mob>=100&&chengjiu[2].already_got==false){
						chengjiu[2].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[2].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[2].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					
					if(player_total_die>=100&&chengjiu[4].already_got==false){
						chengjiu[4].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[4].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[4].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					if(items[find("铁魂石")].quantity>=1&&chengjiu[5].already_got==false){
						chengjiu[5].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[5].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[5].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					if(items[find("超级附魔金苹果")].quantity>=1&&chengjiu[6].already_got==false){
						chengjiu[6].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[6].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[6].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					
					
					if((items[find("圆石")].quantity+
						items[find("下界岩")].quantity+
						items[find("末地石")].quantity)>=1000&&
						chengjiu[10].already_got==false){
						chengjiu[10].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[10].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[10].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					if((items[find("圆石")].quantity+
						items[find("下界岩")].quantity+
						items[find("末地石")].quantity)>=10000&&
						chengjiu[11].already_got==false){
						chengjiu[11].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[11].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[11].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					if((items[find("圆石")].quantity+
						items[find("下界岩")].quantity+
						items[find("末地石")].quantity)>=100000&&
						chengjiu[12].already_got==false){
						chengjiu[12].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[12].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[12].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					if(items[find("圆石")].quantity>=200000&&
						items[find("下界岩")].quantity>=200000&&
						items[find("末地石")].quantity>=200000&&
						chengjiu[13].already_got==false){
						chengjiu[13].already_got=true;
						cls;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						cout<<"恭喜你解锁成就："<<chengjiu[13].cname<<endl;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<chengjiu[13].sub<<endl;
						Sleep(1000);
						pause;
						cls;
					}
					
					return;
				}
				void kanshu(){
					if(dimension==0){
						int random_kanshu=random(1,15);
						if(random_kanshu>=1&&random_kanshu<=3){
							items[find("橡木")].quantity+=4;
						}
						if(random_kanshu>=4&&random_kanshu<=14){
							items[find("橡木")].quantity+=5;
						}
						if(random_kanshu>=15&&random_kanshu<=15){
							items[find("橡木")].quantity+=6;
						}
						int random_apple=random(1,1000);
						if(random_apple>=1&&random_apple<=13){
							items[find("苹果")].quantity+=1;
						}
					}
					
					return;
				}
				void mini_craft(){
					cls;
					wupinlan();
					cout<<"合成什么？"<<endl;
					if(items[find("橡木")].quantity>=1){
						cout<<"1.木板 ";
					}
					if(items[find("木板")].quantity>=4&&
						gongzuotai.is_mine==false){
						cout<<"2.工作台 ";
					}
					if(items[find("木板")].quantity>=2){
						cout<<"3.木棍 ";
					}
					if(items[find("木棍")].quantity>=1&&
						items[find("煤炭")].quantity>=1){
						cout<<"4.火把 ";
					}
					cout<<endl;
					char choose_mini_craft=getch();
					if(choose_mini_craft=='1'){
						items[find("橡木")].quantity-=1;
						items[find("木板")].quantity+=4;
					}
					if(choose_mini_craft=='2'){
						items[find("木板")].quantity-=4;
						gongzuotai.is_mine=true;
					}
					if(choose_mini_craft=='3'){
						items[find("木板")].quantity-=2;
						items[find("木棍")].quantity+=4;
					}
					if(choose_mini_craft=='4'){
						items[find("木棍")].quantity-=1;
						items[find("煤炭")].quantity-=1;
						items[find("火把")].quantity+=4;
					}
					cls; 
					return;
				}
				void craft(){
					cls;
					wupinlan();
					cout<<"合成什么？"<<endl;
					if(items[find("橡木")].quantity>=1){
						cout<<"1.木板 ";
					}
					if(items[find("木板")].quantity>=3&&
						items[find("木棍")].quantity>=2&&
						gao_level<items[find("木板")].tool_hardness){
						cout<<"2.木镐 ";
					}
					if(items[find("木板")].quantity>=2){
						cout<<"3.木棍 ";
					}
					if(items[find("圆石")].quantity>=8&&
						ronglu.is_mine==false){
						cout<<"4.熔炉 ";
					}
					if(items[find("圆石")].quantity>=3&&
						items[find("木棍")].quantity>=2&&
						gao_level<items[find("圆石")].tool_hardness){
						cout<<"5.石镐 ";
					}
					if(items[find("铁锭")].quantity>=3&&
						items[find("木棍")].quantity>=2&&
						gao_level<items[find("铁锭")].tool_hardness){
						cout<<"6.铁镐 ";
					}
					if(items[find("钻石")].quantity>=3&&
						items[find("木棍")].quantity>=2&&
						gao_level<items[find("钻石")].tool_hardness){
						cout<<"7.钻石镐 ";	
					}
					if(items[find("铁锭")].quantity>=5&&
						toukui_level<items[find("铁锭")].armor_hardness){
						cout<<"8.铁头盔 ";
					}
					if(items[find("铁锭")].quantity>=8&&
						xiongjia_level<items[find("铁锭")].armor_hardness){
						cout<<"9.铁胸甲 ";
					}
					if(items[find("铁锭")].quantity>=7&&
						hutui_level<items[find("铁锭")].armor_hardness){
						cout<<"10.铁护腿 ";
					}
					if(items[find("铁锭")].quantity>=4&&
						xuezi_level<items[find("铁锭")].armor_hardness){
						cout<<"11.铁靴子 ";
					}
					if(items[find("金锭")].quantity>=5&&
						toukui_level<items[find("金锭")].armor_hardness){
						cout<<"12.金头盔 ";
					}
					if(items[find("金锭")].quantity>=8&&
						xiongjia_level<items[find("金锭")].armor_hardness){
						cout<<"13.金胸甲 ";
					}
					if(items[find("金锭")].quantity>=7&&
						hutui_level<items[find("金锭")].armor_hardness){
						cout<<"14.金护腿 ";
					}
					if(items[find("金锭")].quantity>=4&&
						xuezi_level<items[find("金锭")].armor_hardness){
						cout<<"15.金靴子 ";
					}
					if(items[find("钻石")].quantity>=5&&
						toukui_level<items[find("钻石")].armor_hardness){
						cout<<"16.钻石头盔 ";
					}
					if(items[find("钻石")].quantity>=8&&
						xiongjia_level<items[find("钻石")].armor_hardness){
						cout<<"17.钻石胸甲 ";
					}
					if(items[find("钻石")].quantity>=7&&
						hutui_level<items[find("钻石")].armor_hardness){
						cout<<"18.钻石护腿 ";
					}
					if(items[find("钻石")].quantity>=4&&
						xuezi_level<items[find("钻石")].armor_hardness){
						cout<<"19.钻石靴子 ";	
					}
					if(items[find("木板")].quantity>=2&&
						items[find("木棍")].quantity>=1&&
						jian_level<items[find("木板")].tool_hardness){
						cout<<"20.木剑 ";
					}
					if(items[find("圆石")].quantity>=2&&
						items[find("木棍")].quantity>=1&&
						jian_level<items[find("圆石")].tool_hardness){
						cout<<"21.石剑 ";
					}
					if(items[find("铁锭")].quantity>=2&&
						items[find("木棍")].quantity>=1&&
						jian_level<items[find("铁锭")].tool_hardness){
						cout<<"22.铁剑 ";
					}
					if(items[find("钻石")].quantity>=2&&
						items[find("木棍")].quantity>=1&&
						jian_level<items[find("钻石")].tool_hardness){
						cout<<"23.钻石剑 ";
					}
					if(items[find("木棍")].quantity>=1&&
						items[find("煤炭")].quantity>=1){
						cout<<"24.火把 ";
					}
					if(items[find("远古碎片")].quantity>=4&&
						items[find("金锭")].quantity>=4){
						cout<<"25.下界合金锭 ";
					}
					if(items[find("钻石")].quantity>=5&&
						items[find("下界合金锭")].quantity>=4){
						cout<<"26.铁魂石 ";
					}
					if(items[find("骨头")].quantity>=1){
						cout<<"27.骨粉 ";
					}
					if(items[find("木棍")].quantity>=1&&
						items[find("圆石")].quantity>=1){
						cout<<"28.拉杆 ";
					}
					if(items[find("木板")].quantity>=1){
						cout<<"29.木制按钮 ";
					}
					if(items[find("石头")].quantity>=1){
						cout<<"30.石制按钮 ";
					}
					if(items[find("金锭")].quantity>=1){
						cout<<"31.金粒 "; 
					}
					if(items[find("金锭")].quantity>=9){
						cout<<"32.金块 ";
					}
					if(items[find("金锭")].quantity>=8&&
						items[find("苹果")].quantity>=1){
						cout<<"33.金苹果 ";
					}
					if(items[find("金块")].quantity>=8&&
						items[find("苹果")].quantity>=1){
						cout<<"34.附魔金苹果 ";
					}
					if(items[find("附魔金苹果")].quantity>=1&&
						items[find("铁魂石")].quantity>=8){
						cout<<"35.超级附魔金苹果 ";
					}
					if(items[find("燧石")].quantity>=1&&
						items[find("木棍")].quantity>=1&&
						items[find("羽毛")].quantity>=1){
						cout<<"36.箭 ";
					}
					if(items[find("铁锭")].quantity>=9){
						cout<<"37.铁块 ";
					}
					if(items[find("钻石")].quantity>=9){
						cout<<"38.钻石块 ";
					}
					if(items[find("绿宝石")].quantity>=9){
						cout<<"39.绿宝石块 ";
					}
					if(items[find("铜锭")].quantity>=4){
						cout<<"40.铜块 ";
					}
					if(items[find("水晶")].quantity>=4){
						cout<<"41.水晶块 ";
					}
					
					cout<<endl;
					int choose_craft;
					cin>>choose_craft;
					for(int i=1;i<=101;i++){
						if(choose_craft==i&&rcp[i].cnt!=0){
							for(int j=1;j<=rcp[i].cnt;j++){
								items[ivt[i][j].sym].quantity-=ivt[i][j].num;
							}
							items[rcp[i].rt.sym].quantity+=rcp[i].rt.num;	
						}
					}
					if(choose_craft==2){
						items[find("木板")].quantity-=3;
						items[find("木棍")].quantity-=2;
						gao_level=max(gao_level,items[find("木板")].tool_hardness);
					}
					if(choose_craft==4){
						items[find("圆石")].quantity-=8;
						ronglu.is_mine=true;
					}
					if(choose_craft==5){
						items[find("圆石")].quantity-=3;
						items[find("木棍")].quantity-=2;
						gao_level=max(gao_level,items[find("圆石")].tool_hardness);
					}
					if(choose_craft==6){
						items[find("铁锭")].quantity-=3;
						items[find("木棍")].quantity-=2;
						gao_level=max(gao_level,items[find("铁锭")].tool_hardness);
					}
					if(choose_craft==7){
						items[find("钻石")].quantity-=3;
						items[find("木棍")].quantity-=2;
						gao_level=max(gao_level,items[find("钻石")].tool_hardness);
					}
					if(choose_craft==8){
						items[find("铁锭")].quantity-=5;
						hujiazhi+=2;
						toukui_level=max(toukui_level,items[find("铁锭")].armor_hardness);
					}
					if(choose_craft==9){
						items[find("铁锭")].quantity-=8;
						hujiazhi+=4;
						xiongjia_level=max(xiongjia_level,items[find("铁锭")].armor_hardness);
					}
					if(choose_craft==10){
						items[find("铁锭")].quantity-=7;
						hujiazhi+=3;
						hutui_level=max(hutui_level,items[find("铁锭")].armor_hardness);
					}
					if(choose_craft==11){
						items[find("铁锭")].quantity-=4;
						hujiazhi+=2;
						xuezi_level=max(xuezi_level,items[find("铁锭")].armor_hardness);
					}
					if(choose_craft==12){
						items[find("金锭")].quantity-=5;
						hujiazhi+=3;
						toukui_level=max(toukui_level,items[find("金锭")].armor_hardness);
					}
					if(choose_craft==13){
						items[find("金锭")].quantity-=8;
						hujiazhi+=5;
						xiongjia_level=max(xiongjia_level,items[find("金锭")].armor_hardness);
					}
					if(choose_craft==14){
						items[find("金锭")].quantity-=7;
						hujiazhi+=4;
						hutui_level=max(hutui_level,items[find("金锭")].armor_hardness);
					}
					if(choose_craft==15){
						items[find("金锭")].quantity-=4;
						hujiazhi+=3;
						xuezi_level=max(xuezi_level,items[find("金锭")].armor_hardness);
					}
					if(choose_craft==16){
						items[find("钻石")].quantity-=5;
						hujiazhi+=4;
						toukui_level=max(toukui_level,items[find("钻石")].armor_hardness);
					}
					if(choose_craft==17){
						items[find("钻石")].quantity-=8;
						hujiazhi+=7;
						xiongjia_level=max(xiongjia_level,items[find("钻石")].armor_hardness);
					}
					if(choose_craft==18){
						items[find("钻石")].quantity-=7;
						hujiazhi+=6;
						hutui_level=max(hutui_level,items[find("钻石")].armor_hardness);
					}
					if(choose_craft==19){
						items[find("钻石")].quantity-=4;
						hujiazhi+=3;
						xuezi_level=max(xuezi_level,items[find("钻石")].armor_hardness);
					}
					if(choose_craft==20){
						items[find("木板")].quantity-=2;
						items[find("木棍")].quantity-=1;
						jian_level=max(jian_level,items[find("木板")].tool_hardness);	
					} 
					if(choose_craft==21){
						items[find("圆石")].quantity-=2;
						items[find("木棍")].quantity-=1;
						jian_level=max(jian_level,items[find("圆石")].tool_hardness);	
					}
					if(choose_craft==22){
						items[find("铁锭")].quantity-=2;
						items[find("木棍")].quantity-=1;
						jian_level=max(jian_level,items[find("铁锭")].tool_hardness);	
					}
					if(choose_craft==23){
						items[find("钻石")].quantity-=2;
						items[find("木棍")].quantity-=1;
						jian_level=max(jian_level,items[find("钻石")].tool_hardness);	
					}
					if(choose_craft==26){
						items[find("钻石")].quantity-=5;
						items[find("下界合金锭")].quantity-=4;
						items[find("铁魂石")].quantity+=1;
					}
					if(choose_craft==27){
						items[find("骨头")].quantity-=1;
						items[find("骨粉")].quantity+=3;
					}
					if(choose_craft==28){
						items[find("木棍")].quantity-=1;
						items[find("圆石")].quantity-=1;
						items[find("拉杆")].quantity+=1;
					}
					if(choose_craft==29){
						items[find("木板")].quantity-=1;
						items[find("木质按钮")].quantity+=1;
					}
					if(choose_craft==30){
						items[find("石头")].quantity-=1;
						items[find("石质按钮")].quantity+=1;
					}
					if(choose_craft==31){
						items[find("金锭")].quantity-=1;
						items[find("金粒")].quantity+=9;
					}
					if(choose_craft==32){
						items[find("金锭")].quantity-=9;
						items[find("金块")].quantity+=1;
					}
					if(choose_craft==33){
						items[find("金锭")].quantity-=8;
						items[find("苹果")].quantity-=1;
						items[find("金苹果")].quantity+=1;
					}
					if(choose_craft==34){
						items[find("金块")].quantity-=8;
						items[find("苹果")].quantity-=1;
						items[find("附魔金苹果")].quantity+=1;
					}
					if(choose_craft==35){
						items[find("铁魂石")].quantity-=8;
						items[find("附魔金苹果")].quantity-=1;
						items[find("超级附魔金苹果")].quantity+=1;
					}
					if(choose_craft==36){
						items[find("燧石")].quantity-=1;
						items[find("木棍")].quantity-=1;
						items[find("羽毛")].quantity-=1;
						items[find("箭")].quantity+=4;
					}
					if(choose_craft==37){
						items[find("铁锭")].quantity-=9;
						items[find("铁块")].quantity+=1;
					}
					if(choose_craft==38){
						items[find("钻石")].quantity-=9;
						items[find("钻石块")].quantity+=1;
					}
					if(choose_craft==39){
						items[find("绿宝石")].quantity-=9;
						items[find("绿宝石块")].quantity+=1;
					}
					if(choose_craft==40){
						items[find("铜锭")].quantity-=4;
						items[find("铜块")].quantity+=1;
					}
					if(choose_craft==41){
						items[find("水晶")].quantity-=4;
						items[find("水晶块")].quantity+=1;
					}
					cls;
					return;
				}
				void melt(){ 
					cls;
					wupinlan();
					int total_melt=0;
					cout<<"烧什么？"<<endl;
					for(int i=1;i<=101;i++){
						if(items[melts[i].from].cname!=""&&items[melts[i].from].quantity>0){
							cout<<i<<"."<<items[melts[i].from].cname<<"-->"<<items[melts[i].to].cname<<endl;
						}
					}
					int choose_melt;
					cin>>choose_melt;
					for(int i=1;i<=101;i++){
						if(choose_melt==i){
							cout<<"要烧多少个?"<<endl;
							cin>>total_melt;
							if(items[melts[i].from].quantity<total_melt){
								cout<<"数量不足!"<<endl;
								pause;
							}
							else{
								cout<<"正在烧炼";
								while(total_melt>0&&items[find("煤炭")].quantity>0){
									total_melt-=1;
									items[melts[i].from].quantity-=1;
									items[melts[i].to].quantity+=1;
									if(random(1,4)==1) items[find("煤炭")].quantity-=1;
									Sleep(50);
									if(random(1,10)==1) cout<<".";
								}
								cout<<endl;
							}
						}	
					}
					cls;
					return;
				}
				void mine(){
					if(dimension==0){
						int random_mine_underground=random(1,100);
						if(gao_level<items[find("钻石")].tool_hardness){
							if(random_mine_underground>=1&&random_mine_underground<=50){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=3;
								}
							}
							if(random_mine_underground>=51&&random_mine_underground<=77){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=4;
								}
							}
							if(random_mine_underground>=78&&random_mine_underground<=84){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=3;
									items[find("煤炭")].quantity+=random(1,2*(gao.shiyun.level+1));
								}
							}
							if(random_mine_underground>=85&&random_mine_underground<=89){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=random(2,3);
								}
								if(gao_level>=items[find("圆石")].tool_hardness){
									items[find("铁矿石")].quantity+=random(1,2);
								}
							}
							if(random_mine_underground>=90&&random_mine_underground<=92){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=random(2,3);
								}
								if(gao_level>=items[find("圆石")].tool_hardness){
									items[find("铜矿石")].quantity+=random(1,2);
								}
							}
							if(random_mine_underground>=93&&random_mine_underground<=95){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=2;
								}
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("金矿石")].quantity+=1;	
								}
							}
							if(random_mine_underground>=96&&random_mine_underground<=97){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=1;
								}
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("水晶")].quantity+=random(1,4);
								}
							}
							if(random_mine_underground>=98&&random_mine_underground<=98){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("圆石")].quantity+=1;
								}
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("钻石")].quantity+=random(1,1*(gao.shiyun.level+1));
								}
							}
							if(random_mine_underground>=99&&random_mine_underground<=100){
								int lava_jianxie=jianxie(10);
								life-=lava_jianxie;
								cout<<"你碰到了岩浆，生命-"<<lava_jianxie<<endl;
								cls;
							} 
						}
						else if(gao_level<items[find("下界合金锭")].tool_hardness){
							if(random_mine_underground>=1&&random_mine_underground<=36){
								items[find("圆石")].quantity+=4;
							}
							if(random_mine_underground>=37&&random_mine_underground<=63){
								items[find("圆石")].quantity+=5;
							}
							if(random_mine_underground>=64&&random_mine_underground<=72){
								items[find("圆石")].quantity+=4;
								items[find("煤炭")].quantity+=random(2,2*(gao.shiyun.level+1));
							}
							if(random_mine_underground>=73&&random_mine_underground<=79){
								items[find("圆石")].quantity+=random(2,3);
								items[find("铁矿石")].quantity+=random(1,2);
							}
							if(random_mine_underground>=80&&random_mine_underground<=85){
								items[find("圆石")].quantity+=random(2,3);
								items[find("铜矿石")].quantity+=random(1,2);
							}
							if(random_mine_underground>=86&&random_mine_underground<=92){
								items[find("圆石")].quantity+=2;
								items[find("金矿石")].quantity+=1;
							}
							if(random_mine_underground>=93&&random_mine_underground<=96){
								items[find("圆石")].quantity+=1;
								items[find("水晶")].quantity+=random(1,4);
							}
							if(random_mine_underground>=97&&random_mine_underground<=99){
								items[find("圆石")].quantity+=2;
								items[find("钻石")].quantity+=random(1,2*(gao.shiyun.level+1));
							}
							if(random_mine_underground>=100&&random_mine_underground<=100){
								int lava_jianxie=jianxie(10);
								life-=lava_jianxie;
								cout<<"你碰到了岩浆，生命-"<<lava_jianxie<<endl;
								cls;
							}
						}
						else{
							;
						}
						int random_mine_deep_underground=random(1,100);
						if(minecraft_gamerule.minecraft_output_map==true){
							if(pz[px][py]<=12){
								if(random_mine_deep_underground>=1&&
									random_mine_deep_underground<=82){
									;
								}
								if(random_mine_deep_underground>=83&&
									random_mine_deep_underground<=86){
									if(gao_level>=items[find("铁锭")].tool_hardness){
										items[find("青金石")].quantity+=random(1,4*(gao.shiyun.level+1));
									}
								}
								if(random_mine_deep_underground>=87&&
									random_mine_deep_underground<=90){
									if(gao_level>=items[find("铁锭")].tool_hardness){
										int gsy=random(4*(gao.shiyun.level+1)+1,8*(gao.shiyun.level+1));
										items[find("青金石")].quantity+=gsy;
									}
								}
								if(random_mine_deep_underground>=91&&
									random_mine_deep_underground<=94){
									if(gao_level>=items[find("铁锭")].tool_hardness){
										items[find("红石")].quantity+=random(1,4*(gao.shiyun.level+1));
									}
								}
								if(random_mine_deep_underground>=95&&
									random_mine_deep_underground<=98){
									if(gao_level>=items[find("铁锭")].tool_hardness){
										int gsy=random(4*(gao.shiyun.level+1)+1,8*(gao.shiyun.level+1));
										items[find("红石")].quantity+=gsy;
									}
								}
								if(random_mine_deep_underground>=99&&
									random_mine_deep_underground<=100){
									if(gao_level>=items[find("铁锭")].tool_hardness){
										items[find("绿宝石")].quantity+=random(1,2*(gao.shiyun.level+1));
									}
								}
							}	
						}
						else{
							if(random_mine_deep_underground>=1&&
								random_mine_deep_underground<=91){
								;
							}
							if(random_mine_deep_underground>=92&&
								random_mine_deep_underground<=93){
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("青金石")].quantity+=random(1,4*(gao.shiyun.level+1));
								}
							}
							if(random_mine_deep_underground>=94&&
								random_mine_deep_underground<=95){
								if(gao_level>=items[find("铁锭")].tool_hardness){
									int gsy=random(4*(gao.shiyun.level+1)+1,8*(gao.shiyun.level+1));
									items[find("青金石")].quantity+=gsy;
								}
							}
							if(random_mine_deep_underground>=96&&
								random_mine_deep_underground<=97){
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("红石")].quantity+=random(1,4*(gao.shiyun.level+1));
								}
							}
							if(random_mine_deep_underground>=98&&
								random_mine_deep_underground<=99){
								if(gao_level>=items[find("铁锭")].tool_hardness){
									int gsy=random(4*(gao.shiyun.level+1)+1,8*(gao.shiyun.level+1));
									items[find("红石")].quantity+=gsy;
								}
							}
							if(random_mine_deep_underground>=100&&
								random_mine_deep_underground<=100){
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("绿宝石")].quantity+=random(1,2*(gao.shiyun.level+1));
								}
							}
						}
					}
					else if(dimension==1){
						int random_mine_underground=random(1,100);
						if(gao_level<items[find("钻石")].tool_hardness){
							if(random_mine_underground>=1&&random_mine_underground<=44){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("下界岩")].quantity+=3;
								}
							}
							if(random_mine_underground>=45&&random_mine_underground<=68){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("下界岩")].quantity+=4;
								}
							}
							if(random_mine_underground>=69&&random_mine_underground<=81){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("下界岩")].quantity+=3;
									items[find("黑石")].quantity+=3;
								}
							}
							if(random_mine_underground>=82&&random_mine_underground<=86){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("下界岩")].quantity+=2;
								}
								if(gao_level>=items[find("圆石")].tool_hardness){
									items[find("下界石英")].quantity+=random(1,1*(gao.shiyun.level+1));	
								}
							}
							if(random_mine_underground>=87&&random_mine_underground<=90){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("下界岩")].quantity+=1;
								}
								if(gao_level>=items[find("圆石")].tool_hardness){
									items[find("下界石英")].quantity+=random(2,2*(gao.shiyun.level+1));	
								}
							}
							if(random_mine_underground>=91&&random_mine_underground<=93){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("下界岩")].quantity+=2;
								}
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("金矿石")].quantity+=1;	
								}
							}
							if(random_mine_underground>=94&&random_mine_underground<=96){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("下界岩")].quantity+=1;
								}
								if(gao_level>=items[find("铁锭")].tool_hardness){
									items[find("金矿石")].quantity+=2;
								}
							}
							if(random_mine_underground>=97&&random_mine_underground<=100){
								int lava_jianxie=jianxie(10);
								life-=lava_jianxie;
								cout<<"你碰到了岩浆，生命-"<<lava_jianxie<<endl;
							} 
						}
						else if(gao_level<items[find("下界合金锭")].tool_hardness){
							if(random_mine_underground>=1&&random_mine_underground<=34){
								items[find("下界岩")].quantity+=3;
							}
							if(random_mine_underground>=35&&random_mine_underground<=58){
								items[find("下界岩")].quantity+=4;
							}
							if(random_mine_underground>=59&&random_mine_underground<=73){
								items[find("下界岩")].quantity+=3;
								items[find("黑石")].quantity+=3;
							}
							if(random_mine_underground>=74&&random_mine_underground<=78){
								items[find("下界岩")].quantity+=2;
								items[find("下界石英")].quantity+=random(1,1*(gao.shiyun.level+1));
							}
							if(random_mine_underground>=79&&random_mine_underground<=83){
								items[find("下界岩")].quantity+=1;
								items[find("下界石英")].quantity+=random(2,2*(gao.shiyun.level+1));
							}
							if(random_mine_underground>=84&&random_mine_underground<=91){
								items[find("下界岩")].quantity+=2;
								items[find("金矿石")].quantity+=1;
							}
							if(random_mine_underground>=92&&random_mine_underground<=97){
								items[find("下界岩")].quantity+=2;
								items[find("金矿石")].quantity+=2;
							}
							if(random_mine_underground>=98&&random_mine_underground<=98){
								items[find("下界岩")].quantity+=1;
								items[find("远古碎片")].quantity+=random(1,2*(gao.shiyun.level+1));
							}
							if(random_mine_underground>=99&&random_mine_underground<=100){
								int lava_jianxie=jianxie(10);
								life-=lava_jianxie;
								cout<<"你碰到了岩浆，生命-"<<lava_jianxie<<endl;
								cls;
							}
						}
						else{
							;
						}
					}
					else if(dimension==2){
						int random_mine_underground=random(1,100);
						if(gao_level<items[find("钻石")].tool_hardness){
							if(random_mine_underground>=1&&random_mine_underground<=60){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("末地石")].quantity+=3;
								}
							}
							if(random_mine_underground>=61&&random_mine_underground<=100){
								if(gao_level>=items[find("木板")].tool_hardness){
									items[find("末地石")].quantity+=4;
								}
							}
						}
						else if(gao_level<items[find("下界合金锭")].tool_hardness){
							if(random_mine_underground>=1&&random_mine_underground<=45){
								items[find("末地石")].quantity+=3;
							}
							if(random_mine_underground>=46&&random_mine_underground<=100){
								items[find("末地石")].quantity+=4;
							}
						}
						else{
							;
						}
					}
					
					if(dimension==0){
						int random_mine_sand=random(1,100);
						if(minecraft_gamerule.minecraft_output_map==true){
							if(world_map[px][py]==sand.type){
								items[find("沙子")].quantity+=random(1,3);
							}
							if(random_mine_sand>=1&&random_mine_sand<=1){
								items[find("沙砾")].quantity+=random(1,2);
								if(random(1,10)==1) items[find("燧石")].quantity+=1;
							}
						}
						else{
							if(random_mine_sand>=1&&random_mine_sand<=1){
								items[find("沙子")].quantity+=random(1,2);
							}
							if(random_mine_sand>=2&&random_mine_sand<=2){
								items[find("沙砾")].quantity+=random(1,2);
								if(random(1,10)==1) items[find("燧石")].quantity+=1;
							}
						}
					}
					
					if(dimension==0){
						if(minecraft_gamerule.minecraft_output_map==true){
							world_map[px][py]=stone.type;
							pz[px][py]--;	
						}	
					}
					else if(dimension==1){
						if(minecraft_gamerule.minecraft_output_map==true){
							nether_world_map[npx][npy]=nether_stone.type;
							nether_pz[npx][npy]--;	
						}	
					}
					else if(dimension==2){
						if(minecraft_gamerule.minecraft_output_map==true){
							end_world_map[epx][epy]=end_stone.type;
							end_pz[epx][epy]--;
						}	
					}
					
					return;
				}
				void creature(){
					cls;
					int random_creature=random(1,100);
					if(random_creature>=1&&random_creature<=20){
						wupinlan();
						pig.quantity=1;
						cout<<"有一只猪，是否杀死？"<<endl;
						cout<<"1.杀 2.放过它"<<endl; 
						char choose_kill_pig=getch();
						if(choose_kill_pig=='1'){
							pig.quantity=0;
							int random_pork=random(1,5);
							if(random_pork==1){
								items[find("生猪肉")].quantity+=1;
							}
							if(random_pork>=2&&random_pork<=4){
								items[find("生猪肉")].quantity+=2;
							}
							if(random_pork==5){
								items[find("生猪肉")].quantity+=3;
							}
						}
						if(choose_kill_pig=='2'){
							kindness++;
						}		
					}
					if(random_creature>=21&&random_creature<=40){
						wupinlan();
						cow.quantity=1;
						cout<<"有一头牛，是否杀死？"<<endl;
						cout<<"1.杀 2.放过它"<<endl; 
						char choose_kill_cow=getch();
						if(choose_kill_cow=='1'){
							cow.quantity=0;
							int random_beef=random(1,4);
							if(random_beef==1){
								items[find("生牛肉")].quantity+=1;
							}
							if(random_beef==2){
								items[find("生牛肉")].quantity+=2;
							}
							if(random_beef==3){
								items[find("生牛肉")].quantity+=1;
								items[find("皮革")].quantity+=1;
							}
							if(random_beef==4){
								items[find("生牛肉")].quantity+=1;
								items[find("皮革")].quantity+=2;
							}
						}
						if(choose_kill_cow=='2'){
							kindness++;
						}		
					}
					if(random_creature>=41&&random_creature<=60){
						wupinlan();
						chicken.quantity=1;
						cout<<"有一只鸡，是否杀死？"<<endl;
						cout<<"1.杀 2.放过它"<<endl; 
						char choose_kill_chicken=getch();
						if(choose_kill_chicken=='1'){
							chicken.quantity=0;
							int random_chicken=random(1,3);
							if(random_chicken==1){
								items[find("生鸡肉")].quantity+=1;
							}
							if(random_chicken==2){
								items[find("生鸡肉")].quantity+=2;
							}
							if(random_chicken==3){
								items[find("生鸡肉")].quantity+=1;
								items[find("羽毛")].quantity+=1;
							}
						}
						if(choose_kill_chicken=='2'){
							kindness++;
						}		
					}
					if(random_creature>=61&&random_creature<=80){
						wupinlan();
						sheep.quantity=1;
						cout<<"有一头羊，是否杀死？"<<endl;
						cout<<"1.杀 2.放过它"<<endl; 
						char choose_kill_sheep=getch();
						if(choose_kill_sheep=='1'){
							sheep.quantity=0;
							int random_sheep=random(1,3);
							if(random_sheep==1){
							}
							if(random_sheep==2){
								items[find("生羊肉")].quantity+=1;
							}
							if(random_sheep==3){
								items[find("羊毛")].quantity+=1;
							}
						}
						if(choose_kill_sheep=='2'){
							kindness++;
						}		
					}
					cls;
					return;
				}
				void mob_attack(){
					int zb=0,kl=0;
					for(int i=px-5;i<=px+5;i++){
						for(int j=py-5;j<=py+5;j++){
							for(int k=1;k<=zombie.quantity;k++){
								if(zombie.pos[k].posx==i&&zombie.pos[k].posy==j){
									zb++;
								}
							}
							for(int k=1;k<=kulou.quantity;k++){
								if(kulou.pos[k].posx==i&&kulou.pos[k].posy==j){
									kl++;
								}
							}
						}
					}
					if(zb==0&&kl==0){
						return;
					}
					cls;
					if(kl==0){
						printf("你被%d个僵尸发现了！\n",zb);
					}
					else if(zb==0){
						printf("你被%d个骷髅发现了！\n",kl);
					}
					else{
						printf("你被%d个僵尸和%d个骷髅发现了！\n",zb,kl);
					}
					int hurt=0;
					for(int i=1;i<=zb;i++){
						int rd=random(1,100);
						if(rd>=1&&rd<=75) hurt+=random(zombie.min_hurt,zombie.max_hurt);
					}
					for(int i=1;i<=kl;i++){
						int rd=random(1,100);
						if(rd>=1&&rd<=98) hurt+=random(kulou.min_hurt,kulou.max_hurt);
					}
					cout<<"现在你要干什么？"<<endl;
					cout<<"1.攻击 2.不做理会"<<endl;
					char attack_mob=getch();
					if(attack_mob=='1'){
						int ysjx=creature_jianxie();
						double add_jx=double(jian.wanglingshashou.level)*1.0*0.15+1.0;
						int jx=int(ysjx*add_jx*1.0+0.5);
						for(int i=px-5;i<=px+5;i++){
							for(int j=py-5;j<=py+5;j++){//11*11范围内，所有怪物均受到攻击 
								for(int k=1;k<=zombie.quantity;k++){
									if(zombie.pos[k].posx==i&&zombie.pos[k].posy==j){
										zombie.pos[k].blood-=max(0,int(jx+random(0,3)-1));
									}
								}
								for(int k=1;k<=kulou.quantity;k++){
									if(kulou.pos[k].posx==i&&kulou.pos[k].posy==j){
										kulou.pos[k].blood-=max(0,int(jx+random(0,3)-2));
									}
								}
							}
						}
						int real_hurt=jianxie(hurt);
						life-=real_hurt;
						if(real_hurt>0){
							printf("你被攻击了，减%d滴血\n",real_hurt);
						}
						printf("怪物被攻击了，减%d滴血\n",jx);
						pause;
					}
					else{
						int real_hurt=jianxie(hurt);
						life-=real_hurt;
						if(real_hurt>0){
							printf("你被攻击了，减%d滴血\n",real_hurt);
							pause;
						}
					}
					cls;
					return;
				}
				void build_house(){
					cls;
					wupinlan();
					cout<<"请输入长(>=4)，宽(>=4)，高(>=4)"<<endl;
					int len,wid,hei;//lenth,width,height
					cin>>len>>wid>>hei;
					if(len<4) len=4;
					if(wid<4) wid=4;
					if(hei<4) hei=4;
					int total=len*wid*hei-(len-2)*(wid-2)*(hei-1);
					if(items[find("圆石")].quantity<total){
						cout<<"圆石数量不足！"<<endl;
						pause;
						return;
					}
					if(dimension==0){
						if(px+len-1>=max_world||py+wid-1>=max_world){
							cout<<"超出地图边界，无法建造！"<<endl;
							pause;
						}
						else{
							cout<<"共需"<<total<<"块圆石"<<endl;
							pause; 
							items[find("圆石")].quantity-=total;
							house++;
							house_total_area+=len*wid;
							int max_floor_height=0;
							for(int i=px;i<=px+len-1;i++){
								for(int j=py;j<=py+wid-1;j++){
									world_map[i][j]=stone.type;
									max_floor_height=max(max_floor_height,int(pz[i][j]));
								}
							}
							for(int i=px;i<=px+len-1;i++){
								for(int j=py;j<=py+wid-1;j++){
									pz[i][j]=max_floor_height+hei;
								}
							}
							cout<<"建造成功"<<endl; 
						}
					}
					
					if(dimension==1){
						if(npx+len-1>=nether_max_world||npy+wid-1>=nether_max_world){
							cout<<"超出地图边界，无法建造！"<<endl;
							pause;
						}
						else{
							cout<<"共需"<<total<<"块圆石"<<endl;
							pause; 
							items[find("圆石")].quantity-=total;
							house++;
							house_total_area+=len*wid;
							int max_floor_height=0;
							for(int i=npx;i<=npx+len-1;i++){
								for(int j=npy;j<=npy+wid-1;j++){
									nether_world_map[i][j]=stone.type;
									max_floor_height=max(max_floor_height,int(nether_pz[i][j]));
								}
							}
							for(int i=npx;i<=npx+len-1;i++){
								for(int j=npy;j<=npy+wid-1;j++){
									nether_pz[i][j]=max_floor_height+hei;
								}
							}
							cout<<"建造成功"<<endl; 
						}	
					}
					
					if(dimension==2){
						if(epx+len-1>=end_max_world||epy+wid-1>=end_max_world){
							cout<<"超出地图边界，无法建造！"<<endl;
							pause;
						}
						else{
							cout<<"共需"<<total<<"块圆石"<<endl;
							pause; 
							items[find("圆石")].quantity-=total;
							house++;
							house_total_area+=len*wid;
							int max_floor_height=0;
							for(int i=epx;i<=epx+len-1;i++){
								for(int j=epy;j<=epy+wid-1;j++){
									end_world_map[i][j]=stone.type;
									max_floor_height=max(max_floor_height,int(end_pz[i][j]));
								}
							}
							for(int i=epx;i<=epx+len-1;i++){
								for(int j=epy;j<=epy+wid-1;j++){
									end_pz[i][j]=max_floor_height+hei;
								}
							}
							cout<<"建造成功"<<endl; 
						}	
					}
					cls;
					return;
				}
				void eat(){
					cls;
					wupinlan();
					cout<<"吃什么？"<<endl;
					if(items[find("生猪肉")].quantity>0){
						printf("1.生猪肉（可恢复%lld饥饿度）\n",
						items[find("生猪肉")].satiation_amount);
					}
					if(items[find("生牛肉")].quantity>0){
						printf("2.生牛肉（可恢复%lld饥饿度）\n",
						items[find("生牛肉")].satiation_amount);
					}
					if(items[find("生鸡肉")].quantity>0){
						printf("3.生鸡肉（可恢复%lld饥饿度）\n",
						items[find("生鸡肉")].satiation_amount);
					}
					if(items[find("生羊肉")].quantity>0){
						printf("4.生羊肉（可恢复%lld饥饿度）\n",
						items[find("生羊肉")].satiation_amount);
					}
					if(items[find("熟猪肉")].quantity>0){
						printf("5.熟猪肉（可恢复%lld饥饿度）\n",
						items[find("熟猪肉")].satiation_amount);
					}
					if(items[find("熟牛肉")].quantity>0){
						printf("6.熟牛肉（可恢复%lld饥饿度）\n",
						items[find("熟牛肉")].satiation_amount);
					}
					if(items[find("熟鸡肉")].quantity>0){
						printf("7.熟鸡肉（可恢复%lld饥饿度）\n",
						items[find("熟鸡肉")].satiation_amount);
					}
					if(items[find("熟羊肉")].quantity>0){
						printf("8.熟羊肉（可恢复%lld饥饿度）\n",
						items[find("熟羊肉")].satiation_amount);
					}
					if(items[find("苹果")].quantity>0){
						printf("9.苹果（可恢复%lld饥饿度）\n",
						items[find("苹果")].satiation_amount);
					}
					if(items[find("金苹果")].quantity>0){
						printf("10.金苹果（可恢复%lld饥饿度,%lld生命值）\n",
						items[find("金苹果")].satiation_amount,
						items[find("金苹果")].heal_amount);
					}
					if(items[find("附魔金苹果")].quantity>0){
						printf("11.附魔金苹果（可恢复%lld饥饿度,%lld生命值）\n",
						items[find("附魔金苹果")].satiation_amount,
						items[find("附魔金苹果")].heal_amount); 
					}
					if(items[find("超级附魔金苹果")].quantity>0){
						printf("12.超级附魔金苹果（可恢复%lld饥饿度,%lld生命值）\n",
						items[find("超级附魔金苹果")].satiation_amount,
						items[find("超级附魔金苹果")].heal_amount); 
					}
					int choose_meat;
					cin>>choose_meat;
					if(choose_meat==1&&items[find("生猪肉")].quantity>0){
						items[find("生猪肉")].quantity-=1;
						hungry+=items[find("生猪肉")].satiation_amount;
					} 
					if(choose_meat==2&&items[find("生牛肉")].quantity>0){
						items[find("生牛肉")].quantity-=1;
						hungry+=items[find("生牛肉")].satiation_amount;
					}
					if(choose_meat==3&&items[find("生鸡肉")].quantity>0){
						items[find("生鸡肉")].quantity-=1;
						hungry+=items[find("生鸡肉")].satiation_amount;
					}
					if(choose_meat==4&&items[find("生羊肉")].quantity>0){
						items[find("生羊肉")].quantity-=1;
						hungry+=items[find("生羊肉")].satiation_amount;
					}
					if(choose_meat==5&&items[find("熟猪肉")].quantity>0){
						items[find("熟猪肉")].quantity-=1;
						hungry+=items[find("熟猪肉")].satiation_amount;
					} 
					if(choose_meat==6&&items[find("熟牛肉")].quantity>0){
						items[find("熟牛肉")].quantity-=1;
						hungry+=items[find("熟牛肉")].satiation_amount;
					}
					if(choose_meat==7&&items[find("熟鸡肉")].quantity>0){
						items[find("熟鸡肉")].quantity-=1;
						hungry+=items[find("熟鸡肉")].satiation_amount;
					}
					if(choose_meat==8&&items[find("熟羊肉")].quantity>0){
						items[find("熟羊肉")].quantity-=1;
						hungry+=items[find("熟羊肉")].satiation_amount;
					}
					if(choose_meat==9&&items[find("苹果")].quantity>0){
						items[find("苹果")].quantity-=1;
						hungry+=items[find("苹果")].satiation_amount;
					}
					if(choose_meat==10&&items[find("金苹果")].quantity>0){
						items[find("金苹果")].quantity-=1;
						hungry+=items[find("金苹果")].satiation_amount;
						life+=items[find("金苹果")].heal_amount;
						maxlife=max(30,life);
					}
					if(choose_meat==11&&items[find("附魔金苹果")].quantity>0){
						items[find("附魔金苹果")].quantity-=1;
						hungry+=items[find("附魔金苹果")].satiation_amount;
						life+=items[find("附魔金苹果")].heal_amount;
						maxlife=max(40,life);
					}
					if(choose_meat==12&&items[find("超级附魔金苹果")].quantity>0){
						items[find("超级附魔金苹果")].quantity-=1;
						hungry+=items[find("超级附魔金苹果")].satiation_amount;
						life+=items[find("超级附魔金苹果")].heal_amount;
						maxlife=max(150,life);
					}
					if(hungry>50){
						hungry=50;
					}
					cls;
					return;
				}
				void zombie_AI(){
					for(int i=1;i<=zombie.quantity;i++){
						if(zombie.pos[i].blood<=0){
							int x=zombie.pos[zombie.quantity].posx;
							int y=zombie.pos[zombie.quantity].posy;
							int bld=zombie.pos[zombie.quantity].blood;
							int cmtr=zombie.pos[zombie.quantity].can_move_this_round;
							world_map[zombie.pos[i].posx][zombie.pos[i].posy]=water.type;
							zombie.pos[i].posx=x;
							zombie.pos[i].posy=y;
							zombie.pos[i].blood=bld;
							zombie.pos[i].can_move_this_round=cmtr;
							zombie.pos[zombie.quantity].posx=0;
							zombie.pos[zombie.quantity].posy=0;
							zombie.pos[zombie.quantity].blood=0;
							zombie.pos[zombie.quantity].can_move_this_round=false;
							zombie.quantity--;
							kill_mob++;
							
							int random_diaoluowu=random(1,100);
							int fr_percent=30+jian.qiangduo.level*2;
							if(random_diaoluowu>=1&&random_diaoluowu<=fr_percent){
								items[find("腐肉")].quantity+=1;
							}
							else if(random_diaoluowu<=fr_percent*2-5){
								items[find("腐肉")].quantity+=2;
							}
							else{
								;
							}
							
							random_diaoluowu=random(1,100);
							int td_percent=2+jian.qiangduo.level*2;
							if(random_diaoluowu<=td_percent){
								items[find("腐肉")].quantity+=random(0,1);
								items[find("铁锭")].quantity+=1;
							}
							else{
								;
							}
						}
					}
					for(int i=1;i<=zombie.quantity;i++){
						if((abs(zombie.pos[i].posx-px)>minecraft_gamerule.minecraft_output_width+32&&
							abs(zombie.pos[i].posy-py)>minecraft_gamerule.minecraft_output_length+32)||
							world_map[zombie.pos[i].posx][zombie.pos[i].posy]==0||dimension!=0){
							int x=zombie.pos[zombie.quantity].posx;
							int y=zombie.pos[zombie.quantity].posy;
							int bld=zombie.pos[zombie.quantity].blood;
							int cmtr=zombie.pos[zombie.quantity].can_move_this_round;
							zombie.pos[i].posx=x;
							zombie.pos[i].posy=y;
							zombie.pos[i].blood=bld;
							zombie.pos[i].can_move_this_round=cmtr;
							zombie.pos[zombie.quantity].posx=0;
							zombie.pos[zombie.quantity].posy=0;
							zombie.pos[zombie.quantity].blood=0;
							zombie.pos[zombie.quantity].can_move_this_round=false;
							zombie.quantity--;
						}
					}
					for(int i=1;i<=zombie.quantity;i++){
						if(zombie.pos[i].can_move_this_round==false){
							zombie.pos[i].can_move_this_round=true;
							continue;
						}
						else{
							zombie.pos[i].can_move_this_round=false;
						}
						int a=zombie.pos[i].posx;
						int b=zombie.pos[i].posy;
						if(abs(a-px)<=3&&abs(b-py)<=3){
							continue;
						}
						queue< pair<pair<int,int>,pair<int,int> > > q;
						while(!q.empty()) q.pop();
						q.push(make_pair(make_pair(a,b),make_pair(0,0)));
						while(!q.empty()){
							int ax=q.front().first.first;//x坐标 
							int ay=q.front().first.second;//y坐标 
							int fx=q.front().second.first;//初始方向 
							int bs=q.front().second.second;//步数 
							if(bs>=8){
								break;
							}
							if(abs(ax-px)<=3&&abs(ay-py)<=3){
								if(fx==1) zombie.pos[i].posx++;
								else if(fx==2) zombie.pos[i].posx--;
								else if(fx==3) zombie.pos[i].posy++;
								else if(fx==4) zombie.pos[i].posy--;
								break;
							}
							if(ax+1<=max_world-1&&//!vis[ax+1][ay]&&
								world_map[ax+1][ay]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax+1,ay),make_pair(1,bs+1)));
								else q.push(make_pair(make_pair(ax+1,ay),make_pair(fx,bs+1)));
							}
							if(ax-1>=0&&//!vis[ax-1][ay]&&
								world_map[ax-1][ay]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax-1,ay),make_pair(2,bs+1)));
								else q.push(make_pair(make_pair(ax-1,ay),make_pair(fx,bs+1)));
							}
							if(ay+1<=max_world-1&&//!vis[ax][ay+1]&&
								world_map[ax][ay+1]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax,ay+1),make_pair(3,bs+1)));
								else q.push(make_pair(make_pair(ax,ay+1),make_pair(fx,bs+1)));
							}
							if(ay-1>=0&&//!vis[ax][ay-1]&&
								world_map[ax][ay-1]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax,ay-1),make_pair(4,bs+1)));
								else q.push(make_pair(make_pair(ax,ay-1),make_pair(fx,bs+1)));
							}
							q.pop();
						}
					}
					return;
				}//A*
				void kulou_AI(){
					for(int i=1;i<=kulou.quantity;i++){
						if(kulou.pos[i].blood<=0){
							int x=kulou.pos[kulou.quantity].posx;
							int y=kulou.pos[kulou.quantity].posy;
							int bld=kulou.pos[kulou.quantity].blood;
							int cmtr=kulou.pos[kulou.quantity].can_move_this_round;
							world_map[kulou.pos[i].posx][kulou.pos[i].posy]=water.type;
							kulou.pos[i].posx=x;
							kulou.pos[i].posy=y;
							kulou.pos[i].blood=bld;
							kulou.pos[i].can_move_this_round=cmtr;
							kulou.pos[kulou.quantity].posx=0;
							kulou.pos[kulou.quantity].posy=0;
							kulou.pos[kulou.quantity].blood=0;
							kulou.pos[kulou.quantity].can_move_this_round=false;
							kulou.quantity--;
							kill_mob++;
							int random_diaoluowu=random(1,100);
							int bn_percent=35+(jian.qiangduo.level+1)*2;
							if(random_diaoluowu<=bn_percent){
								items[find("骨头")].quantity+=1;
							}
							else if(random_diaoluowu<=bn_percent*2-10){
								items[find("骨头")].quantity+=2;
							}
							else{
								;
							}
							
							random_diaoluowu=random(1,100);
							int jn_percent=10+(jian.qiangduo.level+1)*2;
							if(random_diaoluowu<=jn_percent){
								items[find("骨头")].quantity+=random(0,1);
								items[find("箭")].quantity+=1;
							}
						}
					}
					for(int i=1;i<=kulou.quantity;i++){
						if((abs(kulou.pos[i].posx-px)>minecraft_gamerule.minecraft_output_width+32&&
						    abs(kulou.pos[i].posy-py)>minecraft_gamerule.minecraft_output_length+32)||
					        world_map[kulou.pos[i].posx][kulou.pos[i].posy]==0||dimension!=0){
							int x=kulou.pos[kulou.quantity].posx;
							int y=kulou.pos[kulou.quantity].posy;
							int bld=kulou.pos[kulou.quantity].blood;
							int cmtr=kulou.pos[kulou.quantity].can_move_this_round;
							kulou.pos[i].posx=x;
							kulou.pos[i].posy=y;
							kulou.pos[i].blood=bld;
							kulou.pos[i].can_move_this_round=cmtr;
							kulou.pos[kulou.quantity].posx=0;
							kulou.pos[kulou.quantity].posy=0;
							kulou.pos[kulou.quantity].blood=0;
							kulou.pos[kulou.quantity].can_move_this_round=false;
							kulou.quantity--;
						}
					}
					for(int i=1;i<=kulou.quantity;i++){
						if(kulou.pos[i].can_move_this_round==false){
							kulou.pos[i].can_move_this_round=true;
							continue;
						}
						else{
							kulou.pos[i].can_move_this_round=false;
						}
						int a=kulou.pos[i].posx;
						int b=kulou.pos[i].posy;
						if(abs(a-px)<=3&&abs(b-py)<=3){
							continue;
						}
						queue< pair<pair<int,int>,pair<int,int> > > q;
						while(!q.empty()) q.pop();
						q.push(make_pair(make_pair(a,b),make_pair(0,0)));
						while(!q.empty()){
							int ax=q.front().first.first;//x坐标 
							int ay=q.front().first.second;//y坐标 
							int fx=q.front().second.first;//初始方向 
							int bs=q.front().second.second;//步数 
							if(bs>=8){
								break;
							}
							if(abs(ax-px)<=3&&abs(ay-py)<=3){
								if(fx==1) kulou.pos[i].posx++;
								else if(fx==2) kulou.pos[i].posx--;
								else if(fx==3) kulou.pos[i].posy++;
								else if(fx==4) kulou.pos[i].posy--;
								break;
							}
							if(ax+1<=max_world-1&&//!vis[ax+1][ay]&&
								world_map[ax+1][ay]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax+1,ay),make_pair(1,bs+1)));
								else q.push(make_pair(make_pair(ax+1,ay),make_pair(fx,bs+1)));
							}
							if(ax-1>=0&&//!vis[ax-1][ay]&&
								world_map[ax-1][ay]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax-1,ay),make_pair(2,bs+1)));
								else q.push(make_pair(make_pair(ax-1,ay),make_pair(fx,bs+1)));
							}
							if(ay+1<=max_world-1&&//!vis[ax][ay+1]&&
								world_map[ax][ay+1]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax,ay+1),make_pair(3,bs+1)));
								else q.push(make_pair(make_pair(ax,ay+1),make_pair(fx,bs+1)));
							}
							if(ay-1>=0&&//!vis[ax][ay-1]&&
								world_map[ax][ay-1]!=water.type&&
								world_map[ax+1][ay]!=0){
								if(ax==a&&ay==b) q.push(make_pair(make_pair(ax,ay-1),make_pair(4,bs+1)));
								else q.push(make_pair(make_pair(ax,ay-1),make_pair(fx,bs+1)));
							}
							q.pop();
						}
					}
					return;
				}
				void spawn_creature(){
					for(int i=max(px-minecraft_gamerule.minecraft_output_width-10,0);
							i<=min(px+minecraft_gamerule.minecraft_output_width+10,int(max_world-1));
							i++){
						for(int j=max(py-minecraft_gamerule.minecraft_output_length-10,0);
								j<=min(py+minecraft_gamerule.minecraft_output_length+10,int(max_world-1));
								j++){
							if(world_map[i][j]==water.type||
								world_map[i][j]==stone.type||
								world_map[i][j]==0||
								(i==px&&j==py)){
								continue;
							}
							int spawn_zombie=random(1,
							minecraft_gamerule.minecraft_output_width*
							minecraft_gamerule.minecraft_output_length*3000);
							if(spawn_zombie==1&&zombie.quantity<max_spawning){
								zombie.quantity++;
								zombie.pos[zombie.quantity].posx=i;
								zombie.pos[zombie.quantity].posy=j;
								zombie.pos[zombie.quantity].blood=20;
							}
						}
					}
					for(int i=max(px-minecraft_gamerule.minecraft_output_width-10,0);
							i<=min(px+minecraft_gamerule.minecraft_output_width+10,int(max_world-1));
							i++){
						for(int j=max(py-minecraft_gamerule.minecraft_output_length-10,0);
								j<=min(py+minecraft_gamerule.minecraft_output_length+10,int(max_world-1));
								j++){
							if(world_map[i][j]==water.type||
								world_map[i][j]==stone.type||
								world_map[i][j]==0||
								(i==px&&j==py)){
								continue;
							}
							int spawn_kulou=random(1,
							minecraft_gamerule.minecraft_output_width*
							minecraft_gamerule.minecraft_output_length*3500);
							if(spawn_kulou==1&&kulou.quantity<max_spawning){
								kulou.quantity++;
								kulou.pos[kulou.quantity].posx=i;
								kulou.pos[kulou.quantity].posy=j;
								kulou.pos[kulou.quantity].blood=16;
							}
						}
					}
				}
				void enchant(){
					cls;
					cout<<"请选择要附魔的装备："<<endl;
					if(toukui_level>0) cout<<"1.头盔 ";
					if(xiongjia_level>0) cout<<"2.胸甲 ";
					if(hutui_level>0) cout<<"3.护腿 ";
					if(xuezi_level>0) cout<<"4.靴子 ";
					if(jian_level>0) cout<<"5.剑 ";
					if(gao_level>0) cout<<"6.镐 ";
					cout<<endl;
					char choose_enchant=getch();
					if(choose_enchant=='1'){
						cout<<"请选择要附魔的属性："<<endl;
						for(int num=1;num<=3;num++){
							cout<<num<<".  ";
							for(int i=1;i<=12;i++){
								int m1=166,m2=random(161,184);
								cout<<char(m1)<<char(m2);
							}
							cout<<endl;	
						}
						char choose_shuxing=getch();
						if(choose_shuxing>='1'&&choose_shuxing<='3'){
							int random_shuxing=random(1,3);
							int sx1=toukui.underwater_breath.level;
							int sx2=toukui.protection.level;
							if(random_shuxing==1){
								toukui.underwater_breath.level=max(sx1,random(1,3));
							}
							if(random_shuxing==2){
								toukui.protection.level=max(sx2,random(1,4));
							}
							if(random_shuxing==3){
								toukui.underwater_breath.level=max(sx1,random(1,3));
								toukui.protection.level=max(sx2,random(1,4));
							}
							cout<<endl;
							cout<<"头盔"<<endl;
							if(toukui.underwater_breath.level>0){
								cout<<"水下呼吸";
								roman_number(toukui.underwater_breath.level);
								cout<<endl;
							}
							if(toukui.protection.level>0){
								cout<<"保护";
								roman_number(toukui.protection.level);
								cout<<endl;
							}
							cout<<endl;
						}
					}
					
					if(choose_enchant=='5'){
						cout<<"请选择要附魔的属性："<<endl;
						for(int num=1;num<=3;num++){
							cout<<num<<".  ";
							for(int i=1;i<=12;i++){
								int m1=166,m2=random(161,184);
								cout<<char(m1)<<char(m2);
							}
							cout<<endl;	
						}
						char choose_shuxing=getch();
						if(choose_shuxing>='1'&&choose_shuxing<='3'){
							int random_shuxing=random(1,7);
							int sx1=jian.fengli.level;
							int sx2=jian.wanglingshashou.level;
							int sx3=jian.qiangduo.level; 
							if(random_shuxing==1){
								jian.fengli.level=max(sx1,random(1,4));
							}
							if(random_shuxing==2){
								jian.wanglingshashou.level=max(sx2,random(1,4));
							}
							if(random_shuxing==3){
								jian.qiangduo.level=max(sx3,random(1,3));
							}
							if(random_shuxing==4){
								jian.fengli.level=max(sx1,random(1,4));
								jian.wanglingshashou.level=max(sx2,random(1,4));
							}
							if(random_shuxing==5){
								jian.wanglingshashou.level=max(sx2,random(1,4));
								jian.qiangduo.level=max(sx3,random(1,3));
							}
							if(random_shuxing==6){
								jian.fengli.level=max(sx1,random(1,4));
								jian.qiangduo.level=max(sx3,random(1,3));
							}
							if(random_shuxing==7){
								jian.fengli.level=max(sx1,random(1,4));
								jian.wanglingshashou.level=max(sx2,random(1,4));
								jian.qiangduo.level=max(sx3,random(1,3));
							}
							cout<<endl;
							cout<<"剑"<<endl;
							if(jian.fengli.level>0){
								cout<<"锋利";
								roman_number(jian.fengli.level);
								cout<<endl;
							}
							if(jian.wanglingshashou.level>0){
								cout<<"亡灵杀手";
								roman_number(jian.wanglingshashou.level);
								cout<<endl;
							}
							if(jian.qiangduo.level>0){
								cout<<"抢夺";
								roman_number(jian.qiangduo.level);
								cout<<endl;
							}
							cout<<endl;
						}
					}
					
					if(choose_enchant=='6'){
						cout<<"请选择要附魔的属性："<<endl;
						for(int num=1;num<=3;num++){
							cout<<num<<".  ";
							for(int i=1;i<=12;i++){
								int m1=166,m2=random(161,184);
								cout<<char(m1)<<char(m2);
							}
							cout<<endl;	
						}
						char choose_shuxing=getch();
						if(choose_shuxing>='1'&&choose_shuxing<='3'){
							int random_shuxing=random(1,3);
							int sx1=gao.shiyun.level;
							int sx2=gao.xiaolv.level; 
							if(random_shuxing==1){
								gao.shiyun.level=max(sx1,random(1,3));
							}
							if(random_shuxing==2){
								gao.xiaolv.level=max(sx2,random(1,4));
							}
							if(random_shuxing==3){
								gao.shiyun.level=max(sx1,random(1,3));
								gao.xiaolv.level=max(sx2,random(1,4));
							}
							cout<<endl;
							cout<<"镐"<<endl;
							if(gao.shiyun.level>0){
								cout<<"时运";
								roman_number(gao.shiyun.level);
								cout<<endl;
							}
							if(gao.xiaolv.level>0){
								cout<<"效率";
								roman_number(gao.xiaolv.level);
								cout<<endl;
							}
						}
					}
					
					pause;
					cls;
					return;
				}
				void debug(){
					cls;
					if(language==0){
						cout<<"请选择调试内容："<<endl;
						cout<<"1.是否输出地图"<<endl;
						cout<<"2.是否输出当前方块种类"<<endl;
						cout<<"3.调整地图输出长宽"<<endl;
						cout<<"4.传送"<<endl;
						cout<<"5.修改速度"<<endl;
						cout<<"6.查看装备等级"<<endl;
						cout<<"7.查看怪物位置"<<endl;
						cout<<"8.修改是否水上行走"<<endl;
						cout<<"9.维度传送"<<endl;	
					}
					else if(language==1){
						cout<<"Please choose debug mode："<<endl;
						cout<<"1.Do Output Map"<<endl;
						cout<<"2.Do Output Block Type"<<endl;
						cout<<"3.Adjust Map Output Length and Width"<<endl;
						cout<<"4.Teleport"<<endl;
						cout<<"5.Change Speed"<<endl;
						cout<<"6.Check Equipment Level"<<endl;
						cout<<"7.Check Mob Position"<<endl;
						cout<<"8.Do Walk on Water"<<endl;
						cout<<"9.Dimension Teleport"<<endl;
					}
					cout<<endl;
					
					int choose_debug;
					cin>>choose_debug;
					if(choose_debug==1){
						cout<<"现在状态：";
						if(minecraft_gamerule.minecraft_output_map==true) cout<<"是"<<endl;
						else cout<<"否"<<endl;
						cout<<"按\"1\"键更改为";
						if(minecraft_gamerule.minecraft_output_map==true) cout<<"否"<<endl;
						else cout<<"是"<<endl;
						char choose_change_output_map=getch();
						if(choose_change_output_map=='1'){
							minecraft_gamerule.minecraft_output_map=minecraft_gamerule.minecraft_output_map^1;
							cout<<"更改成功"<<endl;
							pause;
						}
					}
					if(choose_debug==2&&minecraft_gamerule.minecraft_output_map==true){
						cout<<"现在状态：";
						if(minecraft_gamerule.minecraft_output_block_type==true) cout<<"是"<<endl;
						else cout<<"否"<<endl;
						cout<<"按\"1\"键更改为";
						if(minecraft_gamerule.minecraft_output_block_type==true) cout<<"否"<<endl;
						else cout<<"是"<<endl;
						char choose_change_output_block_type=getch();
						if(choose_change_output_block_type=='1'){
							if(minecraft_gamerule.minecraft_output_block_type==true){
								minecraft_gamerule.minecraft_output_block_type=false;
							}
							else{
								minecraft_gamerule.minecraft_output_block_type=true;
							}
							cout<<"更改成功"<<endl;
							pause;
						}
					}
					if(choose_debug==3&&minecraft_gamerule.minecraft_output_map==true){
						cout<<"现在输出长宽："<<endl;
						cout<<"长："<<minecraft_gamerule.minecraft_output_length*2+1<<" ";
						cout<<"宽："<<minecraft_gamerule.minecraft_output_width*2+1<<endl;\
						cout<<"按\"1\"键更改"<<endl;
						char choose_change_output_wl=getch();
						if(choose_change_output_wl=='1'){
							cout<<"请输入新的长（最大";
							cout<<minecraft_gamerule.minecraft_max_output_length;
							cout<<"）："<<endl;
							int new_length;
							cin>>new_length;
							if(new_length>minecraft_gamerule.minecraft_max_output_length){
								new_length=minecraft_gamerule.minecraft_max_output_length;
							}
							if(new_length%2==0){
								new_length++;
							} 
							minecraft_gamerule.minecraft_output_length=(new_length-1)/2;
							cout<<"请输入新的宽（最大";
							cout<<minecraft_gamerule.minecraft_max_output_width;
							cout<<"）："<<endl;
							int new_width;
							cin>>new_width;
							if(new_width>minecraft_gamerule.minecraft_max_output_width){
								new_width=minecraft_gamerule.minecraft_max_output_width;
							}
							if(new_width%2==0){
								new_width++;
							}
							minecraft_gamerule.minecraft_output_width=(new_width-1)/2;
							cout<<"更改成功"<<endl;
							pause;
						}
					}
					if(choose_debug==4&&minecraft_gamerule.minecraft_output_map==true){
						cout<<"现在位置："<<endl;
						cout<<"x:"<<px<<endl;
						cout<<"y:"<<py<<endl;
						cout<<"请输入要传送的坐标（x,y在0~"<<max_world-1<<"之间）："<<endl;
						int tpx,tpy;
						cout<<"x:";
						cin>>tpx;
						cout<<"y:";
						cin>>tpy;
						if(tpx<0||tpx>=max_world||tpy<0||tpy>=max_world){
							cout<<"坐标不可用"<<endl;
							pause;
							return;
						}
						px=tpx;
						py=tpy;
						if(world_map[px][py]==water.type){
							world_map[px][py]=grass.type;
						}
						cout<<"传送成功"<<endl;
						pause;
					}
					if(choose_debug==5&&minecraft_gamerule.minecraft_output_map==true){
						cout<<"当前加速效果："<<effection.run_speed_level<<endl;
						cout<<"请输入更改后的加速效果（0~5级）："<<endl;
						int new_run_speed_level;
						cin>>new_run_speed_level;
						if(new_run_speed_level>5) new_run_speed_level=5;
						if(new_run_speed_level<0) new_run_speed_level=0;
						effection.run_speed_level=new_run_speed_level;
						cout<<"修改成功"<<endl;
						pause;
					}
					if(choose_debug==6){
						cout<<"工作台：";
						if(gongzuotai.is_mine==true) cout<<"有"<<endl;
						else cout<<"没有"<<endl;
						cout<<"熔炉：";
						if(ronglu.is_mine==true) cout<<"有"<<endl;
						else cout<<"没有"<<endl;
						cout<<"头盔：";
						if(toukui_level==0) cout<<"没有"<<endl;
						if(toukui_level==1) cout<<"铁"<<endl;
						if(toukui_level==2) cout<<"金"<<endl;
						if(toukui_level==3) cout<<"钻石"<<endl;
						if(toukui_level==4) cout<<"下界合金"<<endl;
						cout<<"胸甲：";
						if(xiongjia_level==0) cout<<"没有"<<endl;
						if(xiongjia_level==1) cout<<"铁"<<endl;
						if(xiongjia_level==2) cout<<"金"<<endl;
						if(xiongjia_level==3) cout<<"钻石"<<endl;
						if(xiongjia_level==4) cout<<"下界合金"<<endl;
						cout<<"护腿：";
						if(hutui_level==0) cout<<"没有"<<endl;
						if(hutui_level==1) cout<<"铁"<<endl;
						if(hutui_level==2) cout<<"金"<<endl;
						if(hutui_level==3) cout<<"钻石"<<endl;
						if(hutui_level==4) cout<<"下界合金"<<endl;
						cout<<"靴子：";
						if(xuezi_level==0) cout<<"没有"<<endl;
						if(xuezi_level==1) cout<<"铁"<<endl;
						if(xuezi_level==2) cout<<"金"<<endl;
						if(xuezi_level==3) cout<<"钻石"<<endl;
						if(xuezi_level==4) cout<<"下界合金"<<endl;
						cout<<"剑：";
						if(jian_level==0) cout<<"没有"<<endl;
						if(jian_level==1) cout<<"木"<<endl;
						if(jian_level==2) cout<<"石"<<endl;
						if(jian_level==3) cout<<"铁"<<endl;
						if(jian_level==4) cout<<"钻石"<<endl;
						if(jian_level==5) cout<<"下界合金"<<endl;
						cout<<"镐：";
						if(gao_level==0) cout<<"没有"<<endl;
						if(gao_level==1) cout<<"木"<<endl;
						if(gao_level==2) cout<<"石"<<endl;
						if(gao_level==3) cout<<"铁"<<endl;
						if(gao_level==4) cout<<"钻石"<<endl;
						if(gao_level==5) cout<<"下界合金"<<endl;
						cout<<"斧：";
						if(fu_level==0) cout<<"没有"<<endl;
						if(fu_level==1) cout<<"木"<<endl;
						if(fu_level==2) cout<<"石"<<endl;
						if(fu_level==3) cout<<"铁"<<endl;
						if(fu_level==4) cout<<"钻石"<<endl;
						if(fu_level==5) cout<<"下界合金"<<endl;
						cout<<"铲：";
						if(chan_level==0) cout<<"没有"<<endl;
						if(chan_level==1) cout<<"木"<<endl;
						if(chan_level==2) cout<<"石"<<endl;
						if(chan_level==3) cout<<"铁"<<endl;
						if(chan_level==4) cout<<"钻石"<<endl;
						if(chan_level==5) cout<<"下界合金"<<endl;
						cout<<"锄：";
						if(chu_level==0) cout<<"没有"<<endl;
						if(chu_level==1) cout<<"木"<<endl;
						if(chu_level==2) cout<<"石"<<endl;
						if(chu_level==3) cout<<"铁"<<endl;
						if(chu_level==4) cout<<"钻石"<<endl;
						if(chu_level==5) cout<<"下界合金"<<endl;
						pause;
					}
					if(choose_debug==7){
						cout<<"当前位置： x:"<<px<<" y:"<<py<<endl;
						cout<<endl;
						cout<<"僵尸数量："<<zombie.quantity<<"个"<<endl;
						cout<<"僵尸位置："<<endl; 
						for(int i=1;i<=zombie.quantity;i++){
							cout<<"第"<<setw(3)<<i<<"个： x:"<<zombie.pos[i].posx<<" y:"<<zombie.pos[i].posy;
							cout<<" 距离：";
							int dis=sqrt(pow(zombie.pos[i].posx-px,2)+pow(zombie.pos[i].posy-py,2));
							cout<<setw(4)<<dis;
							cout<<"米"<<endl;
						}
						cout<<endl;
						cout<<"骷髅数量："<<kulou.quantity<<"个"<<endl;
						cout<<"骷髅位置："<<endl;
						for(int i=1;i<=kulou.quantity;i++){
							cout<<"第"<<setw(3)<<i<<"个： x:"<<kulou.pos[i].posx<<" y:"<<kulou.pos[i].posy;
							cout<<" 距离：";
							int dis=sqrt(pow(kulou.pos[i].posx-px,2)+pow(kulou.pos[i].posy-py,2));
							cout<<setw(4)<<dis;
							cout<<"米"<<endl;
						}
						pause;
					}
					if(choose_debug==8&&minecraft_gamerule.minecraft_output_map==true){
						cout<<"现在状态：";
						if(minecraft_gamerule.minecraft_can_walk_on_water==true) cout<<"是"<<endl;
						else cout<<"否"<<endl;
						cout<<"按\"1\"键更改为";
						if(minecraft_gamerule.minecraft_can_walk_on_water==true) cout<<"否"<<endl;
						else cout<<"是"<<endl;
						char choose_change_walk_on_water=getch();
						if(choose_change_walk_on_water=='1'){
							if(minecraft_gamerule.minecraft_can_walk_on_water==true){
								minecraft_gamerule.minecraft_can_walk_on_water=false;
							}
							else{
								minecraft_gamerule.minecraft_can_walk_on_water=true;
							}
							cout<<"更改成功"<<endl;
							pause;
						}
					}
					if(choose_debug==9){
						cout<<"请选择要去的维度："<<endl;
						cout<<"1.主世界 2.下界 3.末地"<<endl;
						char choose_dim=getch();
						if(choose_dim=='1'){
							if(dimension==1){
								dimension=0;
								px=npx*8;
								py=npy*8;
							}
							else if(dimension==2){
								dimension=0;
								px=epx*8;
								py=epy*8;
							}
							if(world_map[px][py]==water.type){
								world_map[px][py]=grass.type;
							}
						}
						if(choose_dim=='2'){
							if(dimension==0){
								dimension=1;
								npx=px/8;
								npy=py/8;
							}
							else if(dimension==2){
								dimension=1;
								npx=epx;
								npy=epy;
							}
							if(nether_world_map[npx][npy]==0){
								nether_world_map[npx][npy]=nether_stone.type;
							}
						}
						if(choose_dim=='3'){
							if(dimension==0){
								dimension=2;
								epx=px/8;
								epy=py/8;
							}
							else if(dimension==1){
								dimension=2;
								epx=npx;
								epy=npy;
							}
							if(end_world_map[epx][epy]==0){
								for(int i=epx-2;i<=epx+2;i++){
									for(int j=epy-2;j<=epy+2;j++){
										end_world_map[i][j]=end_stone.type;
										end_pz[i][j]=50;
									}
								}
								
							}
						}
						cout<<"传送成功"<<endl;
						pause;
					}
					cls;
					return;
				}
				void output(){
					if(minecraft_gamerule.minecraft_output_map==true){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
					}
					else{
						cls;
					}
					if(language==0) cout<<"时间刻：";
					else if(language==1) cout<<"Time Tick: ";
					cout<<world_tick<<endl;
					if(language==0) cout<<"维度：";
					else if(language==1) cout<<"Dimension: ";
					cout<<dimension<<endl;
					if(dimension==0){
						if(minecraft_gamerule.minecraft_output_map==true){
							cout<<"x:"<<px<<" ";
							cout<<"y:"<<py<<" ";
							cout<<"z:"<<pz[px][py]<<"   "<<endl;
							if(minecraft_gamerule.minecraft_output_block_type==true){
								if(language==0) cout<<"脚下方块ID：";
								else if(language==1) cout<<"Block: ";
								cout<<world_map[px][py]<<endl;
							}
							for(int i=px-minecraft_gamerule.minecraft_output_length;
								i<=px+minecraft_gamerule.minecraft_output_length;i++){
								for(int j=py-minecraft_gamerule.minecraft_output_width;
									j<=py+minecraft_gamerule.minecraft_output_width;j++){
									bool zb=false,kl=false;
									for(int k=1;k<=zombie.quantity;k++){
										if(zombie.pos[k].posx==i&&
											zombie.pos[k].posy==j){
											zb=true;
											break; 
										}
									}
									for(int k=1;k<=kulou.quantity;k++){
										if(kulou.pos[k].posx==i&&
											kulou.pos[k].posy==j){
											kl=true;
											break; 
										}
									}
									if(i==px&&j==py){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										world_map[i][j]*16);
										cout<<"ME";
									}
									else if(zb==true){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										world_map[i][j]*16+zombie.color_type);
										cout<<"■";
									}
									else if(kl==true){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										world_map[i][j]*16+kulou.color_type);
										cout<<"■";
									}
									else{
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										world_map[i][j]*17);
										cout<<"  ";
									}
								}
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								cout<<endl;
							}	
						}	
					}
					
					if(dimension==1){
						if(minecraft_gamerule.minecraft_output_map==true){
							cout<<"x:"<<npx<<" ";
							cout<<"y:"<<npy<<" ";
							cout<<"z:"<<nether_pz[npx][npy]<<"   "<<endl;
							if(minecraft_gamerule.minecraft_output_block_type==true){
								if(language==0) cout<<"脚下方块ID：";
								else if(language==1) cout<<"Block: ";
								cout<<nether_world_map[npx][npy]<<endl;
							}
							for(int i=npx-minecraft_gamerule.minecraft_output_length;
								i<=npx+minecraft_gamerule.minecraft_output_length;i++){
								for(int j=npy-minecraft_gamerule.minecraft_output_width;
									j<=npy+minecraft_gamerule.minecraft_output_width;j++){
									bool zb=false,kl=false;
									for(int k=1;k<=zombie.quantity;k++){
										if(zombie.pos[k].posx==i&&
											zombie.pos[k].posy==j){
											zb=true;
											break; 
										}
									}
									for(int k=1;k<=kulou.quantity;k++){
										if(kulou.pos[k].posx==i&&
											kulou.pos[k].posy==j){
											kl=true;
											break; 
										}
									}
									if(i==npx&&j==npy){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										nether_world_map[i][j]*16);
										cout<<"ME";
									}
									else if(zb==true){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										nether_world_map[i][j]*16+zombie.color_type);
										cout<<"■";
									}
									else if(kl==true){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										nether_world_map[i][j]*16+kulou.color_type);
										cout<<"■";
									}
									else{
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										nether_world_map[i][j]*17);
										cout<<"  ";
									}
								}
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								cout<<endl;
							}	
						}	
					}
					
					if(dimension==2){
						if(minecraft_gamerule.minecraft_output_map==true){
							cout<<"x:"<<epx<<" ";
							cout<<"y:"<<epy<<" ";
							cout<<"z:"<<end_pz[epx][epy]<<"   "<<endl;
							if(minecraft_gamerule.minecraft_output_block_type==true){
								if(language==0) cout<<"脚下方块ID：";
								else if(language==1) cout<<"Block: ";
								cout<<end_world_map[epx][epy]<<endl;
							}
							for(int i=epx-minecraft_gamerule.minecraft_output_length;
								i<=epx+minecraft_gamerule.minecraft_output_length;i++){
								for(int j=epy-minecraft_gamerule.minecraft_output_width;
									j<=epy+minecraft_gamerule.minecraft_output_width;j++){
									bool zb=false,kl=false;
									for(int k=1;k<=zombie.quantity;k++){
										if(zombie.pos[k].posx==i&&
											zombie.pos[k].posy==j){
											zb=true;
											break; 
										}
									}
									for(int k=1;k<=kulou.quantity;k++){
										if(kulou.pos[k].posx==i&&
											kulou.pos[k].posy==j){
											kl=true;
											break; 
										}
									}
									if(i==epx&&j==epy){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										end_world_map[i][j]*16);
										cout<<"ME";
									}
									else if(zb==true){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										end_world_map[i][j]*16+zombie.color_type);
										cout<<"■";
									}
									else if(kl==true){
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										end_world_map[i][j]*16+kulou.color_type);
										cout<<"■";
									}
									else{
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
										end_world_map[i][j]*17);
										cout<<"  ";
									}
								}
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								cout<<endl;
							}	
						}	
					}
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
					if(language==0){
						cout<<"生命值： "<<life<<"  ";
						cout<<"饥饿度： "<<hungry<<"  ";
						cout<<"攻击力： "<<creature_jianxie()<<"  ";
						cout<<"护甲值： "<<hujiazhi<<"  ";
						cout<<endl;
						
						cout<<"善良值： "<<kindness<<"  ";
						cout<<"怪物击杀数： "<<kill_mob<<"  ";
						cout<<"死亡次数： "<<player_total_die<<"  ";
						cout<<endl;
						
						wupinlan();
						
						cout<<"当前手持物品：";
						if(kuaijielan_state==0) cout<<"无";
						else if(kuaijielan_state==find("圆石")){
							cout<<items[find("圆石")].cname<<"*"<<items[find("圆石")].quantity;
						}
						else if(kuaijielan_state==find("下界岩")){
							cout<<items[find("下界岩")].cname<<"*"<<items[find("下界岩")].quantity;
						}
						else if(kuaijielan_state==find("末地石")){
							cout<<items[find("末地石")].cname<<"*"<<items[find("末地石")].quantity;
						}
						cout<<endl;
					}
					else if(language==1){
						cout<<"Life: "<<life<<"  ";
						cout<<"Hunger: "<<hungry<<"  ";
						cout<<"Attack: "<<creature_jianxie()<<"  ";
						cout<<"Defence: "<<hujiazhi<<"  ";
						cout<<endl;
						
						cout<<"Kindness: "<<kindness<<"  ";
						cout<<"Kill Mob Number: "<<kill_mob<<"  ";
						cout<<"Total Die Time: "<<player_total_die<<"  ";
						cout<<endl;
						
						wupinlan();
						
						cout<<"Handhold Item: ";
						if(kuaijielan_state==0) cout<<"N.A.";
						else if(kuaijielan_state==find("圆石")){
							cout<<items[find("圆石")].ename<<"*"<<items[find("圆石")].quantity;
						}
						else if(kuaijielan_state==find("下界岩")){
							cout<<items[find("下界岩")].ename<<"*"<<items[find("下界岩")].quantity;
						}
						else if(kuaijielan_state==find("末地石")){
							cout<<items[find("末地石")].ename<<"*"<<items[find("末地石")].quantity;
						}
						cout<<endl;
					}
					
					if(language==0){
						cout<<"请问你要干什么？"<<endl;
						cout<<"1.砍树 ";
						cout<<"2.打动物 ";
						cout<<"3.合成 ";
						cout<<"4.吃东西 ";
						cout<<"5.挖掘 ";
						if(ronglu.is_mine==true){
							cout<<"6.烧炼 ";
						}
						if(items[find("圆石")].quantity>=52){
							cout<<"7.盖房子 ";
						}
						if(toukui_level>0||
							xiongjia_level>0||
							hutui_level>0||
							xuezi_level>0||
							jian_level>0||
							gao_level>0){
							cout<<"8.附魔 ";
						}
						cout<<"q.退出"<<endl;	
					}
					else if(language==1){
						cout<<"What do you want to do now?"<<endl;
						cout<<"1.Cut tree ";
						cout<<"2.Attack Animal ";
						cout<<"3.Craft ";
						cout<<"4.Eat ";
						cout<<"5.Mine ";
						if(ronglu.is_mine==true){
							cout<<"6.Melt ";
						}
						if(items[find("圆石")].quantity>=52){
							cout<<"7.Build House ";
						}
						if(toukui_level>0||
							xiongjia_level>0||
							hutui_level>0||
							xuezi_level>0||
							jian_level>0||
							gao_level>0){
							cout<<"8.Enchant ";
						}
						cout<<"q.Quit"<<endl;
					}
					
					
					bool zombie_nearby=false,kulou_nearby=false;
					for(int i=px-8;i<=px+8;i++){
						for(int j=py-8;j<=py+8;j++){
							for(int k=1;k<=zombie.quantity;k++){
								if(zombie.pos[k].posx==i&&
									zombie.pos[k].posy==j){
									zombie_nearby=true;
									break;
								}
							}
							for(int k=1;k<=kulou.quantity;k++){
								if(kulou.pos[k].posx==i&&
									kulou.pos[k].posy==j){
									kulou_nearby=true;
									break;
								}
							}
						}
					}
					if(zombie_nearby==true||kulou_nearby==true){
						if(language==0) cout<<"警告：你周围有怪物在游荡！"<<endl;
						else if(language==0) cout<<"Warning: There are mobs around you!"<<endl;
						
					}
					else{
						cout<<"                                      "<<endl; 
					}
					
					if(drown_count>=max_swim+2*toukui.underwater_breath.level-2){
						if(language==0) cout<<"警告：你即将溺水！"<<endl;
						else if(language==0) cout<<"Warning: You are going to drown!"<<endl;
					}
					else{
						cout<<"                                   "<<endl; 
					}
					
					return;
				}
				void check(){
					advancements();
					if(px<0) px=0;
					if(py<0) py=0;
					if(px>=max_world) px=max_world-1;
					if(py>=max_world) py=max_world-1;
					if(npx<0) npx=0;
					if(npy<0) npy=0;
					if(npx>=nether_max_world) npx=nether_max_world-1;
					if(npy>=nether_max_world) npy=nether_max_world-1;
					if(epx<0) epx=0;
					if(epy<0) epy=0;
					if(epx>=end_max_world) epx=end_max_world-1;
					if(epy>=end_max_world) epy=end_max_world-1;
					for(int i=px-minecraft_gamerule.minecraft_max_output_width-10;
							i<=px+minecraft_gamerule.minecraft_max_output_width+10;i++){
						for(int j=py-minecraft_gamerule.minecraft_max_output_length-10;
								j<=py+minecraft_gamerule.minecraft_max_output_length+10;j++){
							if(pz[i][j]==0) world_map[i][j]=0;
						}
					}
					if(world_map[px][py]==water.type){
						if(minecraft_gamerule.minecraft_can_walk_on_water==false){
							drown_count++;
						}
					}
					else{
						drown_count=0;
					}
					if(drown_count>=max_swim+2*toukui.underwater_breath.level){
						if(minecraft_gamerule.minecraft_can_walk_on_water==false){
							drown_count=0;
							life-=1e9;
						}
					}
					if(world_map[px][py]==0){
						life-=1e9;
					}
					if((dimension==0&&pz[px][py]<=0)||
						(dimension==1&&nether_pz[npx][npy]<=0)||
						(dimension==2&&end_pz[epx][epy]<=0)){
						life-=1e9;
					}
					int random_huncheck=random(1,100);
					if(random_huncheck>=1&&random_huncheck<=15){
						huncheck++;
					}
					if(random_huncheck>=16&&random_huncheck<=100){
						if(huncheck%3==0){
							huncheck--;
						}
						else{
							;
						}
					}
					if(huncheck%3==0){
						hungry--;
					}
					if(hungry<=0){
						life--;
						hungry=0;
					}
					if(maxlife>150){
						maxlife=150;
					}
					huixiecheck^=1;
					if(hungry>=45&&huixiecheck==1&&life>0){
						life++;
					}
					if(life>maxlife){
						life=maxlife;
					}
					for(int i=1;i<=101;i++){
						if(kuaijielan_state==i&&items[i].quantity<=0){
							kuaijielan_state=0;//若快捷栏没有物品，则清空快捷栏 
						}
					}
					world_tick_change=GetTickCount()-world_tick_get;
					world_tick_get=GetTickCount();
					world_tick+=int(world_tick_change/50.0);
					
					hujiazhi=count_hujiazhi();
		//			treasure(0);
					zombie_AI();
					kulou_AI();
					mob_attack();
					return;
				}
				void die(){
					cls;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
					cout<<"    █    █        █████████    ████████    █\n";
					cout<<"  █    ████        █    █                      █      █\n";
					cout<<"██  █    █          ██  █                    █        █\n";
					cout<<"  █                  █  █  █                  ██        █\n";
					cout<<"  █  █  █  █    █  ██  ███              █          █\n";
					cout<<"  █  █  █  █        █    █                  █          █\n";
					cout<<"  █      █          █      █    █            █            \n";
					cout<<"  █    ██        █        ████          ██          █\n";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
					player_total_die++;
					dimension=0;
					if(minecraft_gamerule.minecraft_output_map==true){
						px=random(int(max_world/4.0*1.0),int(max_world/4.0*3.0)-1);
						py=random(int(max_world/4.0*1.0),int(max_world/4.0*3.0)-1);
						bornx=px;
						borny=py;	
					}
					maxlife=20;
					life=maxlife;
					hungry=50;
					drown_count=0;
					world_tick=0;
					world_tick_get=GetTickCount();
					pause;
					return;
				}
				void survive(){
					cls;
					if(world_map[px][py]==water.type||world_map[px][py]==0){
						world_map[px][py]=grass.type;
					}
					huncheck=0;
					drown_count=0;
					world_tick=0;
					world_tick_get=GetTickCount();
					check();
					while(life>0){
						output();
						spawn_creature();
						char minecraft_movement=getch();
						if(minecraft_movement>='A'&&minecraft_movement<='Z'){
							minecraft_movement=minecraft_movement-'A'+'a';
						}
						if(minecraft_movement=='1'){
							kanshu();
						}
						if(minecraft_movement=='2'){
							creature();
						}
						if(minecraft_movement=='3'){
							if(gongzuotai.is_mine==true){
								craft();
							}
							else{
								mini_craft();
							}
						}
						if(minecraft_movement=='4'){
							eat();
						}
						if(minecraft_movement=='5'){
							mine();
						}
						if(minecraft_movement=='6'&&ronglu.is_mine==true){
							melt();
						} 
						if(minecraft_movement=='7'){
							build_house();
						}
						if(minecraft_movement=='8'){
							enchant();
						}
						if(minecraft_movement=='w'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								px-=(effection.run_speed_level+1);
							}
							if(dimension==1){
								npx-=(effection.run_speed_level+1);
							}
							if(dimension==2){
								epx-=(effection.run_speed_level+1);
							}
						}
						if(minecraft_movement=='a'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								py-=(effection.run_speed_level+1);
							}
							if(dimension==1){
								npy-=(effection.run_speed_level+1);
							}
							if(dimension==2){
								epy-=(effection.run_speed_level+1);
							}
						}
						if(minecraft_movement=='s'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								px+=(effection.run_speed_level+1);
							}
							if(dimension==1){
								npx+=(effection.run_speed_level+1);
							}
							if(dimension==2){
								epx+=(effection.run_speed_level+1);
							}
						}
						if(minecraft_movement=='d'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								py+=(effection.run_speed_level+1);
							}
							if(dimension==1){
								npy+=(effection.run_speed_level+1);
							}
							if(dimension==2){
								epy+=(effection.run_speed_level+1);
							}
						}
						if(minecraft_movement=='i'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								if(kuaijielan_state==find("圆石")){
									world_map[px-1][py]=stone.type;
									pz[px-1][py]+=1;
									items[kuaijielan_state].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									world_map[px-1][py]=nether_stone.type;
									pz[px-1][py]+=1;
									items[kuaijielan_state].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									world_map[px-1][py]=end_stone.type;
									pz[px-1][py]+=1;
									items[kuaijielan_state].quantity-=1;
								}
							}
							if(dimension==1){
								if(kuaijielan_state==find("圆石")){
									nether_world_map[npx-1][npy]=stone.type;
									nether_pz[npx-1][npy]+=1;
									items[kuaijielan_state].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									nether_world_map[npx-1][npy]=nether_stone.type;
									nether_pz[npx-1][npy]+=1;
									items[kuaijielan_state].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									nether_world_map[npx-1][npy]=end_stone.type;
									nether_pz[npx-1][npy]+=1;
									items[kuaijielan_state].quantity-=1;
								}
							}
							if(dimension==2){
								if(kuaijielan_state==find("圆石")){
									end_world_map[epx-1][epy]=stone.type;
									end_pz[epx-1][epy]+=1;
									items[kuaijielan_state].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									end_world_map[epx-1][epy]=nether_stone.type;
									end_pz[epx-1][epy]+=1;
									items[kuaijielan_state].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									end_world_map[epx-1][epy]=end_stone.type;
									end_pz[epx-1][epy]+=1;
									items[kuaijielan_state].quantity-=1;
								}
							}
						}
						if(minecraft_movement=='j'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								if(kuaijielan_state==find("圆石")){
									world_map[px][py-1]=stone.type;
									pz[px][py-1]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									world_map[px][py-1]=nether_stone.type;
									pz[px][py-1]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									world_map[px][py-1]=end_stone.type;
									pz[px][py-1]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==1){
								if(kuaijielan_state==find("圆石")){
									nether_world_map[npx][npy-1]=stone.type;
									nether_pz[npx][npy-1]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									nether_world_map[npx][npy-1]=nether_stone.type;
									nether_pz[npx][npy-1]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									nether_world_map[npx][npy-1]=end_stone.type;
									nether_pz[npx][npy-1]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==2){
								if(kuaijielan_state==find("圆石")){
									end_world_map[epx][epy-1]=stone.type;
									end_pz[epx][epy-1]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									end_world_map[epx][epy-1]=nether_stone.type;
									end_pz[epx][epy-1]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									end_world_map[epx][epy-1]=end_stone.type;
									end_pz[epx][epy-1]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
						}
						if(minecraft_movement==','&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								if(kuaijielan_state==find("圆石")){
									world_map[px+1][py]=stone.type;
									pz[px+1][py]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									world_map[px+1][py]=nether_stone.type;
									pz[px+1][py]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									world_map[px+1][py]=end_stone.type;
									pz[px+1][py]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==1){
								if(kuaijielan_state==find("圆石")){
									nether_world_map[npx+1][npy]=stone.type;
									nether_pz[npx+1][npy]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									nether_world_map[npx+1][npy]=nether_stone.type;
									nether_pz[npx+1][npy]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									nether_world_map[npx+1][npy]=end_stone.type;
									nether_pz[npx+1][npy]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==2){
								if(kuaijielan_state==find("圆石")){
									end_world_map[epx+1][epy]=stone.type;
									end_pz[epx+1][epy]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									end_world_map[epx+1][epy]=nether_stone.type;
									end_pz[epx+1][epy]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									end_world_map[epx+1][epy]=end_stone.type;
									end_pz[epx+1][epy]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
						}
						if(minecraft_movement=='l'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								if(kuaijielan_state==find("圆石")){
									world_map[px][py+1]=stone.type;
									pz[px][py+1]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									world_map[px][py+1]=nether_stone.type;
									pz[px][py+1]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									world_map[px][py+1]=end_stone.type;
									pz[px][py+1]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==1){
								if(kuaijielan_state==find("圆石")){
									nether_world_map[npx][npy+1]=stone.type;
									nether_pz[npx][npy+1]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									nether_world_map[npx][npy+1]=nether_stone.type;
									nether_pz[npx][npy+1]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									nether_world_map[npx][npy+1]=end_stone.type;
									nether_pz[npx][npy+1]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==2){
								if(kuaijielan_state==find("圆石")){
									end_world_map[epx][epy+1]=stone.type;
									end_pz[epx][epy+1]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									end_world_map[epx][epy+1]=nether_stone.type;
									end_pz[epx][epy+1]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									end_world_map[epx][epy+1]=end_stone.type;
									end_pz[epx][epy+1]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
						}
						if(minecraft_movement=='k'&&
							minecraft_gamerule.minecraft_output_map==true){
							if(dimension==0){
								if(kuaijielan_state==find("圆石")){
									world_map[px][py]=stone.type;
									pz[px][py]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									world_map[px][py]=nether_stone.type;
									pz[px][py]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									world_map[px][py]=end_stone.type;
									pz[px][py]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==1){
								if(kuaijielan_state==find("圆石")){
									nether_world_map[npx][npy]=stone.type;
									nether_pz[npx][npy]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									nether_world_map[npx][npy]=nether_stone.type;
									nether_pz[npx][npy]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									nether_world_map[npx][npy]=end_stone.type;
									nether_pz[npx][npy]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
							if(dimension==2){
								if(kuaijielan_state==find("圆石")){
									end_world_map[epx][epy]=stone.type;
									end_pz[epx][epy]+=1;
									items[find("圆石")].quantity-=1;
								}
								if(kuaijielan_state==find("下界岩")){
									end_world_map[epx][epy]=nether_stone.type;
									end_pz[epx][epy]+=1;
									items[find("下界岩")].quantity-=1;
								}
								if(kuaijielan_state==find("末地石")){
									end_world_map[epx][epy]=end_stone.type;
									end_pz[epx][epy]+=1;
									items[find("末地石")].quantity-=1;
								}
							}
						}
						if(minecraft_movement=='f'){
							kuaijielan();
						}
						if(minecraft_movement=='e'){
							item_list();
						}
						if(minecraft_movement=='c'){
							cls;
						}
						if(minecraft_movement=='/'){
							debug();
						}
						if(minecraft_movement=='q'){
							break;
						}
						check();
					}
					if(life<=0){
						die();
					}
					return;
				}
				void create(){
					cls;
					if(language==0) cout<<"游戏正在开发中"<<endl;
					else if(language==1) cout<<"The game is developing"<<endl;
					pause;
					return;
				}
				void answer(){
					cls;
					int jifen=0,answer_total_get_diamond=0;
					while(1){
						int timu=random(1,100);
						char answer;
						if(timu==1){
							cls;
							cout<<"现在积分是"<<jifen<<"分"<<endl;
							cout<<"钻石是由什么元素组成的？"<<endl;
							cout<<"1.硅 2.碳 3.金 4.铜 q.退出答题模式"<<endl;
							answer=getch();
							if(answer=='2'){
								cout<<"正确！"<<endl;
								jifen++;
							}
							else if(answer!='q'){
								cout<<"错误！"<<endl;
								if(jifen>0) jifen--;
							}
							else break;
						}
						if(timu==2){
							cls;
							cout<<"现在积分是"<<jifen<<"分"<<endl;
							cout<<"123+3247=？"<<endl;
							cout<<"1.3360 2.5477 3.3124 4.3370 q.退出答题模式"<<endl;
							answer=getch();
							if(answer=='4'){
								cout<<"正确！"<<endl;
								jifen++;
							}
							else if(answer!='q'){
								cout<<"错误！"<<endl;
								if(jifen>0) jifen--;
							}
							else break;
						}
						if(timu==3){
							cls;
							cout<<"现在积分是"<<jifen<<"分"<<endl;
							cout<<"15323-1211=？"<<endl;
							cout<<"1.321 2.3210 3.14112 4.13212 q.退出答题模式"<<endl;
							answer=getch();
							if(answer=='3'){
								cout<<"正确！"<<endl;
								jifen++;
							}
							else if(answer!='q'){
								cout<<"错误！"<<endl;
								if(jifen>0) jifen--;
							}
							else break;
						}
					}
					cls;
					answer_total_get_diamond=jifen/4;
					cout<<"总积分是"<<jifen<<"分"<<endl;
					cout<<"当前可获得钻石*"<<answer_total_get_diamond<<endl;
					pause;
					items[find("钻石")].quantity+=answer_total_get_diamond;
					return;
				}
				void preparation(){
					//格式： 中文名+英文名+武器等级+盔甲等级+回复饱食度+回复生命值+数量 
					items[1]={"橡木","oak",0,0,0,0,0};
					items[2]={"木板","oak_planks",1,0,0,0,0};
					items[3]={"木棍","stick",0,0,0,0,0};
					items[4]={"苹果","apple",0,0,4,0,0};
					items[5]={"火把","torch",0,0,0,0,0};
					items[6]={"生猪肉","rare_pork",0,0,6,0,0};
					items[7]={"熟猪肉","cooked_pork",0,0,10,0,0};
					items[8]={"生牛肉","rare_beef",0,0,5,0,0};
					items[9]={"熟牛肉","cooked_beef",0,0,8,0,0};
					items[10]={"生鸡肉","rare_chicken",0,0,4,0,0};
					items[11]={"熟鸡肉","cooked_chicken",0,0,7,0,0};
					items[12]={"生羊肉","rare_mutton",0,0,5,0,0};
					items[13]={"熟羊肉","cooked_mutton",0,0,9,0,0};
					items[14]={"皮革","leather",0,0,0,0,0};
					items[15]={"羽毛","feather",0,0,0,0,0};
					items[16]={"腐肉","furou",0,0,0,0,0};
					items[17]={"箭","arrow",0,0,0,0,0};
					items[18]={"骨头","bone",0,0,0,0,0};
					items[19]={"骨粉","bone_meal",0,0,0,0,0};
					items[20]={"烈焰棒","blaze_rod",0,0,0,0,0};
					items[21]={"烈焰粉","blaze_powder",0,0,0,0,0};
					items[22]={"圆石","cobblestone",2,0,0,0,0};
					items[23]={"石头","stone",0,0,0,0,0};
					items[24]={"下界岩","nether_stone",0,0,0,0,0};
					items[25]={"下界砖","nether_brick",0,0,0,0,0};
					items[26]={"灵魂沙","soul_sand",0,0,0,0,0};
					items[27]={"灵魂土","soul_dirt",0,0,0,0,0};
					items[28]={"末地石","end_stone",0,0,0,0,0};
					items[29]={"沙子","sand",0,0,0,0,0};
					items[30]={"玻璃","glass",0,0,0,0,0};
					items[31]={"沙砾","gravel",0,0,0,0,0};
					items[32]={"燧石","flint",0,0,0,0,0};
					items[33]={"煤炭","coal",0,0,0,0,0};
					items[34]={"铁锭","iron_ingot",3,1,0,0,0};
					items[35]={"金锭","gold_ingot",0,2,0,0,0};
					items[36]={"钻石","diamond",4,3,0,0,0};
					items[37]={"青金石","lapis",0,0,0,0,0};
					items[38]={"红石","redstone",0,0,0,0,0};
					items[39]={"绿宝石","emerald",0,0,0,0,0};
					items[40]={"下界石英","nether_quartz",0,0,0,0,0};
					items[41]={"远古碎片","ancient_debris",0,0,0,0,0};
					items[42]={"下界合金锭","netherite",5,4,0,0,0};
					items[43]={"煤矿石","coal_ore",0,0,0,0,0};
					items[44]={"铜矿石","bronze_ore",0,0,0,0,0};
					items[45]={"铁矿石","iron_ore",0,0,0,0,0};
					items[46]={"金矿石","gold_ore",0,0,0,0,0};
					items[47]={"钻石矿石","diamond_ore",0,0,0,0,0};
					items[48]={"青金石矿石","lapis_ore",0,0,0,0,0};
					items[49]={"红石矿石","redstone_ore",0,0,0,0,0};
					items[50]={"绿宝石矿石","emerald_ore",0,0,0,0,0};
					items[51]={"铁粒","iron_particle",0,0,0,0,0};
					items[52]={"金粒","gold_particle",0,0,0,0,0};
					items[53]={"铁块","iron_block",0,0,0,0,0};
					items[54]={"金块","gold_block",0,0,0,0,0};
					items[55]={"钻石块","diamond_block",0,0,0,0,0};
					items[56]={"青金石块","qingjinshikuai",0,0,0,0,0};
					items[57]={"红石块","redstone_block",0,0,0,0,0};
					items[58]={"绿宝石块","emerald_block",0,0,0,0,0};
					items[59]={"下界砖块","nether_brick_block",0,0,0,0,0};
					items[60]={"下界石英块","xiajieshiyingkuai",0,0,0,0,0};
					items[61]={"铁魂石","iron_soul_stone",0,0,0,0,0};
					items[62]={"金苹果","gold_apple",0,0,40,8,0};
					items[63]={"附魔金苹果","enchanted_gold_apple",0,0,80,20,0};
					items[64]={"超级附魔金苹果","super_enchanted_gold_apple",0,0,200,100,0};
					items[65]={"拉杆","lever",0,0,0,0,0};
					items[66]={"木质按钮","wood_button",0,0,0,0,0};
					items[67]={"石质按钮","stone_button",0,0,0,0,0};
					items[68]={"羊毛","wool",0,0,0,0,0};
					items[69]={"黑石","black_stone",0,0,0,0,0};
					items[70]={"镶金黑石","black_stone_with_gold",0,0,0,0,0};
					items[71]={"水晶","crystal",0,0,0,0,0};
					items[72]={"水晶块","crystal_block",0,0,0,0,0};
					items[73]={"铜锭","tongding",0,0,0,0,0};
					items[74]={"铜块","bronze_block",0,0,0,0,0};
					items[75]={"钟乳石","stalactite",0,0,0,0,0};
					items[76]={"石笋","stalagmite",0,0,0,0,0};
					
					melts[1]={find("铜矿石"),find("铜锭")};
					melts[2]={find("铁矿石"),find("铁锭")};
					melts[3]={find("金矿石"),find("金锭")};
					melts[4]={find("沙子"),find("玻璃")};
					melts[5]={find("圆石"),find("石头")};
					melts[6]={find("生猪肉"),find("熟猪肉")};
					melts[7]={find("生牛肉"),find("熟牛肉")};
					melts[8]={find("生鸡肉"),find("熟鸡肉")};
					melts[9]={find("生羊肉"),find("熟羊肉")};
					melts[10]={find("下界岩"),find("下界砖")};
					
					ivt[1][1]=inventory{find("橡木"),1};
					rcp[1]={1,ivt[1],inventory{find("木板"),4}};
					
					ivt[3][1]=inventory{find("木板"),2};
					rcp[3]={1,ivt[3],inventory{find("木棍"),4}};
					
					ivt[24][1]=inventory{find("木棍"),1};
					ivt[24][2]=inventory{find("煤炭"),1};
					rcp[24]={1,ivt[24],inventory{find("火把"),4}};
					
					ivt[25][1]=inventory{find("金锭"),4};
					ivt[25][2]=inventory{find("远古碎片"),4};
					rcp[25]={1,ivt[25],inventory{find("下界合金锭"),1}};
					
					chengjiu[1]={"正道的光","放过200条鲜活的生命"};
					chengjiu[2]={"战斗机器","累计击杀100只怪物"};
					chengjiu[3]={"建筑大师",""};
					chengjiu[4]={"万死不悔","你是怎么做到死亡100次还在坚持的？"};
					chengjiu[5]={"初级肝帝","合成出铁魂石"};
					chengjiu[6]={"普通肝帝","合成出超级附魔金苹果"};
					chengjiu[7]={"进阶肝帝",""};
					chengjiu[8]={"高级肝帝",""};
					chengjiu[9]={"终级肝帝",""};
					chengjiu[10]={"初级矿工","挖掘1000个方块"};
					chengjiu[11]={"普通矿工","挖掘10000个方块"};
					chengjiu[12]={"进阶矿工","挖掘10万个方块"};
					chengjiu[13]={"全能矿工","每种岩石各挖掘20万个"};
					
					maxlife=20;
					life=20;
					hungry=50;
					torch.light_level=15;
					
					gao_level=0;
					jian_level=0;
					fu_level=0;
					chu_level=0;
					chan_level=0;
					toukui_level=0;
					xiongjia_level=0;
					hutui_level=0;
					xuezi_level=0;
					
					zombie.min_hurt=3;
					zombie.max_hurt=4;
					zombie.quantity=0;
					zombie.color_type=9;
					kulou.min_hurt=4;
					kulou.max_hurt=6;
					kulou.quantity=0;
					kulou.color_type=7;
					
					water.type=1;
					grass.type=2;
					nether_stone.type=4;
					end_stone.type=6;
					stone.type=8;
					sand.type=14;
//					glass,cobblestone,torch;	
					minecraft_gamerule.minecraft_output_length=8;
					minecraft_gamerule.minecraft_output_width=12;
					shengcheng_map();
					px=random(int(max_world/4.0*1.0),int(max_world/4.0*3.0)-1);
					py=random(int(max_world/4.0*1.0),int(max_world/4.0*3.0)-1);
					bornx=px;
					borny=py;
					world_tick_get=GetTickCount();
					return;
				}
				void main_page(){
					while(1){
						cls;
						long long minecraft_title=random(1,10000);
						long long minecraft_subtitle=random(1,100);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
						if(minecraft_title>=1&&minecraft_title<=9999){
							cout<<"█      █  █  █    █  ███  ███  ██      █    ███  ███\n";
							cout<<"██  ██  █  ██  █  █      █      █  █  █  █  █        █  \n";
							cout<<"█  █  █  █  ████  ███  █      ██    ███  ███    █  \n";
							cout<<"█      █  █  █  ██  █      █      █  █  █  █  █        █  \n";
							cout<<"█      █  █  █    █  ███  ███  █  █  █  █  █        █  \n";
						}
						if(minecraft_title==10000){
							cout<<"█      █  █  █    █  ███  ███  ██      █    ███  ███\n";
							cout<<"██  ██  █  ██  █  █      █      █  █  █  █  █        █  \n";
							cout<<"█  █  █  █  ████  █      ███  ██    ███  ███    █  \n";
							cout<<"█      █  █  █  ██  █      █      █  █  █  █  █        █  \n";
							cout<<"█      █  █  █    █  ███  ███  █  █  █  █  █        █  \n";
							minecraft_subtitle=101;
						}
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
						if(minecraft_subtitle>=1&&minecraft_subtitle<=25){
							cout<<"这是一个非常好玩的游戏！"<<endl;
						}
						if(minecraft_subtitle>=26&&minecraft_subtitle<=50){
							cout<<"crane自编的我的世界！"<<endl;
						}
						if(minecraft_subtitle>=51&&minecraft_subtitle<=75){
							cout<<"生物大更新！"<<endl;
						}
						if(minecraft_subtitle>=76&&minecraft_subtitle<=100){
							cout<<"维度大更新！"<<endl;
						}
						if(minecraft_subtitle==101){
							cout<<"1/10000几率的彩蛋！"<<endl;
						}
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<"请选择游戏模式："<<endl;
						cout<<"1.生存 2.创造 3.答题 q.退出"<<endl;
						char choose_minecraft_gamemode=getch();
						if(choose_minecraft_gamemode=='1'){
							survive();
						}
						if(choose_minecraft_gamemode=='2'){
							create();
						}
						if(choose_minecraft_gamemode=='3'){
							answer();
						}
						if(choose_minecraft_gamemode=='q'){
							break;
						}
					}
					cls;
					return;
				} 
		}minecraft_game;
		class warld{
			public:
				struct field{
					int type;
				};
				struct cit{
					int level=1;
					int posx,posy;
					long long population=0;
				}citi[101];
				struct War{
					double money;
					int popu;
					int soldier;
					int war_point=0;
					int war_shiqi=100;
				}opposite;;
			public:
				field water,grass,city;
				short int world_map[max_warld][max_warld];
				long long day=1;
				double money=1000.0,area=1.0;
				long long popu=100;
				int cities=0;
				int soldier=0,worker=0,no_job=100;
				int war_shiqi=100,war_win=0;
				int war_point=0,get_per=5000;
				double train_soldier_cost=1.2,train_worker_cost=1.5;
				//adult=popu/10*8,child=popu/10,elder=popu/10;
				int school=0,factory=0;
				double average_salary_per_day=0.0,average_earn_per_day=0.0,tax_per_day=0.0;
				double average_save=0.0;
				int GDP=0;
				double tax=0.0;
				int sx,sy,selx,sely;
				int upgrade_city_cost(int level){
					if(level==1) return 100;
					if(level==2) return 300;
					if(level==3) return 800;
					if(level==4) return 2000;
					if(level==5) return 4500;
					if(level==6) return 11000;
					if(level==7) return 24000;
					if(level==8) return 52000;
					if(level==9) return 120000;
					if(level==10) return 280000;
					if(level==11) return 650000;
					if(level==12) return 1500000;
					if(level==13) return 4000000;
					if(level==14) return 10000000;
					if(level==15) return 27500000;
					if(level==16) return 65000000;
					if(level==17) return 160000000;
					
					return 420000000;
				}
				int city_max_popu(int level){
					if(level==1) return 200;
					if(level==2) return 300;
					if(level==3) return 500;
					if(level==4) return 800;
					if(level==5) return 1200;
					if(level==6) return 1800;
					if(level==7) return 2500;
					if(level==8) return 3500;
					if(level==9) return 5000;
					if(level==10) return 7000;
					if(level==11) return 10000;
					if(level==12) return 15000;
					if(level==13) return 25000;
					if(level==14) return 45000;
					if(level==15) return 80000;
					if(level==16) return 150000;
					if(level==17) return 250000;
					
					return 400000;
				}
				void upgrade_city(){
					cls;
					cout<<"金币："<<money<<"元"<<endl;
					for(int i=1;i<=cities;i++){
						cout<<"城市"<<i<<" ： 升级需"<<upgrade_city_cost(citi[i].level)<<"元"<<endl; 
					}
					cout<<"请输入要升级的城市："<<endl;
					int warld_upgrade;
					cin>>warld_upgrade;
					if(money>=upgrade_city_cost(citi[warld_upgrade].level)){
						money-=upgrade_city_cost(citi[warld_upgrade].level);
						citi[warld_upgrade].level++;
						cout<<"升级成功！"<<endl;
					}
				} 
				void about_tax(){
					while(1){
						cls;
						printf("税率：%.1f%%\n",tax*100.0);
						printf("人均日收入：%.2f\n",average_salary_per_day);
						printf("人均实际日收入：%.2f\n",average_earn_per_day);
						printf("日税收：%.2f\n",tax_per_day);
						printf("日总税收：%.2f\n",tax_per_day*popu*1.0);
						cout<<endl;
						cout<<"-0.1%  税率  +0.1%"<<endl;
						char warld_tax=getch();
						if(warld_tax=='a'&&tax-0.001>=0.0){
							tax-=0.001;
						}
						if(warld_tax=='d'&&tax+0.001<=1.0){
							tax+=0.001;
						}
						if(warld_tax=='q'||warld_tax==' '){
							break;
						}
						average_earn_per_day=average_salary_per_day*(1.0-tax);
						tax_per_day=average_salary_per_day-average_earn_per_day;
					}
					cls;
					return;
				}
				void about_popu(){
					while(1){
						cls;
						printf("金币数：%.2f\n",money);
						printf("人均日收入：%.2f\n",average_salary_per_day);
						cout<<"总人口："<<popu<<endl;
						cout<<"士兵："<<soldier<<endl;
						cout<<"工人："<<worker<<endl;
						cout<<"无工作："<<no_job<<endl;
						cout<<endl;
						cout<<"-  士兵  +"<<endl;
						cout<<"-  工人  +"<<endl;
						char warld_popu=getch();
						if(warld_popu=='a'&&soldier-1>=0){
							soldier--;
							money+=(train_soldier_cost*0.8)*1.0;
						}
						if(warld_popu=='d'&&soldier+1<=popu&&no_job>0&&money-train_soldier_cost>=0.0){
							soldier++;
							money-=train_soldier_cost*1.0;
						}
						if(warld_popu=='s'&&soldier-100>=0){
							soldier-=100;
							money+=(train_soldier_cost*0.8)*100*1.0;
						}
						if(warld_popu=='w'&&soldier+100<=popu&&no_job>=100&&money-train_soldier_cost*100>=0.0){
							soldier+=100;
							money-=train_soldier_cost*100*1.0;
						}
						if(warld_popu=='j'&&worker-1>=0){
							worker--;
							money+=(train_worker_cost*0.8)*1.0;
						}
						if(warld_popu=='l'&&worker+1<=popu&&no_job>0&&money-train_worker_cost>=0.0){
							worker++;
							money-=train_worker_cost*1.0;
						}
						if(warld_popu=='k'&&worker-100>=0){
							worker-=100;
							money+=(train_worker_cost*0.8)*100*1.0;
						}
						if(warld_popu=='i'&&worker+100<=popu&&no_job>=100&&money-train_worker_cost*100>=0.0){
							worker+=100;
							money-=train_worker_cost*100*1.0;
						}
						if(warld_popu=='q'||warld_popu==' '){
							break;
						}
						no_job=popu-soldier-worker;
						average_salary_per_day=(no_job*0.0+soldier*1.0+worker*2.0)/popu*1.0;
					}
					cls;
					return;
				}
				void about_city(){
					while(1){
						cls;
						cout<<"共"<<cities<<"座城市"<<endl;
						cout<<endl;
						for(int i=1;i<=cities;i++){
							cout<<"城市"<<i<<endl;
							cout<<"等级："<<citi[i].level<<endl;
							cout<<"位置：x:"<<citi[i].posx<<" y:"<<citi[i].posy<<endl;
							cout<<"人口："<<citi[i].population<<endl;
							cout<<endl;
						}
						cout<<endl;
						cout<<"1.升级城市"<<endl;
						char warld_city=getch();
						if(warld_city=='1'){
							upgrade_city();
						}
						if(warld_city=='q'||warld_city==' '){
							break;
						}
					}
					cls; 
					return;
				}
				void check_war(){
					if(war_shiqi>100) war_shiqi=100;
					if(opposite.war_shiqi>100) opposite.war_shiqi=100;
					int op;
					op=opposite.war_point+opposite.soldier*0.15+opposite.popu*0.05+opposite.war_shiqi*0.2+0.5;
					opposite.war_point=op;
					war_point=war_point+soldier*0.15+popu*0.05+war_shiqi*0.2+0.5;
					
					int op_war=random(1,2);
					if(op_war==1){
						if(opposite.popu-opposite.soldier>=max(int(opposite.soldier*0.1+0.5),5)&&
							opposite.money-max(int(opposite.soldier*0.1+0.5),5)*train_soldier_cost>=0.0){
							money-=train_soldier_cost*max(int(opposite.soldier*0.1+0.5),5);
							opposite.soldier+=max(int(soldier*0.1+0.5),5);
							opposite.money-=train_soldier_cost*max(int(opposite.soldier*0.1+0.5),5);
						}
					}
					if(op_war==2){
						opposite.war_shiqi*=int(random(98,125)/100.0+0.5);
					}
					
					if(war_point>opposite.war_point){
						int soldier_die=soldier*random(random(0,15),random(20,35));
						soldier-=soldier_die;
						popu-=soldier_die;
						int op_soldier_die=opposite.soldier*random(random(5,20),random(30,65));
						opposite.soldier-=op_soldier_die;
						opposite.popu-=op_soldier_die;
						war_shiqi=max(war_shiqi+random(90,125)-100,100);
						opposite.war_shiqi=max(opposite.war_shiqi+random(75,110)-100,100);
					}
					else if(war_point==opposite.war_point){
						int soldier_die=soldier*random(random(5,15),random(30,40));
						soldier-=soldier_die;
						popu-=soldier_die;
						int op_soldier_die=opposite.soldier*random(random(5,15),random(30,40));
						opposite.soldier-=op_soldier_die;
						opposite.popu-=op_soldier_die;
						war_shiqi=max(war_shiqi+random(85,110)-100,100);
						opposite.war_shiqi=max(opposite.war_shiqi+random(85,110)-100,100);
					}
					else if(war_point<opposite.war_point){
						int soldier_die=soldier*random(random(5,20),random(30,65));
						soldier-=soldier_die;
						popu-=soldier_die;
						int op_soldier_die=opposite.soldier*random(random(0,15),random(20,35));
						opposite.soldier-=op_soldier_die;
						opposite.popu-=op_soldier_die;
						war_shiqi=max(war_shiqi+random(75,110)-100,100);
						opposite.war_shiqi=max(opposite.war_shiqi+random(90,125)-100,100);
					}
					
					if(opposite.money<=100.0||opposite.soldier<=0){
						war_win=1;
					}
					else if(money<=100.0||soldier<=0){
						war_win=2;
					}
					
					return;
				}
				void about_war(){
					war_shiqi=100;
					war_win=0;
					war_point=0;
					get_per=5000;
					
					opposite.war_shiqi=100;
					opposite.popu=popu*(random(90,115))/100;
					opposite.soldier=soldier*(random(80,130))/100;
					opposite.money=money*double(random(70,150))/100.0;
					if(opposite.soldier>opposite.popu){
						opposite.soldier=opposite.popu;
					}
					
					check_war();
					while(1){
						cls;
						
						get_per=int(war_point/(war_point+opposite.war_point)*1.0+0.5);
						printf("金币数：%.2f\n",money);
						cout<<"总人口："<<popu<<endl;
						cout<<"士兵："<<soldier<<endl;
						cout<<endl;
						cout<<"shiqi "<<war_shiqi<<"  opposhiqi "<<opposite.war_shiqi<<endl;
						cout<<"point "<<war_point<<"  oppopoint "<<opposite.war_point<<endl;
						printf("战争百分比：%.2f%%\n",get_per/100.0*1.0);
						cout<<"请选择当前回合的行动："<<endl;
						cout<<"1.增兵  2.鼓舞士气"<<endl;
						char warld_war=getch();
						if(warld_war=='1'){
							if(no_job>=max(int(soldier*0.1+0.5),5)&&
								money-train_soldier_cost*max(int(soldier*0.1+0.5),5)>=0.0){
								no_job-=max(int(soldier*0.1+0.5),5);
								money-=train_soldier_cost*max(int(soldier*0.1+0.5),5);
								soldier+=max(int(soldier*0.1+0.5),5);
							}
						}
						if(warld_war=='2'){
							war_shiqi*=int(random(98,125)/100.0+0.5);
							if(war_shiqi>100) war_shiqi=100;
						}
						if(warld_war=='q'||warld_war==' '){
							break;
						}
						
						check_war();
						
						if(war_win==1){
							cout<<"胜利！"<<endl;
							area*=(random(105,150)/100);
							money*=(random(125,200)/100);
							popu*=(random(105,150)/100);
							pause;
							cls;
							return; 
						}
						if(war_win==2){
							cout<<"失败！"<<endl;
							area*=(random(80,95)/100);
							popu*=(random(75,100)/100);
							soldier=max(soldier,0);
							pause;
							cls;
							return;
						}
					}
					cls;
					return;
				}
				void shengcheng_map(){
					for(int i=0;i<max_warld;i++){
						for(int j=0;j<max_warld;j++){
							world_map[i][j]=grass.type;
						}
					}
					for(int i=1;i<max_warld-1;i++){
						for(int j=4;j<max_warld-4;j++){
							int r=random(1,70);
							if(r>=1&&r<=1){
								for(int ii=i-1;ii<=i+1;ii++){
									for(int jj=j-4;jj<=j+4;jj++){
										int rr=random(1,20);
										if(ii>=0&&jj>=0&&ii<max_warld&&
											jj<max_warld&&rr>=1&&rr<=9){
											world_map[ii][jj]=water.type;//水
										}	 
									}
								}
							}	
						}
					}
					for(int i=1;i<max_warld-1;i++){
						for(int j=1;j<max_warld-1;j++){
							if(world_map[i][j]==water.type) continue;
							int near_water=0;
							if(world_map[i-1][j]==water.type) near_water++;
							if(world_map[i+1][j]==water.type) near_water++;
							if(world_map[i][j-1]==water.type) near_water++;
							if(world_map[i][j+1]==water.type) near_water++;
							if(near_water>=2) world_map[i][j]=water.type;
						}
					}
				}
				void preparation(){
					grass.type=2;
					water.type=1;
					city.type=14;
					shengcheng_map();
					sx=0;
					sy=0;
					train_soldier_cost=1.2;
					train_worker_cost=1.5;
				}
				void daily_check(){
					day++;
					double earn_left=double(random(int(12.5+citi[1].level*1.3),int(20+citi[1].level*1.7)))*0.01;
					average_save+=average_earn_per_day*earn_left;
					if(average_save>=100.0){
						average_save-=double(random(10,min(30-citi[1].level,10)))*1.0;
						for(int i=1;i<=cities;i++){
							citi[i].population*=double(random(100,int(100+citi[i].level*1.25+0.5)))*0.01;
							if(citi[i].population>city_max_popu(citi[i].level)){
								citi[i].population=city_max_popu(citi[i].level);
							}
						}
					}
					for(int i=1;i<=cities;i++){
						if(citi[i].population<0) citi[i].population=0;
						citi[i].population=int(popu/cities+0.5);
						if(citi[i].population>city_max_popu(citi[i].level)){
							citi[i].population=city_max_popu(citi[i].level);
						}
					}
					popu=0;
					for(int i=1;i<=cities;i++){
						popu+=citi[i].population;
					}
					money+=tax_per_day*popu*1.0;
					if(soldier<0) soldier=0;
					if(worker<0) worker=0; 
					no_job=popu-soldier-worker;
					average_salary_per_day=(no_job*0.0+soldier*1.0+worker*2.0)/popu*1.0;
					average_earn_per_day=average_salary_per_day*(1.0-tax);
					tax_per_day=average_salary_per_day-average_earn_per_day;
					
					return;
				}
				void output(){
					for(int i=sx;i<=sx+16;i++){
						for(int j=sy;j<=sy+24;j++){
							if(selx==i&&sely==j){
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
								4*16+world_map[i][j]);
								cout<<char(161)<<char(246);
							}
							else{
								int ct=0;
								for(int ii=1;ii<=cities;ii++){
									if(i==citi[ii].posx&&j==citi[ii].posy){
										ct=ii;
									}
								}
								if(ct!=0){
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
									city.type*16);
									if(citi[ct].level<=9) cout<<"0";
									cout<<citi[ct].level;
								}
								else{
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
									world_map[i][j]*17);
									cout<<"  ";	
								}
							}
						}
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						cout<<endl;
					}
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
				}
				void main_game(){
					cls;
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<"Day "<<day<<endl;
						printf("金币数：%.2f\n",money);
						printf("人口：%d\n",popu);
						printf("国土面积：%.2f\n",area);
//						output();
						cout<<endl;
						cout<<"请问你要干什么？"<<endl;
						cout<<"1.税收管理 ";
						cout<<"2.人口管理 ";
						cout<<"3.城市管理 ";
						cout<<"4.发起战争 ";
						cout<<endl;
						char warld_movement=getch();
						if(warld_movement=='1'){
							about_tax();
						}
						if(warld_movement=='2'){
							about_popu();
						}
						if(warld_movement=='3'){
							about_city();
						}
						if(warld_movement=='4'){
							about_war();
						}
						if(warld_movement=='q'){
							break;
						}
						
						daily_check();
					}
					cls;
					return;
				}
				void main_page(){
					cls;
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<"请选定你要开始游戏的地点："<<endl;
						cout<<"pos: "<<sx<<" "<<sy<<" "<<selx<<" "<<sely<<" "<<endl;
						output();
						char warld_movement=getch();
						if(warld_movement=='w'&&sx-1>=0){
							sx--;
							selx--;
						}
						if(warld_movement=='s'&&sx+1<max_warld){
							sx++;
							selx++;
						}
						if(warld_movement=='a'&&sy-1>=0){
							sy--;
							sely--;
						}
						if(warld_movement=='d'&&sy+1<max_warld){
							sy++;
							sely++;
						}
						if(warld_movement=='q'){
							break;
						}
						if(warld_movement=='i'){
							selx--;
						}
						if(warld_movement=='k'){
							selx++;
						}
						if(warld_movement=='j'){
							sely--;
						}
						if(warld_movement=='l'){
							sely++;
						}
						if(warld_movement==' '){
							if(world_map[selx][sely]==grass.type){
//								world_map[selx][sely]=city.type;
								cities++;
								citi[cities].posx=selx-sx;
								citi[cities].posy=sely-sy;
								citi[cities].level=1;
								citi[cities].population=100;
								selx=sx;
								sely=sy;
								cls;
								main_game();
								break;
							}
						}
						if(warld_movement=='q'){
							break;
						}
					}
					cls;
					return;
				}
		}warld_game;
		class build{
			public:
				struct xmu{
					int jindu=0,bugs=0;
				}project[51];
			public:
				short int lan[51]={0};
				short int dt[21][21];
				//c++=1,python=2,java=3,c#=4,html=5,javascript=6...
				int program_level=1,tili=100,xm=1;
				long long money=1000,zujin=1000,day=1;
			public:
				void run(){
					cls; 
					cout<<"这里是测试界面，你可以在测试后发布游戏。"<<endl;
					pause;
					/*
					cls;
					for(int i=1;i<=21;i++){
						for(int j=1;j<=21;j++){
							dt[i][j]=random(1,2);
						}
					}
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<project[xm].bugs<<endl;
						if(project[xm].bugs>=50){
							for(int i=1;i<=11;i++){
								for(int j=1;j<=11;j++){
									int cl=random(1,15);
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),cl*17);
									cout<<"  ";
								}
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								cout<<endl;
							}
						}
						else if(project[xm].bugs>=20){
							for(int i=1;i<=11;i++){
								for(int j=1;j<=11;j++){
									int cl=random(1,2);
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),cl*17);
									cout<<"  ";
								}
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								cout<<endl;
							}
						}
						else{
							for(int i=1;i<=11;i++){
								for(int j=1;j<=11;j++){
//									int cl=random(1,2);
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),dt[i][j]*17);
//									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),cl*17);
									cout<<"  ";
								}
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								cout<<endl;
							}
						}
						char move=getch();
						if(move=='q'){
							break;
						}
					}
					cls;
					*/
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
					cout<<"调试结束！"<<endl;
					pause;
					cls;
					return;
				}
				void done(){
					;
				}
				void kaifa(){
					while(1){
						cls;
						cout<<"Day "<<day<<endl;
						cout<<"金钱："<<money<<endl;
						cout<<"体力："<<tili<<endl;
						if(tili<=20) cout<<"警告：体力水平低！"<<endl;
						cout<<"项目 "<<xm<<endl;
						cout<<"当前进度："<<project[xm].jindu<<endl;
						if(project[xm].jindu>=100) cout<<"bug数量："<<project[xm].bugs<<endl;
						cout<<"请问你要干什么？"<<endl;
						if(project[xm].jindu<100){
							cout<<"1.继续开发 ";
						}
						else{
							cout<<"2.修复bug ";
							cout<<"3.试运行 ";
							cout<<"4.完成并发布 ";
						}
						cout<<"5.睡觉 ";
						cout<<"6.新项目 ";
						cout<<endl;
						
						char choose_kf=getch();
						if(choose_kf=='1'&&project[xm].jindu<100){
							project[xm].jindu+=random(min(1,int(lan[1]/20)),min(5,int(lan[1]/20)));
							if(project[xm].jindu>=100){
								project[xm].jindu=100;
								project[xm].bugs=random(20,100);
							}
						}
						if(choose_kf=='2'&&project[xm].jindu>=100){
							int big_bug=random(1,100);
							if(big_bug>=1&&big_bug<=81){
								project[xm].bugs-=random(min(1,int(lan[1]/20)),min(5,int(lan[1]/20)));
							}
							if(big_bug>=82&&big_bug<=94){
								project[xm].bugs+=random(max(1,6-int(lan[1]/20)),max(1,10-int(lan[1]/20)));
							}
							if(big_bug>=95&&big_bug<=100){
								project[xm].bugs+=random(max(1,11-int(lan[1]/20)),max(1,25-int(lan[1]/20)));
							}
						}
						if(choose_kf=='3'&&project[xm].jindu>=100){
							run();
						}
						if(choose_kf=='4'&&project[xm].jindu>=100){
							done();
						}
						
						if(choose_kf=='5'){
							day++;
							tili+=80;
						}
						if(choose_kf=='6'){
							xm++;
						}
						
						if(choose_kf=='q'){
							break;
						}
						
						day++;
						tili-=random(1,5);
						if(project[xm].bugs<0){
							project[xm].bugs=0;
						}
						if(tili>100){
							tili=100;
						}
						if(tili<=0){
							break;
						}
					}
					cls;
					return;
				}
				void main_game(){
					while(1){
						cls;
						cout<<"Day "<<day<<endl;
						cout<<"金钱："<<money<<endl;
						cout<<"体力："<<tili<<endl;
						if(tili<=20) cout<<"警告：体力水平低！"<<endl;
						if(program_level>=1) cout<<"C++水平："<<lan[1]<<endl;
						if(program_level>=2) cout<<"Python水平："<<lan[2]<<endl;
						if(program_level>=3) cout<<"Java水平："<<lan[3]<<endl;
						if(program_level>=4) cout<<"C#水平："<<lan[4]<<endl;
						if(program_level>=5) cout<<"HTML水平："<<lan[5]<<endl;
						if(program_level>=6) cout<<"Javascript水平："<<lan[6]<<endl;
						cout<<"请问你要干什么？"<<endl;
						cout<<"1.学习编程 ";
						cout<<"2.开发游戏 ";
						cout<<"3.睡觉 ";
						cout<<endl;
						char choose_build=getch();
						if(choose_build=='1'){
							for(int i=1;i<=program_level;i++){
								lan[i]+=random(1,5);
								if(lan[i]<100){
									tili-=random(1,5);//防止已经学会的语言重复消耗体力 
								}
							}
						}
						if(choose_build=='2'){
							kaifa();
						}
						if(choose_build=='3'){
							day++;
							tili+=80;
						}
						if(choose_build=='q'){
							break;
						}
						day++;
						for(int i=1;i<program_level;i++){
							if(lan[i]>100){
								lan[i]=100;
							}
						}
						if(lan[program_level]>100){
							lan[program_level]=100;
							program_level++;
						}
						if(program_level>100){
							program_level=100;
						}
						if(tili>100){
							tili=100;
						}
						if(tili<=0){
							memset(lan,0,sizeof(lan));
							program_level=1;
							day=1;
							money=1000;
							tili=100;
							cout<<"你死了！"<<endl;
							pause;
							break;
						}
					}
					cls;
					return;
				}
				void main_page(){
					cls;
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<"欢迎来到游戏开发模拟器！"<<endl;
						cout<<"1.进入游戏"<<endl;
						cout<<"q.退出"<<endl;
						char choose_build=getch();
						if(choose_build=='1'){
							main_game();
						}
						if(choose_build=='q'){
							break;
						}
					}
					cls;
					return;
				}
		}build_game;
		class clash_royale_tenet{
			public:
				
			public:
				struct sing{
					int life;
					int level;
					int posx,posy;
					int hurt;
					sing()=default;
					sing(int l,int le,int px,int py,int ht){
						life=l;
						level=le;
						posx=px;
						posy=py;
						hurt=ht;
					}
				};
				struct army{
					int base_life;
					int level;
					int shecheng;
					int base_hurt;
					int quantity=0;
					int color;
					sing a[1001];
					army()=default;
					army(int b,int l,int s,int h,int c){
						base_life=b;
						level=l;
						shecheng=s;
						base_hurt=h;
						color=c;
					}
				};
				int money=100;
				int cup=0;
				int king_level=1;
				int king_life=0,prin_life=0;
				int king_lives[101],prin_lives[101][2];
				int field[21][31];
				army goblin;
			public:
				int get_prin_life(int m){
					if(m==1) return 1400;
					if(m==2) return 1512;
					if(m==3) return 1624;
					if(m==4) return 1750;
					if(m==5) return 1890;
					if(m==6) return 2030;
					if(m==7) return 2184;
					if(m==8) return 2352;
					if(m==9) return 2534;
					if(m==10) return 2786;
					if(m==11) return 3052;
					if(m==12) return 3346;
					if(m==13) return 3668;
					
					return 4000;
				}
				int get_king_life(int m){
					if(m==1) return 2400;
					if(m==2) return 2568;
					if(m==3) return 2736;
					if(m==4) return 2904;
					if(m==5) return 3096;
					if(m==6) return 3312;
					if(m==7) return 3528;
					if(m==8) return 3768;
					if(m==9) return 4008;
					if(m==10) return 4392;
					if(m==11) return 4824;
					if(m==12) return 5304;
					if(m==13) return 5832;
					
					return 6500;
				}
				void origin_battle(){
					int tm=0;
					int shengshui=5;
					double add_shui=0.0;
					king_life=get_king_life(king_level);
					prin_life=get_prin_life(king_level);
					king_lives[0]=king_life;
					prin_lives[0][1]=prin_life;
					prin_lives[0][2]=prin_life;
					memset(field,0,sizeof(field));
					for(int j=1;j<=28;j++){
						if(j==1||j==28){
							for(int k=7;k<=12;k++){
								if((j+k)%2==1) field[j][k]=2;
								else field[j][k]=10;
							}
						}
						else if(j==14||j==15){
							for(int k=1;k<=18;k++){
								field[j][k]=1;
							}
						}
						else{
							for(int k=1;k<=18;k++){
								if((j+k)%2==1) field[j][k]=2;
								else field[j][k]=10;
							}	
						}
					}
					while(tm<=100){
						cls;
						tm++;
						for(int i=1;i<=goblin.quantity;i++){
//							if(field[goblin.a[i].posx-1][goblin.a[i].posy]!=1){
								goblin.a[i].posx--;
//							}
						}
						int rd=random(1,5);
						if(rd==1){
							goblin.quantity++;
							goblin.a[goblin.quantity]={100,1,25,10,50};
						}
						if(shengshui<10){
							add_shui+=0.1;
						}
						if(add_shui>=1.0){
							add_shui-=1.0;
							shengshui++;
						}
						cout<<"剩余时间："<<100-tm<<"秒"<<endl;
						cout<<"圣水："<<shengshui<<endl;
						for(int i=1;i<=28;i++){
							for(int j=1;j<=18;j++){
								bool flag=0;
								for(int k=1;k<=goblin.quantity;k++){
									if(goblin.a[k].posx==i&&goblin.a[k].posy==j){
										flag=1;
										break;
									}
								}
//								if(flag){
//									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
//									field[i][j]*16+goblin.color);
//									cout<<"■";
////									cout<<" "<<goblin.color;
//								}
//								else{
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),field[i][j]*17);
									cout<<"  ";
//								}
							}
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
							cout<<endl;
						}
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						pause;
					}
				}
				void battle(){
					cls;
					origin_battle();
//					back_battle();
//					tenet_battle();
					cls;
				}
				void main_page(){
					cls;
					memset(field,0,sizeof(field));
					for(int j=1;j<=28;j++){
						if(j==1||j==28){
							for(int k=7;k<=12;k++){
								if((j+k)%2==1) field[j][k]=2;
								else field[j][k]=10;
							}
						}
						else if(j==14||j==15){
							for(int k=1;k<=18;k++){
								field[j][k]=1;
							}
						}
						else{
							for(int k=1;k<=18;k++){
								if((j+k)%2==1) field[j][k]=2;
								else field[j][k]=10;
							}	
						}
					}
					goblin={100,1,2,50,1};
					while(1){
						COORD pos;
						pos.X=0;
						pos.Y=0;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
						cout<<"皇室信条主界面"<<endl;
						cout<<endl;
						
						cout<<"金币数："<<money<<endl;
						cout<<"奖杯数："<<cup<<endl;
						cout<<endl;
						cout<<"1.对战    2.派对"<<endl;
						char choose_tenet=getch();
						if(choose_tenet=='1'){
							battle();
						}
					}
					cls;
					return;
				}
		}tenet;
		class gene{
			public:
				void generals_1v1(){
					return;
				}
				void main_page(){
					cls;
					while(1){
						cls;
						cout<<"Generals.io"<<endl;
						cout<<"Protect your general. Capture your enemies\' generals."<<endl;
						cout<<endl;
						cout<<"1. Play"<<endl;
						char gene_play=getch();
						if(gene_play=='1'){
							generals_1v1();
						}
					}
					return;
				}
		};
	public:
		void main_page(){
			cls;
			while(1){
				COORD pos;
				pos.X=0;
				pos.Y=0;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				cout<<"游戏主页"<<endl;
				cout<<"请选择要进入的游戏："<<endl;
				cout<<"1.我的世界"<<endl;
				cout<<"2.炸鸡游戏"<<endl;
				cout<<"3.warld"<<endl;
//				cout<<"4.游戏开发模拟器"<<endl;
				
				cout<<"q.退出"<<endl;
				char choose_game=getch();
				if(choose_game=='1'){
					minecraft_game.main_page();
				}
				if(choose_game=='2'){
					fried_chicken.main_page();
				}
				if(choose_game=='3'){
					warld_game.main_page();
				}
				if(choose_game=='4'){
//					build_game.main_page();
				}
				if(choose_game=='5'){
//					tenet.main_page();
				}
				
				if(choose_game=='q'){
					break;
				}
			}
			cls;
			return;
		}
}games;
class user{//用户 
	public:
		long long user_number;
		void login(){
			cls;
			string username,password;
			cout<<"请输入用户名:"<<endl;
			cin>>username;
			cout<<"请输入密码:"<<endl;
			cin>>password;
			cls;
			if(username=="abc"&&password=="123456"){
				user_number=0;
				cls;
				for(int i=1;i<=100;i++){
					COORD pos;
					pos.X=0;
					pos.Y=0;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
					cout<<"欢迎,游客!"<<endl;
					cout<<"加载中";
					for(int j=1;j<=i%6+1;j++) cout<<".";
					cout<<endl;
					cout<<setw(4)<<i<<"%"<<endl;
					Sleep(5);
				}
				cls;
				return;
			}
			else if(username=="hcy"&&password=="123456"){
				user_number=1000;
				cls;
				for(int i=1;i<=10;i++){
					COORD pos;
					pos.X=0;
					pos.Y=0;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
					cout<<"欢迎,hcy!"<<endl;
					cout<<"加载中";
					for(int j=1;j<=i%6+1;j++) cout<<".";
					cout<<endl;
					cout<<setw(4)<<i*10<<"%"<<endl;
					Sleep(50);
				}
				cls;
				return;
			}
			else if(username=="FriedChicken"&&password=="zhajizuishuai"){
				user_number=1001;
				cls;
				for(int i=1;i<=10;i++){
					COORD pos;
					pos.X=0;
					pos.Y=0;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
					cout<<"欢迎,炸鸡!"<<endl;
					cout<<"加载中";
					for(int j=1;j<=i%6+1;j++) cout<<".";
					cout<<endl;
					cout<<setw(4)<<i*10<<"%"<<endl;
					Sleep(40);
				}
				cls;
				return;
			}
			else if(username=="xmc"&&password=="Arsenal"){
				user_number=1002;
				cls;
				for(int i=1;i<=10;i++){
					COORD pos;
					pos.X=0;
					pos.Y=0;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
					cout<<"欢迎,xmc!"<<endl;
					cout<<"加载中";
					for(int j=1;j<=i%6+1;j++) cout<<".";
					cout<<endl;
					cout<<setw(4)<<i*10<<"%"<<endl;
					Sleep(40);
				}
				cls;
				return;
			}
			else if(username=="conceal_mint"){
				user_number=1003;
				cls; 
				return;
			}
			else if(username=="2019zidinghe"&&password=="a28782878"){
				user_number=2000;
				cout<<"欢迎,紫顶鹤!"<<endl;
				Sleep(120);
				cout<<"加载中";
				games.minecraft_game.items[games.minecraft_game.find("橡木")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("圆石")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("煤炭")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("铁锭")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("金锭")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("钻石")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("下界合金锭")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("金苹果")].quantity=4096;
				games.minecraft_game.items[games.minecraft_game.find("附魔金苹果")].quantity=4096;
				games.minecraft_game.gongzuotai.is_mine=true;
				cout<<".";
				Sleep(100);
				cout<<".";
				Sleep(100);
				cout<<".";
				Sleep(150);
				cout<<".";
				Sleep(50);
				cout<<".";
				Sleep(100);
				cout<<".";
				return;
			}
			else if(username=="violet_crane"&&
					password=="--What_is_the_best_game_on_Earth?--Minecraft!"){
				user_number=3000;
				cout<<"欢迎,O5-13!"<<endl;
				Sleep(10);
				cout<<"加载中";
				for(int i=1;i<=101;i++){
					games.minecraft_game.items[i].quantity=1e9;
				}
				games.minecraft_game.gongzuotai.is_mine=true;
				games.minecraft_game.ronglu.is_mine=true;
				int mcdt=games.minecraft_game.items[games.minecraft_game.find("钻石")].tool_hardness;
				int mcda=games.minecraft_game.items[games.minecraft_game.find("钻石")].armor_hardness;
				games.minecraft_game.jian_level=mcdt;//MineCraft Diamond Tool
				games.minecraft_game.gao_level=mcdt;
				games.minecraft_game.fu_level=mcdt;
				games.minecraft_game.chan_level=mcdt;
				games.minecraft_game.chu_level=mcdt;
				games.minecraft_game.toukui_level=mcda;//MineCraft Diamond Armor
				games.minecraft_game.xiongjia_level=mcda;
				games.minecraft_game.hutui_level=mcda;
				games.minecraft_game.xuezi_level=mcda;
				cout<<".";
				Sleep(10);
				cout<<".";
				Sleep(20);
				cout<<".";
				Sleep(20);
				cout<<".";
				Sleep(10);
				cout<<".";
				Sleep(15);
				cout<<".";
				return;
			}
			else{
				cout<<"用户名或密码错误!"<<endl;
				pause;
				exit(0);
			}
			return;
		} 
		void output_username(){
			if(user_number==0) cout<<"游客";
			if(user_number==1000) cout<<"hcy";
			if(user_number==1001) cout<<"炸鸡";
			if(user_number==1002) cout<<"xmc";
			if(user_number==1003) cout<<"conceal_mint";
			if(user_number==2000) cout<<"紫顶鹤";
			if(user_number==3000) cout<<"O5-13";
			return;	
		}
}users;
class dict{//字典 
	public:
		void english_chinese_dictionary(){
			string a;
			while(1){
				cls;
				cout<<"请输入您要查询的单词(输入\"/back\"退出字典)"<<endl;
				cin>>a;
				for(int i=0;i<a.length();i++){
					if(a[i]>='A'&&a[i]<='Z'){
						a[i]=a[i]-'A'+'a';//大小写转换 
					}
				}
				if(string("a").find(a)!=string::npos) cout<<"a  "<<endl;
				if(string("abandon").find(a)!=string::npos) cout<<"abandon  "<<endl;
				if(string("aboard").find(a)!=string::npos) cout<<"aboard  "<<endl;
				if(string("abroad").find(a)!=string::npos) cout<<"abroad  "<<endl;
				if(string("absent").find(a)!=string::npos) cout<<"absent  adj.缺席的"<<endl;
				if(string("academy").find(a)!=string::npos) cout<<"academy  n.学院"<<endl;
				if(string("adam").find(a)!=string::npos) cout<<"Adam  n.亚当（圣经）"<<endl;
				if(string("advertisement").find(a)!=string::npos) cout<<"advertisement  n.广告"<<endl;
				if(string("adverb").find(a)!=string::npos) cout<<"adverb  n.副词"<<endl;
				if(string("advice").find(a)!=string::npos) cout<<"advice  n.建议"<<endl;
				if(string("afford").find(a)!=string::npos) cout<<"afford  v.负担"<<endl;
				if(string("afraid").find(a)!=string::npos) cout<<"afraid  adj.害怕的"<<endl;
				if(string("age").find(a)!=string::npos) cout<<"age  n.年龄"<<endl;
				if(string("agent").find(a)!=string::npos) cout<<"agent  n.特工"<<endl;
				if(string("ambulance").find(a)!=string::npos) cout<<"ambulance  "<<endl;
				if(string("answer").find(a)!=string::npos) cout<<"answer  n.答案 v.回答"<<endl;
				if(string("apple").find(a)!=string::npos) cout<<"apple  n.苹果"<<endl;
				if(string("art").find(a)!=string::npos) cout<<"art  n.艺术"<<endl;
				if(string("bag").find(a)!=string::npos) cout<<"bag  n.包"<<endl;
				if(string("bar").find(a)!=string::npos) cout<<"bar  "<<endl;
				if(string("bat").find(a)!=string::npos) cout<<"bat  n.蝙蝠,球拍"<<endl;
				if(string("beautiful").find(a)!=string::npos) cout<<"beautiful  adj.漂亮的"<<endl;
				if(string("biology").find(a)!=string::npos) cout<<"biology  n.生物学"<<endl;
				if(string("block").find(a)!=string::npos) cout<<"block  n.方块"<<endl;
				if(string("break").find(a)!=string::npos) cout<<"break  v.破坏"<<endl;
				if(string("buy").find(a)!=string::npos) cout<<"buy  v.买"<<endl;
				if(string("by").find(a)!=string::npos) cout<<"by  "<<endl;
				if(string("chicken").find(a)!=string::npos) cout<<"chicken  n.鸡"<<endl;
				if(string("cinema").find(a)!=string::npos) cout<<"cinema  "<<endl;
				if(string("coal").find(a)!=string::npos) cout<<"coal  "<<endl;
				if(string("color").find(a)!=string::npos) cout<<"color  "<<endl;
				if(string("command").find(a)!=string::npos) cout<<"command  "<<endl;
				if(string("congratulation").find(a)!=string::npos) cout<<"congratulation  "<<endl;
				if(string("conservation").find(a)!=string::npos) cout<<"conservation  "<<endl;
				if(string("continue").find(a)!=string::npos) cout<<"continue  v.继续"<<endl;
				if(string("conversation").find(a)!=string::npos) cout<<"conversation  "<<endl;
				if(string("cow").find(a)!=string::npos) cout<<"cow  "<<endl;
				if(string("dead").find(a)!=string::npos) cout<<"dead  "<<endl;
				if(string("diamond").find(a)!=string::npos) cout<<"diamind  "<<endl;
				if(string("die").find(a)!=string::npos) cout<<"die  "<<endl;
				if(string("do").find(a)!=string::npos) cout<<"do  "<<endl;
				if(string("door").find(a)!=string::npos) cout<<"door  "<<endl;
				if(string("double").find(a)!=string::npos) cout<<"double  "<<endl;
				if(string("dozen").find(a)!=string::npos) cout<<"dozen  "<<endl;
				if(string("duck").find(a)!=string::npos) cout<<"duck  "<<endl;
				if(string("eat").find(a)!=string::npos) cout<<"eat  "<<endl;
				if(string("electronic").find(a)!=string::npos) cout<<"electronic  "<<endl;
				if(string("enjoy").find(a)!=string::npos) cout<<"enjoy  "<<endl;
				if(string("enough").find(a)!=string::npos) cout<<"enough  "<<endl;
				if(string("enter").find(a)!=string::npos) cout<<"enter  "<<endl;
				if(string("evil").find(a)!=string::npos) cout<<"evil  "<<endl;
				if(string("fast").find(a)!=string::npos) cout<<"fast  "<<endl;
				if(string("find").find(a)!=string::npos) cout<<"find  "<<endl;
				if(string("finish").find(a)!=string::npos) cout<<"finish  "<<endl;
				if(string("fire").find(a)!=string::npos) cout<<"fire  "<<endl;
				if(string("float").find(a)!=string::npos) cout<<"float  "<<endl;
				if(string("for").find(a)!=string::npos) cout<<"for  "<<endl;
				if(string("foreign").find(a)!=string::npos) cout<<"foreign  "<<endl;
				if(string("forget").find(a)!=string::npos) cout<<"forget  "<<endl;
				if(string("freeze").find(a)!=string::npos) cout<<"freeze  "<<endl;
				if(string("fried").find(a)!=string::npos) cout<<"fried  "<<endl;
				if(string("frog").find(a)!=string::npos) cout<<"frog  "<<endl;
				if(string("fry").find(a)!=string::npos) cout<<"fry  "<<endl;
				if(string("get").find(a)!=string::npos) cout<<"get  "<<endl;
				if(string("glass").find(a)!=string::npos) cout<<"glass  "<<endl;
				if(string("go").find(a)!=string::npos) cout<<"go  "<<endl;
				if(string("goat").find(a)!=string::npos) cout<<"goat  "<<endl;
				if(string("god").find(a)!=string::npos) cout<<"god  "<<endl;
				if(string("goggle").find(a)!=string::npos) cout<<"goggle  "<<endl;
				if(string("gold").find(a)!=string::npos) cout<<"gold  "<<endl;
				if(string("golden").find(a)!=string::npos) cout<<"golden  "<<endl;
				if(string("grand").find(a)!=string::npos) cout<<"grand  "<<endl;
				if(string("grass").find(a)!=string::npos) cout<<"grass  "<<endl;
				if(string("great").find(a)!=string::npos) cout<<"great  "<<endl;
				if(string("green").find(a)!=string::npos) cout<<"green  "<<endl;
				if(string("gun").find(a)!=string::npos) cout<<"gun  "<<endl;
				if(string("hand").find(a)!=string::npos) cout<<"hand  "<<endl;
				if(string("heat").find(a)!=string::npos) cout<<"heat  "<<endl;
				if(string("hello").find(a)!=string::npos) cout<<"hello  "<<endl;
				if(string("high").find(a)!=string::npos) cout<<"high  "<<endl;
				if(string("hippopotamus").find(a)!=string::npos) cout<<"hippopotamus  n.河马"<<endl;
				if(string("hit").find(a)!=string::npos) cout<<"hit  "<<endl;
				if(string("hydra").find(a)!=string::npos) cout<<"HYDRA  九头蛇（漫威）"<<endl;
				if(string("hydrogen").find(a)!=string::npos) cout<<"hydrogen  n.氢气"<<endl;
				if(string("impossible").find(a)!=string::npos) cout<<"impossible  "<<endl;
				if(string("include").find(a)!=string::npos) cout<<"include  "<<endl;
				if(string("integer").find(a)!=string::npos) cout<<"integer  "<<endl;
				if(string("joke").find(a)!=string::npos) cout<<"joke  "<<endl;
				if(string("jump").find(a)!=string::npos) cout<<"jump  "<<endl;
				if(string("land").find(a)!=string::npos) cout<<"land  "<<endl;
				if(string("language").find(a)!=string::npos) cout<<"language  "<<endl;
				if(string("less").find(a)!=string::npos) cout<<"less  "<<endl;
				if(string("like").find(a)!=string::npos) cout<<"like  "<<endl;
				if(string("little").find(a)!=string::npos) cout<<"little  "<<endl;
				if(string("long").find(a)!=string::npos) cout<<"long  "<<endl;
				if(string("love").find(a)!=string::npos) cout<<"love  "<<endl;
				if(string("low").find(a)!=string::npos) cout<<"low  "<<endl;
				if(string("lung").find(a)!=string::npos) cout<<"lung  "<<endl;
				if(string("math").find(a)!=string::npos) cout<<"math  "<<endl;
				if(string("mean").find(a)!=string::npos) cout<<"mean  "<<endl;
				if(string("mess").find(a)!=string::npos) cout<<"mess  "<<endl;
				if(string("minecraft").find(a)!=string::npos) cout<<"minecraft  "<<endl;
				if(string("miss").find(a)!=string::npos) cout<<"miss  "<<endl;
				if(string("mob").find(a)!=string::npos) cout<<"mob  "<<endl;
				if(string("much").find(a)!=string::npos) cout<<"much  "<<endl;
				if(string("museum").find(a)!=string::npos) cout<<"museum  "<<endl;
				if(string("never").find(a)!=string::npos) cout<<"never  "<<endl;
				if(string("no").find(a)!=string::npos) cout<<"no  "<<endl;
				if(string("nobody").find(a)!=string::npos) cout<<"nobody  "<<endl;
				if(string("nothing").find(a)!=string::npos) cout<<"nothing  "<<endl;
				if(string("notice").find(a)!=string::npos) cout<<"notice  "<<endl;
				if(string("novel").find(a)!=string::npos) cout<<"novel  "<<endl;
				if(string("old").find(a)!=string::npos) cout<<"old  "<<endl;
				if(string("or").find(a)!=string::npos) cout<<"or  "<<endl;
				if(string("orb").find(a)!=string::npos) cout<<"orb  "<<endl;
				if(string("ore").find(a)!=string::npos) cout<<"ore  "<<endl;
				if(string("origin").find(a)!=string::npos) cout<<"origin  "<<endl;
				if(string("original").find(a)!=string::npos) cout<<"original  "<<endl;
				if(string("oval").find(a)!=string::npos) cout<<"oval  "<<endl;
				if(string("owe").find(a)!=string::npos) cout<<"owe  "<<endl;
				if(string("owl").find(a)!=string::npos) cout<<"owl  "<<endl;
				if(string("own").find(a)!=string::npos) cout<<"own  "<<endl;
				if(string("pad").find(a)!=string::npos) cout<<"pad  "<<endl;
				if(string("pan").find(a)!=string::npos) cout<<"pan  "<<endl;
				if(string("pen").find(a)!=string::npos) cout<<"pen  "<<endl;
				if(string("pick").find(a)!=string::npos) cout<<"pick  "<<endl;
				if(string("pig").find(a)!=string::npos) cout<<"pig  "<<endl;
				if(string("pin").find(a)!=string::npos) cout<<"pin  "<<endl;
				if(string("pity").find(a)!=string::npos) cout<<"pity  "<<endl;
				if(string("plum").find(a)!=string::npos) cout<<"plum  "<<endl;
				if(string("plus").find(a)!=string::npos) cout<<"plus  "<<endl;
				if(string("pollution").find(a)!=string::npos) cout<<"pollution  "<<endl;
				if(string("population").find(a)!=string::npos) cout<<"population  "<<endl;
				if(string("program").find(a)!=string::npos) cout<<"program  "<<endl;
				if(string("queen").find(a)!=string::npos) cout<<"queen  "<<endl;
				if(string("queue").find(a)!=string::npos) cout<<"queue  "<<endl;
				if(string("quick").find(a)!=string::npos) cout<<"quick  "<<endl;
				if(string("quiet").find(a)!=string::npos) cout<<"quiet  "<<endl;
				if(string("quit").find(a)!=string::npos) cout<<"quit  "<<endl;
				if(string("quite").find(a)!=string::npos) cout<<"quite  "<<endl;
				if(string("rabbit").find(a)!=string::npos) cout<<"rabbit  "<<endl;
				if(string("random").find(a)!=string::npos) cout<<"random  "<<endl;
				if(string("read").find(a)!=string::npos) cout<<"read  "<<endl;
				if(string("real").find(a)!=string::npos) cout<<"real  "<<endl;
				if(string("red").find(a)!=string::npos) cout<<"red  "<<endl;
				if(string("ring").find(a)!=string::npos) cout<<"ring  "<<endl;
				if(string("run").find(a)!=string::npos) cout<<"run  "<<endl;
				if(string("sand").find(a)!=string::npos) cout<<"sand  "<<endl;
				if(string("say").find(a)!=string::npos) cout<<"say  "<<endl;
				if(string("school").find(a)!=string::npos) cout<<"school  "<<endl;
				if(string("see").find(a)!=string::npos) cout<<"see  "<<endl;
				if(string("set").find(a)!=string::npos) cout<<"set  "<<endl;
				if(string("sheep").find(a)!=string::npos) cout<<"sheep  "<<endl;
				if(string("sick").find(a)!=string::npos) cout<<"sick  "<<endl;
				if(string("silk").find(a)!=string::npos) cout<<"silk  "<<endl;
				if(string("sleep").find(a)!=string::npos) cout<<"sleep  "<<endl;
				if(string("start").find(a)!=string::npos) cout<<"start  "<<endl;
				if(string("street").find(a)!=string::npos) cout<<"street  "<<endl;
				if(string("string").find(a)!=string::npos) cout<<"string  "<<endl;
				if(string("target").find(a)!=string::npos) cout<<"target  "<<endl;
				if(string("tattoo").find(a)!=string::npos) cout<<"tattoo  "<<endl;
				if(string("tick").find(a)!=string::npos) cout<<"tick  "<<endl;
				if(string("tie").find(a)!=string::npos) cout<<"tie  "<<endl;
				if(string("tin").find(a)!=string::npos) cout<<"tin  "<<endl;
				if(string("to").find(a)!=string::npos) cout<<"to  "<<endl;
				if(string("today").find(a)!=string::npos) cout<<"today  "<<endl;
				if(string("tonight").find(a)!=string::npos) cout<<"tonight  "<<endl;
				if(string("too").find(a)!=string::npos) cout<<"too  "<<endl;
				if(string("tree").find(a)!=string::npos) cout<<"tree  "<<endl;
				if(string("trick").find(a)!=string::npos) cout<<"trick  "<<endl;
				if(string("try").find(a)!=string::npos) cout<<"try  "<<endl;
				if(string("tube").find(a)!=string::npos) cout<<"tube  "<<endl;
				if(string("twice").find(a)!=string::npos) cout<<"twice  "<<endl;
				if(string("two").find(a)!=string::npos) cout<<"two  "<<endl;
				if(string("umbrella").find(a)!=string::npos) cout<<"umbrella  "<<endl;
				if(string("unit").find(a)!=string::npos) cout<<"unit  "<<endl;
				if(string("vertex").find(a)!=string::npos) cout<<"vertex  "<<endl;
				if(string("very").find(a)!=string::npos) cout<<"very  "<<endl;
				if(string("virtual").find(a)!=string::npos) cout<<"virtual  "<<endl;
				if(string("two").find(a)!=string::npos) cout<<"two  "<<endl;
				if(string("wall").find(a)!=string::npos) cout<<"wall  "<<endl;
				if(string("wet").find(a)!=string::npos) cout<<"wet  "<<endl;
				if(string("what").find(a)!=string::npos) cout<<"what  "<<endl;
				if(string("when").find(a)!=string::npos) cout<<"when  "<<endl;
				if(string("where").find(a)!=string::npos) cout<<"where  "<<endl;
				if(string("which").find(a)!=string::npos) cout<<"which  "<<endl;
				if(string("while").find(a)!=string::npos) cout<<"while  "<<endl;
				if(string("who").find(a)!=string::npos) cout<<"who  "<<endl;
				if(string("whom").find(a)!=string::npos) cout<<"whom  "<<endl;
				if(string("why").find(a)!=string::npos) cout<<"why  "<<endl;
				if(string("will").find(a)!=string::npos) cout<<"will  "<<endl;
				if(string("wing").find(a)!=string::npos) cout<<"wing  "<<endl;
				if(string("with").find(a)!=string::npos) cout<<"with  "<<endl;
				if(string("wood").find(a)!=string::npos) cout<<"wood  "<<endl;
				if(string("wool").find(a)!=string::npos) cout<<"wool  "<<endl;
				if(string("x-ray").find(a)!=string::npos) cout<<"X-ray  "<<endl;
				if(string("yell").find(a)!=string::npos) cout<<"yell  "<<endl;
				if(string("yes").find(a)!=string::npos) cout<<"yes  "<<endl;
				if(string("yet").find(a)!=string::npos) cout<<"yet  "<<endl;
				if(string("you").find(a)!=string::npos) cout<<"you  "<<endl;
				if(string("young").find(a)!=string::npos) cout<<"young  adj.年轻的"<<endl;
				if(string("zebra").find(a)!=string::npos) cout<<"zebra  n.斑马"<<endl;
				if(string("zoo").find(a)!=string::npos) cout<<"zoo  n.动物园"<<endl;
				if(a=="/back"){
					cls;
					break;
				}
				pause;
			}
			return;
		}
		void main_page(){
			cls;
			while(1){
				COORD pos;
				pos.X=0;
				pos.Y=0;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				cout<<"请选择字典："<<endl;
				cout<<"1.英汉 q.退出"<<endl;
				char choose_dictionary=getch();
				if(choose_dictionary=='1'){
					english_chinese_dictionary();
				}
				if(choose_dictionary=='q'){
					break;
				}
			}
			cls;
			return;
		}
}dictionary;
class body_temp{//体温 
	private:
		int temprature[11][1001];//存储体温 
	public:
		void shengcheng_tiwen(){
			for(int p=1;p<=10;p++){
				for(int i=1;i<=1000;i++){
					temprature[p][i]=random(359,371);
				}
			}
			return;
		}
		void ask_tiwen(){
			while(1){
				cls;
				cout<<"请输入要查询体温的天数,输入0退出"<<endl;
				long long tiwen_day,tiwen_visiable_day;
				cin>>tiwen_day;
				if(tiwen_day!=0){
					tiwen_visiable_day=int(abs(tiwen_day))%997+1;
					printf("第%lld天,体温%d.%d度\n",tiwen_day,
					temprature[1][tiwen_visiable_day]/10,temprature[1][tiwen_visiable_day]%10);
					pause;
				}
				else{
					break;
				}
			}
			return;
		}	
}body_temps;
bool prime(int m){
	for(int i=2;i<=sqrt(m);i++)
		if(m%i==0) return 0;
	return 1;
}
void write_poem(int mode,int sentence){
	cls;
	const int max_useless=25;
	int l=0,bd=0,count=0;
	int useless[2][max_useless]={
		{
			195,176,213,213,205,223,176,209,209,194,194,199,199,
			195,224,186,239,201,209,186,197,201,202,192,185//1	
		},
		{
			180,161,226,166,219,192,201,189,190,239,240,226,232,
			190,203,164,174,167,245,199,222,182,186,178,254//2
		}
	}; 
	while(1){
		int c1,c2;
		c1=random(176,215);//此区间为常用字 
		if(c1!=215) c2=random(161,254);
		else c2=random(161,249);//空字符
		bool is_useless_char=false;
		for(int i=0;i<max_useless;i++){
			if(c1==useless[0][i]&&c2==useless[1][i]){
				is_useless_char=true;
			}
		} 
		if(is_useless_char==true){
			continue;
		}//无用字
		cout<<char(c1)<<char(c2);
		l++;
		if(l>=mode){
			l=0;
			bd++;
			if(bd==1) cout<<"，";
			else{
				cout<<"。"<<endl;
				bd=0;
				count++;
//				Sleep(10);
			}
		}
		if(count>=sentence) break;
	}
	pause;
	cls;
	return;
}
void poem(){
	while(1){
		cls;
		int sentence_length,len;
		cout<<"请输入诗句长度（最小3，最大14，输入0退出写诗程序）"<<endl;
		cin>>sentence_length;
		if(sentence_length==0) break;
		else if(sentence_length<3||sentence_length>14) continue;
		cout<<"请输入句数（最小1，最大200000，输入0退出写诗程序）"<<endl;
		cin>>len;
		if(len==0) break;
		else if(len<1||len>200000) continue;
		write_poem(sentence_length,len);
	}
	cls;
	return;
}
void chat_robot(){
	cls;
	while(1){
		users.output_username();
		cout<<":";
		string my_word;
		cin>>my_word;
		cout<<"AI:";
		if(my_word.find(string("你好"))!=string::npos||
			my_word.find(string("嗨"))!=string::npos||
			my_word.find(string("哈喽"))!=string::npos||
			my_word.find(string("hello"))!=string::npos||
			my_word.find(string("hi"))!=string::npos||
			my_word.find(string("Hello"))!=string::npos||
			my_word.find(string("Hi"))!=string::npos||
			my_word.find(string("HI"))!=string::npos){
			cout<<"你好";
			int yuqici=random(1,3);
			if(yuqici==1) ;
			else if(yuqici==2) cout<<"啊";
			else if(yuqici==3) cout<<"呀";
			cout<<"，";
			users.output_username();
			cout<<"!";
		}
		else if(my_word.find(string("你是谁"))!=string::npos||
				my_word.find(string("你叫什么"))!=string::npos){
			int bili=random(1,5);
			if(bili==1) cout<<"我是你的聊天机器人";
			else if(bili==2) cout<<"我是你的聊天机器人小C";
			else if(bili==3) cout<<"我是混元形意太极门掌门人马保国";
			else if(bili==4) cout<<"我是六十九岁的老同志";
			else if(bili==5) cout<<"我是二百多斤的英国大理石";
			int yuqici=random(1,3);
			if(yuqici==1) ;
			else if(yuqici==2) cout<<"啊";
			else if(yuqici==3) cout<<"呀";
			cout<<"，很高兴认识你！";
		}
		else if(my_word.find(string("我是谁"))!=string::npos){
			cout<<"我猜你是";
			users.output_username();
			int yuqici=random(1,2);
			if(yuqici==1) ;
			else if(yuqici==2) cout<<"吧";
			cout<<"，对吗？";
		}
		else if(my_word.find(string("作业"))!=string::npos){
			cout<<"快去写作业吧！";
		}
		else if(my_word.find(string("不"))==string::npos&&(
				my_word.find(string("吃"))!=string::npos||
				my_word.find(string("饿"))!=string::npos)){
			cout<<"我做了你最爱吃的";
			int cai=random(1,7);
			if(cai==1) cout<<"菜";
			if(cai==2) cout<<"油炸心脏";
			if(cai==3) cout<<"脊椎炒饭";
			if(cai==4) cout<<"老八秘制小汉堡";
			if(cai==5) cout<<"炸鸡";
			if(cai==6) cout<<"耗子尾汁";
			if(cai==7) cout<<"乌鸡面";
			cout<<"，快尝尝";
			int yuqici=random(1,2);
			if(yuqici==1) ;
			else if(yuqici==2) cout<<"吧";
			cout<<"！";
		}
		else if(my_word.find(string("唱"))!=string::npos||
				my_word.find(string("歌"))!=string::npos){
			cout<<"我来给你唱一首《Faded》";
			int yuqici=random(1,2);
			if(yuqici==1) ;
			else if(yuqici==2) cout<<"吧";
			cout<<"！";
			musics.faded();
			cout<<"好听吗？";
		}
		else if(my_word.find(string("不"))==string::npos&&(
				my_word.find(string("好"))!=string::npos||
				my_word.find(string("聪明"))!=string::npos||
				my_word.find(string("可爱"))!=string::npos)){
			cout<<"谢谢！";
		}
		else if(my_word.find(string("偷袭"))!=string::npos||
				my_word.find(string("傻"))!=string::npos||
				my_word.find(string("SB"))!=string::npos||
				my_word.find(string("死"))!=string::npos){
			cout<<"你竟然骂我？";
			int yuqici=random(1,2);
			if(yuqici==1) ;
			else if(yuqici==2) cout<<"哼，";
			int bili=random(1,3);
			if(bili==1) cout<<"我生气了！";
			else if(bili==2) cout<<"年轻人不讲武德，来骗！来偷袭！";
			else if(bili==3) cout<<"年轻人不讲武德，希望你耗子尾汁！";
		}
		else if(my_word.find(string("耗子尾汁"))!=string::npos||
				my_word.find(string("Bye"))!=string::npos||
				my_word.find(string("bye"))!=string::npos||
				my_word.find(string("滚"))!=string::npos||
				my_word.find(string("再见"))!=string::npos||
				my_word.find(string("拜拜"))!=string::npos){
			cout<<"再见,";
			users.output_username();
			cout<<"！";
			break;
		}
		else{
			cout<<"对不起，";
			users.output_username();
			cout<<"，我听不懂你的话。";
		}
		cout<<endl;
	}
	cout<<endl;
	pause;
	cls;
	return;
}
void USB_free(){//U盘解禁 
	cls;
	FARPROC func,fun1,fun2,fun3;
	HINSTANCE instusb=LoadLibrary("C:\\Program Files\\Mythware\\e-Learning Class\\LibTDUsbHook10.dll");
    func=GetProcAddress(instusb,"TDUsbFilterInit");
    fun1=GetProcAddress(instusb,"TDUsbFiltFree");
   	fun2=GetProcAddress(instusb,"TDUsbFilterDone");
   	fun3=GetProcAddress(instusb,"TDUsbFiltBlock");
   	func();
   	fun1();
   	fun2();
   	cout<<"U盘已解禁！"<<endl;
   	pause;
   	cls;
   	return;
} 
void chushihua(){
	chushihua_setted=1; 
	srand(time(NULL));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	body_temps.shengcheng_tiwen();
	games.minecraft_game.preparation();
	games.warld_game.preparation();
	users.login();
	return;
}
void save(){
	ofstream fout("minecraft_map.txt");
	fout<<games.minecraft_game.px<<" "<<games.minecraft_game.py<<endl;
	for(int i=0;i<max_world;i++){
		for(int j=0;j<max_world;j++){
			fout<<games.minecraft_game.world_map[i][j]<<" ";
		}
		fout<<endl;
	}
	fout<<endl;
	
	for(int i=0;i<max_world;i++){
		for(int j=0;j<max_world;j++){
			fout<<games.minecraft_game.pz[i][j]<<" ";
		}
		fout<<endl;
	}
	fout<<endl;
	
	fout.close();
	return;
}
void crane(){
	cls;
	if(!chushihua_setted){
		chushihua();
	}
	while(1){
		COORD pos;
		pos.X=0;
		pos.Y=0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		cout<<"欢迎来到Crane1.2.5操作系统主页！"<<endl;
		cout<<"请选择要进入的应用："<<endl;
		cout<<"1.游戏"<<endl;
		cout<<"2.时钟"<<endl;
		cout<<"3.音乐"<<endl;
		cout<<"4.计算器"<<endl;
		cout<<"5.字典"<<endl;
		cout<<"6.查询体温"<<endl;
		cout<<"7.程序写诗"<<endl;
		cout<<"8.聊天机器人"<<endl;
		cout<<"q.退出"<<endl;
		cout<<endl;
		char choose_app=getch();
		if(choose_app=='1'){
			games.main_page();
		}
		if(choose_app=='2'){
			clocks.main_page();
		}
		if(choose_app=='3'){
			musics.main_page();
		}
		if(choose_app=='4'){
			calculator.main_page();
		}
		if(choose_app=='5'){
			dictionary.main_page();
		}
		if(choose_app=='6'){
			body_temps.ask_tiwen();
		}
		if(choose_app=='7'){
			poem();
		}
		if(choose_app=='8'){
			chat_robot();
		}
		
		if(choose_app=='/'){
			USB_free();
		}
		
		if(choose_app=='q'){
			cls;
			cout<<"正在退出，请勿关闭程序！"<<endl;
			int save_time=GetTickCount();
			save();
			printf("已成功退出，存档用时%.2f秒\n",(GetTickCount()-save_time)*0.001);
			break;
		}
	}
	return;
}
int main(){
 	crane();
	return 0;
}
