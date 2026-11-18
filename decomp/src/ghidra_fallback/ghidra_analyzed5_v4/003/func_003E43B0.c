#include "ghidra_types.h"

extern int func_001008CC(short *param_1,short *param_2,int param_3);
extern int func_003E46C8(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5, uint param_6);
extern int DAT_003e4444;
extern undefined4 *DAT_003e4448;
extern undefined4 *DAT_003e444c;

// USA 003E43B0 <- EU 003E4390 (Ghidra, non-matching)
// GLOBAL DAT_003e4444 int
// GLOBAL DAT_003e4448 undefined4 *
// GLOBAL DAT_003e444c undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 func_003E43B0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  puVar2 = DAT_003e4448;
  iVar4 = 0;
  if (*(int *)(DAT_003e4444 + 0x14) != 0) {
    objStack_28[0] = 0;
    if ((code *)*DAT_003e4448 != (code *)0x0) {
      uVar5 = (*(code *)*DAT_003e4448)
                        (objStack_28,*(int *)(param_3 + 0x144) + *(int *)(DAT_003e4444 + 8),
                         *(undefined2 *)(param_3 + 0x148));
      iVar4 = (int)uVar5;
      psVar1 = (short *)((ulonglong)uVar5 >> 0x20);
      if (iVar4 != 0) {
        psVar1 = (short *)objStack_28[0];
      }
      if (iVar4 != 0 && psVar1 != (short *)0x0) {
        func_001008CC((short *)(param_3 + 0x150),psVar1,0x100);
        *(undefined2 *)(param_3 + 0x350) = 0;
      }
      else {
        *(undefined2 *)(param_3 + 0x150) = 0;
      }
    }
  }
  puVar3 = DAT_003e444c;
  *(int *)(param_3 + 0x14c) = iVar4;
  objStack_28[0] = puVar2[2];
  objStack_28[1] = puVar2[3];
  return func_003E46C8(param_2,param_3,param_4,*puVar3,objStack_28[0],objStack_28[1]);
}

