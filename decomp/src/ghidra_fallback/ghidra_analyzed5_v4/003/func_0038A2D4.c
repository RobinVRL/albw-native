#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0038A674(int *param_1,undefined4 param_2,uint param_3);
extern int func_004A4980(int param_1,uint param_2,float fparam_0);
extern int func_0066F7C8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0038a49c;
extern int DAT_0038a4a0;

// USA 0038A2D4 <- EU 0038A2B0 (Ghidra, non-matching)
// GLOBAL DAT_0038a49c float
// GLOBAL DAT_0038a4a0 int

undefined4 func_0038A2D4(int *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  
  if ((uint)param_1[0x1e] < 0x14) {
    iVar2 = param_1[0x1d];
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if ((bVar6 && cVar1 == '\x03') && (*(char *)(iVar2 + 0x3c) == '\0')) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      iVar3 = (**(code **)(*param_1 + 0x3c))(param_1);
      fVar7 = DAT_0038a49c;
      iVar5 = param_1[0x62];
      if (iVar5 < iVar3) {
        iVar2 = iVar3;
      }
      if (iVar3 < iVar5) {
        return func_0038A674(param_1,iVar5,param_3);
      }
      iVar3 = param_1[99];
      if (iVar3 != iVar2) {
        if (iVar3 < iVar2) {
          if (iVar3 + 4 < iVar2) {
            param_1[100] = DAT_0038a4a0;
          }
          iVar2 = param_1[0x1d];
          uVar4 = (uint)*(byte *)(iVar2 + 0x9c);
          if (3 < uVar4) {
            bVar6 = (*(byte *)(param_1 + 0x65) & 1) == 0;
            if (bVar6) {
              uVar4 = param_1[0x1e];
            }
            if (((bVar6 && uVar4 == 9) && (param_1[0x61] != 0)) &&
               (-1 < *(short *)((int)param_1 + 0x17e))) {
              *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) | 1;
              func_002317C0((undefined2 *)(param_1 + 0x5f),fVar7);
              return 0;
            }
                    /* WARNING: Could not recover jumptable at 0x0038a404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            return (**(code **)(*param_1 + 0x44))(param_1,param_1[0x1e] + 1);
          }
          *(int *)(iVar2 + 0x98) = param_1[100];
          func_004A4980(iVar2,1,fVar7);
          func_0066F7C8((undefined4 *)(iVar2 + 0x38),2);
          iVar2 = param_1[99] + 1;
        }
        else {
          iVar2 = param_1[0x1d];
          if (*(char *)(iVar2 + 0x9c) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0038a498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            return (**(code **)(*param_1 + 0x44))(param_1,param_1[0x1e] + -1);
          }
          *(float *)(iVar2 + 0x98) = DAT_0038a49c;
          func_004A4980(iVar2,1,fVar7);
          func_0066F7C8((undefined4 *)(iVar2 + 0x38),1);
          iVar2 = param_1[99] + -1;
        }
        param_1[99] = iVar2;
        return 0;
      }
      if (*(char *)(param_1[0x1d] + 0x9c) == '\0') {
        (**(code **)(*param_1 + 0x44))(param_1,param_1[0x1e] + -1);
      }
      param_1[100] = (int)ALBW_AS_U32(fVar7);
    }
  }
  return 0;
}

