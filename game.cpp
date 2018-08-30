#include<bits/stdc++.h>
using namespace std;
struct Player{
    string name;
    int coin;
    int num;
    bool isdead;
};
Player user;
Player *player;
int liu[100];
int playernum,gunnum,bulletnum;
void mod(string s){
    cout<<"欢迎来到俄罗斯轮盘C++模拟版\n\n";
    cout<<s<<"\n";
    cout<<"------------------\n\n";
}
string getTime()
{
    time_t timep;
    time (&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&timep) );
    return tmp;
}
string randname(){
	srand((unsigned)time(0));
	int x=rand()%150+1;
	switch(x){
		case 1:return "匿名用户01";
		case 2:return "匿名用户02";
		case 3:return "匿名用户03";
		case 4:return "匿名用户04";
		case 5:return "匿名用户05";
		case 6:return "匿名用户06";
		case 7:return "匿名用户07";
		case 8:return "匿名用户09";
		case 9:return "匿名用户10";
		case 10:return "匿名用户11";
		case 11:return "匿名用户12";
		case 12:return "匿名用户13";
		case 13:return "匿名用户14";
		case 14:return "匿名用户15";
		case 15:return "Alan";
		case 16:return "Alex";
		case 17:return "Alexander";
		case 18:return "Alfred";
		case 19:return "Andy";
		case 20:return "Aron";
		case 21:return "Arthur";
		case 22:return "Ben";
		case 23:return "Bert";
		case 24:return "Bill";
		case 25:return "Billy";
		case 26:return "Bob";
		case 27:return "Brian";
		case 28:return "Carl";
		case 29:return "Charles";
		case 30:return "Clark";
		case 31:return "Dale";
		case 32:return "Dan";
		case 33:return "Danny";
		case 34:return "Dave";
		case 35:return "David";
		case 36:return "Dennis";
		case 37:return "Edmund";
		case 38:return "Eric";
		case 39:return "Frank";
		case 40:return "Garth";
		case 41:return "George";
		case 42:return "Graham";
		case 43:return "Greg";
		case 44:return "Jack";
		case 45:return "Jacob";
		case 46:return "Jake";
		case 47:return "James";
		case 48:return "Jason";
		case 49:return "Jeff";
		case 50:return "Jerry";
		case 51:return "Jill";
		case 52:return "Jim";
		case 53:return "Jimmy";
		case 54:return "Joe";
		case 55:return "John";
		case 56:return "Johnny";
		case 57:return "Ken";
		case 58:return "Kevin";
		case 59:return "Larry";
		case 60:return "Luke";
		case 61:return "Luther";
		case 62:return "Marc";
		case 63:return "Marcus";
		case 64:return "Mario";
		case 65:return "Mark";
		case 66:return "Martin";
		case 67:return "Matt";
		case 68:return "Michael";
		case 69:return "Mike";
		case 70:return "Nick";
		case 71:return "Orson";
		case 72:return "Paul";
		case 73:return "Peter";
		case 74:return "Rick";
		case 75:return "Robert";
		case 76:return "Ronaldo";
		case 77:return "Roy";
		case 78:return "Sam";
		case 79:return "Scott";
		case 80:return "Steve";
		case 81:return "Ted";
		case 82:return "Tenzing";
		case 83:return "Thomas";
		case 84:return "Tim";
		case 85:return "Tom";
		case 86:return "Tony";
		case 87:return "Victor";
		case 88:return "Vince";
		case 89:return "Walt";
		case 90:return "Whitcomb";
		case 91:return "Alice";
		case 92:return "Amy";
		case 93:return "Anna";
		case 94:return "Annie";
		case 95:return "Becky";
		case 96:return "Candy";
		case 97:return "Carla";
		case 98:return "Carol";
		case 99:return "Carmen";
		case 100:return "Cathy";
		case 101:return "Cindy";
		case 102:return "Claire";
		case 103:return "Clara";
		case 104:return "Claudia";
		case 105:return "David";
		case 106:return "Eliza";
		case 107:return "Emily";
		case 108:return "Gina";
		case 109:return "Grace";
		case 110:return "Helen";
		case 111:return "Holly";
		case 112:return "Jane";
		case 113:return "Jean";
		case 114:return "Jenny";
		case 115:return "Jerry";
		case 116:return "Jessica";
		case 117:return "Judy";
		case 118:return "Julie";
		case 119:return "Karen";
		case 120:return "Kate";
		case 121:return "Katie";
		case 122:return "Kelly";
		case 123:return "Kobe";
		case 124:return "Laura";
		case 125:return "Linda";
		case 126:return "Lisa";
		case 127:return "Lucy";
		case 128:return "Mandy";
		case 129:return "Maria";
		case 130:return "Marie";
		case 131:return "Mary";
		case 132:return "Messi";
		case 133:return "Minnie";
		case 134:return "Molly";
		case 135:return "Nancy";
		case 136:return "Nelly";
		case 137:return "Pam";
		case 138:return "Paula";
		case 139:return "Ruby";
		case 140:return "Sally";
		case 141:return "Sandy";
		case 142:return "Sarah";
		case 143:return "Shirley";
		case 144:return "Sue";
		case 145:return "Susan";
		case 146:return "Tara";
		case 147:return "Teresa";
		case 148:return "Tina";
		case 149:return "Vera";
		case 150:return "Vivian";
	}
}
void loaduser(){
    mod("载入数据");
    ifstream fin("data.dll");
    string s;
    if(!(fin>>s)){
        cout<<"配置数据未找到。你是第一次玩吗？\n";
res:    cout<<"请输入你的用户名(不支持空格):";
        string tmp_in;
        cin>>tmp_in;
        user.name=tmp_in;
        user.coin=200;
        user.isdead=0;
        ofstream fout("data.dll");
        fout<<user.name<<endl;
        fout<<user.coin<<endl;
        fout<<0;
        cout<<"角色创建成功!\n\n";
        cout<<"你的用户名:"<<user.name<<endl;
        cout<<"你的金币数："<<user.coin<<endl;
    }else{
        string tmp_username=s;
        fin>>s;
        string tmp_coin=s;
        fin>>s;
        if(s=="1"){cout<<"这个角色已经死了哎...\n将创建一个新的\n";goto res;}
        for(int i=0;i<tmp_coin.length();i++){
            if(tmp_coin[i]<'0' || tmp_coin[i]>'9'){
                cout<<"ERROR: 读取文件时发生错误\n";
                cout<<"系统将自动清除数据并在1秒后重新开始。\n\n";
                _sleep(1000);
                goto res;
            }
        }
        istringstream tmpstream(tmp_coin);
        int coin;
        tmpstream>>coin;
        user.coin=coin;
        user.name=tmp_username;
        cout<<"你的用户名:"<<user.name<<endl;
        cout<<"你的金币数："<<user.coin<<endl;
qr:     cout<<"是否确认？输入y确认，输入n创建新角色。\n";
        cin>>s;
        if(s=="n")goto res;
        if(s!="y"){cout<<"错误的输入。\n";goto qr;}
    }
}
void play(){
	srand((unsigned)time(0));
	mod("开始游戏");
	cout<<"残酷的规则：\n"
	"按编号传枪对自己开枪，你可以选择使用一半且超过300的金币跳过你。\n"
	"如果你没跳过，而正好轮到你，那么你就挂了。\n"
	"你的所有金币会平均到每个人手上。\n"
	"只有游戏里只剩下不到5人时才会结束。\n"
	"哈哈哈哈...\n"
	"Have fun!\n\n\n";
	int *p=liu+1;
	cout<<"---------\n参与者名单:\n";
	for(int i=1;i<=playernum;i++){
		cout<<"编号："<<i<<"    名字:"<<player[i].name<<"\t金币数:"<<player[i].coin;
		if(i==user.num)cout<<"  (You)  ";
		cout<<endl;
		_sleep(500);
	}
	int i=1;
	int n=0;
	int numofper=playernum;
	while(numofper>=5){
		int ren=n%playernum+1;
		if(player[ren].isdead==1){n++;continue;}
		cout<<"第 "<<i++<<" 轮:\n";
		_sleep(500);
		cout<<"轮到了 "<<ren<<"号玩家，"<<player[ren].name<<": \n    ";
		if(ren!=user.num){
			_sleep(1000+rand()%1000);
			if(rand()%5){
				cout<<player[ren].name<<" 选择了开枪。\n";
				_sleep(500);
				if(*p==1){
					cout<<"Boom!";
					_sleep(500);
					player[ren].isdead=true;
					cout<<player[ren].name<<" 死亡。\n";
					user.coin+=player[ren].coin/numofper;
					cout<<"你获得了"<<(int)(player[ren].coin/numofper)<<"金币.\n";
					numofper--;
					cout<<"现在场上还有"<<numofper<<"人\n";
				}else{
					cout<<"这枪是空的\n"<<player[ren].name<<"没事\n\n";
				}

			}else{
				cout<<player[ren].name<<" 选择了跳过。\n";
				p--;
			}
		}else{
			if(user.coin>=600){
				cout<<"你还有"<<user.coin<<"金币,\n";
				cout<<"花一半金币以躲过吗？(y/n)";
				string s;
id3:			cin>>s;
				if(s=="n"){
					cout<<player[ren].name<<" 选择了开枪。\n";
					_sleep(500);
					if(*p==1){
						cout<<"Boom!";
						_sleep(500);
						user.isdead=true;
						cout<<player[ren].name<<" 死亡。\n";
						cout<<"\n\n\nYou Lose!!\n\n";
						ofstream fout("data.dll");
        				fout<<user.name<<endl;
        				fout<<user.coin<<endl;
        				fout<<1;
        				return;
					}else{
						cout<<"这枪是空的\n";
					}
				}
				if(s=="y"){
					cout<<"你躲过了。\n";
					user.coin/=2;
					p--;
				}
        		if(s!="y" && s!="n"){cout<<"错误的输入。\n";goto id3;}
			}else{
				cout<<player[ren].name<<" 选择了开枪。\n";
				_sleep(500);
				if(*p==1){
					cout<<"Boom!";
					_sleep(500);
					user.isdead=true;
					cout<<player[ren].name<<" 死亡。\n";
					cout<<"\n\n\nYou Lose!!\n\n";
					ofstream fout("data.dll");
        			fout<<user.name<<endl;
        			fout<<user.coin<<endl;
        			fout<<1;
        			string timenow=getTime();
					ofstream newfout(user.name+"的墓碑.txt");
					newfout<<"------------------------------\n";
					newfout<<user.name<<endl<<endl;
					newfout<<"在"<<timenow<<endl;
					newfout<<"玩俄罗斯轮盘时死亡。\n";
					newfout<<"TA死时还有"<<user.coin<<"金币\n\n";
					newfout<<"这个故事告诉我们\n要珍爱生命！\n";
					newfout<<"------------------------------\n";
        			return;
        		}else{
        			cout<<"这枪是空的\n";
				}
			}
		}
		p++;
		if(p==&liu[gunnum+1])
		p=liu+1;
		n++;
		cout<<endl;
		_sleep(1000);
	}
	cout<<"本局结束。你有了"<<user.coin<<"金币。\n";
	ofstream fout("data.dll");
    fout<<user.name<<endl;
    fout<<user.coin<<endl;
    fout<<0;
}
int main(){
	srand((unsigned)time(0));
    string s;
    mod("按任意键以开始\nby:Lhc_fl");
    system("pause");
    system("cls");
    loaduser();
    system("pause");
    system("cls");
id5:    mod("配置环节");
id1:    cout<<"输入枪容量（范围：6-20）:\n";
    cin>>s;
    for(int i=0;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9'){
                cout<<"ERROR: 输入错误,请重试\n\n";
                goto id1;
            }
        }
    istringstream tmpstream(s);
    tmpstream>>gunnum;
    if(gunnum>20 || gunnum<6){
    	cout<<"ERROR: 输入错误,请重试\n";
        goto id1;
    }
