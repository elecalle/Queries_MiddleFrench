//   acc.dat_top

// does heaviness influence topicalization? 
// Here we look at the lenght of: 
// - ACCUSATIVE object in topicalization structures (ACC appearing in the LP and resumed by an accusative clitic IP-internally)
// - DATIVE object in topicalization structures (DTV appearing in the LP and resumed by a dative clitic IP-internally)

// features: 
// - only looking at ditransitives
// - ALL TYPES OF SBJ INCLUDED (e.g. null subjects also included)
// - both matrix and embedded clauses included
// at the moment not controlling for idomslast


node: IP-MAT*|IP-SUB*
nodes_only: true
remove_nodes: true

coding_query:

1: {
       DtvTOP: ((IP-MAT*|IP-SUB* iDoms NP-LFD*)						// Condition 4
       	  AND (IP-MAT*|IP-SUB* iDoms NP-SBJ*)
                AND (IP-MAT*|IP-SUB* iDoms NP-ACC*)
                AND (IP-MAT*|IP-SUB* iDoms AJ|EJ|LJ|MDJ|VJ)
                AND (IP-MAT*|IP-SUB* iDoms CL-NP-DTV-RSP*)
                AND (NP-LFD* precedes AJ|EJ|LJ|MDJ|VJ))
       ACCTOP: ((IP-MAT*|IP-SUB* iDoms NP-LFD*)						// Condition 3
       	  AND (IP-MAT*|IP-SUB* iDoms NP-SBJ*)
                AND (IP-MAT*|IP-SUB* iDoms NP-DTV
                AND (IP-MAT*|IP-SUB* iDoms AJ|EJ|LJ|MDJ|VJ)
                AND (IP-MAT*|IP-SUB* iDoms CL-NP-ACC-RSP*)
                AND (NP-LFD* precedes AJ|EJ|LJ|MDJ|VJ))                )
       xxx: ELSE
}

