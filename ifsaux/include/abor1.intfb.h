INTERFACE

SUBROUTINE ABOR1(CDTEXT)
CHARACTER(LEN=*), INTENT(IN) :: CDTEXT
END SUBROUTINE ABOR1

SUBROUTINE ABOR1FL(CDFILE, KLINENUM, CDTEXT)
USE PARKIND1  ,ONLY : JPIM
CHARACTER(LEN=*), INTENT(IN) :: CDFILE,CDTEXT
INTEGER(KIND=JPIM), INTENT(IN) :: KLINENUM
END SUBROUTINE ABOR1FL

SUBROUTINE ABOR1_EXCEPTION_HANDLER() BIND(C)
END SUBROUTINE ABOR1_EXCEPTION_HANDLER

END INTERFACE
