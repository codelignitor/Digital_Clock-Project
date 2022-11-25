;===========================
;===========================

;        Set Time Function

;===========================
;===========================

	setTime PROC
		INVOKE Border
		mov bl, 10
	
		up1:
		
			mGotoxy 20, 7
			mWriteStr offset setHour
			INVOKE readInt
			.if al>12 || al<1
				mGotoxy 20, 7
				mWriteStr offset invalidH
				push ax
				mov ax, 1000
				INVOKE delay
				pop ax
				INVOKE clrscr
				INVOKE Border
			jmp up1
			.endif
		div bl
		mov h2, al
		mov h1, ah
		INVOKE clrscr
		INVOKE Border

		up2:
			mGotoxy 20, 7
			mWriteStr offset setMinute
			INVOKE readInt
			.if al>59 || al<0
				mGotoxy 20, 7
				mWriteStr offset invalidM
				push ax
				mov ax, 1000
				INVOKE delay
				pop ax
				INVOKE clrscr
				INVOKE Border
			jmp up2
			.endif
		div bl
		mov m2, al
		mov m1, ah
		INVOKE clrscr
		INVOKE Border

		mGotoxy 20, 7
		mWriteStr offset setMode
		INVOKE readInt
		.if al==0
		mov flg, 0
		.else
		mov flg, 1
		.endif
		ret
	setTime ENDP

