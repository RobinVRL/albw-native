#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_002E1B70(int *param_1);
extern int func_00588FD4(int param_1,float *param_2);
extern int *DAT_0030a33c;
extern int DAT_0030a340;
extern float DAT_0030a344;
extern undefined4 DAT_0030a348;

// USA 0030A200 <- EU 0030A1DC (Ghidra, non-matching)
// GLOBAL DAT_0030a33c int *
// GLOBAL DAT_0030a340 int
// GLOBAL DAT_0030a344 float
// GLOBAL DAT_0030a348 undefined4

void func_0030A200(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  piVar1 = DAT_0030a33c;
  iVar2 = *DAT_0030a33c;
  if (iVar2 != 0) {
    unaff_r7 = *(int *)(iVar2 + 0x18);
  }
  if (iVar2 != 0 && unaff_r7 != 0) {
    if (*param_4 != 0) {
      func_002E1B70(param_4);
    }
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    *(undefined4 *)(param_1 + 0x38) = *param_2;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    if (param_3 == 0) {
      *(undefined2 *)(param_1 + 0x70) = 10;
      func_00588FD4(*piVar1,(float *)(param_1 + 0x44));
    }
    else {
      puVar3 = (undefined4 *)(DAT_0030a340 + param_3 * 0x2c);
      *(undefined4 *)(param_1 + 0x44) = *puVar3;
      *(undefined4 *)(param_1 + 0x48) = puVar3[1];
      *(undefined4 *)(param_1 + 0x4c) = puVar3[2];
      *(undefined4 *)(param_1 + 0x50) = puVar3[3];
      uVar4 = puVar3[5];
      uVar5 = puVar3[6];
      *(undefined4 *)(param_1 + 0x54) = puVar3[4];
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      *(undefined4 *)(param_1 + 0x60) = puVar3[7];
      *(undefined4 *)(param_1 + 100) = puVar3[8];
      *(undefined4 *)(param_1 + 0x68) = puVar3[9];
      *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(puVar3 + 10);
      *(undefined2 *)(param_1 + 0x6e) = *(undefined2 *)((int)puVar3 + 0x2a);
      *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_1 + 0x6c);
    }
    *(undefined2 *)((int)param_4 + 6) = *(undefined2 *)(param_1 + 0x70);
    uStack_28 = *(undefined4 *)(param_1 + 0x3c);
    local_2c = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x74);
    local_24 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x78);
    local_38 = DAT_0030a344;
    uStack_34 = DAT_0030a348;
    local_30 = DAT_0030a344;
    func_00120FBC(unaff_r7,param_4,&local_2c,(undefined4 *)(param_1 + 0x44),
                  (uint)*(ushort *)(param_1 + 0x70),0,&local_38);
  }
  return;
}

