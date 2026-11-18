#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int DAT_003151d4;
extern char s_ReactInvalid_003151d8[];
extern char s_SE_Boomerang_REFLECT_003151bc[];

// USA 003150D8 <- EU 003150B4 (Ghidra, non-matching)
// GLOBAL DAT_003151d4 int
// GLOBAL s_ReactInvalid_003151d8 string
// GLOBAL s_SE_Boomerang_REFLECT_003151bc string

void func_003150D8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  iVar1 = param_1[0x142];
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != param_1[0x143])) ||
     (((*(uint *)(iVar1 + 0x3c) & 4) == 0 && (*(uint *)(iVar1 + 0x3c) & 0x40) == 0 &&
      (((iVar2 = *(int *)(iVar1 + 0x20), iVar2 == 0 ||
        (*(int *)(iVar1 + 0x24) != *(int *)(iVar2 + 0xc))) || (*(int *)(iVar2 + 4) < 1)))))) {
    local_24 = s_SE_Boomerang_REFLECT_003151bc;
    local_28 = DAT_003151d4;
    func_00150A84(param_1,&local_28,0);
    piVar3 = param_1 + 0x142;
    if (param_1[0xd1] == 0) {
      *piVar3 = 0;
      param_1[0x143] = 0;
    }
    else {
      iVar1 = *piVar3;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x143])) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_20,param_1[0xd1],(uint *)s_ReactInvalid_003151d8);
      *piVar3 = local_20;
      param_1[0x143] = iStack_1c;
    }
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x143])) {
      func_004A2F38(iVar1,param_1 + 0xf4);
    }
  }
  return;
}

