rem start "C:\Windows\System32\cmd.exe"
cd  /d D:
cd D:\LeetCode\zsg
git add .
set var = date:~6,10
git commit -m "echo var"
git push
pause
