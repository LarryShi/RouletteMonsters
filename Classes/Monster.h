/*
 * Monster.h
 *
 *  Created on: 2014-7-9
 *      Author: LarryShi
 */

#ifndef MONSTER_H_
#define MONSTER_H_
#include <string>
using namespace std;
class Monster {
private:
	string Name;
	string Description;
	int Level;
	int Exp;
	int HP;
	int Str;//����������������
	int Dex;//���ݣ��������ܺͱ���
	int Con;//����������HP�ͷ���
	int Recovery;
	int Attack;
	int Defense;
	int Avoid;
	int Critical;
public:
	Monster(string name);
	void setDescription(string description);
	void setCon(int con);
	string getName();
	int getHP();
};

#endif /* MONSTER_H_ */
