#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00396AC0(int param_1,undefined4 param_2);
extern int func_0055DDB4(int param_1,int param_2);
extern int func_0058A7D4(void);
extern float DAT_00396808;
extern int *DAT_0039680c;

// USA 00396678 <- EU 00396654 (Ghidra, non-matching)
// GLOBAL DAT_00396808 float
// GLOBAL DAT_0039680c int *

undefined4 func_00396678(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fVar4 = DAT_00396808;
  func_00115C70(&local_20,*(float **)(*DAT_0039680c + 0x1c),(float *)(*param_1 + 0x3d0));
  iVar1 = *param_1;
  if (local_20 * *(float *)(iVar1 + 0x958) + local_1c * *(float *)(iVar1 + 0x95c) +
      local_18 * *(float *)(iVar1 + 0x960) <= fVar4) {
    return 0;
  }
  iVar1 = func_0055DDB4(iVar1 + 0xbc8,(uint)*(byte *)(iVar1 + 0x1488));
  if ((iVar1 == 0) &&
     (iVar1 = func_0055DDB4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar1 == 0)) {
    return 0;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  iVar1 = func_0055DDB4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
  if ((iVar1 == 0) ||
     (iVar1 = func_0055DDB4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1489)), iVar1 == 0)) {
    iVar1 = func_0055DDB4(*param_1 + 0xbc8,(uint)*(byte *)(*param_1 + 0x1488));
    if (iVar1 == 0) goto LAB_003967e0;
  }
  else if ((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x32) {
LAB_003967e0:
    func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1489));
    return 1;
  }
  func_00396AC0((int)param_1,(uint)*(byte *)(*param_1 + 0x1488));
  return 1;
}

