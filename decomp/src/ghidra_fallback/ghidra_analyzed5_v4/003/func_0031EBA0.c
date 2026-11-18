#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0014FF9C(int param_1,uint param_2);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_004A3788(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0031ed88;
extern uint *DAT_0031ed8c;
extern undefined4 *DAT_0031ed90;
extern undefined4 DAT_0031ed94;
extern float DAT_0031ed98;
extern float DAT_0031ed9c;

// USA 0031EBA0 <- EU 0031EB7C (Ghidra, non-matching)
// GLOBAL DAT_0031ed88 int *
// GLOBAL DAT_0031ed8c uint *
// GLOBAL DAT_0031ed90 undefined4 *
// GLOBAL DAT_0031ed94 undefined4
// GLOBAL DAT_0031ed98 float
// GLOBAL DAT_0031ed9c float

undefined4 func_0031EBA0(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define fStack_1c (*(float *)(albw_frame + 0x24))
  #define fStack_18 (*(float *)(albw_frame + 0x28))
  uint uVar5;
  
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_0031ed88 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (((*DAT_0031ed8c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0031ed8c), iVar4 != 0)) {
    *DAT_0031ed90 = DAT_0031ed94;
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,DAT_0031ed90);
  }
  if ((*(int *)(param_2 + 0x28) == *(int *)(*(int *)(param_1 + 0x50) + 0x338)) &&
     ((*(uint *)(param_2 + 0x24) & 0x800000) != 0)) {
    return 0;
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + 0x42);
  if ((sVar1 == 0x2a || sVar1 == 0x2b) || (sVar1 == 0x2c || sVar1 == 0x2d)) {
    func_00115C70(&local_20,(float *)(param_2 + 0x3c),*(float **)(param_1 + 0x30));
    local_2c = local_20;
    local_28 = fStack_1c;
    local_24 = fStack_18;
    func_00115DC8(&local_2c);
    func_004D80A4(&local_3c,**(uint **)(param_1 + 0x3c),DAT_0031ed98);
    local_38 = DAT_0031ed9c;
    if (local_2c * local_3c + local_28 * DAT_0031ed9c + local_24 * local_34 < DAT_0031ed9c) {
      return 0;
    }
  }
  *(char *)(*(int *)(param_1 + 0x28) + 0x393) = (char)((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  uVar5 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
  if (uVar5 != 0 && uVar5 != 4) {
    func_0014FF9C(param_2,*(uint *)(param_1 + 0x11c));
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + 0x42);
  if (sVar1 == 0x2a) {
    *(undefined1 *)(param_1 + 0x156) = 1;
    uVar5 = *(uint *)(param_2 + 0x24) & 1;
    bVar2 = (byte)uVar5;
    if (uVar5 != 0) {
      bVar2 = 1;
    }
    *(byte *)(param_1 + 0x156) = bVar2 ^ 1;
  }
  else if (sVar1 == 0x2b || sVar1 == 0x2c) {
    bVar6 = (*(uint *)(param_2 + 0x24) & 1) == 0;
    *(bool *)(param_1 + 0x156) = bVar6;
    if ((*(uint *)(param_2 + 0x24) & 4) == 0) {
      if (bVar6) {
        func_004A3788((int *)(param_1 + 0x19c));
        func_004A3788((int *)(param_1 + 0x1a4));
      }
      func_002D55D0(param_1,0x2d);
      return 1;
    }
  }
  return 1;
}

