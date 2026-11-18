#include "ghidra_types.h"

extern int func_0040D65C(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int DAT_0040eca4;

// USA 0040EC00 <- EU 0040EBE0 (Ghidra, non-matching)
// GLOBAL DAT_0040eca4 int

void func_0040EC00(int *param_1,undefined4 param_2,float *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  func_0040D65C(param_1,param_2,param_3,param_4);
  piVar1 = (int *)func_00412BB4();
  uVar3 = 0;
  uVar4 = (uint)*(ushort *)(DAT_0040eca4 + (int)param_1);
  do {
    if ((uVar4 & 1) != 0) {
      puVar2 = (undefined4 *)func_00412A3C(piVar1,7);
      puVar2[3] = piVar1[0x61];
      *(undefined1 *)(puVar2 + 1) = 0x2a;
      puVar2[4] = param_1 + 0x45;
      puVar2[5] = 1 << (uVar3 & 0xff);
      if (param_1[uVar3 * 4 + 0xa7d] < param_1[uVar3 * 4 + 0xa7c]) {
        fVar6 = (float)VectorSignedToFloat(param_1[uVar3 * 4 + 0xa7d],(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = (float)VectorSignedToFloat(param_1[uVar3 * 4 + 0xa7c],(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = ((ALBW_AS_F32(param_1[uVar3 * 4 + 0xa7b]) - ALBW_AS_F32(param_1[uVar3 * 4 + 0xa7a])) * fVar6) /
                fVar5 + ALBW_AS_F32(param_1[uVar3 * 4 + 0xa7a]);
      }
      else {
        fVar5 = ALBW_AS_F32(param_1[uVar3 * 4 + 0xa7b]);
      }
      puVar2[6] = ALBW_AS_U32(fVar5);
      func_00412C68((int)piVar1,puVar2);
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 >> 1;
  } while (uVar3 < 4);
  return;
}

