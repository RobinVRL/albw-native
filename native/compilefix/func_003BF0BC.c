/* USA 003BF0BC <- EU 003BF098 (stage-2 Ghidra text) with a dropped indirect-call argument restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129): vtable +0x138 (state change) takes (this, state, 1); at
 * the site Ghidra printed as (param_1,1) the ARM sets r2 = 1; mov r1, r2 (scratchpad vsite.py check). */
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7508(int param_1,undefined2 param_2,int param_3);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00542D84(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0058A7D4(void);
extern int *DAT_003bf348;
extern int DAT_003bf34c;

// USA 003BF0BC <- EU 003BF098 (Ghidra, non-matching)
// GLOBAL DAT_003bf348 int *
// GLOBAL DAT_003bf34c int

undefined4 func_003BF0BC(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  
  func_002B7508(param_1[0x12],0x1e,0);
  if (*(int *)(param_1[0x12] + 1000) != *(int *)(param_1[0x12] + 0xa20)) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x104))(param_1,0);
  if (((iVar2 == 0) && (iVar2 = (**(code **)(*param_1 + 0x104))(param_1,2), iVar2 == 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x104))(param_1,1), iVar2 == 0)) {
    return 0;
  }
  bVar1 = func_00542D84(param_1[0x12]);
  piVar5 = DAT_003bf348;
  if (bVar1) {
    piVar5 = *(int **)(param_1[0x12] + 0x93c);
    iVar2 = func_003ABB24(piVar5,1,1);
  }
  else {
    bVar1 = func_00556EAC(*DAT_003bf348,0x2b);
    if (((bVar1) || (bVar1 = func_00556EAC(*piVar5,0x2c), bVar1)) ||
       ((bVar1 = func_00556EAC(*piVar5,0x2f), bVar1 || (bVar1 = func_00556EAC(*piVar5,0x2e), bVar1))
       )) {
      iVar2 = *(int *)(param_1[0x12] + 0xa00);
      bVar1 = DAT_003bf34c == iVar2;
      if (DAT_003bf34c <= iVar2) {
        bVar1 = *(char *)(param_1[0x12] + 0xb35) == '\0';
      }
      if (((bVar1) && (uVar3 = func_0055696C(*piVar5,0x2c), 2 < uVar3)) &&
         (*(int *)(param_1[0x12] + 0xa00) < 0x41000000)) {
        return 0;
      }
    }
    if (*(short *)((int)param_1 + 0x5e) < 1) {
      piVar5 = *(int **)(param_1[0x12] + 0x93c);
      iVar2 = func_003ABB24(piVar5,1,1);
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_003bf334;
    }
    iVar2 = (**(code **)(*param_1 + 0x134))(param_1);
    if (iVar2 == 0) {
      piVar5 = (int *)(**(code **)(*param_1 + 0xd4))(param_1);
      if (*piVar5 < param_1[0x13]) {
        return 0;
      }
      puVar4 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar4);
      if (0x50 < (uint)((ulonglong)uVar3 * 0x65 >> 0x20)) goto LAB_003bf28c;
      piVar5 = *(int **)(param_1[0x12] + 0x93c);
      iVar2 = func_003ABB24(piVar5,1,1);
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_003bf334;
    }
    puVar4 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
    if (*puVar4 < 0x1e) {
      return 0;
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar4);
    if ((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) {
LAB_003bf28c:
                    /* WARNING: Could not recover jumptable at 0x003bf2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,1,1);
    }
    piVar5 = *(int **)(param_1[0x12] + 0x93c);
    iVar2 = func_003ABB24(piVar5,1,1);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_003bf334:
  return func_003B147C((int *)piVar5[1],1,1);
}

