@ECHO OFF
@::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@::  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  ::
@::  Read the zproject/README.md for information about making permanent changes. ::
@::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
ECHO Generating native JNI headers...
IF EXIST ..\..\..\src\native\include\org_zeromq_mlm_MlmProto.h GOTO HAVE_MlmProto
"%JAVA_HOME%\bin\javah.exe" -d ..\..\..\src\native\include -classpath ..\..\..\src\main\java org.zeromq.mlm.MlmProto
:HAVE_MlmProto
IF EXIST ..\..\..\src\native\include\org_zeromq_mlm_MlmClient.h GOTO HAVE_MlmClient
"%JAVA_HOME%\bin\javah.exe" -d ..\..\..\src\native\include -classpath ..\..\..\src\main\java org.zeromq.mlm.MlmClient
:HAVE_MlmClient