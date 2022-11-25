;===========================
;===========================

;	Digit Functions

;===========================
;===========================
	zero PROC
		
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		sub mid, 4
		
		
		
		mov al, '|'
		mGotoxy l, 9
		INVOKE writeChar
		mGotoxy r,9
		INVOKE writechar
		
		mGotoxy l, 4
		INVOKE writeChar
		mGotoxy r,4
		INVOKE writechar
		
		mGotoxy l, 5
		INVOKE writeChar
		mGotoxy r,5
		INVOKE writechar
		
		mGotoxy l, 6
		INVOKE writeChar
		mGotoxy r,6
		INVOKE writechar
		
		mGotoxy l, 7
		INVOKE writeChar
		mGotoxy r,7
		INVOKE writechar
		
		mGotoxy l, 8
		INVOKE writeChar
		
		
		mov al, '='
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		
		mov al, '|'
		mGotoxy r, 8
		INVOKE writechar
		ret
	zero ENDP
;===========================
;===========================
	one PROC
		mov al, '|'
		mGotoxy r, 4
		INVOKE writechar
		
		mGotoxy r, 5
		INVOKE writechar
		mGotoxy r, 6
		INVOKE writechar
		mGotoxy r, 7
		INVOKE writechar
		mGotoxy r, 8
		INVOKE writechar
		mGotoxy r, 9
		INVOKE writechar
		ret
	one ENDP
;===========================
;===========================
	two PROC
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid,2 
		mGotoxy mid, 3
		INVOKE writechar
		sub mid, 4
		
		
		
		mov al, '|'
		mGotoxy r, 4
		INVOKE writechar
		mGotoxy r, 5
		INVOKE writechar
		mGotoxy r, 6
		INVOKE writechar
		
		mov al, '='
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		sub mid, 4
		
		
		
		mov al, '|'
		mGotoxy l, 7
		INVOKE writechar
		mov al, '|'
		mGotoxy l, 8
		INVOKE writechar
		mov al, '|'
		mGotoxy l, 9
		INVOKE writechar
		
		
		mov al, '='
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar

		ret
	two ENDP
;==========================
;==========================
	three PROC
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		sub mid, 4
		
		
		
		mov al, '|'
		mGotoxy r, 4
		INVOKE writechar
		mGotoxy r, 5
		INVOKE writechar
		mGotoxy r, 6
		INVOKE writechar
		
		mov al, '='
		mGotoxy mid, 6
		INVOKE writechar
		add mid,2
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		sub mid, 4
		
		mov al, '|'
		mGotoxy r, 7
		INVOKE writechar
		mGotoxy r, 8
		INVOKE writechar
		mGotoxy r, 9
		INVOKE writechar

		
		mov al, '='
		mGotoxy mid, 10
		INVOKE writechar
		add mid,2
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		
		
		ret
	three ENDP
;==========================
;==========================
	four PROC
		mov al, '|'
		mGotoxy l, 4
		INVOKE writechar
		mGotoxy l, 5
		INVOKE writechar
		mGotoxy l, 6
		INVOKE writechar
		
		
		
		mov al, '='
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
	
		mov al, '|'
		mGotoxy r, 4
		INVOKE writechar
		mGotoxy r, 5
		INVOKE writechar
		mGotoxy r, 6
		INVOKE writechar
		mGotoxy r, 7
		INVOKE writechar
		mGotoxy r, 8
		INVOKE writechar
		mGotoxy r, 9
		INVOKE writechar
		
		
		ret
	four ENDP
;===========================
;===========================
	five PROC
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		sub mid, 4
		
		
		mov al, '|'
		mGotoxy l, 4
		INVOKE writechar
		mGotoxy l, 5
		INVOKE writechar
		mGotoxy l, 6
		INVOKE writechar
		
		mov al, '='
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		sub mid, 4
		
		
		mov al, '|'
		mGotoxy r, 7
		INVOKE writechar
		mGotoxy r, 8
		INVOKE writechar
		mGotoxy r, 9
		INVOKE writechar
		
		mov al, '='
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		ret
	five ENDP
;==========================
;==========================
	six PROC
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		sub mid, 4
		
		
		mov al, '|'
		mGotoxy l, 4
		INVOKE writechar
		mGotoxy l, 5
		INVOKE writechar
		mGotoxy l, 6
		INVOKE writechar
		mGotoxy l, 7
		INVOKE writechar
		mGotoxy l, 8
		INVOKE writechar
		mGotoxy l, 9
		INVOKE writechar
		
		mov al, '='
		mGotoxy mid, 6
		add mid, 2
		INVOKE writechar
		mGotoxy mid, 6
		add mid, 2
		INVOKE writechar
		mGotoxy mid, 6
		INVOKE writechar
		sub mid, 4
		
		
		mov al, '='
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 10
		INVOKE writechar
		
		mov al, '|'
		mGotoxy r, 7
		INVOKE writechar
		mGotoxy r, 8
		INVOKE writechar
		mGotoxy r, 9
		INVOKE writechar
		ret
	six ENDP
;==========================
;==========================
	seven PROC
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		
		
		mov al, '|'
		mGotoxy r, 4
		INVOKE writechar
		
		mGotoxy r, 5
		INVOKE writechar
		mGotoxy r, 6
		INVOKE writechar
		mGotoxy r, 7
		INVOKE writechar
		mGotoxy r, 8
		INVOKE writechar
		mGotoxy r, 9
		INVOKE writechar
		
		ret
	seven ENDP
;==========================
;==========================
	eight PROC
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		sub mid, 4

		mov al, '|'
		mGotoxy l, 4
		INVOKE writeChar
		mGotoxy l, 5
		INVOKE writeChar
		mGotoxy l, 6
		INVOKE writeChar
		mGotoxy l, 7
		INVOKE writeChar
		mGotoxy l, 8
		INVOKE writeChar
		mGotoxy l, 9
		INVOKE writeChar

		mov al, '='
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		sub mid, 4
		
		
		mov al, '|'
		mGotoxy r,4
		INVOKE writechar
		mGotoxy r,5
		INVOKE writechar
		mGotoxy r,6
		INVOKE writechar
		mGotoxy r,7
		INVOKE writechar
		mGotoxy r,8
		INVOKE writechar
		mGotoxy r,9
		INVOKE writechar

		mov al, '='
		mGotoxy mid ,10
		INVOKE writechar
		add mid, 2
		mGotoxy mid ,10
		INVOKE writechar
		add mid, 2
		mGotoxy mid ,10
		INVOKE writechar		
		ret
	eight ENDP
;==========================
;==========================
	nine PROC
		mov al, '='
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 3
		INVOKE writechar
		sub mid, 4

		mov al, '|'
		mGotoxy l, 4
		INVOKE writeChar
		mGotoxy l, 5
		INVOKE writeChar
		mGotoxy l, 6
		INVOKE writeChar

		mov al, '='
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		add mid, 2
		mGotoxy mid, 6
		INVOKE writechar
		sub mid, 4
		
		mov al, '|'
		mGotoxy r,7
		INVOKE writechar
		mGotoxy r,8
		INVOKE writechar
		mGotoxy r,9
		INVOKE writechar
		mGotoxy r,6
		INVOKE writechar
		mGotoxy r,5
		INVOKE writechar
		mGotoxy r,4
		INVOKE writechar

		mov al, '='
		mGotoxy mid ,10
		INVOKE writechar
		add mid, 2
		mGotoxy mid ,10
		INVOKE writechar
		add mid, 2
		mGotoxy mid ,10
		INVOKE writechar

		
		ret
	nine ENDP
