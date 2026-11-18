#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00660CE8(undefined4 *param_1,undefined1 param_2);
extern int DAT_002745dc;
extern float DAT_002745e0;

// USA 0027449C <- EU 002744C4 (Ghidra, non-matching)
// GLOBAL DAT_002745dc int
// GLOBAL DAT_002745e0 float

undefined4 func_0027449C(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint in_fpscr;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define iStack_1c (*(int *)(albw_frame + 0x4))
  if ((char)param_1[7] == '\x03' || (char)param_1[7] == '\v') {
    return func_00660CE8(param_1 + 0x19,5);
  }
  if (param_1[0x15] != 0) {
    func_003521F0(param_1[0x15] + 4,(int)(char)param_1[0x1a]);
    iVar4 = param_1[0x15];
    puVar5 = (uint *)param_1[0x16];
    piVar3 = param_1 + 0x17;
    if (*(int *)(iVar4 + 0x24) == 0) {
      *piVar3 = 0;
      param_1[0x18] = 0;
    }
    else {
      iVar1 = *piVar3;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x18])) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_20,*(int *)(iVar4 + 0x24),puVar5);
      *piVar3 = local_20;
      param_1[0x18] = iStack_1c;
    }
  }
  param_1[2] = *param_1;
  iVar4 = DAT_002745dc;
  param_1[9] = *param_1;
  param_1[10] = 0;
  param_1[0xb] = iVar4;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*param_1 == 0) {
    return func_00660CE8(param_1 + 0x19,4);
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x1e);
  param_1[5] = uVar2;
  if (uVar2 == 0) {
    param_1[6] = iVar4;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    param_1[6] = (int)ALBW_AS_U32((DAT_002745e0 / fVar6));
  }
  param_1[4] = 0;
  return 0;
}

