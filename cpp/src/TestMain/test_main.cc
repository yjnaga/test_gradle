
#include <iostream>

extern const char _binary_version_info_start[], _binary_version_info_size[];
const char *foo_ptr = _binary_version_info_start;     /* 開始アドレス */
size_t foo_size = (size_t)_binary_version_info_size;  /* サイズ */



int32_t main(int32_t argc, char** argv) {
	std::string aaa{_binary_version_info_start, foo_size};
	std::cout << "test [" << aaa << "]" << std::endl;
}
