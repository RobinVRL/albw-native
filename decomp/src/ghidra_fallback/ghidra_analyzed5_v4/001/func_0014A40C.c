#include "ghidra_types.h"

extern int func_0012D9A8(int param_1);
extern int func_0012DCF4(int param_1);
extern int func_0048B130(undefined4 *param_1,int param_2);
extern int func_004927C8(undefined4 *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00494F50(int param_1,undefined4 param_2);
extern int func_00495028(int param_1,undefined4 *param_2);
extern int func_004952C0(int param_1,undefined4 param_2);
extern int func_00580CDC(undefined4 param_1,int param_2);
extern int *DAT_0014a5a0;
extern int *DAT_0014a5a4;
extern float DAT_0014a5a8;
extern float DAT_0014a5ac;
extern undefined4 *DAT_0014a5b0;
extern undefined4 *DAT_0014a5b4;

// USA 0014A40C <- EU 0014A40C (Ghidra, non-matching)
// GLOBAL DAT_0014a5a0 int *
// GLOBAL DAT_0014a5a4 int *
// GLOBAL DAT_0014a5a8 float
// GLOBAL DAT_0014a5ac float
// GLOBAL DAT_0014a5b0 undefined4 *
// GLOBAL DAT_0014a5b4 undefined4 *

undefined4 func_0014A40C(int param_1,char *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define auStack_130 ((undefined4 *)(albw_frame + 0x0))
  #define auStack_80 ((undefined4 *)(albw_frame + 0xb0))
  bVar1 = false;
  iVar3 = *DAT_0014a5a0;
  if (iVar3 != 0) {
    if (*param_2 == '\x02') {
      func_0012D9A8(iVar3);
    }
    else {
      func_0012DCF4(iVar3);
    }
  }
  puVar2 = DAT_0014a5b0;
  piVar5 = DAT_0014a5a4;
  uVar6 = 0;
  fparam_1 = DAT_0014a5a8;
  fparam_0 = DAT_0014a5ac;
  do {
    if (*(char *)(*(int *)(param_1 + uVar6 * 4 + 0x10) + 0x1e9) != '\0') {
      if (!bVar1) {
        iVar3 = *(int *)(param_2 + 4);
        iVar7 = *piVar5;
        func_00580CDC(iVar7,iVar3);
        func_004927C8(auStack_130,iVar3,fparam_0,fparam_1);
        func_00494F50(iVar7,auStack_130);
        func_0048B130(auStack_80,(int)auStack_130);
        func_004952C0(iVar7,auStack_80);
        func_00495028(iVar7,DAT_0014a5b4);
        piVar4 = (int *)*puVar2;
        (**(code **)(*piVar4 + 0x14))(piVar4,0);
        (**(code **)(*piVar4 + 0x18))(piVar4,1);
        (**(code **)(*(int *)*puVar2 + 0x28))((int *)*puVar2,1);
        bVar1 = true;
      }
      piVar4 = *(int **)(param_1 + 0x10 + uVar6 * 4);
      (**(code **)(*piVar4 + 0x6c))(piVar4,param_2);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0xf);
  if (bVar1) {
    piVar5 = (int *)*puVar2;
    (**(code **)(*piVar5 + 0x14))(piVar5,1);
                    /* WARNING: Could not recover jumptable at 0x0014a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar5 + 0x18))(piVar5,1);
  }
  return 0;
}

