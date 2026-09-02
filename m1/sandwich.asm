; Memory Map:
; r0 = Plate, r1 = BreadBag, r2 = JarLid, r3 = Knife, r4 = PB

EXTR r1, 2      ; Pop 2 bread slices directly to r0 (Plate)
TORQ r2, -6Pi   ; Unscrew jar cap completely
FETCH r3.HND    ; Grip knife by designated Handle register
EXTR r4, 30g    ; Plunge blade and withdraw 30 grams of PB
DEPO r0.B1.TOP  ; Smear payload across Bread 1 upper planar face
MATE r0.B2, r0.B1 ; Invert Bread 2 onto Bread 1 PB plane
HALT            ; Terminate
