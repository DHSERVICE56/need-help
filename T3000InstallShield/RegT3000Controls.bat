@echo off

xcopy T3000Controls.dll  C:\Windows\Microsoft.NET\Framework\v4.0.30319\T3000Controls.dll        /y /f
cd C:\Windows\Microsoft.NET\Framework\v4.0.30319
RegAsm  .\T3000Controls.dll
pause
rem ::E:\COM.DELLΪ����ʹ��ȫ·��
rem ::C:\Windows\Microsoft.NET\Framework\v2.0.50727\;ΪREGASM.EXE�����ļ���·����