cd  /d D:
cd D:\LeetCode\zsg
set var= %date:~0,4%,%date:~5,2%, %date:~8,2%

git add .
git commit -m "%var%"
git push
pause
