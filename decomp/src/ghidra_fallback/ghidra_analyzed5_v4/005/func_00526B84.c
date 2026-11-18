#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00653DA4(int *param_1,int *param_2,int *param_3,undefined1 param_4,uint param_5, undefined2 param_6);
extern int *DAT_00526c5c;
extern undefined4 *DAT_00526c60;
extern int DAT_00526c64;
extern int DAT_00526c68;

// USA 00526B84 <- EU 00526B5C (Ghidra, non-matching)
// GLOBAL DAT_00526c5c int *
// GLOBAL DAT_00526c60 undefined4 *
// GLOBAL DAT_00526c64 int
// GLOBAL DAT_00526c68 int

undefined4 func_00526B84(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  puVar1 = DAT_00526c60;
  iVar5 = *DAT_00526c5c;
  if (iVar5 != 0) {
    puVar3 = (undefined4 *)func_005841A8(iVar5,*DAT_00526c60,*(int **)(DAT_00526c64 + iVar5));
    iVar2 = DAT_00526c68;
    if (*(undefined4 **)(iVar5 + 0x3dbc8) != puVar3) {
      do {
        piVar4 = (int *)*puVar3;
        if ((piVar4 != (int *)0x0) &&
           (fVar6 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(piVar4[0xf4]),
           fVar8 = *(float *)(param_1 + 0x3d4) - ALBW_AS_F32(piVar4[0xf5]),
           fVar7 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(piVar4[0xf6]),
           (int)ALBW_AS_U32((fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7)) < iVar2)) {
          if (param_2 != 0) {
            local_20 = *(int *)(param_1 + 0x2cc);
            func_00653DA4(piVar4,&local_20,(int *)(param_1 + 0x3d0),*(undefined1 *)(param_1 + 0x4ca)
                          ,(int)*(short *)(param_1 + 0x30),0);
          }
          return 1;
        }
        puVar3 = (undefined4 *)func_005841A8(iVar5,*puVar1,puVar3 + 1);
      } while (*(undefined4 **)(iVar5 + 0x3dbc8) != puVar3);
    }
  }
  return 0;
}

