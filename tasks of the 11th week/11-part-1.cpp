#include<iostream>        
#include<iomanip>
using  namespace  std;

struct  Student
{
    int num;
    string name;
    int score;
};        
void  output_message(Student  stu);
void  output_title();
int  main()
{
        int  n;
        cout<<"The  number  of  student:"<<endl<<endl<<endl;
        cin>>n;
        //从键盘读入n个学生的数据，并累加总成绩
        int sum=0;
        Student stu[50];
        for(int i=0;i<n;i++)
        {
            cin>>stu[i].num>>stu[i].name>>stu[i].score;
            sum+=stu[i].score;
        }
        
        //输出显示全部学生的信息和全班平均分
        cout<<"\nAll  students:\n";
                output_title();
        for(int i=0;i<n;i++)
        {
            output_message(stu[i]);
        }
        cout<<"average="<<(double)sum/n<<endl;


        //查找最高分和最低分学生并输出显示其信息
        bool fail[50]={0},fail_flag=0;
        int max=-1,max_note=0,min=0x3f3f3f,min_note=0;
        for(int i=0;i<n;i++)
        {
            if(stu[i].score>max)
            {
                max=stu[i].score;
                max_note=i;
            }
            if(stu[i].score<min)
            {
                min=stu[i].score;
                min_note=i;
            }
            if(stu[i].score<60)
            {
                fail[i]=1;
                fail_flag=1;
            }
        }
        if(fail_flag)
        {
            cout<<"Fail students:"<<endl;
            output_title();
            for(int i=0;i<n;i++)
            {
                if(fail[i])
                    output_message(stu[i]);
            }
        }
        cout<<"max_score student:"<<endl;
        output_title();
        output_message(stu[max_note]);
        cout<<endl;
        cout<<"min_score student:"<<endl;
        output_title();
        output_message(stu[min_note]);
        return  0;
}
void  output_title()
{
        cout<<setw(10)<<"Number"<<setw(10)<<"Name"<<setw(10)<<"Score\n";
}
void  output_message(Student  stu)
{
        cout<<setw(10)<<stu.num<<setw(10)<<stu.name<<setw(10)<<stu.score<<endl;
}