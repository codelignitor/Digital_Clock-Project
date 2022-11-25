;===========================
;===========================

;        Set AM/PM Function

;===========================
;===========================

	am_pm PROC
		.if flg==0
		mGotoxy 70, 10
		mWriteStr offset mode1

		.else
		mGotoxy 70, 10
		mwritestr offset mode2
		.endif
		ret
	am_pm ENDP
