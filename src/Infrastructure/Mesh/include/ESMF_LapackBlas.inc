!
! Macros to map LAPACK and BLAS external names to ESMF-specific names in order
! to avoid naming collisions with external LAPACK libraries.

! LAPACK
#define DBDSQR ESMF_DBDSQR
#define DGEBD2 ESMF_DGEBD2
#define DGEBRD ESMF_DGEBRD
#define DGELQ2 ESMF_DGELQ2
#define DGELQF ESMF_DGELQF
#define DGELSD ESMF_DGELSD
#define DGELSY ESMF_DGELSY
#define DGEQP3 ESMF_DGEQP3
#define DGEQR2 ESMF_DGEQR2
#define DGEQRF ESMF_DGEQRF
#define DISNAN ESMF_DISNAN
#define DLABAD ESMF_DLABAD
#define DLABRD ESMF_DLABRD
#define DLACPY ESMF_DLACPY
#define DLAED6 ESMF_DLAED6
#define DLAIC1 ESMF_DLAIC1
#define DLAISNAN ESMF_DLAISNAN
#define DLALS0 ESMF_DLALS0
#define DLALSA ESMF_DLALSA
#define DLALSD ESMF_DLALSD
#define DLAMCH ESMF_DLAMCH
#define DLAMRG ESMF_DLAMRG
#define DLANGE ESMF_DLANGE
#define DLANST ESMF_DLANST
#define DLAPY2 ESMF_DLAPY2
#define DLAQP2 ESMF_DLAQP2
#define DLAQPS ESMF_DLAQPS
#define DLARFB ESMF_DLARFB
#define DLARF ESMF_DLARF
#define DLARFG ESMF_DLARFG
#define DLARFT ESMF_DLARFT
#define DLARTG ESMF_DLARTG
#define DLARZB ESMF_DLARZB
#define DLARZ ESMF_DLARZ
#define DLARZT ESMF_DLARZT
#define DLAS2 ESMF_DLAS2
#define DLASCL ESMF_DLASCL
#define DLASD4 ESMF_DLASD4
#define DLASD5 ESMF_DLASD5
#define DLASD6 ESMF_DLASD6
#define DLASD7 ESMF_DLASD7
#define DLASD8 ESMF_DLASD8
#define DLASDA ESMF_DLASDA
#define DLASDQ ESMF_DLASDQ
#define DLASDT ESMF_DLASDT
#define DLASET ESMF_DLASET
#define DLASQ1 ESMF_DLASQ1
#define DLASQ2 ESMF_DLASQ2
#define DLASQ3 ESMF_DLASQ3
#define DLASQ4 ESMF_DLASQ4
#define DLASQ5 ESMF_DLASQ5
#define DLASQ6 ESMF_DLASQ6
#define DLASR ESMF_DLASR
#define DLASRT ESMF_DLASRT
#define DLASSQ ESMF_DLASSQ
#define DLASV2 ESMF_DLASV2
#define DLATRZ ESMF_DLATRZ
#define DORM2R ESMF_DORM2R
#define DORMBR ESMF_DORMBR
#define DORML2 ESMF_DORML2
#define DORMLQ ESMF_DORMLQ
#define DORMQR ESMF_DORMQR
#define DORMR3 ESMF_DORMR3
#define DORMRZ ESMF_DORMRZ
#define DTZRZF ESMF_DTZRZF
#define IEEECK ESMF_IEEECK
#define ILADLC ESMF_ILADLC
#define ILADLR ESMF_ILADLR
#define ILAENV ESMF_ILAENV
#define IPARMQ ESMF_IPARMQ
#define LSAME ESMF_LSAME
#define XERBLA ESMF_XERBLA

! BLAS

#define DAXPY ESMF_DAXPY
#define DCOPY ESMF_DCOPY
#define DDOT ESMF_DDOT
#define DGEMM ESMF_DGEMM
#define DGEMV ESMF_DGEMV
#define DGER ESMF_DGER
#define DNRM2 ESMF_DNRM2
#define DROT ESMF_DROT
#define DSCAL ESMF_DSCAL
#define DSWAP ESMF_DSWAP
#define DTRMM ESMF_DTRMM
#define DTRMV ESMF_DTRMV
#define DTRSM ESMF_DTRSM
#define IDAMAX ESMF_IDAMAX
