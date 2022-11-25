;===========================
;===========================

;    Print Colon Function

;===========================
;===========================

	colon1 PROC
		mov al, '*'
		mGotoxy 32, 6
		INVOKE writechar
		mGotoxy 32, 8
		INVOKE WriteChar
		ret
	colon1 ENDP

	colon2 PROC
		mov al, '*'
		mGotoxy 51, 6
		INVOKE writechar
		mGotoxy 51, 8
		INVOKE WriteChar
		ret
	colon2 ENDP

;===========================
;===========================

;	Print Functions

;============================
;============================
	printH2 PROC
	;INVOKE clrscr
		mov l, 15
		mov mid, 16
		mov r, 21
		
		.if h2==0
		INVOKE zero
		.elseif h2==1
		INVOKE one
		.elseif h2==2
		INVOKE two
		.elseif h2==3
		INVOKE three
		.elseif h2==4
		INVOKE four
		.elseif h2==5
		INVOKE five
		.elseif h2==6
		INVOKE six
		.elseif h2==7
		INVOKE seven
		.elseif h2==8
		INVOKE eight
		.elseif h2==9
		INVOKE nine
		.endif
		ret
	printH2 ENDP
;=============================
;=============================
printH1 PROC
		mov l, 24
		mov mid, 25
		mov r, 30
		
		.if h1==0
		INVOKE zero
		.elseif h1==1
		INVOKE one
		.elseif h1==2
		INVOKE two
		.elseif h1==3
		INVOKE three
		.elseif h1==4
		INVOKE four
		.elseif h1==5
		INVOKE five
		.elseif h1==6
		INVOKE six
		.elseif h1==7
		INVOKE seven
		.elseif h1==8
		INVOKE eight
		.elseif h1==9
		INVOKE nine
		.endif
		ret
	printH1 ENDP
;============================
;============================
	printM2 PROC
		mov l, 34
		mov mid, 35
		mov r, 40
		
		.if m2==0
		INVOKE zero
		.elseif m2==1
		INVOKE one
		.elseif m2==2
		INVOKE two
		.elseif m2==3
		INVOKE three
		.elseif m2==4
		INVOKE four
		.elseif m2==5
		INVOKE five
		.elseif m2==6
		INVOKE six
		.elseif m2==7
		INVOKE seven
		.elseif m2==8
		INVOKE eight
		.elseif m2==9
		INVOKE nine
		.endif
		ret
	printM2 ENDP
;==============================
;==============================
	printM1 PROC
		mov l, 43
		mov mid, 44
		mov r, 49
		
		.if m1==0
		INVOKE zero
		.elseif m1==1
		INVOKE one
		.elseif m1==2
		INVOKE two
		.elseif m1==3
		INVOKE three
		.elseif m1==4
		INVOKE four
		.elseif m1==5
		INVOKE five
		.elseif m1==6
		INVOKE six
		.elseif m1==7
		INVOKE seven
		.elseif m1==8
		INVOKE eight
		.elseif m1==9
		INVOKE nine
		.endif
		ret
	printM1 ENDP
;==============================
;==============================
	printS2 PROC
		mov l, 53
		mov mid, 54
		mov r, 59

		.if s2==0
		INVOKE zero
		.elseif s2==1
		INVOKE one
		.elseif s2==2
		INVOKE two
		.elseif s2==3
		INVOKE three
		.elseif s2==4
		INVOKE four
		.elseif s2==5
		INVOKE five
		.elseif s2==6
		INVOKE six
		.elseif s2==7
		INVOKE seven
		.elseif s2==8
		INVOKE eight
		.elseif s2==9
		INVOKE nine
		.endif
		ret
	printS2 ENDP
;==============================
;==============================
	printS1 PROC
		mov l, 62
		mov mid, 63
		mov r, 68

		.if s1==0
		INVOKE zero
		.elseif s1==1
		INVOKE one
		.elseif s1==2
		INVOKE two
		.elseif s1==3
		INVOKE three
		.elseif s1==4
		INVOKE four
		.elseif s1==5
		INVOKE five
		.elseif s1==6
		INVOKE six
		.elseif s1==7
		INVOKE seven
		.elseif s1==8
		INVOKE eight
		.elseif s1==9
		INVOKE nine
		.endif
		
		ret
	printS1 ENDP
