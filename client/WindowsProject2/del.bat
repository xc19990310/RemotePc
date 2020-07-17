@echo off
for /r %%i in (debug,release,ipch) do rd /s /q "%%i"
for /r %%i in (*.sdf *.VC.db) de del /s /f /q "%%i"
pause