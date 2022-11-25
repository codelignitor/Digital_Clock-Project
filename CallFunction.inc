;===========================
;===========================

;         Call Function

;===========================
;===========================

call_fun PROC
	xor ax, ax
	mov ax, 0Ah

	INVOKE Border
	INVOKE setTime
	mov s1, 0
	top:	INVOKE clrscr
	
		INVOKE Border
		INVOKE printH2
		INVOKE printH1
		
		INVOKE colon1
	
		INVOKE printM2
		INVOKE printM1
	
		INVOKE colon2
	
		INVOKE printS2
		INVOKE printS1
	
		INVOKE am_pm
		mGotoxy 30,12

		mWriteStr offset reset
		INVOKE incS1
		mov ax, 1000
		INVOKE delay
		mGotoxy 30,16
	jmp top
	ret
call_fun ENDP
