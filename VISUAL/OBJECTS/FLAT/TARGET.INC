target		OBJECTHEADER <OBJ_SCALE1,16384,-1,1,COL_WHITE1,16,16,0>
		DB	064,096	;   0
		DB	096,064	;   2
		DB	064,032	;   4
		DB	032,064	;   6
		DB	092,048	;   8
		DB	036,048	;  10
		DB	080,036	;  12
		DB	048,036	;  14
		DB	036,080	;  16
		DB	092,080	;  18
		DB	080,092	;  20
		DB	048,092	;  22
		DB	088,064	;  24
		DB	064,088	;  26
		DB	040,064	;  28
		DB	064,040	;  30
		DB	076,084	;  32
		DB	084,076	;  34
		DB	084,052	;  36
		DB	076,044	;  38
		DB	052,044	;  40
		DB	044,052	;  42
		DB	044,076	;  44
		DB	052,084	;  46
		DB	064,082	;  48
		DB	082,064	;  50
		DB	064,046	;  52
		DB	046,064	;  54
		DB	054,078	;  56
		DB	050,074	;  58
		DB	074,078	;  60
		DB	078,074	;  62
		DB	078,054	;  64
		DB	074,050	;  66
		DB	054,050	;  68
		DB	050,054	;  70
		DB	064,076	;  72
		DB	064,052	;  74
		DB	076,064	;  76
		DB	052,064	;  78
		DB	072,072	;  80
		DB	056,072	;  82
		DB	056,056	;  84
		DB	072,056	;  86
		DB	064,070	;  88
		DB	070,064	;  90
		DB	064,058	;  92
		DB	058,064	;  94
		DB	068,068	;  96
		DB	068,060	;  98
		DB	060,060	; 100
		DB	060,068	; 102
		DB	062,066	; 104
		DB	066,062	; 106
		DB	066,066	; 108
		DB	062,062	; 110
		DB	-1

		DW	OFFSET	target_1

		EVEN

target_1	DW	84


target_0	LABEL	BYTE
		DB	00Ah,COL_WHITE1,00,20,18,02,08,12,04,14,10,06,16,22,00,-1	; line 1
		DB	00Ah,COL_WHITE1,26,32,34,24,36,38,30,40,42,28,44,46,26,-1	; line 2
		DB	00Ah,COL_WHITE1,48,60,62,50,64,66,52,68,70,54,58,56,48,-1	; line 3
		DB	00Ah,COL_WHITE1,72,80,76,86,74,84,78,82,72,-1	; line 4
		DB	00Ah,COL_WHITE1,88,96,90,98,92,100,94,102,88,-1	; line 5
		DB	00Ah,COL_WHITE1,110,108,-1		; line 6
		DB	00Ah,COL_WHITE1,104,106,-1		; line 7
		DB	-1

		EVEN

