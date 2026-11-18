#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int func_00662DE0(undefined4 *param_1,undefined1 param_2);
extern float DAT_002c446c;
extern float DAT_002c4470;

// USA 002C43F8 <- EU 002C43D4 (Ghidra, non-matching)
// GLOBAL DAT_002c446c float
// GLOBAL DAT_002c4470 float

undefined4 func_002C43F8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  iVar2 = *(int *)(param_1 + 0x590);
  if (*(int *)(param_1 + 0x594) <= iVar2) {
    return func_00662DE0((undefined4 *)(param_1 + 0x568),2);
  }
  *(int *)(param_1 + 0x590) = iVar2 + 1;
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorFloatToUnsigned
                    ((DAT_002c446c - *(float *)(param_1 + 0x598) * fVar3) * DAT_002c4470,3);
  puVar1 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x530),*(int *)(param_1 + 0x58c),0);
  local_10 = CONCAT13((char)uVar4,(int3)*puVar1);
  return func_004CF5DC(*(int *)(param_1 + 0x530),*(int *)(param_1 + 0x58c),0,&local_10);
}

