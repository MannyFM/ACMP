@echo off
set /P i=
md %i%
if errorlevel 1 goto error
robocopy C:\tem\ %i%
goto end
:error
echo.
echo ������ ����� ��� ����������
:end
pause