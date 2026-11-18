#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_0054EA88(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern undefined4 DAT_0054e888;
extern uint DAT_0054e88c;

// USA 0054E778 <- EU 0054E750 (Ghidra, non-matching)
// GLOBAL DAT_0054e888 undefined4
// GLOBAL DAT_0054e88c uint

int func_0054E778(int *param_1,float fparam_0)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  pfVar3 = (float *)func_00520FC0();
  if ((ALBW_AS_F32(param_1[2]) - *pfVar3) * (ALBW_AS_F32(param_1[2]) - *pfVar3) +
      (ALBW_AS_F32(param_1[4]) - pfVar3[2]) * (ALBW_AS_F32(param_1[4]) - pfVar3[2]) < fparam_0 * fparam_0) {
    iVar4 = -1;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x78))(param_1);
    uVar2 = DAT_0054e888;
    iVar4 = func_0054EA88((int)param_1,(uint)(param_1 + 2),uVar5,DAT_0054e888);
    if (iVar4 == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = -1;
      uVar9 = (ulonglong)DAT_0054e88c;
      iVar7 = 0;
      do {
        cVar1 = (char)iVar7;
        local_28 = ALBW_AS_F32(param_1[2]);
        iStack_24 = param_1[3];
        local_20 = ALBW_AS_F32(param_1[4]);
        fVar8 = ALBW_AS_F32(uVar9);
        if (cVar1 == '\0') {
          local_20 = local_20 + fVar8;
        }
        else if (cVar1 == '\x01') {
          local_28 = local_28 + fVar8;
        }
        else if (cVar1 == '\x02') {
          local_20 = local_20 - fVar8;
        }
        else if (cVar1 == '\x03') {
          local_28 = local_28 - fVar8;
        }
        iVar6 = func_0054EA88((int)param_1,(uint)&local_28,param_1 + 2,uVar2);
        if (iVar6 == 0) {
          return (int)cVar1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
  }
  return iVar4;
}

