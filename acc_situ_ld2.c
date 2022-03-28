// acc_situ_ld2


// does heaviness influence topicalization? 
// Here we look at the lenght of: 
// - ACCUSATIVE object in left-dislocation structures (ACC appearing in the LP and NOT being resumed by a accusative clitic IP-internally)
// - accusative objects in situ, followed by DAT object (neither dislocated nor topicalized)

// features: 
// - only looking at ditransitives
// - ALL TYPES OF SBJ INCLUDED (e.g. null subjects also included)
// - both matrix and embedded clauses included
// - accusative appears leftmost in the left dislocated condition
// - dative is rightmost


node: IP-MAT*|IP-SUB*
nodes_only: true
remove_nodes: true

coding_query:

1: {
       situAD: ((IP-MAT*|IP-SUB* iDoms NP-ACC*)					// condition 1
                AND (IP-MAT*|IP-SUB* idomslast NP-DTV*)
                AND (IP-MAT*|IP-SUB* iDoms AJ|EJ|LJ|MDJ|VJ)
				AND (IP-MAT*|IP-SUB* iDoms NP-SBJ*)
				AND (AJ|EJ|LJ|MDJ|VJ precedes NP-ACC*))
       AccLD: ((IP-MAT*|IP-SUB* idomsfirst NP-ACC*)					// condition 5	
                AND (IP-MAT*|IP-SUB* idomslast NP-DTV*)
				AND (IP-MAT*|IP-SUB* iDoms AJ|EJ|LJ|MDJ|VJ)
				AND (IP-MAT*|IP-SUB* iDoms NP-SBJ*))
       xxx: ELSE
}

2: {
	\1: (NP-ACC* domswords 1)
	\2: (NP-ACC* domswords 2)
	\3: (NP-ACC* domswords 3)
	\4: (NP-ACC* domswords 4)
	\5: (NP-ACC* domswords 5)
	\6: (NP-ACC* domswords 6)
	\7: (NP-ACC* domswords 7)
	\8: (NP-ACC* domswords 8)
	\9: (NP-ACC* domswords 9)
	\10: (NP-ACC* domswords 10)
	\11: (NP-ACC* domswords 11)
	\12: (NP-ACC* domswords 12)
	\13: (NP-ACC* domswords 13)
	\14: (NP-ACC* domswords 14)
	\15: (NP-ACC* domswords 15)
	\16: (NP-ACC* domswords 16)
	\17: (NP-ACC* domswords 17)
	\18: (NP-ACC* domswords 18)
	\19: (NP-ACC* domswords 19)
	\20: (NP-ACC* domswords 20)
	\21: (NP-ACC* domswords 21)
	\22: (NP-ACC* domswords 22)
	\23: (NP-ACC* domswords 23)
	\24: (NP-ACC* domswords 24)
	\25: (NP-ACC* domswords 25)
	\26: (NP-ACC* domswords 26)
	\27: (NP-ACC* domswords 27)
	\28: (NP-ACC* domswords 28)
	\29: (NP-ACC* domswords 29)
	\30: (NP-ACC* domswords 30)
	\31: (NP-ACC* domswords 31)
	\32: (NP-ACC* domswords 32)
	\33: (NP-ACC* domswords 33)
	\34: (NP-ACC* domswords 34)
	\35: (NP-ACC* domswords 35)
	\36: (NP-ACC* domswords 36)
	\37: (NP-ACC* domswords 37)
	\38: (NP-ACC* domswords 38)
	\39: (NP-ACC* domswords 39)
	\40: (NP-ACC* domswords 40)
	\41: (NP-ACC* domswords 41)
	\42: (NP-ACC* domswords 42)
	\43: (NP-ACC* domswords 43)
	\44: (NP-ACC* domswords 44)
	\45: (NP-ACC* domswords 45)
	\46: (NP-ACC* domswords 46)
	\47: (NP-ACC* domswords 47)
	\48: (NP-ACC* domswords 48)
	\49: (NP-ACC* domswords 49)
	\50: (NP-ACC* domswords 50)
	\51: (NP-ACC* domswords 51)
	\52: (NP-ACC* domswords 52)
	\53: (NP-ACC* domswords 53)
	\54: (NP-ACC* domswords 54)
	\55: (NP-ACC* domswords 55)
	\56: (NP-ACC* domswords 56)
	\57: (NP-ACC* domswords 57)
	\58: (NP-ACC* domswords 58)
	\59: (NP-ACC* domswords 59)
	\60: (NP-ACC* domswords 60)
	\61: (NP-ACC* domswords 61)
	\62: (NP-ACC* domswords 62)
	\63: (NP-ACC* domswords 63)
	\64: (NP-ACC* domswords 64)
	\65: (NP-ACC* domswords 65)
	\66: (NP-ACC* domswords 66)
	\67: (NP-ACC* domswords 67)
	\68: (NP-ACC* domswords 68)
	\69: (NP-ACC* domswords 69)
	\70: (NP-ACC* domswords 70)
	\71: (NP-ACC* domswords 71)
	\72: (NP-ACC* domswords 72)
	\73: (NP-ACC* domswords 73)
	\74: (NP-ACC* domswords 74)
	\75: (NP-ACC* domswords 75)
	\76: (NP-ACC* domswords 76)
	\77: (NP-ACC* domswords 77)
	\78: (NP-ACC* domswords 78)
	\79: (NP-ACC* domswords 79)
	\80: (NP-ACC* domswords 80)
	\81: (NP-ACC* domswords 81)
	\82: (NP-ACC* domswords 82)
	\83: (NP-ACC* domswords 83)
	\84: (NP-ACC* domswords 84)
	\85: (NP-ACC* domswords 85)
	\86: (NP-ACC* domswords 86)
	\87: (NP-ACC* domswords 87)
	\88: (NP-ACC* domswords 88)
	\89: (NP-ACC* domswords 89)
	\90: (NP-ACC* domswords 90)
	\91: (NP-ACC* domswords 91)
	\92: (NP-ACC* domswords 92)
	\93: (NP-ACC* domswords 93)
	\94: (NP-ACC* domswords 94)
	\95: (NP-ACC* domswords 95)
	\96: (NP-ACC* domswords 96)
	\97: (NP-ACC* domswords 97)
	\98: (NP-ACC* domswords 98)
	\99: (NP-ACC* domswords 99)
	\100: (NP-ACC* domswords 100)
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