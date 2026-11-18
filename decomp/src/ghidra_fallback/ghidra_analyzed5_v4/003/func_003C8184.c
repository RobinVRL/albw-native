#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);

// USA 003C8184 <- EU 003C8160 (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 uint *
// PARAM param_5 Stack[0x4]:4 uint

undefined8 func_003C8184(int *param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define auStack_10 ((undefined1 *)(albw_frame + 0x0))
  if (*param_1 == 0) {
    iVar4 = param_1[2];
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 4);
      iVar2 = iVar1;
      if (iVar1 == 0) {
        iVar2 = 2;
      }
      if (iVar1 < 0) {
        if (iVar2 < -8) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
      }
      else if (0 < iVar1) {
        if (iVar2 < 9) {
          iVar2 = 3;
        }
        else {
          iVar2 = 4;
        }
      }
      puVar3 = *(undefined4 **)(iVar4 + iVar2 * 4 + 0xc);
      iVar4 = (**(code **)*puVar3)(puVar3,auStack_10,param_1[3] + param_3,0,param_4,param_5);
      iVar2 = -(iVar4 >> 0x1f);
      if (iVar2 != 0) goto LAB_003c81f4;
    }
  }
  else {
    uVar5 = func_001163A0(param_4,(uint *)(*param_1 + param_3),param_5);
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  }
  iVar4 = 0;
LAB_003c81f4:
  return CONCAT44(iVar2,iVar4);
}

