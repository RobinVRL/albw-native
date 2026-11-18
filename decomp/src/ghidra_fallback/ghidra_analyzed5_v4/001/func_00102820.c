#include "ghidra_types.h"

extern int func_001048D8(undefined4 *param_1);
extern int func_0010A98C(uint param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_00102930;
extern uint *DAT_00102934;
extern int *DAT_00102938;

// USA 00102820 <- EU 00102820 (Ghidra, non-matching)
// GLOBAL DAT_00102930 int *
// GLOBAL DAT_00102934 uint *
// GLOBAL DAT_00102938 int *

void func_00102820(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 ((int *)(albw_frame + 0x8))
  piVar1 = DAT_00102930;
  do {
    pcVar6 = (code *)0xffffffff;
    software_interrupt(0x24);
    if ((int)*DAT_00102934 < 0) {
      func_0010A98C(*DAT_00102934);
    }
    uVar3 = func_001048D8(local_8);
    piVar2 = DAT_00102938;
    uVar5 = uVar3 & 0x80000000;
    if (-1 < (int)uVar5) {
      func_0010C0C0(DAT_00102938);
      pcVar6 = (code *)*piVar1;
      if (pcVar6 == (code *)0x0) {
        pcVar4 = (code *)0x0;
LAB_001028e0:
        if (pcVar4 != (code *)0x0) {
          pcVar6 = (code *)**(undefined4 **)pcVar4;
          (*pcVar6)();
          func_0010C160(piVar2);
          uVar3 = 0;
          uVar5 = extraout_r1;
          goto LAB_0010291c;
        }
      }
      else {
        pcVar4 = pcVar6 + -4;
        while (pcVar4 != (code *)0x0) {
          if (*(int *)(pcVar4 + 0xc) == local_8[0]) goto LAB_001028e0;
          pcVar7 = pcVar4;
          if (pcVar4 != (code *)0x0) {
            pcVar7 = pcVar4 + 4;
          }
          if (pcVar6 == (code *)0x0) {
            pcVar8 = (code *)0x0;
          }
          else {
            pcVar8 = *(code **)pcVar6;
            if (pcVar8 != (code *)0x0) {
              pcVar8 = pcVar8 + -4;
            }
          }
          if (pcVar8 == pcVar4) {
            pcVar4 = (code *)0x0;
            goto LAB_001028e0;
          }
          pcVar4 = (code *)0x0;
          if (*(int *)(pcVar7 + 4) == 0) goto LAB_001028e0;
          pcVar4 = (code *)(*(int *)(pcVar7 + 4) + -4);
        }
      }
      func_0010C160(piVar2);
      uVar3 = 0;
      uVar5 = extraout_r1_00;
    }
LAB_0010291c:
                    /* WARNING: Subroutine does not return */
    if (-((int)uVar3 >> 0x1f) != 0) {
      func_0010C1B8(-((int)uVar3 >> 0x1f),uVar5,pcVar6);
    }
  } while( true );
}

