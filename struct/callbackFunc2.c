#include <stdio.h>

/**
 * 通过结构体定义记录学生信息，而后定义两个函数，分别是通过年龄或分数返回BOOL值
 * 用函数指针做参数，即回调函数，对其进行排序。
 * 
**/


typedef enum{
    NO,
    YES,
}BOOL;

typedef struct STUDENT{
    char name[20];
    int age;
    float score;
}Student;

BOOL compareByAge(Student s1, Student s2){
    return s1.age > s2.age ? YES:NO;
}
BOOL compareByScore(Student s1, Student s2){
    return s1.score > s2.score ? YES:NO;
}

void sortStudents(Student *array, int n, BOOL (*p)(Student,Student)){
    Student temp;
    int flag = 0;
    for(int i = 0; i< n-1; i++){
        flag = 1;
        for(int j = 0; j< n-i; j++){
            if(p(array[j],array[j+1])){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag = 0;
            }
            
        }

    }
}

int main()
{
    Student stu1 = {"xiaohua",18,89};
    Student stu2 = {"xiaohong",17,90};
    Student stu3 = {"xiaoming",20,77};

    Student stuArray[3] = {stu1,stu2,stu3};
    sortStudents(stuArray,3,compareByAge);

    for(int i = 0; i< 3; i++)
    {
        printf("%s\n",stuArray[i].name);
        printf("%d\n",stuArray[i].age);
        printf("%.2f\n",stuArray[i].score);
    }

    return 0;
    


}