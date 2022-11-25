INCLUDE Irvine16.inc
INCLUDE Macros.inc


;=========================
;=========================

;        Data section

;=========================
;=========================
.data

	setHour BYTE "Set Hour : ", 0
	setMinute BYTE "Set Minute : ", 0
	setMode BYTE "0 for am, 1 for pm : ", 0
	reset BYTE "Press R to reset : ", 0
	mode1 BYTE "AM", 0
	mode2 BYTE "PM", 0
	invalidH BYTE "Invalid Hour!! ",0
	invalidM BYTE "Invalid Minute!!",0

	maxCol        EQU       90
	maxRow        EQU       15
	wallTop       EQU       "==========================================================================================="
	wallLeft      EQU       '|'

	
	flg BYTE 1
	
	h2 BYTE 0
	h1 BYTE 0
	m2 BYTE 0
	m1 BYTE 0
	s2 BYTE 0
	s1 BYTE 0
	
	l BYTE ?
	r BYTE ?
	mid BYTE ?
;===========================
;===========================

;         Code section

;===========================
;===========================

.code
INCLUDE Digits.inc
INCLUDE Border.inc
INCLUDE SetTime.inc
INCLUDE setAmPm.inc
INCLUDE Print.inc
INCLUDE timeUpdat.inc
INCLUDE CallFunction.inc

;===========================
;===========================

;         Main Function

;===========================
;===========================

main PROC
	;mov ax, @data
	;mov ds, ax
	;call DumpRegs
	
	INVOKE call_fun
	exit
main ENDP

END main