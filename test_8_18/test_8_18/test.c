#include <stdio.h>

typedef int 整形;

int main() {

	整形 a = 3;
	printf("%d", a);

	return 0;
}

//enum Day {
//	MON = 1, TUE, WED, THU, FRI, SAT, SUN
//};
//
//typedef struct Student {
//	int id;
//	char name[10];
//	char gender[10];
//}Student;
//
//char* get_student_name(Student* student) {
//	return student->name;
//}
//
//void get_name(Student student) {
//	printf("name = %s", student.name);
//}
//
//int main() {
//	
//	Student student1 = { 2020202, "张三", "男"};
//	Student student2 = { 2323224, "李四", "女" };
//
//	Student* stu[2] = { &student1, &student2 };
//	get_name(*stu[1]);
//	printf("name = %s\n", get_student_name(stu[0]));
//
//	return 0;
//}

