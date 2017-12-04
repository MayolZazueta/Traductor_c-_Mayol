.MODEL SMALL

.STACK
.DATA
a DB 0
b DB 0
resul DB 0

.CODE
main:
push 5
pop eax
mov a, eax
push 4
pop eax
mov b, eax
push a
push b
pop ebx
pop eax
add eax, ebx
push eax
pop eax
mov resul, eax
print str$(eax)
print chr$(10)
exit
end main
