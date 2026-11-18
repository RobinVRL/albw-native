#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002F8E54(int param_1);
extern int func_002F93C8(uint param_1,int param_2);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0065B098(int param_1,undefined4 param_2);
extern int func_0065B104(int param_1);

// USA 00674E08 <- EU 00674DE0 (Ghidra, non-matching)

undefined4 func_00674E08(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  iVar1 = func_002F8E54(param_1);
  puVar3 = (undefined4 *)(param_1 + 0x90c);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x8e0) = 4;
    if (*(int *)(param_1 + 0x97c) == 0) {
      func_0065B098((int)puVar3,2);
      func_003931EC(puVar3,2);
      return func_0065B104((int)puVar3);
    }
    iVar1 = func_002F93C8(param_1,0);
    if (iVar1 != 0) {
      func_00115C70(local_20,(float *)(param_1 + 0x8d0),(float *)(param_1 + 0x3d0));
      iVar1 = func_004904CC(local_20[0],local_18);
      *(int *)(param_1 + 0x8dc) = iVar1;
    }
  }
  if (*(char *)(param_1 + 0x990) == '\0') {
    *(undefined4 *)(param_1 + 0x988) = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x988) + 1;
    *(uint *)(param_1 + 0x988) = uVar2;
    if (uVar2 < 0xb) {
      *(undefined1 *)(param_1 + 0x98d) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 8);
      fVar5 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10);
      if (*(float *)(param_1 + 0x8ec) <= fVar4 * fVar4 + fVar5 * fVar5) goto LAB_00674ecc;
      *(undefined1 *)(param_1 + 0x98d) = 1;
    }
  }
  if (*(char *)(param_1 + 0x98d) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x90a) = 1;
LAB_00674ecc:
  func_0065B098((int)puVar3,1);
  func_003931EC(puVar3,1);
  return func_0065B104((int)puVar3);
}

