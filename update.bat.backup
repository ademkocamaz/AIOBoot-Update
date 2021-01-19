@echo off
mode 70,1
color F8
title AIOBoot - Update
curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest > curl.json
curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest | jq -r ".assets[].name" > filename.txt
curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest | jq -r ".tag_name" > version.txt
curl -sL https://api.github.com/repos/nguyentumine/AIO-Boot/releases/latest | jq -r ".assets[].browser_download_url" > url.txt
set /p filename=<filename.txt
:: wget -q -O AIOBoot.7z --show-progress -i url.txt
wget -q -O %filename% --show-progress -i url.txt
:: aria2c --file-allocation=none -i url.txt
:: 7zG.exe  x -y -o"..\" -paioboot AIOBoot*.7z
::7z.exe x -y -o"..\" -paioboot %filename%
7zG.exe x -y -o"..\" -paioboot %filename%