id2:    cout<<"输入子弹数（范围：1-5）:\n";
    cin>>s;
    for(int i=0;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9'){
                cout<<"ERROR: 输入错误,请重试\n\n";
                goto id2;
            }
        }
    istringstream tmp2stream(s);
    tmp2stream>>bulletnum;
    if(bulletnum>5 || bulletnum<1){
    	cout<<"ERROR: 输入错误,请重试\n\n";
        goto id2;
    }
    playernum=rand()%gunnum+6;
    cout<<"分配ing...\n";
    _sleep(1000);
    user.num=rand()%playernum+1;
    for(int i=1;i<=bulletnum;i++){
    	int rndnum=rand()%gunnum+1;
    	liu[rndnum]=1;
    	_sleep(1000);
	}
	player=new Player[playernum+1];
	for(int i=1;i<=playernum;i++){
		if(i==user.num){
			player[i].coin=user.coin;
			player[i].isdead=0;
			player[i].name=user.name;
		}else{
			player[i].coin=rand()%(user.coin*10)+user.coin;
			player[i].isdead=0;
			player[i].name=randname();
		}
		_sleep(1000);
	}
	cout<<"分配完成！\n";
	cout<<"以下是一些你的信息：\n\n";
	cout<<"你的名字:"<<user.name<<endl;
	_sleep(500);
	cout<<"你的金币数:"<<user.coin<<endl;
	_sleep(500);
	cout<<"你的编号:"<<user.num<<endl;
	_sleep(500);
	cout<<"枪子弹数:"<<bulletnum<<endl;
	_sleep(500);
	cout<<"总玩家数:"<<playernum<<endl;
	_sleep(500);
	cout<<"现在将使用的是一支"<<gunnum<<"可载弹量手枪\n\n"<<endl;
	_sleep(100);
	system("pause");
	system("cls");
	play();
	system("pause");
id4:if(user.isdead){
		
		return 0;
	}
	cout<<"想再玩一局吗？(y/n)";
	cin>>s;

	if(s=="n"){cout<<"Bye!";}
	if(s=="y"){
		for(int i=1;i<=gunnum;i++){
			liu[i]=0;
		}
		system("cls");
		goto id5;
	}
    if(s!="y" && s!="n"){cout<<"错误的输入。\n";goto id4;}
    system("pause");
    return 0;
}
