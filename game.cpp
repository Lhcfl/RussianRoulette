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
    cout<<"��ӭ��������˹����C++ģ���\n\n";
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
		case 1:return "�����û�01";
		case 2:return "�����û�02";
		case 3:return "�����û�03";
		case 4:return "�����û�04";
		case 5:return "�����û�05";
		case 6:return "�����û�06";
		case 7:return "�����û�07";
		case 8:return "�����û�09";
		case 9:return "�����û�10";
		case 10:return "�����û�11";
		case 11:return "�����û�12";
		case 12:return "�����û�13";
		case 13:return "�����û�14";
		case 14:return "�����û�15";
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
    mod("��������");
    ifstream fin("data.dll");
    string s;
    if(!(fin>>s)){
        cout<<"��������δ�ҵ������ǵ�һ������\n";
res:    cout<<"����������û���(��֧�ֿո�):";
        string tmp_in;
        cin>>tmp_in;
        user.name=tmp_in;
        user.coin=200;
        user.isdead=0;
        ofstream fout("data.dll");
        fout<<user.name<<endl;
        fout<<user.coin<<endl;
        fout<<0;
        cout<<"��ɫ�����ɹ�!\n\n";
        cout<<"����û���:"<<user.name<<endl;
        cout<<"��Ľ������"<<user.coin<<endl;
    }else{
        string tmp_username=s;
        fin>>s;
        string tmp_coin=s;
        fin>>s;
        if(s=="1"){cout<<"�����ɫ�Ѿ����˰�...\n������һ���µ�\n";goto res;}
        for(int i=0;i<tmp_coin.length();i++){
            if(tmp_coin[i]<'0' || tmp_coin[i]>'9'){
                cout<<"ERROR: ��ȡ�ļ�ʱ��������\n";
                cout<<"ϵͳ���Զ�������ݲ���1������¿�ʼ��\n\n";
                _sleep(1000);
                goto res;
            }
        }
        istringstream tmpstream(tmp_coin);
        int coin;
        tmpstream>>coin;
        user.coin=coin;
        user.name=tmp_username;
        cout<<"����û���:"<<user.name<<endl;
        cout<<"��Ľ������"<<user.coin<<endl;
qr:     cout<<"�Ƿ�ȷ�ϣ�����yȷ�ϣ�����n�����½�ɫ��\n";
        cin>>s;
        if(s=="n")goto res;
        if(s!="y"){cout<<"��������롣\n";goto qr;}
    }
}
void play(){
	srand((unsigned)time(0));
	mod("��ʼ��Ϸ");
	cout<<"�п�Ĺ���\n"
	"����Ŵ�ǹ���Լ���ǹ�������ѡ��ʹ��һ���ҳ���300�Ľ�������㡣\n"
	"�����û�������������ֵ��㣬��ô��͹��ˡ�\n"
	"������н�һ�ƽ����ÿ�������ϡ�\n"
	"ֻ����Ϸ��ֻʣ�²���5��ʱ�Ż������\n"
	"��������...\n"
	"Have fun!\n\n\n";
	int *p=liu+1;
	cout<<"---------\n����������:\n";
	for(int i=1;i<=playernum;i++){
		cout<<"��ţ�"<<i<<"    ����:"<<player[i].name<<"\t�����:"<<player[i].coin;
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
		cout<<"�� "<<i++<<" ��:\n";
		_sleep(500);
		cout<<"�ֵ��� "<<ren<<"����ң�"<<player[ren].name<<": \n    ";
		if(ren!=user.num){
			_sleep(1000+rand()%1000);
			if(rand()%5){
				cout<<player[ren].name<<" ѡ���˿�ǹ��\n";
				_sleep(500);
				if(*p==1){
					cout<<"Boom!";
					_sleep(500);
					player[ren].isdead=true;
					cout<<player[ren].name<<" ������\n";
					user.coin+=player[ren].coin/numofper;
					cout<<"������"<<(int)(player[ren].coin/numofper)<<"���.\n";
					numofper--;
					cout<<"���ڳ��ϻ���"<<numofper<<"��\n";
				}else{
					cout<<"��ǹ�ǿյ�\n"<<player[ren].name<<"û��\n\n";
				}

			}else{
				cout<<player[ren].name<<" ѡ����������\n";
				p--;
			}
		}else{
			if(user.coin>=600){
				cout<<"�㻹��"<<user.coin<<"���,\n";
				cout<<"��һ�����Զ����(y/n)";
				string s;
id3:			cin>>s;
				if(s=="n"){
					cout<<player[ren].name<<" ѡ���˿�ǹ��\n";
					_sleep(500);
					if(*p==1){
						cout<<"Boom!";
						_sleep(500);
						user.isdead=true;
						cout<<player[ren].name<<" ������\n";
						cout<<"\n\n\nYou Lose!!\n\n";
						ofstream fout("data.dll");
        				fout<<user.name<<endl;
        				fout<<user.coin<<endl;
        				fout<<1;
        				return;
					}else{
						cout<<"��ǹ�ǿյ�\n";
					}
				}
				if(s=="y"){
					cout<<"�����ˡ�\n";
					user.coin/=2;
					p--;
				}
        		if(s!="y" && s!="n"){cout<<"��������롣\n";goto id3;}
			}else{
				cout<<player[ren].name<<" ѡ���˿�ǹ��\n";
				_sleep(500);
				if(*p==1){
					cout<<"Boom!";
					_sleep(500);
					user.isdead=true;
					cout<<player[ren].name<<" ������\n";
					cout<<"\n\n\nYou Lose!!\n\n";
					ofstream fout("data.dll");
        			fout<<user.name<<endl;
        			fout<<user.coin<<endl;
        			fout<<1;
        			string timenow=getTime();
					ofstream newfout(user.name+"��Ĺ��.txt");
					newfout<<"------------------------------\n";
					newfout<<user.name<<endl<<endl;
					newfout<<"��"<<timenow<<endl;
					newfout<<"�����˹����ʱ������\n";
					newfout<<"TA��ʱ����"<<user.coin<<"���\n\n";
					newfout<<"������¸�������\nҪ�䰮������\n";
					newfout<<"------------------------------\n";
        			return;
        		}else{
        			cout<<"��ǹ�ǿյ�\n";
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
	cout<<"���ֽ�����������"<<user.coin<<"��ҡ�\n";
	ofstream fout("data.dll");
    fout<<user.name<<endl;
    fout<<user.coin<<endl;
    fout<<0;
}
int main(){
	srand((unsigned)time(0));
    string s;
    mod("��������Կ�ʼ\nby:Lhc_fl");
    system("pause");
    system("cls");
    loaduser();
    system("pause");
    system("cls");
id5:    mod("���û���");
id1:    cout<<"����ǹ��������Χ��6-20��:\n";
    cin>>s;
    for(int i=0;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9'){
                cout<<"ERROR: �������,������\n\n";
                goto id1;
            }
        }
    istringstream tmpstream(s);
    tmpstream>>gunnum;
    if(gunnum>20 || gunnum<6){
    	cout<<"ERROR: �������,������\n";
        goto id1;
    }
id2:    cout<<"�����ӵ�������Χ��1-5��:\n";
    cin>>s;
    for(int i=0;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9'){
                cout<<"ERROR: �������,������\n\n";
                goto id2;
            }
        }
    istringstream tmp2stream(s);
    tmp2stream>>bulletnum;
    if(bulletnum>5 || bulletnum<1){
    	cout<<"ERROR: �������,������\n\n";
        goto id2;
    }
    playernum=rand()%gunnum+6;
    cout<<"����ing...\n";
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
	cout<<"������ɣ�\n";
	cout<<"������һЩ�����Ϣ��\n\n";
	cout<<"�������:"<<user.name<<endl;
	_sleep(500);
	cout<<"��Ľ����:"<<user.coin<<endl;
	_sleep(500);
	cout<<"��ı��:"<<user.num<<endl;
	_sleep(500);
	cout<<"ǹ�ӵ���:"<<bulletnum<<endl;
	_sleep(500);
	cout<<"�������:"<<playernum<<endl;
	_sleep(500);
	cout<<"���ڽ�ʹ�õ���һ֧"<<gunnum<<"���ص�����ǹ\n\n"<<endl;
	_sleep(100);
	system("pause");
	system("cls");
	play();
	system("pause");
id4:if(user.isdead){
		
		return 0;
	}
	cout<<"������һ����(y/n)";
	cin>>s;

	if(s=="n"){cout<<"Bye!";}
	if(s=="y"){
		for(int i=1;i<=gunnum;i++){
			liu[i]=0;
		}
		system("cls");
		goto id5;
	}
    if(s!="y" && s!="n"){cout<<"��������롣\n";goto id4;}
    system("pause");
    return 0;
}
