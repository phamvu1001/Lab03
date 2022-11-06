#include "Lab03_header.h"
int main(int argv, char* argv2[]) {

	if (argv <= 1) { //nếu không nhập từ cmd thì trả ra dòng lệnh rồi kết thúc
		cout << "Please use this program in command prompt!" << endl;
		return 0;
	}
	else {
		Command_line(argv, argv2);
	}
	return 0;
}
