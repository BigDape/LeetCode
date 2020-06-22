rem start "C:\Windows\System32\cmd.exe"
cd  /d D:
cd D:\LeetCode\zsg
set varyear = %date:~0,4%
set varmonth = %date:~5,2%
set varday = %date:~8,2%
set var = %varyear%,%varmonth%, %varday%

git add .
git commit -m "^%var^%"
git push
pause
