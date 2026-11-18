#include "ghidra_types.h"

extern int func_002FEC08(int param_1,int param_2,int param_3,float fparam_0);
extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern uint DAT_001b74b8;
extern float DAT_001b74bc;

// USA 001B7380 <- EU 001B7380 (Ghidra, non-matching)
// GLOBAL DAT_001b74b8 uint
// GLOBAL DAT_001b74bc float

undefined4 func_001B7380(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *unaff_r5;
  uint *unaff_r6;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  uint in_fpscr;
  float in_s0;
  float fVar9;
  ulonglong uVar10;
  
  uVar5 = 0;
  uVar10 = (ulonglong)DAT_001b74b8;
  *(undefined1 *)(param_1 + 0x34) = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 8);
    if (uVar5 < 6) {
      puVar1 = puVar1 + uVar5;
    }
    piVar6 = (int *)*puVar1;
    bVar8 = piVar6 != (int *)0x0;
    if (bVar8) {
      puVar1 = (undefined4 *)(uint)*(byte *)(piVar6 + 5);
    }
    if (bVar8 && puVar1 != (undefined4 *)0x0) {
      unaff_r5 = (uint *)*piVar6;
    }
    if ((bVar8 && puVar1 != (undefined4 *)0x0) && unaff_r5 != (uint *)0x0) {
      piVar7 = *(int **)(param_3 + uVar5 * 4);
      bVar8 = piVar7 != (int *)0x0;
      uVar2 = param_3;
      if (bVar8) {
        uVar2 = (uint)*(byte *)(piVar7 + 5);
      }
      if (bVar8 && uVar2 != 0) {
        unaff_r6 = (uint *)*piVar7;
      }
      if ((bVar8 && uVar2 != 0) && unaff_r6 != (uint *)0x0) {
        uVar2 = 0;
        if (0 < (int)*unaff_r5) {
          do {
            if (uVar2 < *unaff_r6) {
              iVar4 = *(int *)(unaff_r6[2] + uVar2 * 4);
            }
            else {
              iVar4 = 0;
            }
            if ((uVar2 & 0xffff) < *unaff_r5) {
              iVar3 = *(int *)(unaff_r5[2] + (uVar2 & 0xffff) * 4);
            }
            else {
              iVar3 = 0;
            }
            func_002FEC08(iVar3,iVar4,0,ALBW_AS_F32(uVar10));
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < (int)*unaff_r5);
        }
        func_0049C154((float *)(piVar6 + 6),(float *)(piVar6 + 6),(float *)(piVar7 + 6),
                              ALBW_AS_F32(uVar10));
        *(undefined1 *)(param_1 + 0x34) = 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 6);
  if (*(char *)(param_1 + 0x34) != '\0') {
    if (param_2 < 1) {
      param_2 = 1;
    }
    if (param_2 == 0) {
      in_s0 = DAT_001b74bc;
    }
    *(int *)(param_1 + 0x2c) = param_2;
    if (param_2 == 0) {
      *(float *)(param_1 + 0x30) = in_s0;
    }
    else {
      fVar9 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x30) = ALBW_AS_F32(uVar10) / fVar9;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return 0;
}

