#include <iostream>

int main(int argc, char** argv) {
	system("curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest > curl.json");
	system("curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest | jq -r \".assets[].name\" > filename.txt");
	system("curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest | jq -r \".tag_name\" > version.txt");
	system("curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest | jq -r \".assets[].browser_download_url\" > url.txt");
	system("set /p filename=<filename.txt");
	system("wget -q -O aioboot --show-progress -i url.txt");
	system("7zG.exe x -y -o\"..\\\" -paioboot aioboot");	
}