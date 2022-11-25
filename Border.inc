;===========================
;===========================

;        Border Function

;===========================
;===========================

Border PROC
    INVOKE clrscr
    mWrite wallTop
    mGotoxy 0, maxRow    
    mWrite wallTop
        
    mov cl, maxRow 
    .while cl
        mGotoxy 0, cl   
        mWrite wallLeft
        mGotoxy maxCol, cl
        mWrite wallLeft
        DEC cl
    .endw

    ret
Border ENDP