2: {
	\1: (NP-LFD* domswords 1)
	\2: (NP-LFD* domswords 2)
	\3: (NP-LFD* domswords 3)
	\4: (NP-LFD* domswords 4)
	\5: (NP-LFD* domswords 5)
	\6: (NP-LFD* domswords 6)
	\7: (NP-LFD* domswords 7)
	\8: (NP-LFD* domswords 8)
	\9: (NP-LFD* domswords 9)
	\10: (NP-LFD* domswords 10)
	\11: (NP-LFD* domswords 11)
	\12: (NP-LFD* domswords 12)
	\13: (NP-LFD* domswords 13)
	\14: (NP-LFD* domswords 14)
	\15: (NP-LFD* domswords 15)
	\16: (NP-LFD* domswords 16)
	\17: (NP-LFD* domswords 17)
	\18: (NP-LFD* domswords 18)
	\19: (NP-LFD* domswords 19)
	\20: (NP-LFD* domswords 20)
	\21: (NP-LFD* domswords 21)
	\22: (NP-LFD* domswords 22)
	\23: (NP-LFD* domswords 23)
	\24: (NP-LFD* domswords 24)
	\25: (NP-LFD* domswords 25)
	\26: (NP-LFD* domswords 26)
	\27: (NP-LFD* domswords 27)
	\28: (NP-LFD* domswords 28)
	\29: (NP-LFD* domswords 29)
	\30: (NP-LFD* domswords 30)
	\31: (NP-LFD* domswords 31)
	\32: (NP-LFD* domswords 32)
	\33: (NP-LFD* domswords 33)
	\34: (NP-LFD* domswords 34)
	\35: (NP-LFD* domswords 35)
	\36: (NP-LFD* domswords 36)
	\37: (NP-LFD* domswords 37)
	\38: (NP-LFD* domswords 38)
	\39: (NP-LFD* domswords 39)
	\40: (NP-LFD* domswords 40)
	\41: (NP-LFD* domswords 41)
	\42: (NP-LFD* domswords 42)
	\43: (NP-LFD* domswords 43)
	\44: (NP-LFD* domswords 44)
	\45: (NP-LFD* domswords 45)
	\46: (NP-LFD* domswords 46)
	\47: (NP-LFD* domswords 47)
	\48: (NP-LFD* domswords 48)
	\49: (NP-LFD* domswords 49)
	\50: (NP-LFD* domswords 50)
	\51: (NP-LFD* domswords 51)
	\52: (NP-LFD* domswords 52)
	\53: (NP-LFD* domswords 53)
	\54: (NP-LFD* domswords 54)
	\55: (NP-LFD* domswords 55)
	\56: (NP-LFD* domswords 56)
	\57: (NP-LFD* domswords 57)
	\58: (NP-LFD* domswords 58)
	\59: (NP-LFD* domswords 59)
	\60: (NP-LFD* domswords 60)
	\61: (NP-LFD* domswords 61)
	\62: (NP-LFD* domswords 62)
	\63: (NP-LFD* domswords 63)
	\64: (NP-LFD* domswords 64)
	\65: (NP-LFD* domswords 65)
	\66: (NP-LFD* domswords 66)
	\67: (NP-LFD* domswords 67)
	\68: (NP-LFD* domswords 68)
	\69: (NP-LFD* domswords 69)
	\70: (NP-LFD* domswords 70)
	\71: (NP-LFD* domswords 71)
	\72: (NP-LFD* domswords 72)
	\73: (NP-LFD* domswords 73)
	\74: (NP-LFD* domswords 74)
	\75: (NP-LFD* domswords 75)
	\76: (NP-LFD* domswords 76)
	\77: (NP-LFD* domswords 77)
	\78: (NP-LFD* domswords 78)
	\79: (NP-LFD* domswords 79)
	\80: (NP-LFD* domswords 80)
	\81: (NP-LFD* domswords 81)
	\82: (NP-LFD* domswords 82)
	\83: (NP-LFD* domswords 83)
	\84: (NP-LFD* domswords 84)
	\85: (NP-LFD* domswords 85)
	\86: (NP-LFD* domswords 86)
	\87: (NP-LFD* domswords 87)
	\88: (NP-LFD* domswords 88)
	\89: (NP-LFD* domswords 89)
	\90: (NP-LFD* domswords 90)
	\91: (NP-LFD* domswords 91)
	\92: (NP-LFD* domswords 92)
	\93: (NP-LFD* domswords 93)
	\94: (NP-LFD* domswords 94)
	\95: (NP-LFD* domswords 95)
	\96: (NP-LFD* domswords 96)
	\97: (NP-LFD* domswords 97)
	\98: (NP-LFD* domswords 98)
	\99: (NP-LFD* domswords 99)
	\100: (NP-LFD* domswords 100)
}


// century

3: {
	\0980: (*0980* inID)
	\1100: (*1100* inID)
	\1120: (*1120* inID)
	\1150: (*1150* inID)
	\1170: (*1170* inID)
	\1190: (*1190* inID)
	\1205: (*1205* inID)
	\1210: (*1210* inID)
	\1212: (*1212* inID)
	\1225: (*1225* inID)
	\1279: (*127\X* inID)
	\1309: (*1309* inID)
	\1373: (*1373* inID)
	\10\XX:(*10\XX* inID)
	\116\X: (*116\X* inID)
	\122\X: (*122\X* inID)
	\125\X: (*125\X* inID)
	\127\X: (*127\X* inID)
	\1279: (*1279* inID)
	\133\X: (*133\X* inID)
	\137\X: (*137\X* inID)
	\145\X: (*145\X* inID)
	\1450: (*1450* inID)
	\1498: (*1498* inID)
	\1523: (*1523* inID)
	\1527: (*1527* inID)
	\158\X: (*158\x* inID)
	xxxyear: ELSE
}

4: {
	lexS: (NP-SBJ* iDoms NC*|D*|NPR*)
	nullS: (NP-SBJ* iDoms \*pro\*)
	pronS: (NP-SBJ* iDoms PRO*)
	quantS: (NP-SBJ* iDoms Q)
	arbS: (NP-SBJ* iDoms \*arb\*)
	conS: (NP-SBJ* iDoms \*con\*)
	TRaS: (NP-SBJ* iDoms \*T\*)
	xxxSUBJ: ELSE
}