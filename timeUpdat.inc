;===========================
;===========================
;	following are updating procedures
;===========================
;===========================
	
	incH2 PROC
		inc h2
		.if h2>1
		mov h2, 0
		.endif
		ret
	incH2 ENDP

;===========================

incH1 PROC
		inc h1
		.if h2==1 && h1>2 && flg==0
		mov h1, 1
		mov h2, 0
		mov flg, 1
		.elseif h2==1 && h1>2 && flg==1
		mov h1, 1
		mov h2, 0
		mov flg, 0
		.elseif h2==0 && h1>9
		mov h1, 0
		INVOKE incH2
		.endif
		ret
	incH1 ENDP
;============================
incM2 PROC
		inc m2
		.if m2>5
		mov m2, 0
		INVOKE incH1
		.endif
	ret
	incM2 ENDP
;===========================

	incM1 PROC
		inc m1
		.if m1>9
		mov m1, 0
		INVOKE incM2
		.endif
		ret
	incM1 ENDP
;===========================

incS2 PROC
		inc s2
		.if s2>5
		mov s2, 0
		INVOKE incM1
		.endif
		ret
	incs2 ENDP
;===========================

	incS1 PROC
		inc s1
		.if s1>9
		mov s1, 0
		INVOKE incS2
		.endif
		ret
	incS1 ENDP