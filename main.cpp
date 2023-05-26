#include"head.h"
using namespace std;

int main()
{
	rand_nums();
	while (true)
	{
		cout << "这个是一个排序程序" << "\n排序方式：" << "\n1.从大到小" << "\n2.从小到大" << endl;
		cin >> choose;
		if (choose == 1)
		{
			From_max_to_min();
		}else if (choose == 2){
			From_min_to_max();
		}else{
			break;
		}
	}
	system("pause");
	return 0;
}