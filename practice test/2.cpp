#include <iostream>
using namespace std;

class Person{ //在校人员类
protected:
	int m_id; //编号 
public:
	Person(int id):m_id(id){}
	virtual ~Person(){
	    cout << "Destruct Person" << endl;
	}
	void setID(int newID){
		m_id = newID;
	}
	int getID(){
		return m_id;
	}
	virtual void print() const = 0;
};
class Student: public Person{ //学生类
private:
	int  m_courseNum; //课程数量
	int* m_scores; //成绩单中记录着每门课的成绩
public:
        //补全所需的构造函数
Student(int pid=1000,int pcoursenum=0,int* pscores=0):Person(pid),m_courseNum(pcoursenum)
		{
			m_scores=new int [pcoursenum];
			for(int i=0;i<pcoursenum;i++)
			{
				m_scores[i]=pscores[i];
			}
		}

	~Student(){
	   cout << "Destruct Student" << endl;
	   delete[] m_scores;
	   m_scores = 0;
	}
	void print() const {
	   for (int i = 0; i < m_courseNum; ++i){
	       cout << m_scores[i] << " ";
	   }
	   cout << endl;
	}
};
class Teacher: public Person{ //教师类
private:
	int   m_stuNum; //指导的学生数量
	int   m_stuIDs[50]; //学生数组中存放每位学生的编号
	
public:
        //补全所需的构造函数
Teacher(int pid=0,int pstunum=0):Person(pid),m_stuNum(pstunum)
		{
		
		}

	~Teacher(){
	   cout << "Destruct Teacher" << endl;
	   m_stuNum = 0;
	}
        //补全addStudent()函数
void addStudent(Person &p)
		{
			m_stuIDs[m_stuNum++]=p.getID();
		}

	void print() const {
	   for (int i = 0; i < m_stuNum; ++i){
	   	   cout << m_stuIDs[i] << " ";
	   }
	   cout << endl;
	}	
};

void report(Person* p){ //参数为基类指针的全局函数
     p->print();	
}

int main(){
    int scores1[5] = {97,98,99,100,101}; //成绩单
    Student *s1 = new Student(1001, 5, scores1); //创建第一个学生
    report(s1);

    Person *s2 = new Student(*s1); //用已有的学生对象创建一个新的学生对象
    s2->setID(1002); //修改此学生的编号
    report(s2);
    
    Teacher *t1 = new Teacher(2001); //创建一个教师
    t1->addStudent(*s1); //添加教师指导的学生
    t1->addStudent(*s2); //添加教师指导的学生
    report(t1);
    
    //释放已有对象
    delete t1;
    t1 = 0;
    delete s2;
    s2 = 0;
    delete s1;
    s1 = 0;
	
    return 0;
}


