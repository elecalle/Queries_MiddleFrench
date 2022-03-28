// dtv_situ_ld

// does heaviness influence topicalization? 
// Here we look at the lenght of: 
// - DATIVE object in left-dislocation structures (DTV appearing in the LP and NOT being resumed by a dative clitic IP-internally)
// - dative objects A-scrambled past an ACC object (neither dislocated nor topicalized)


// features: 
// - only looking at ditransitives
// - ALL TYPES OF SBJ INCLUDED (e.g. null subjects also included)
// - both matrix and embedded clauses included
// - accusative appears sentence-finally
// - dislocated DTV is leftmost


node: IP-MAT*|IP-SUB*
nodes_only: true
remove_nodes: true

coding_query:

1: {
       situDA: ((IP-MAT*|IP-SUB* idomslast NP-ACC*)					// condition 2
                AND (IP-MAT*|IP-SUB* iDoms NP-DTV*)
                AND (IP-MAT*|IP-SUB* iDoms AJ|EJ|LJ|MDJ|VJ)
				AND (IP-MAT*|IP-SUB* iDoms NP-SBJ*)
               	AND (AJ|EJ|LJ|MDJ|VJ Precedes NP-DTV*))
       DtvLD: ((IP-MAT*|IP-SUB* idomslast NP-ACC*)					// condition 6	
                AND (IP-MAT*|IP-SUB* idomsfirst NP-DTV*)
				AND (IP-MAT*|IP-SUB* iDoms AJ|EJ|LJ|MDJ|VJ)
				AND (IP-MAT*|IP-SUB* iDoms NP-SBJ*))
        xxx: ELSE
}

2: {
	\1: (NP-DTV* domswords 1)
	\2: (NP-DTV* domswords 2)
	\3: (NP-DTV* domswords 3)
	\4: (NP-DTV* domswords 4)
	\5: (NP-DTV* domswords 5)
	\6: (NP-DTV* domswords 6)
	\7: (NP-DTV* domswords 7)
	\8: (NP-DTV* domswords 8)
	\9: (NP-DTV* domswords 9)
	\10: (NP-DTV* domswords 10)
	\11: (NP-DTV* domswords 11)
	\12: (NP-DTV* domswords 12)
	\13: (NP-DTV* domswords 13)
	\14: (NP-DTV* domswords 14)
	\15: (NP-DTV* domswords 15)
	\16: (NP-DTV* domswords 16)
	\17: (NP-DTV* domswords 17)
	\18: (NP-DTV* domswords 18)
	\19: (NP-DTV* domswords 19)
	\20: (NP-DTV* domswords 20)
	\21: (NP-DTV* domswords 21)
	\22: (NP-DTV* domswords 22)
	\23: (NP-DTV* domswords 23)
	\24: (NP-DTV* domswords 24)
	\25: (NP-DTV* domswords 25)
	\26: (NP-DTV* domswords 26)
	\27: (NP-DTV* domswords 27)
	\28: (NP-DTV* domswords 28)
	\29: (NP-DTV* domswords 29)
	\30: (NP-DTV* domswords 30)
	\31: (NP-DTV* domswords 31)
	\32: (NP-DTV* domswords 32)
	\33: (NP-DTV* domswords 33)
	\34: (NP-DTV* domswords 34)
	\35: (NP-DTV* domswords 35)
	\36: (NP-DTV* domswords 36)
	\37: (NP-DTV* domswords 37)
	\38: (NP-DTV* domswords 38)
	\39: (NP-DTV* domswords 39)
	\40: (NP-DTV* domswords 40)
	\41: (NP-DTV* domswords 41)
	\42: (NP-DTV* domswords 42)
	\43: (NP-DTV* domswords 43)
	\44: (NP-DTV* domswords 44)
	\45: (NP-DTV* domswords 45)
	\46: (NP-DTV* domswords 46)
	\47: (NP-DTV* domswords 47)
	\48: (NP-DTV* domswords 48)
	\49: (NP-DTV* domswords 49)
	\50: (NP-DTV* domswords 50)
	\51: (NP-DTV* domswords 51)
	\52: (NP-DTV* domswords 52)
	\53: (NP-DTV* domswords 53)
	\54: (NP-DTV* domswords 54)
	\55: (NP-DTV* domswords 55)
	\56: (NP-DTV* domswords 56)
	\57: (NP-DTV* domswords 57)
	\58: (NP-DTV* domswords 58)
	\59: (NP-DTV* domswords 59)
	\60: (NP-DTV* domswords 60)
	\61: (NP-DTV* domswords 61)
	\62: (NP-DTV* domswords 62)
	\63: (NP-DTV* domswords 63)
	\64: (NP-DTV* domswords 64)
	\65: (NP-DTV* domswords 65)
	\66: (NP-DTV* domswords 66)
	\67: (NP-DTV* domswords 67)
	\68: (NP-DTV* domswords 68)
	\69: (NP-DTV* domswords 69)
	\70: (NP-DTV* domswords 70)
	\71: (NP-DTV* domswords 71)
	\72: (NP-DTV* domswords 72)
	\73: (NP-DTV* domswords 73)
	\74: (NP-DTV* domswords 74)
	\75: (NP-DTV* domswords 75)
	\76: (NP-DTV* domswords 76)
	\77: (NP-DTV* domswords 77)
	\78: (NP-DTV* domswords 78)
	\79: (NP-DTV* domswords 79)
	\80: (NP-DTV* domswords 80)
	\81: (NP-DTV* domswords 81)
	\82: (NP-DTV* domswords 82)
	\83: (NP-DTV* domswords 83)
	\84: (NP-DTV* domswords 84)
	\85: (NP-DTV* domswords 85)
	\86: (NP-DTV* domswords 86)
	\87: (NP-DTV* domswords 87)
	\88: (NP-DTV* domswords 88)
	\89: (NP-DTV* domswords 89)
	\90: (NP-DTV* domswords 90)
	\91: (NP-DTV* domswords 91)
	\92: (NP-DTV* domswords 92)
	\93: (NP-DTV* domswords 93)
	\94: (NP-DTV* domswords 94)
	\95: (NP-DTV* domswords 95)
	\96: (NP-DTV* domswords 96)
	\97: (NP-DTV* domswords 97)
	\98: (NP-DTV* domswords 98)
	\99: (NP-DTV* domswords 99)
	\100: (NP-DTV* domswords 100)
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